Alpme / 17si / 19si 中文木马分析报告
作者：GPT-6.1 sol@Codex
版本：3.4；日期：2026-10-29；68页。

阅读顺序：先读概要与执行链，再读云控、采集目标、浏览器取钥及影响；附录解释完整任务表、编码恢复与原生控制流证据。

本版新增：17/19外层动态调用的实际分类，395字节启动模板和九处回填；本机 ntdll!LdrpHandleTlsData 的完整筛选、PDB身份及原生异常/回滚分析；Chrome156的对象布局、历史只读现场及线程上下文策略；代码/跳表边界修正与清理链的新增来源验证。

全程序分析仍在进行。四个Packet回调、两个旧结果析构、六个线程上下文Hook来源及五组完整捕获生命周期按各自证据列明。51处C文本诊断与这些行为缺口分别统计。

PDF为阅读版；tex为LaTeX源文件；assets为图像；data为证据与可检索表。恢复的C、汇编和解释性逻辑保存在研究仓库 recovered 目录。
不要在宿主机运行EXE或加载样本DLL。

data索引：
完整采集任务.csv：325任务、390组根规则、787个匹配模式。
扩展排除词表.csv：276项原始词条。载荷片段定位.csv：302个片段。
函数恢复状态.csv：旧41项清单的39份C、1个尾跳板与1处编码数据。
all_native_export_diagnostic.json / coverage_reconciliation.json：当前四份PE共2254个展开入口及51处诊断；historical_runtime_coverage_reconciliation.json保留先前运行库阶段的历史核对。
outer17_CALL_review.json / outer19_CALL_review.json：正常调用与冷段的实际来源分类。
outer17_cold_branch_review.json：布尔自加排除不可能的TerminateProcess路径。
loader_template_review.json：395字节模板、正常101条指令、9处回填。
ntdll_offline_selection_review.json / ntdll_scan_order_review.json：本机固定文件的完整候选筛选、扫描范围及顺序。
ntdll_PDB_identity_review.json：GUID、age匹配规则与15个PE节表逐字比较。
ntdll_TLS_semantic_review.json / ntdll_TLS_CALL_parameters.csv：TLS登记、19个直接调用、异常恢复及回滚。
chrome156_static_review.json及chrome_开头的记录：源码、安装代码、历史对象/权限/版本/策略快照。PID不同的记录按各自时间与范围解释。
cleanup_开头的记录：捕获对象、真实写入、释放和未完成回调来源。
code_data_partition_review.json / ntdll_search_helpers_review.json：反编译误边修正及实际搜索谓词。
其余collection/profile/reader/selector/runtime资料与正文对应，历史基线保留原有适用范围。

编译：TeX Live2025 / XeLaTeX，ctex、TikZ、fontawesome5、tcolorbox等宏包；宋体和微软雅黑字体。
保持assets和data的相对位置，在顶层运行三遍：
xelatex -interaction=nonstopmode -halt-on-error -no-shell-escape report.tex
