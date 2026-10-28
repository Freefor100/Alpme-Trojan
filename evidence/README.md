# 证据索引

| 材料 | 用来复核什么 |
|---|---|
| `pe-structure.json` | 四份PE结构、原EXE及恢复载荷的hash、节大小、片段定位 |
| `analysis-inputs.json` | 静态输入身份、分析基址和已有规范化记录 |
| `coverage.json` | 当前函数入口/C文本诊断及旧41项纠正统计 |
| `proofs/` | 网络、文件、两版浏览器核心的正常上下文控制流与来源门；局部清理/字段/生命周期结论 |
| `extension/` | 扩展投递、远程日志、技能解析、MCP及工具加载的静态源码摘录 |
| `chrome156/` | 精确版本主源文件URL/hash及保护机制对照 |
| `provenance.json` | 原证据hash与公开脱敏文本hash的对应 |

证明中的C hash可能指原本地文件；发布文本移除了个人工作区路径，个别文本hash会变化。以provenance记录对齐。样本ZIP成员始终按原字节核对。

这里没有主机认证数据库、真实浏览器资料、密码、token或私钥原值。已有虚构实验的结论按其条件描述，不能当作本机真实取钥成功。

## 本轮证据的阅读顺序

先看coverage.json和analysis/PROGRESS.md确定范围，再按职责读proofs中的round5文件。profile、root、Gecko、tokenizer和locked-reader分别对应独立的原字节/来源核对；baseline-C和outer-loader-exports只证明相应本地CFG与C输出，转调语义另外列明。

cleanup-followup记录5处已闭上下文、转调到字节Vec的具体目标，以及4处线程结果包的精确剩余来源门。host-information-fields列14字段、90个原生文字构造与两版接口位置；host-information-source-gaps保留尚未通过的逐字节读写范围问题。

native-indirect-CALLs.csv可按sample、函数RVA和CALL_RVA查原始指令；它区分固定IAT与计算操作数，不把计算操作数自动叫成未知恶意功能。native-CALL-inventory.json同时列出线性解码停止点及.pdata范围限制。77处只是其中一个深入复核批次。
