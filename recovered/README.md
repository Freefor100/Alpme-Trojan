# 恢复代码的阅读方法

先读 `logic/behavior.pseudocode.txt` 和[行为解释](../analysis/BEHAVIOR.md)，再按样本、阶段和RVA查函数。

每个 `17si/loader`、`17si/payload`、`19si/loader`、`19si/payload` 目录包含：

- `assembly.asm`：分析输入的完整可执行节线性反汇编，保留字节和地址。线性解码可能把代码节内嵌数据当指令，需结合PE展开入口和实际控制流。
- `decompiled.c`：按RVA合并当前选中的非candidate反编译文本，保留警告和局部截断。每个区块标明sample/RVA。
- `functions.csv`：函数名称、原生范围信息、计算跳转数、C诊断、合并C起始行和原C文件SHA-256。
- `verified/`：有单独控制流/来源门核对的核心C副本，证据位于 `../evidence/proofs/`（从仓库根为 `evidence/proofs/`）。

名称和类型包含分析者推断，C不是作者原工程。正常语境核心证明、原字节、C文本质量以及真实Windows执行成功分别是不同证据。

地址使用说明：外层通常以0x140000000为基址；内层源码中的VA可能来自0x180000000首选基址或已记录的ASLR/规范化分析基址。以sample + RVA作为共同定位。各输入基址、hash和修改记录见 `evidence/analysis-inputs.json`。

`reconstructed-payloads.zip` 是静态工程的内层输入。**它仍是恶意代码，不要在宿主机加载或运行。** 密码infected。

新增 logic/ntdll_tls.pseudocode.zh.txt 解释系统TLS登记与回滚。17:7a490的旧C混入其它代码，现已按原始跳表替换；19:78e30与17:1073/8319也有新的原生复核C，函数索引明确标记。
