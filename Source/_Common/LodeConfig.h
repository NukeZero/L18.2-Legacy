#pragma once
//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-
/*
This file came from https://lodelight.com
 -> For support and other releases be sure to visit us today.
*/

#define	NEUZ_TITLE	"[VS22] Lodelight V18.2 (Custom)"					//: Window title of the client.
#define	NEUZ_BHASH	"sunkist"										//: String to boot the client.
#define	NEUZ_IPSET	"127.0.0.1"										//: Ip of the server, must match AccountServer.ini & LoginServer.ini.
#define	NEUZ_CPORT	"5400"											//: Cache port, must match CacheServer.ini.
#define	NEUZ_PHASH	"kikugalanet"									//: Md5 password salt.
#define	NEUZ_MSGVR	"20100412"										//: Ver of the server, must match AccountServer.ini & LoginServer.ini.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define SERVER_CONFIG_FILE		"Server.ini"						//: Main server configuration.
#define SERVER_BANIP_FILE		"Banned.ini"						//: Banned ip's.
#define SERVER_ALWIP_FILE		"Allowed.ini"						//: Allowed people.
#define SERVER_AUTHS_FILE		"..\\Program\\Authorization.ini"	//: Auth check ini.

#define SERVER_INI_ACCOUNT		"AccountSRV"						//: Account server settings.
#define SERVER_INI_DATABASE		"DatabaseSRV"						//: Database server settings.
#define SERVER_INI_CERTIFIER	"CertifierSRV"						//: Certifier server settings.
#define SERVER_INI_WORLD		"WorldSRV"							//: World server settings.
#define SERVER_INI_CACHE		"CacheSRV"							//: Cache server settings.
#define SERVER_INI_LOGIN		"LoginSRV"							//: Login server settings.
#define SERVER_INI_CORE			"CoreSRV"							//: Core server settings.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define COLOR_STAFF     0xFF0099FF									//: Name coloring of admin characters.
#define	TITLE_STAFF		"[STAFF]"									//: Title for admin characters.

#define	WELCOME_NOTICE_01		"Welcome #1"						//: Welcome notice on player login.
#define	WELCOME_NOTICE_02		"Welcome #2"						//: Welcome notice on player login.

#define COLOR_ERROR				0xFFFF0000							//: AddText Coloring: Red
#define COLOR_SUCCESS			0XFF00F000							//: AddText Coloring: Green
#define	COLOR_NOTICE			0xFFFFFF00							//: AddText Coloring: Yellow
#define COLOR_ITEMINFO			0XFF666666							//: AddText Coloring: Dark Gray
#define COLOR_WARNING			0XFFFF8C00							//: AddText Coloring: Orange

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

enum { ENCHANT_TIME = 1 };											//: Adjust the time of upgrading.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define	__LDE_GOALDATA_FIX											//: Fixes quest arrow bug.
#define	__LDE_LSTBOX_FIX											//: Fixes lag within listboxes.
#define	__LDE_168SLOT_INV											//: 168 slots within the inventory.
#define	__LDE_LORDNME_FIX											//: Fixes lord name display.
#define	__LDE_LGNTXT_FIX											//: Add's a space to the login text.
#define	__LDE_WELCOME_NOTICE										//: Add's a welcome notice to the chatbox on player login.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define	__ADDMENU2													//: Dynamic MMI text.
#define	__ADDSHOPITEM												//: Easier currency adding to shops.
#define	__ADDTEXT_COLORED											//: dwColor in AddText function.
#define	__AISAKA_TASKBAR_FIX										//: Centers taskbar #.
#define	__CHARACTER_TAG												//: Custom coloring tags for npc's.
#define	__FIX_STAT_BUFF												//: Fixes some issues present with the v19 spec_item.
#define __HIDE_FASHION												//: Fashion hide system.
#define __LOOKCHANGE												//: Item transmutation system.
#define __NEW_EXCHANGE_V19											//: Retail exchange window.
#define	__NO_GUIDESYSTEM											//: Removal of the annoying guide pang.
#define __RANDOMOPTION_RETRY										//: Scroll of Awakening Augmentation.
#define __SERVERS_AUTHORIZE											//: Auth account/ip ini checking.
#define	__SERVERS_INI_CONFIG										//: Server uses 1 ini instead of multiple.
#define __SLEEPING_FIX												//: Fixes the stun/sleeping bug present with Echoes of Weary.
#define	__SPEEDY_NEUZ												//: Faster loading neuz.
#define __SYS_SCR_CANCELLATION										//: Scroll of Unbinding.
#define	__SYS_SYS_ITEMMODELRETURN									//: Item revert transmutation scroll.
#define __SYS_SCR_PARTYPOINTFREE									//: Scroll of Party Amplification.
#define __SYS_SCR_PARTYSPEEDLEVELUP									//: Scroll of Party Growth.
#define __SYS_SYS_ARMOREFFECTCHANGE									//: Aura (7 days / 15 days).
#define __TREASUREBOX												//: Retail like treasure box system.
#define	__UI_INVENTORYSORT											//: Inventory sorting.
#define	__VENDOR_UPDATE												//: Easy shop item adding.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-