
#if defined(DEFINE_IN_INTERFACE)
	#undef KBE_BASEAPP_INTERFACE_H
#endif


#ifndef KBE_BASEAPP_INTERFACE_H
#define KBE_BASEAPP_INTERFACE_H

#include "baseapp.h"
#include "network/server_interface_macros.h"
#include "network/interface_defs.h"
#include "server/server_errors.h"
//#define NDEBUG
// windows include	
#if KBE_PLATFORM == PLATFORM_WIN32
#else
// linux include
#endif
	
namespace KBEngine{

/**
	BaseApp所有消息接口在此定义
*/
NETWORK_INTERFACE_DECLARE_BEGIN(BaseappInterface)
	SERVER_MESSAGE_DECLARE_STREAM(BaseApp, MSGIDMAKE(1, 1), OnRegisterServer, NETWORK_VARIABLE_MESSAGE)
	SERVER_MESSAGE_DECLARE_STREAM(BaseApp, MSGIDMAKE(1, 2), CBRegisterServer, NETWORK_VARIABLE_MESSAGE)
	SERVER_MESSAGE_DECLARE_STREAM(BaseApp, MSGIDMAKE(1, 3), onAppActiveTick, NETWORK_VARIABLE_MESSAGE)
	SERVER_MESSAGE_DECLARE_STREAM(BaseApp, MSGIDMAKE(4, 1), registerPendingLogin, NETWORK_VARIABLE_MESSAGE)
	SERVER_MESSAGE_DECLARE_STREAM(BaseApp, MSGIDMAKE(6, 1), onDbmgrInitCompleted, NETWORK_VARIABLE_MESSAGE)
	SERVER_MESSAGE_DECLARE_STREAM(BaseApp, MSGIDMAKE(6, 2), onGetEntityAppFromDbmgr, NETWORK_VARIABLE_MESSAGE)
	SERVER_MESSAGE_DECLARE_STREAM(BaseApp, MSGIDMAKE(6, 4), onQueryPlayerCBFromDbmgr, NETWORK_VARIABLE_MESSAGE)
	SERVER_MESSAGE_DECLARE_STREAM(BaseApp, MSGIDMAKE(91, 1), onClientHello, NETWORK_VARIABLE_MESSAGE)
	SERVER_MESSAGE_DECLARE_STREAM(BaseApp, MSGIDMAKE(91, 3), loginBaseapp, NETWORK_VARIABLE_MESSAGE)
NETWORK_INTERFACE_DECLARE_END()

#ifdef DEFINE_IN_INTERFACE
	#undef DEFINE_IN_INTERFACE
#endif

}
#endif
