Alpme / 17si / 19si 中文木马分析报告
作者：GPT-6.1 sol@Codex
版本：3.3；日期：2026-10-28；62页。

本版补全两版14字段主机资料函数、19外层正常入口CFG、32个内存复制/填充入口及28个尾后端的分析C；带截断诊断的原生入口从87降为53。清理链新增两处旧结果释放回调，并列明尚未完成的指针来源。
四个普通浏览器开关全部关闭时，Preferences和Local Storage仍有独立采集路径。正文列出完整路径、字段和过滤规则。
全程序未完部分在“证据覆盖与现场核验状态”中列明。旧41项失败清单与整个程序的覆盖率分别统计。

PDF为阅读版；tex为报告LaTeX源文件；assets为图片；data为证据与可检索表。
资料包不含EXE/DLL、可执行提取程序或真实凭据。恢复的C和汇编另在研究仓库的recovered目录，属于分析表示。
不要在宿主机运行EXE或加载样本DLL。

data中的collection/profile/reader证据按职责命名：
完整采集任务.csv：325任务、390组根规则；扩展排除词表.csv：276项原始词条；载荷片段定位.csv：302片；函数恢复状态.csv：旧41项逐条状态。
tokenizer_closure.json：两个分词/扫描函数的原字节、127个跳转、来源和C输出。
locked_reader_closure.json及locked_reader_behavior.json：共享冲突、既有句柄、映射读取和资源清理。
profile_collectors_closure.json及profile_collectors_behavior.json：11字段、四个开关、独立路径、错误过滤和二进制包。
extension_path_dispatch.json及extension17/19_literals.json：路径组件分派及原生常量逐项正向解码。
whole_native_baseline.json：本轮起始168个内层诊断入口的保守控制流复核；不能当作全程序语义结论。
all_native_export_diagnostic.json及coverage_reconciliation.json：四份PE入口及87至53逐项变化。
host_information_closure.json：两版主机信息收集函数的来源、调用和写入边界。
outer19_entry_closure.json：5937条正常入口指令、299有限JMP、冷段和动态CALL边界。
runtime_native_closure.json及runtime_C_exports.json：60个运行库函数/后端的本地CFG与C；不替代完整内存循环契约。
cleanup_carry_next.json及cleanup_pointer_source_caveat.json：25helper/83调用应用及两个非直接指针来源前提；四个Packet CALL仍未完成。
其它JSON为此前已验证的网络、取钥、生命周期及个案历史证据。

编译：TeX Live2025 / XeLaTeX，ctex、TikZ、fontawesome5、tcolorbox等宏包；Windows宋体/微软雅黑字体。
保持assets相对位置，在顶层运行三遍：
xelatex -interaction=nonstopmode -halt-on-error -no-shell-escape report.tex
