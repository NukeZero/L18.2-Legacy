#ifndef __VERSION_COMMON_H__
#define __VERSION_COMMON_H__
#define	__MAINSERVER
#define	__VER	15

#define	__LANG_1013
//#define	__EVENT_FALL	// ��ǳ �̺�Ʈ - �𵨱�ü Neuz, World
#define	__TRAFIC_1215
//#define	__TRAFIC_1218
#define	__FOR_PROLOGUE_UPDATE
#define	__SKILL_WITHOUT_EXP

#define	__NEWYEARDAY_EVENT_COUPON	// �� �̺�Ʈ - ����, ���� �����̿�� ����.	//
// 8-6
#define	__CSC_VER9_REMOVE_PKSETTING	// �ɼ� ���� â���� PK���� ���� (������ CtrlŰ ���� ���¿����� ����)

#ifdef _DEBUG
#define	NO_GAMEGUARD
#endif	// _DEBUG

#define	__EVE_MINIGAME	// �̴� ����

#define	__RULE_0615

#define	__FILTER_0705	// ���͸� ��Ģ ����
#define	__PK_PVP_SKILL_REGION		// PK������������ ���� ��ų�� PVP��뿡�Ը� �����ϵ���..

#define	__VENDOR_1106	// ���� ���� ���� ��� ����

#define	__JEFF_9_20		// ���� �ð��� ħ�� �ð����� ����

#define	__GPAUTH
#define	__GPAUTH_01
#define	__GPAUTH_02		// ����/������ ���� ���� - ����
#define	__EUROPE_0514

#define		__JEFF_11_5		// �޸� ����
#define		__JEFF_11_6		// �ٺ� ����

#define		__SFX_OPT	// ����Ʈ(��ƼŬ) ����ȭ ����


#if !defined( __TESTSERVER ) && !defined( __MAINSERVER )
	#define __INTERNALSERVER
#endif

#define		__TRANSFER_ERROR_TEXT
#define		__MSVR
#define		__CRC
#define		__PROTOCOL0910
#define		__PROTOCOL1021
#define		__INFO_SOCKLIB0516				// ��Ʈ��ũ ������� 
#define		__S1108_BACK_END_SYSTEM			// Trans, World, Neuz : ��ص�ý��� 
#define		__VER6						// ����6���� ��� ���  
#define		__THROUGHPORTAL0810		// ���� ���� ����
#define		__TWN_LOGIN0816		// �븸 �α��� �������� ����	// Ŭ��/����
#define		__FIX_WND_1109		// â ���� �� �θ�â ���� ���� ����
#define		__EVENT_1101		// ��ý �̺�Ʈ
#define		__EVE_NEWYEAR		// �ų� ȿ��
#define		__S_SERVER_UNIFY			// ���� ���� Neuz, World
#define		__LANG_IME_0327		// ������ ime��� ���� ����
#define		__STL_0402

#define __HACK_0516 // �̱� ��ŷ 2��

#define	__SECURITY_0628		// ���ҽ� ���� ����

#define		__ITEMDROPRATE	// ������ ��ӷ� ����(�̺�Ʈ)

// 10
#define		__TRADESYS					// ��ȯ ������ ��ũ��Ʈ(�̺�Ʈ, ����Ʈ, ... ) Neuz, World
#define		__EVE_BALLOON				// ǳ�� �̺�Ʈ ����
#define		__CSC_GAME_GRADE			// ���ӹ���ް��� ä��â �˸� �� �̹��� ����.
#define		__EVENT_1101_2				// ��ý �̺�Ʈ 64��Ʈ ����
#define		__S_RECOMMEND_EVE			// ��õ �̺�Ʈ Neuz, Trans, World
#define		__S_ADD_EXP					// EXP_S ������ ����
#define		__S_BUG_GC					// ������ ��û�� ���� �ݾ��� ��û�ϸ� �����̵�� ��Ʈ �Ǽ� ������ �ٲ�� ���� ����( map -> vector ) 
#define		__S_ADD_RESTATE				// ���ȭ ������ ����( ������Ʈ ��, ��ø, ü��, ���� )
#define		__PROP_0827		// ������ ������Ƽ ���� �Ķ���� Ȯ��
#define		__PKSERVER_USE_ANGEL		// PK���������� �������� ������,���� ���
#define		__CSC_ENCHANT_EFFECT_2		// �Ӽ� ���� ����Ʈ ����

#define		__HACK_1023		// ���ҽ� ����	// Ż�� �ӵ�	// ���� ���� �ӵ�

// 11
#define		__MA_VER11_02				// ��ǥ ��� �丰 ����
#define		__MA_VER11_03				// neuz�ش�â(B)���� �شܿ��� �ָ� ������ �־ ������ ǥ�� �ǵ���
#define		__MA_VER11_04				// ��� â�� �α� ��� world,database,neuz
#define		__MA_VER11_05				// �ɸ��� ���� �ŷ� ��� world,database,neuz
#define		__MA_VER11_06				// Ȯ����ų ȿ������ world,neuz

#define		__CSC_VER11_1				// <����??> ����, ä��â ����, ��İŷ� ��ҹ�ư ����
#define		__CSC_VER11_2				// Ÿ�� ǥ�� ��� ����
#define		__CSC_VER11_3				// Ĩ���� ���� �̿� �ϱ� (��� ���� ����)
#define		__CSC_VER11_4				// �޽���â ����
#define		__CSC_VER11_5				// �½�ũ�� Ȯ��
#define		__GUILDCOMBATCHIP			// ������ Ĩ���� �� Ĩ�� ���� ���� �̿�
#define		__GUILD_COMBAT_1TO1			// �ϴ��� ��� ����
#define		__GUILD_BANK_LOG			// ����ũ �α�â �߰�
#define		__EXPITEM_TOOLTIP_CHANGE	// ����ġ ������ ǥ�� ��� ����

#define		__REMOVE_ENDURANCE			// ������ ������ ���� ����
#define		__PIERCING_REMOVE			// �Ǿ�� �ɼ� ����
#define		__EVENTLUA_COUPON			// ���� �̺�Ʈ
#define		__NOLIMIT_RIDE_ITEM			// ���� ���� ���� ����ü ������
#define		__NPC_BUFF					// NPC�� ���� �����ޱ�

#define		__SYS_POCKET				// �ָӴ�
#define		__SYS_COLLECTING			// ä�� �ý���
#define		__SYS_IDENTIFY				// ����, �ູ
#define		__FIX_ROTATE				// ��Ʈ���� �߰ߵ� ���� ����
#define		__ADD_ZOOMOPT				// �ܿɼ� �߰� 
#define		__MOD_VENDOR				// ���λ��� ����
#define		__FIX_COLLISION				// �浹 ���� ����
#define		__FIX_PICKING				// ��ŷ ���� ����

#define		__SYS_TICKET				// �����
#define		__SYS_PLAYER_DATA			// ĳ���� ���� ����
#define		__HACK_1023					// ���ҽ� ���� // ���� �ӵ�, ���� ���� �ӵ�
#define		__RT_1025					// �޽���
#define		__VENDOR_1106				// ���λ��� ��� ����
#define		__JEFF_11
#define		__CHIPI_071210				// �Ⱓ�� ������ ���ӽð� �ʴ��� ǥ��

//�ӽ�
//#define		__LINK_PORTAL				// �ܺ� ��Ż ���� �� ������ ó��
#define		__JEFF_9_20		// ���� �ð��� ħ�� �ð����� ����
#define		__JEFF_11_4		// �Ʒ���
#define		__JEFF_11_6		// �ٺ� ����
#define		__DST_GIFTBOX	// ���� �����ۿ� ����Ʈ �ڽ� ��� �߰� 
#define		__JEFF_11_1

#define		__CAPTURE_JPG
#define		__DISABLE_GAMMA_WND // ������ ��忡�� ���� ���� �Ұ��ϰ� ����

//#define		__TMP_POCKET				// �޴� ���� �Ͻ������� ����

#define		__HELP_BUG_FIX				// ���򸻰��� ���� ���� (���� �Ѱ��� ���� �ν��Ͻ� ����)

#define		__CHIPI_DYO					// NPC�� Ư������������ ����� �� �ְ� character.inc�� ���� 

// 12

#define		__SECRET_ROOM				// ����� ��
#define		__TAX						// ����
#define		__CSC_VER12_1				// ���λ��� �� �÷��̾� ���캸�� �޴� �����ϵ��� ���� & ���캸�� â �����ϱ�
#define		__CSC_VER12_2				// ��� â�� ��� �ܿ� �׸� ������ �����ϵ��� �߰�
//#define		__CSC_VER12_3				// ����Ʈ�� ���� ��� ����Ʈ �׸��� �߸��� ���� ������ ��ȭâ �ø�
#define		__CSC_VER12_4				// �Ǿ�� ���� â ���� �� ���͸� ���� ���� â �߰�
#define		__CSC_VER12_5				// �� �� ��ȯ ��� �߰�

#define		__HEAVEN_TOWER				// �ɿ��� ž
#define		__EXT_PIERCING				// ���� �Ǿ��
#define		__NEW_SUMMON_RULE			// ���� ��ȯ ��Ģ ����

#define		__MOD_TUTORIAL				// Ʃ�丮�� ����
#define		__LORD						// ����
#define		__PET_0519	// �� ����
#define		__J12_0		// ����, �ູ ���� ���� �߰�

#define		__UPDATE_OPT				// �ɼ�â ����
#define		__CAM_FAST_RECOVER			// ī�޶� �����ӵ� ����

#define		__JHMA_VER12_1	//12�� �ش����������
#define		__ITEMCREATEMON_S0602		// ���� ���� Neuz, World

#define		__PARSKILL1001	//12�� �Ľ�ų ������ ����  world,core,neuz

#define		__SYNC_1217		// �񵿱� ����(�ʸ��� ����)
#define		__SPEED_SYNC_0108               // ResetDestParam speed ���� 
#define		__PARTY_DEBUG_0129		// �ش��� ƨ��� ���� ����� neuz

// 13��
#define		__EXT_ENCHANT				// ���� Ȯ��(�Ӽ�, �Ϲ�)
#define		__RAINBOW_RACE				// ���κ��� ���̽�
#define		__HOUSING					// �Ͽ�¡ �ý���
#define		__QUEST_HELPER				// ����Ʈ NPC��ġ �˸�.
#define		__CHIPI_QUESTITEM_FLAG

#define		__ANIMATED_PARTS			// ��ɼ� Ȯ�� ��Ʈ
#define		__RENEW_CHARINFO			// ĳ��������â ������
#define		__HONORABLE_TITLE			// ����
#define		__MAX_BUY_ITEM9999			// ȭ�������ͱ��԰���9999��
#define		__REMOVE_JOINPARTYMEMBER_ANI			// ��Ƽ�ɹ����ν� �ִ� ����

#define		__CSC_VER13_1				// WorldMap ���� ǥ��
#define		__CSC_VER13_2				// Ŀ�� �ý���

#define		__LAYER_1020				// __LAYER_1015 �׽�Ʈ
#define		__AZRIA_1023				// ����� ���� ����
#define		__PET_1024					// �� �۸�
#define		__BUFF_1107
#define		__COUPLE_1117				// Ŀ�� �ý���
#define		__COUPLE_1202				// Ŀ�� ����

#define		__SYNC_1217					// �񵿱� ����(�ʸ��� ����)
#define		__SYS_ITEMTRANSY			// NPC�޴� ������ Ʈ���� ���

#define		__VTN_TIMELIMIT				// ��Ʈ�� �÷��� �ð� ����
#define		__PCBANG			// PC�� ����
#define		__WINDOW_INTERFACE_BUG		// ���� �̵� ��Ȳ���� ������ �ɸ� ������ â ����� ������ Ŭ���̾�Ʈ ũ�����Ǵ� ���� ����
#define		__MAP_SECURITY				// ������ ������ �� �˻�

// 14��
#define		__NEW_CONTINENT				// 14�� �űԴ�� �ϸ���� �߰�
#define		__SMELT_SAFETY				// 14�� ��������
#define		__INSTANCE_DUNGEON			// 14�� �ν��Ͻ� ����
#define		__EQUIP_BIND				// ���������� ����� �ͼ�
#define		__EXT_ATTRIBUTE				// �Ӽ����� ���� Ȯ�� �� ����
#define		__NEW_ITEM_LIMIT_LEVEL		// ������ ���뷹�� ��Ģ ����(MASTER, HERO�� ���� ������ �ް� ���� Ŭ���� ����� ������ ���� ����)

#define		__WATER_EXT					// �� ǥ�� Ȯ�� (�� �ؽ����� ���� �� �����Ӽӵ� ���� �߰�)
#define		__WND_EDIT_NUMBER_MODE		// ����Ʈ ��Ʈ�� ���ڸ� �Է¹ް� �ϴ� ���
#define		__SHIFT_KEY_CORRECTION		// ����Ʈ Ű �Է� ���� ����
#define		__STATIC_ALIGN				// ����ƽ ��Ʈ�ѿ� ������ ���� ��� �߰�
#define		__ITEM_DROP_SOUND			// ������ ��� �� ȿ���� ��ũ��Ʈ�� ó��
#define		__JOB_TEXT					// ������, ����� ���� �����ۿ� '�ʿ� ����' �ؽ�Ʈ ��µǵ��� ����
#define		__RESTATE_CONFIRM			// ������Ʈ ��� ��, Ȯ�� â ���
#define		__PREVENTION_TOOLTIP_BUG	// �������� ������ �ǹ� ���� �ؽ�Ʈ ��µǴ� ���� ����
#define		__DROP_CONFIRM_BUG			// ������ ���� Ȯ�� â�� ���� ���¿��� �Ͼ�� ���� ���� ����
#define		__CLOUD_ANIMATION_BUG		// ���� �ִϸ��̼��� Ư�� ���������� ����Ǵ� ���� ����
#define		__BUFF_CRASH				// ���� ������ �����Ͽ� Ŭ���̾�Ʈ ũ�����Ǵ� ���� ����

#define		__BS_FIX_SHADOW_ONOBJECT	// ������Ʈ �׸��� ���ù� ���ǰ˻� ���� ( ���ΰ� ����, �δ� õ�� �׸��� ���� )
#define		__BS_FIX_HAIR_AMBIENT		// ĳ���� ��� ambient ���� ( �δ����� �Ӹ�ī�� ���� ��İ� ������ ���� ���� )

#define		__BALLOON_CODE_IMPROVEMENT	// ǳ�� ���� �ڵ� ����
#define		__WING_ITEM
//#define		__USE_SOUND_LIB_FMOD		// use FMod sound lib
	#define		__QUIZ						// ���� �̺�Ʈ �ý���

	#define		__2ND_PASSWORD_SYSTEM		// 2�� ��й�ȣ �ý���

	#define		__EVENTLUA_RAIN				// �帶 �̺�Ʈ -> ��Ʒ� ����

	#define		__EVENTLUA_SNOW				// ���� �̺�Ʈ

	#define		__YS_CHATTING_BLOCKING_SYSTEM	// ĳ���� ä�� ���� �ý���
#if	  defined(__INTERNALSERVER)	// ���� �繫�� �׽�Ʈ���� 

#elif defined(__TESTSERVER)  // �ܺ� ���� �׽�Ʈ���� 

#elif defined(__MAINSERVER)  // �ܺ� ����

//	#define		__RAIN_EVENT				// �帶 �̺�Ʈ(����� ���� ����ġ 2��)
//	#define		__JAPAN_SAKURA		// ���� ȿ��

	#define		__NEW_PROFILE		// �������Ϸ�
#endif	// end - ���������� define 

#ifndef NO_GAMEGUARD
	#define	__NPROTECT_VER	4	
#endif	

#endif // VERSION_COMMON_H
