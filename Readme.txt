请先通过Config.bat设置相关变量，然后执行CreateJobs.bat自动创建Jenkins Jobs



演示注意事项:
1. Config.bat至少修改下项目名称，即PRJNAME；如果想接收到邮件，还需要修改收件人地址，即PRJRECIPIENTS
2. 脚本执行过程中会询问是否生成QAC工程，是否生成TESSY工程，是否上传配置到git。根据实际需要进行选择。
2. 脚本成功后可登陆localhost:8080察看新建的Job：{PRJNAME}_QAC和{PRJNAME}_TESSY
3. job新建成功后需要手动进行配置，修改结点名称为你的实际结点名称。
4. 两项Job成功创建1分钟后会执行自动构建，构建依赖下列：
   a. 启动QAC License Tool：桌面快捷方式Launch rlm.exe
   b. 启动QAV Server：桌面快捷方式QA·Verify Server 2.0.1
   c. 启动Tessy License Tool：桌面快捷方式Floating License Manager，确保Server已启动（Server->Start Local Server为灰）
   d. 启动Tess节点：桌面快捷方式slave-agent.jnlp - 快捷方式
5. 构建完毕后，会收到两封邮件：
   a. QAC邮件中会给项目Url，打开后会看到PRQA View server location，即QA·Verify server的链接
   b. TESSY邮件中会以附件方式发送测试报告



备注：
1. Config.bat: 配置文件
2. CreateJobs.bat: 主程序
3. jenkins-cli: Jenkins命令行
4. SRC: 源文件目录
5. SVN\SVNImport.bat: 由CreateJobs.bat调用，将源代码和配置文件上传至SVN配置库
6. QAC
    CreateQACJob.bat: 自动创建QAC JOB
    config.xml: QAC Job模板
    batch\GenQACPrj.bat: 自动创建QAC项目文件，在Jenkins构建QAC时调用
    config\QAC-81-config.xml: QAV的相关配置文件，新建QAV项目时需要
    person\*: QAC分析和编译时的配置文件
7. SED: sed程序及依赖DLL
8. TESSY
    CreateTESSYJob.bat: 自动创建TESSY JOB
    config.xml: TESSY Job模板
    tessy.bat: 调用tessy执行单元测试的批处理程序
    test_jenkins.tbs: tessy项目配置文件
    testdata0.tmb: tessy的测试用例
    
