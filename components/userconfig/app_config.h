#ifndef APP_CONFIG_H
#define APP_CONFIG_H

#include "app_framework.h"

#include "semaphore_lock_interface.h"
#include "debug_log_interface.h"
#include "task_thread_interface.h"

//所有 app name 定义
#define APP_NAME_MAIN 						APP_MAIN_NAME
#define APP_NAME_MAIN_STACK_SIZE 			(2*1024) 

#define APP_NAME_HTTP_DOWN 					"http-download" 
#define APP_NAME_HTTP_DOWN_STACK_SIZE 		(512) 

#define APP_NAME_AUDIO_PLAYER 				"audio-player"
#define APP_NAME_AUDIO_PLAYER_STACK_SIZE 	(1024)

#define APP_NAME_MPUSH_SERVICE				"mpush-service"
#define APP_NAME_MPUSH_SERVICE_STACK_SIZE	(3*1024)

#define APP_NAME_MPUSH_MESSAGE				"mpush-msg"
#define APP_NAME_MPUSH_MESSAGE_STACK_SIZE	(3*1024)

#define APP_NAME_WIFI_MANAGE				"wifi-manage"
#define APP_NAME_WIFI_MANAGE_STACK_SIZE		(3*1024)

#define APP_NAME_NLP_SERVICE				"nlp-service"
#define APP_NAME_NLP_SERVICE_STACK_SIZE		(4*1024)

#define APP_NAME_PLAY_LIST					"playlist-service"
#define APP_NAME_PLAY_LIST_STACK_SIZE		(4*1024)

#define APP_NAME_AIP_SERVICE				"aip-service"
#define APP_NAME_AIP_SERVICE_STACK_SIZE		(3*1024)

#define APP_NAME_OTA_SERVICE				"ota-service"
#define APP_NAME_OTA_SERVICE_STACK_SIZE		(3*1024)

#define APP_NAME_POWER_MANAGE               "power-manager"
#define APP_NAME_POWER_MANAGE_STACK_SIZE	(3*1024)

#define APP_NAME_ASR_SERVICE				"asr-service"
#define APP_NAME_ASR_SERVICE_STACK_SIZE		(4*1024)

#define APP_NAME_WECHAT_SERVICE				"wechat-service"
#define APP_NAME_WECHAT_SERVICE_STACK_SIZE	(8*1024)

#define APP_NAME_MEMO_MANAGE				"memo-manage"
#define APP_NAME_MEMO_MANAGE_STACK_SIZE		(3*1024)

#define APP_NAME_KEYBOARD_SERVICE				"keyboard-service"
#define APP_NAME_KEYBOARD_SERVICE_STACK_SIZE	(3*1024)

#define APP_NAME_PLAYER_MIDDLEWARE				"player-middleware"
#define APP_NAME_PLAYER_MIDDLEWARE_STACK_SIZE	(3*1024)

#define APP_NAME_SD_MUSIC_MANAGE				"sd-music-manage"
#define APP_NAME_SD_MUSIC_MANAGE_STACK_SIZE		(5*1024)

#define APP_NAME_DISPLAY_CONTROL                "display-control"
#define APP_NAME_DISPLAY_CONTROL_STACK_SIZE	    (1*1024)

#define APP_NAME_KEYWORD_WAKEUP						"keyword-wakeup"
#define APP_NAME_KEYWORD_WAKEUP_STACK_SIZE			(3*1024)

#define APP_NAME_KEYWORD_WAKEUP_LEXIN           	"keyword-wakeup-lexin"
#define APP_NAME_KEYWORD_WAKEUP_LEXIN_STACK_SIZE	(2*1024)

#define APP_NAME_RECORD_PLAYBACK           			"record-playback"
#define APP_NAME_RECORD_PLAYBACK_STACK_SIZE			(3*1024)

#define APP_NAME_FREE_TALK           				"free-talk"
#define APP_NAME_FREE_TALK_STACK_SIZE				(3*1024)

#define APP_NAME_LED_CTRL_SERVICE           		"led-ctrl-service"
#define APP_NAME_LED_CTRL_SERVICE_STACK_SIZE		(3*1024)

#define APP_MAIN_BIND_DEVICE 						"bind-device"
#define APP_MAIN_BIND_DEVICE_STACK_SIZE				(3*1024)

#define APP_TOTAL_STACK_SIZE (APP_NAME_MAIN_STACK_SIZE\
								+ APP_NAME_HTTP_DOWN_STACK_SIZE\
								+ APP_NAME_AUDIO_PLAYER_STACK_SIZE\
								+ APP_NAME_MPUSH_SERVICE_STACK_SIZE\
								+ APP_NAME_MPUSH_MESSAGE_STACK_SIZE\
								+ APP_NAME_WIFI_MANAGE_STACK_SIZE\
								+ APP_NAME_NLP_SERVICE_STACK_SIZE\
								+ APP_NAME_PLAY_LIST_STACK_SIZE\
								+ APP_NAME_AIP_SERVICE_STACK_SIZE\
								+ APP_NAME_OTA_SERVICE_STACK_SIZE\
								+ APP_NAME_POWER_MANAGE_STACK_SIZE\
								+ APP_NAME_ASR_SERVICE_STACK_SIZE\
								+ APP_NAME_MEMO_MANAGE_STACK_SIZE\
								+ APP_NAME_WECHAT_SERVICE_STACK_SIZE\
								+ APP_NAME_KEYBOARD_SERVICE_STACK_SIZE\
								+ APP_NAME_PLAYER_MIDDLEWARE_STACK_SIZE\
								+ APP_NAME_SD_MUSIC_MANAGE_STACK_SIZE\
								+ APP_NAME_KEYWORD_WAKEUP_LEXIN_STACK_SIZE\
								+ APP_NAME_FREE_TALK_STACK_SIZE\
								+ APP_NAME_LED_CTRL_SERVICE_STACK_SIZE)

#endif /*APP_CONFIG_H*/

