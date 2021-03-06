#include "calForm.h"
using namespace ManagementSystemV5; //自己的命名空间

CRITICAL_SECTION g_CriticalSection; // 定义

[STAThreadAttribute]
int main()
{
	InitializeCriticalSection(&g_CriticalSection);      // 初始化  
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	calForm^ g_cF = gcnew calForm();
	Application::Run(g_cF);
	DeleteCriticalSection(&g_CriticalSection);
	return 0;
}
