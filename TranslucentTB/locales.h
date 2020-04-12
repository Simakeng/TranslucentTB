#pragma once
#include <unordered_map>
#include "resource.h"
enum Locales
{
	TRAY_MENU_ACCENT_COLOR,
	TRAY_MENU_ADVANCED,
	TRAY_MENU_ALWAYS,
	TRAY_MENU_BLUR,
	TRAY_MENU_CLEAR,
	TRAY_MENU_CLEAR_BLACK_LIST_CACHE,
	TRAY_MENU_CONSIDER_ONLY_MAIN_MONITOR,
	TRAY_MENU_CORTANA_SEARCHOPENED,
	TRAY_MENU_DYNAMIC,
	TRAY_MENU_EDIT_BLACKLIST,
	TRAY_MENU_EDIT_SETTINGS,
	TRAY_MENU_ENABLED,
	TRAY_MENU_EXIT,
	TRAY_MENU_EXIT_WITHOUT_SAVING,
	TRAY_MENU_FLUENT,
	TRAY_MENU_MAXIMISED_WINDOW,
	TRAY_MENU_NEVER,
	TRAY_MENU_NORMAL,
	TRAY_MENU_OPAQUE,
	TRAY_MENU_OPEN_AT_BOOT,
	TRAY_MENU_OPEN_LOG_FILE,
	TRAY_MENU_REFRESH_TASKBAR_HANDLES,
	TRAY_MENU_REGULAR,
	TRAY_MENU_REGULAR_WHEN_PEEKING,
	TRAY_MENU_RELOAD_BLACKLIST,
	TRAY_MENU_RELOAD_SETTINGS,
	TRAY_MENU_RETURN_TO_DEFAULT_BLACKLIST,
	TRAY_MENU_RETURN_TO_DEFAULT_SETTINGS,
	TRAY_MENU_SAVE_SETTINGS,
	TRAY_MENU_SHOW_AERO_PEEK,
	TRAY_MENU_START_MENU_OPENED_ENABLED,
	TRAY_MENU_TIME_LINE_OPENED,
	TRAY_MENU_TIP_SAND_TRICKS,
	TRAY_MENU_VERBOSE_LOGGING,
	TRAY_MENU_STARTUP_HAS_BEEN_DISABLED_IN_TASK_MANAGER,
	TRAY_MENU_STARTUP_HAS_BEEN_DISABLED_IN_GROUP_POLICY,
	TRAY_MENU_STARTUP_HAS_BEEN_ENABLED_IN_GROUP_POLICY,
	TRAY_MENU_QUERYING_STARTUP_STATE,
	TRAY_MENU_ERROR_WHEN_INITIALIZING_LOG_FILE,
	TRAY_MENU_NOTHING_HAS_BEEN_LOGGED_YET
};

const size_t TOTAL_LOCALE_ENTRIES = 40;

#define _STR(entry) \
	L## #entry

#define LENTRY(entry) \
	{ _STR(entry),Locales::##entry }

static const std::unordered_map<std::wstring, Locales> LOCALE_ENTRIES_MAP = {
	LENTRY(TRAY_MENU_ACCENT_COLOR) ,
	LENTRY(TRAY_MENU_ADVANCED) ,
	LENTRY(TRAY_MENU_ALWAYS) ,
	LENTRY(TRAY_MENU_BLUR) ,
	LENTRY(TRAY_MENU_CLEAR) ,
	LENTRY(TRAY_MENU_CLEAR_BLACK_LIST_CACHE) ,
	LENTRY(TRAY_MENU_CONSIDER_ONLY_MAIN_MONITOR) ,
	LENTRY(TRAY_MENU_CORTANA_SEARCHOPENED) ,
	LENTRY(TRAY_MENU_DYNAMIC) ,
	LENTRY(TRAY_MENU_EDIT_BLACKLIST) ,
	LENTRY(TRAY_MENU_EDIT_SETTINGS) ,
	LENTRY(TRAY_MENU_ENABLED) ,
	LENTRY(TRAY_MENU_EXIT) ,
	LENTRY(TRAY_MENU_EXIT_WITHOUT_SAVING) ,
	LENTRY(TRAY_MENU_FLUENT) ,
	LENTRY(TRAY_MENU_MAXIMISED_WINDOW) ,
	LENTRY(TRAY_MENU_NEVER) ,
	LENTRY(TRAY_MENU_NORMAL) ,
	LENTRY(TRAY_MENU_OPAQUE) ,
	LENTRY(TRAY_MENU_OPEN_AT_BOOT) ,
	LENTRY(TRAY_MENU_OPEN_LOG_FILE) ,
	LENTRY(TRAY_MENU_REFRESH_TASKBAR_HANDLES) ,
	LENTRY(TRAY_MENU_REGULAR) ,
	LENTRY(TRAY_MENU_REGULAR_WHEN_PEEKING) ,
	LENTRY(TRAY_MENU_RELOAD_BLACKLIST) ,
	LENTRY(TRAY_MENU_RELOAD_SETTINGS) ,
	LENTRY(TRAY_MENU_RETURN_TO_DEFAULT_BLACKLIST) ,
	LENTRY(TRAY_MENU_RETURN_TO_DEFAULT_SETTINGS) ,
	LENTRY(TRAY_MENU_SAVE_SETTINGS) ,
	LENTRY(TRAY_MENU_SHOW_AERO_PEEK) ,
	LENTRY(TRAY_MENU_START_MENU_OPENED_ENABLED) ,
	LENTRY(TRAY_MENU_TIME_LINE_OPENED) ,
	LENTRY(TRAY_MENU_TIP_SAND_TRICKS) ,
	LENTRY(TRAY_MENU_VERBOSE_LOGGING),
	LENTRY(TRAY_MENU_STARTUP_HAS_BEEN_DISABLED_IN_TASK_MANAGER),
	LENTRY(TRAY_MENU_STARTUP_HAS_BEEN_DISABLED_IN_GROUP_POLICY),
	LENTRY(TRAY_MENU_STARTUP_HAS_BEEN_ENABLED_IN_GROUP_POLICY),
	LENTRY(TRAY_MENU_QUERYING_STARTUP_STATE),
	LENTRY(TRAY_MENU_ERROR_WHEN_INITIALIZING_LOG_FILE),
	LENTRY(TRAY_MENU_NOTHING_HAS_BEEN_LOGGED_YET)
};

static inline const std::unordered_map<uint32_t, Locales> LOCALE_MATCH_MAP =
{
	{IDM_REGULAR_COLOR				, TRAY_MENU_ACCENT_COLOR				},
	{IDM_MAXIMISED_COLOR			, TRAY_MENU_ACCENT_COLOR				},
	{IDM_START_COLOR				, TRAY_MENU_ACCENT_COLOR				},
	{IDM_CORTANA_COLOR				, TRAY_MENU_ACCENT_COLOR				},
	{IDM_TIMELINE_COLOR				, TRAY_MENU_ACCENT_COLOR				},
	{IDM_ADVANCED					, TRAY_MENU_ADVANCED					},
	{IDM_PEEK_SHOW					, TRAY_MENU_ALWAYS						},
	{IDM_REGULAR_BLUR				, TRAY_MENU_BLUR						},
	{IDM_MAXIMISED_BLUR				, TRAY_MENU_BLUR						},
	{IDM_START_BLUR					, TRAY_MENU_BLUR						},
	{IDM_CORTANA_BLUR				, TRAY_MENU_BLUR						},
	{IDM_TIMELINE_BLUR				, TRAY_MENU_BLUR						},
	{IDM_REGULAR_CLEAR				, TRAY_MENU_CLEAR						},
	{IDM_MAXIMISED_CLEAR			, TRAY_MENU_CLEAR						},
	{IDM_START_CLEAR				, TRAY_MENU_CLEAR						},
	{IDM_CORTANA_CLEAR				, TRAY_MENU_CLEAR						},
	{IDM_TIMELINE_CLEAR				, TRAY_MENU_CLEAR						},
	{IDM_CLEARBLACKLISTCACHE		, TRAY_MENU_CLEAR_BLACK_LIST_CACHE		},
	{IDM_PEEK_ONLY_MAIN				, TRAY_MENU_CONSIDER_ONLY_MAIN_MONITOR	},
	{IDM_CORTANA_OPENED				, TRAY_MENU_CORTANA_SEARCHOPENED		},
	{IDM_PEEK_DYNAMIC				, TRAY_MENU_DYNAMIC						},
	{IDM_EDITDYNAMICBLACKLIST		, TRAY_MENU_EDIT_BLACKLIST				},
	{IDM_EDITSETTINGS				, TRAY_MENU_EDIT_SETTINGS				},
	{IDM_MAXIMISED					, TRAY_MENU_ENABLED						},
	{IDM_START						, TRAY_MENU_ENABLED						},
	{IDM_CORTANA					, TRAY_MENU_ENABLED						},
	{IDM_TIMELINE					, TRAY_MENU_ENABLED						},
	{IDM_EXIT						, TRAY_MENU_EXIT						},
	{IDM_EXITWITHOUTSAVING			, TRAY_MENU_EXIT_WITHOUT_SAVING			},
	{IDM_REGULAR_FLUENT				, TRAY_MENU_FLUENT						},
	{IDM_MAXIMISED_FLUENT			, TRAY_MENU_FLUENT						},
	{IDM_START_FLUENT				, TRAY_MENU_FLUENT						},
	{IDM_CORTANA_FLUENT				, TRAY_MENU_FLUENT						},
	{IDM_TIMELINE_FLUENT			, TRAY_MENU_FLUENT						},
	{IDM_MAXIMISED_WINDOW			, TRAY_MENU_MAXIMISED_WINDOW			},
	{IDM_PEEK_HIDE					, TRAY_MENU_NEVER						},
	{IDM_REGULAR_NORMAL				, TRAY_MENU_NORMAL						},
	{IDM_MAXIMISED_NORMAL			, TRAY_MENU_NORMAL						},
	{IDM_START_NORMAL				, TRAY_MENU_NORMAL						},
	{IDM_CORTANA_NORMAL				, TRAY_MENU_NORMAL						},
	{IDM_TIMELINE_NORMAL			, TRAY_MENU_NORMAL						},
	{IDM_REGULAR_OPAQUE				, TRAY_MENU_OPAQUE						},
	{IDM_MAXIMISED_OPAQUE			, TRAY_MENU_OPAQUE						},
	{IDM_START_OPAQUE				, TRAY_MENU_OPAQUE						},
	{IDM_CORTANA_OPAQUE				, TRAY_MENU_OPAQUE						},
	{IDM_TIMELINE_OPAQUE			, TRAY_MENU_OPAQUE						},
	{IDM_AUTOSTART					, TRAY_MENU_OPEN_AT_BOOT				},
	{IDM_OPENLOG					, TRAY_MENU_OPEN_LOG_FILE 				},
	{IDM_REFRESHHANDLES				, TRAY_MENU_REFRESH_TASKBAR_HANDLES 	},
	{IDM_REGULAR					, TRAY_MENU_REGULAR 					},
	{IDM_MAXIMISED_PEEK				, TRAY_MENU_REGULAR_WHEN_PEEKING		},
	{IDM_RELOADDYNAMICBLACKLIST		, TRAY_MENU_RELOAD_BLACKLIST			},
	{IDM_RELOADSETTINGS				, TRAY_MENU_RELOAD_SETTINGS 			},
	{IDM_RETURNTODEFAULTBLACKLIST	, TRAY_MENU_RETURN_TO_DEFAULT_BLACKLIST	},
	{IDM_RETURNTODEFAULTSETTINGS	, TRAY_MENU_RETURN_TO_DEFAULT_SETTINGS	},
	{IDM_SAVESETTINGS				, TRAY_MENU_SAVE_SETTINGS 				},
	{IDM_SHOW_AERO_PEEK				, TRAY_MENU_SHOW_AERO_PEEK 				},
	{IDM_START_MENU_OPENED			, TRAY_MENU_START_MENU_OPENED_ENABLED	},
	{IDM_TIMELINE_POPUP				, TRAY_MENU_TIME_LINE_OPENED			},
	{IDM_TIPS						, TRAY_MENU_TIP_SAND_TRICKS				},
	{IDM_VERBOSE					, TRAY_MENU_VERBOSE_LOGGING				},
};