����ͨ��Config.bat������ر�����Ȼ��ִ��CreateJobs.bat�Զ�����Jenkins Jobs



��ʾע������:
1. Config.bat�����޸�����Ŀ���ƣ���PRJNAME���������յ��ʼ�������Ҫ�޸��ռ��˵�ַ����PRJRECIPIENTS
2. �ű�ִ�й����л�ѯ���Ƿ�����QAC���̣��Ƿ�����TESSY���̣��Ƿ��ϴ����õ�git������ʵ����Ҫ����ѡ��
2. �ű��ɹ���ɵ�½localhost:8080�쿴�½���Job��{PRJNAME}_QAC��{PRJNAME}_TESSY
3. job�½��ɹ�����Ҫ�ֶ��������ã��޸Ľ������Ϊ���ʵ�ʽ�����ơ�
4. ����Job�ɹ�����1���Ӻ��ִ���Զ������������������У�
   a. ����QAC License Tool�������ݷ�ʽLaunch rlm.exe
   b. ����QAV Server�������ݷ�ʽQA��Verify Server 2.0.1
   c. ����Tessy License Tool�������ݷ�ʽFloating License Manager��ȷ��Server��������Server->Start Local ServerΪ�ң�
   d. ����Tess�ڵ㣺�����ݷ�ʽslave-agent.jnlp - ��ݷ�ʽ
5. ������Ϻ󣬻��յ������ʼ���
   a. QAC�ʼ��л����ĿUrl���򿪺�ῴ��PRQA View server location����QA��Verify server������
   b. TESSY�ʼ��л��Ը�����ʽ���Ͳ��Ա���



��ע��
1. Config.bat: �����ļ�
2. CreateJobs.bat: ������
3. jenkins-cli: Jenkins������
4. SRC: Դ�ļ�Ŀ¼
5. SVN\SVNImport.bat: ��CreateJobs.bat���ã���Դ����������ļ��ϴ���SVN���ÿ�
6. QAC
    CreateQACJob.bat: �Զ�����QAC JOB
    config.xml: QAC Jobģ��
    batch\GenQACPrj.bat: �Զ�����QAC��Ŀ�ļ�����Jenkins����QACʱ����
    config\QAC-81-config.xml: QAV����������ļ����½�QAV��Ŀʱ��Ҫ
    person\*: QAC�����ͱ���ʱ�������ļ�
7. SED: sed��������DLL
8. TESSY
    CreateTESSYJob.bat: �Զ�����TESSY JOB
    config.xml: TESSY Jobģ��
    tessy.bat: ����tessyִ�е�Ԫ���Ե����������
    test_jenkins.tbs: tessy��Ŀ�����ļ�
    testdata0.tmb: tessy�Ĳ�������
    
