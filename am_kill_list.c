#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	struct<617> Local_96 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_713 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_725[4] = { 0, 0, 0, 0 };
	struct<18> Local_730[32];
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	int iLocal_1309[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	float fLocal_1318 = 0f;
	int iLocal_1319[4] = { 0, 0, 0, 0 };
	struct<8> Local_1324[24];
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	int iLocal_1519 = 0;
	int iLocal_1520[4] = { 0, 0, 0, 0 };
	int iLocal_1525[4] = { 0, 0, 0, 0 };
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	int* iLocal_1532 = NULL;
	struct<42> Local_1533[32];
	struct<104> Local_2878 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = -1;
	var uLocal_2988 = -1;
	var uLocal_2989 = -1;
	var uLocal_2990 = -1;
	var uLocal_2991 = -1;
	var uLocal_2992 = -1;
	var uLocal_2993 = 0;
	var uLocal_2994 = 32;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	int iLocal_3418 = 0;
	int iLocal_3419 = 0;
	int iLocal_3420 = 0;
	int iLocal_3421[4] = { 0, 0, 0, 0 };
	int iLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	int iLocal_3430 = 0;
	struct<2> Local_3431[10];
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	struct<2> Local_3462[5];
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	int iLocal_3477 = 0;
	struct<3> Local_3478 = { 0, 0, 0 } ;
	int iLocal_3481 = 0;
	var uLocal_3482 = 0;
	int iLocal_3483 = 0;
	int iLocal_3484 = 0;
	int iLocal_3485 = 0;
	int iLocal_3486[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3511 = 0;
	int iLocal_3512[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3518 = 0;
	var uLocal_3519[4] = { 0, 0, 0, 0 };
	var uLocal_3524[4] = { 0, 0, 0, 0 };
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_1318 = -100f;
	iLocal_3419 = -1;
	iLocal_3420 = -1;
	iLocal_3483 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_883(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_871(ScriptParam_0);
	}
	else
	{
		func_823();
	}
	while (true)
	{
		func_822();
		if (func_818())
		{
			func_823();
		}
		else if (func_815(19))
		{
			func_823();
		}
		if (func_814())
		{
			func_823();
		}
		func_789();
		switch (func_788(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if ((func_787() == 1 && Local_96.f_1 != -1) && Local_96.f_2 != -1)
				{
					func_785();
					func_780(129, Local_96.f_1, Local_96.f_2, 0);
					if (Global_2738587.f_5155 == -1)
					{
						if (!func_779())
						{
							Global_2738587.f_5155 = 0;
						}
						else
						{
							Global_2738587.f_5155 = 1;
						}
					}
					func_778(Local_96.f_30[0 /*3*/]);
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 1;
				}
				else if (func_787() == 4)
				{
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_787() == 1)
				{
					func_773();
					func_772();
					func_754();
					func_435();
					func_166();
					func_165();
					func_164();
				}
				else if (func_787() == 4)
				{
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_163(&(Local_96.f_320));
				if (func_162(&(Local_96.f_320)))
				{
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
			
			case 4:
				func_823();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_787())
			{
				case 0:
					if (func_147())
					{
						if (func_142())
						{
							func_138(func_140(129, Local_96.f_1, Local_96.f_2, 0));
							Local_96.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_129();
					func_33();
					func_25();
					if (func_1())
					{
						Local_96.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x27A
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x28E
{
	int iVar0;
	int iVar1;
	
	if ((BitTest(Local_96.f_3, 0) && BitTest(Local_96.f_3, 1)) && BitTest(Local_96.f_3, 2))
	{
		if (!BitTest(Local_96.f_3, 11))
		{
			return 0;
		}
	}
	else if (BitTest(Local_96.f_3, 6))
	{
		if (!BitTest(Local_96.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_96.f_241 > 0)
	{
		if (Local_96.f_0 != 4)
		{
			if (func_24())
			{
				if (Local_96.f_241 == 3)
				{
					if (func_22())
					{
						if (BitTest(Local_96.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_20(&(Local_96.f_322), 3000, 0))
				{
					if (func_22())
					{
						return 1;
					}
				}
			}
		}
		if (Local_96.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_96.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
						if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))
						{
							if (Local_730[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((BitTest(Local_96.f_3, 0) && BitTest(Local_96.f_3, 1)) && BitTest(Local_96.f_3, 2)) && !BitTest(Local_96.f_3, 6)) && !BitTest(Local_96.f_3, 14))
				{
					MISC::SET_BIT(&(Local_96.f_3), 15);
				}
				func_7();
			}
			else if (Local_96.f_241 < 3)
			{
				if (func_3())
				{
					MISC::SET_BIT(&(Local_96.f_3), 16);
					MISC::SET_BIT(&(Local_96.f_3), 15);
					func_7();
				}
			}
		}
	}
	return 0;
}

int func_3()//Position - 0x402
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar0]))
		{
			if (!func_4(NETWORK::NET_TO_VEH(Local_96.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x44C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_6(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_5()) && func_883(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_5()//Position - 0x530
{
	return -1;
}

int func_6(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x539
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_7()//Position - 0x5D4
{
	if (Local_96.f_241 != 3)
	{
		func_9();
		func_8(&(Local_96.f_324), 0, 0);
		Local_96.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x5F8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_9()//Position - 0x635
{
	if (!func_15())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574764.f_9)
	{
		return;
	}
	func_10();
}

void func_10()//Position - 0x662
{
	func_12();
	func_11(0);
}

void func_11(bool bParam0)//Position - 0x673
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574764 = 20;
	StringCopy(&(Global_1574764.f_1), "", 32);
	Global_1574764.f_9 = 0;
	if (bVar0)
	{
		Global_1574764.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574764.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574764.f_12), "", 16);
	StringCopy(&(Global_1574764.f_16), "", 64);
	StringCopy(&(Global_1574764.f_32), "", 64);
	Global_1574764.f_52 = 0;
	Global_1574764.f_53 = 0;
	Global_1574764.f_54 = 0;
	Global_1574764.f_55 = -1;
	Global_1574764.f_56 = 0;
	Global_1574764.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_12()//Position - 0x701
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574764.f_12));
		func_13();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_13()//Position - 0x72A
{
	switch (Global_1574764)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574764.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574764.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574764.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574764.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574764.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574764.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574764.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574764.f_32));
			return;
		
		default:
	}
}

bool func_14()//Position - 0x99C
{
	if (!func_15())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574764.f_12));
	func_13();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_15()//Position - 0x9C2
{
	if (Global_1574764 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0, int iParam1)//Position - 0x9D8
{
	bool bVar0;
	
	if (!func_19(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_17(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845263[iParam0 /*877*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_17(int iParam0, bool bParam1)//Position - 0xA31
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
	}
	if (Global_1575059[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574919[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_18()//Position - 0xA72
{
	return Global_1574925;
}

int func_19(int iParam0)//Position - 0xA7E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_20(var uParam0, int iParam1, bool bParam2)//Position - 0xAA0
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_21(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_21(var uParam0, bool bParam1, bool bParam2)//Position - 0xAFE
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_22()//Position - 0xB43
{
	int iVar0;
	
	if (!func_23(&(Local_96.f_328)))
	{
		func_21(&(Local_96.f_328), 0, 0);
	}
	else if (func_20(&(Local_96.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[iVar0]))
		{
			if (Local_96.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_23(var uParam0)//Position - 0xBAD
{
	return uParam0->f_1;
}

int func_24()//Position - 0xBB9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_7[iVar0]), false))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_25()//Position - 0xBFC
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bVar1]))
		{
			if (!func_32(Local_96.f_48[bVar1]))
			{
				switch (Local_96.f_85[bVar1])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[bVar1]), false))
						{
							Local_96.f_85[bVar1] = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[bVar1]), false) && func_31(bVar1))
						{
							Local_96.f_85[bVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_96.f_241 == 1)
						{
							if (!func_24())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[bVar1]), false))
								{
									iVar4 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_96.f_48[bVar1]), false);
									if (func_30(iVar4, 250f))
									{
										Local_96.f_85[bVar1] = 2;
									}
									else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
									{
										if ((bVar1 % 4) == 0)
										{
											iVar0 = (bVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_96.f_110[iVar0] == -1 || !func_29(bVar1))
												{
													iVar2 = func_28();
													if (iVar2 != func_5())
													{
														iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
														if (!PED::IS_PED_INJURED(iVar3))
														{
															if (func_27(iVar4, iVar3, 1) > 250f)
															{
																Local_96.f_110[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_96.f_85[bVar1] = 2;
								}
							}
							else
							{
								Local_96.f_85[bVar1] = 3;
							}
						}
						else
						{
							Local_96.f_85[bVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_96.f_241 == 1)
						{
							if (func_24())
							{
								Local_96.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_96.f_3, 6))
							{
								Local_96.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_96.f_464, bVar1))
							{
								Local_96.f_85[bVar1] = 1;
								MISC::CLEAR_BIT(&(Local_96.f_464), bVar1);
							}
						}
						else
						{
							Local_96.f_85[bVar1] = 3;
						}
						break;
					
					case 3:
						if (PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_96.f_48[bVar1])))
						{
							func_26(&(Local_96.f_48[bVar1]));
							Local_96.f_85[bVar1] = 4;
						}
						break;
					}
				}
		}
		bVar1++;
	}
}

void func_26(var uParam0)//Position - 0xE2B
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

float func_27(int iParam0, int iParam1, bool bParam2)//Position - 0xE4F
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_28()//Position - 0xEAD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_5();
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iVar0 == func_5())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_730[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_730[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_29(int iParam0)//Position - 0xF0E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_96.f_110[iVar0] != -1)
			{
				iVar3 = Local_96.f_110[iVar0];
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (func_883(iVar1, 1, 1))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
							iVar3 = iVar2;
							if (Local_730[iVar3 /*18*/].f_17 != 1)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_30(int iParam0, float fParam1)//Position - 0xF98
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_730[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_730[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (func_27(iParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x100E
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[iParam0]), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_96.f_48[iParam0]), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	return 1;
}

int func_32(int iParam0)//Position - 0x1052
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_33()//Position - 0x1071
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (Local_96.f_463 > 0)
	{
		if (Local_96.f_28 != Local_96.f_463)
		{
			Local_96.f_28 = Local_96.f_463;
		}
	}
	switch (Local_96.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_96.f_28)
			{
				if (Local_96.f_17[iVar0] == func_5())
				{
				}
				else
				{
					iVar1++;
					if (BitTest(Local_96.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_126();
			func_125();
			if (BitTest(Local_96.f_3, 4))
			{
				Local_96.f_463 = iVar1;
			}
			if (func_123())
			{
				func_116();
				Local_96.f_241 = 1;
			}
			else if (BitTest(Local_96.f_3, 4) && func_113() > 1)
			{
				func_112();
				func_116();
				Local_96.f_241 = 1;
			}
			if (!func_779())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[0]))
				{
					if (!func_110(Local_96.f_7[0]))
					{
						Var2.f_3 = 1267106989;
						func_108(Var2, func_109(NETWORK::NET_TO_VEH(Local_96.f_7[0]), 1, 0));
						Local_96.f_241 = 2;
					}
				}
			}
			if (Local_96.f_241 == 0)
			{
				if (!func_23(&(Local_96.f_330)))
				{
					if (!func_23(&(Local_96.f_326)))
					{
						func_21(&(Local_96.f_330), 0, 0);
					}
				}
				else if (func_23(&(Local_96.f_326)))
				{
					func_107(&(Local_96.f_330));
				}
				else if (func_20(&(Local_96.f_330), func_106(), 0))
				{
					Var2.f_3 = 1267106989;
					func_108(Var2, func_105(1));
					MISC::SET_BIT(&(Local_96.f_3), 12);
					func_7();
				}
				if (BitTest(Local_96.f_3, 14))
				{
					func_7();
				}
			}
			break;
		
		case 1:
			func_36();
			func_34();
			func_112();
			if (BitTest(Local_96.f_3, 6))
			{
				Local_96.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_34()//Position - 0x1245
{
	if (!BitTest(Local_96.f_3, 19))
	{
		return;
	}
	if (!BitTest(Local_96.f_3, 6))
	{
		if (!func_23(&(Local_96.f_332)))
		{
			func_21(&(Local_96.f_332), 0, 0);
			MISC::SET_BIT(&(Local_96.f_3), 7);
		}
		else if (func_20(&(Local_96.f_332), func_35(), 0))
		{
			MISC::SET_BIT(&(Local_96.f_3), 6);
		}
	}
}

int func_35()//Position - 0x12A3
{
	if (func_779())
	{
		return Global_262145.f_11783 /* Tunable: COMP_KILL_LIST_EVENT_TIME_LIMIT */;
	}
	return Global_262145.f_11760 /* Tunable: KILL_LIST_EVENT_TIME_LIMIT */;
}

void func_36()//Position - 0x12C6
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_96.f_278 > 0)
	{
		if (Local_96.f_279 >= Local_96.f_278)
		{
			if (Local_96.f_254 >= Local_96.f_255)
			{
				MISC::SET_BIT(&(Local_96.f_3), 0);
				MISC::SET_BIT(&(Local_96.f_3), 1);
				MISC::SET_BIT(&(Local_96.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_96.f_278 > 0)
		{
			if (Local_96.f_279 >= Local_96.f_278)
			{
				if (Local_96.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_96.f_256[0]);
				}
				if (Local_96.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_96.f_256[1]);
				}
				if (Local_96.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_96.f_256[2]);
				}
				if (Local_96.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_96.f_256[3]);
				}
				if (iVar5 >= Local_96.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[iVar4]))
						{
							if (!func_32(Local_96.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						MISC::SET_BIT(&(Local_96.f_3), 0);
						MISC::SET_BIT(&(Local_96.f_3), 1);
						MISC::SET_BIT(&(Local_96.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[iVar4]))
					{
						if (!func_32(Local_96.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_23(&(Local_96.f_347)))
					{
						func_21(&(Local_96.f_347), 0, 0);
					}
					else if (func_20(&(Local_96.f_347), 3000, 0))
					{
						MISC::SET_BIT(&(Local_96.f_3), 0);
						MISC::SET_BIT(&(Local_96.f_3), 1);
						MISC::SET_BIT(&(Local_96.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!BitTest(Local_96.f_3, 0) || !BitTest(Local_96.f_3, 1))
	{
		if (Local_96.f_249 >= func_104())
		{
			MISC::SET_BIT(&(Local_96.f_3), 0);
			MISC::SET_BIT(&(Local_96.f_3), 1);
		}
		bVar0 = false;
		while (bVar0 < Local_96.f_242)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_73[bVar0]))
			{
				if (func_103(bVar0))
				{
					if (!BitTest(Local_96.f_245, bVar0))
					{
						if ((Local_96.f_27 != joaat("hydra") && !func_4(NETWORK::NET_TO_VEH(Local_96.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_96.f_27 == joaat("hydra"))
						{
							MISC::CLEAR_BIT(&(Local_96.f_3), 0);
							if (func_23(&(Local_3462[bVar0 /*2*/])))
							{
								func_107(&(Local_3462[bVar0 /*2*/]));
							}
						}
						else if (func_4(NETWORK::NET_TO_VEH(Local_96.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[bVar0])) == joaat("savage"))
						{
							if (BitTest(Local_96.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_96.f_3), 0);
							}
							if (!BitTest(Local_96.f_3, 18))
							{
								func_102(func_105(1), bVar0);
								MISC::SET_BIT(&(Local_96.f_3), 18);
							}
						}
						else if (func_101(bVar0) || !func_779())
						{
							if (BitTest(Local_96.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_96.f_3), 0);
							}
							if (!BitTest(Local_96.f_303, bVar0))
							{
								func_100(func_105(1), bVar0);
								MISC::SET_BIT(&(Local_96.f_303), bVar0);
							}
						}
						else
						{
							func_26(&(Local_96.f_73[bVar0]));
							if (!BitTest(Local_96.f_253, bVar0))
							{
								Local_96.f_251 = (Local_96.f_251 - 1);
								if (func_99() > 1)
								{
									if (Local_96.f_252 > 0)
									{
										Local_96.f_302++;
										func_98(bVar0, func_105(1));
									}
								}
								MISC::SET_BIT(&(Local_96.f_253), bVar0);
							}
							func_107(&(Local_3462[bVar0 /*2*/]));
						}
					}
				}
				else if (func_97(bVar0))
				{
					if (!BitTest(Local_96.f_253, bVar0))
					{
						Local_96.f_251 = (Local_96.f_251 - 1);
						if (func_99() > 1)
						{
							if (Local_96.f_252 > 0)
							{
								Local_96.f_302++;
								func_98(bVar0, func_105(1));
							}
						}
						if (Local_96.f_27 == joaat("hydra"))
						{
							Local_96.f_254++;
						}
						MISC::SET_BIT(&(Local_96.f_253), bVar0);
					}
					if (func_23(&(Local_96.f_336[bVar0 /*2*/])))
					{
						func_107(&(Local_96.f_336[bVar0 /*2*/]));
					}
					func_26(&(Local_96.f_73[bVar0]));
				}
				else
				{
					if (BitTest(Local_96.f_3, 0))
					{
						MISC::CLEAR_BIT(&(Local_96.f_3), 0);
					}
					if (!BitTest(Local_96.f_271, bVar0))
					{
						if (!func_23(&(Local_96.f_336[bVar0 /*2*/])))
						{
							func_21(&(Local_96.f_336[bVar0 /*2*/]), 0, 0);
						}
						else if (func_20(&(Local_96.f_336[bVar0 /*2*/]), 5000, 0))
						{
							MISC::SET_BIT(&(Local_96.f_271), bVar0);
						}
						else if (func_20(&(Local_96.f_336[bVar0 /*2*/]), 3000, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[bVar0])) == joaat("savage"))
							{
								if (!BitTest(Local_96.f_3, 18))
								{
									func_102(func_105(1), bVar0);
									MISC::SET_BIT(&(Local_96.f_3), 18);
								}
							}
							else if (func_101(bVar0) || !func_779())
							{
								if (!BitTest(Local_96.f_303, bVar0))
								{
									func_100(func_105(1), bVar0);
									MISC::SET_BIT(&(Local_96.f_303), bVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_96.f_116)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_48[(bVar0 * 4 + iVar1)]))
				{
					bVar6 = (bVar0 * 4 + iVar1);
					if (!func_32(Local_96.f_48[(bVar0 * 4 + iVar1)]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[(bVar0 * 4 + iVar1)]), false))
						{
							if (!func_95((bVar0 * 4 + iVar1)))
							{
								MISC::CLEAR_BIT(&(Local_96.f_3), 0);
							}
							else if (func_94(bVar6))
							{
								if (!func_20(&(Local_96.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_96.f_48[(bVar0 * 4 + iVar1)])))
								{
									func_93(&(Local_1324[(bVar0 * 4 + iVar1) /*8*/]));
								}
								func_26(&(Local_96.f_48[(bVar0 * 4 + iVar1)]));
								if (BitTest(Local_96.f_272[func_92(bVar6)], func_91(bVar6)))
								{
									if (Local_96.f_85[(bVar0 * 4 + iVar1)] > 0)
									{
										func_90((bVar0 * 4 + iVar1), func_105(1));
										Local_96.f_254++;
									}
								}
								Local_96.f_85[(bVar0 * 4 + iVar1)] = 0;
								if (func_23(&(Local_96.f_364[bVar6 /*2*/])))
								{
									func_107(&(Local_96.f_364[bVar6 /*2*/]));
								}
								if (BitTest(Local_96.f_275[func_92(bVar6)], func_91(bVar6)))
								{
									MISC::CLEAR_BIT(&(Local_96.f_275[func_92(bVar6)]), func_91(bVar6));
								}
							}
							else
							{
								if (!BitTest(Local_96.f_272[func_92(bVar6)], func_91(bVar6)))
								{
									if (!func_23(&(Local_96.f_364[bVar6 /*2*/])))
									{
										func_21(&(Local_96.f_364[bVar6 /*2*/]), 0, 0);
									}
									else if (func_20(&(Local_96.f_364[bVar6 /*2*/]), 7000, 0))
									{
										MISC::SET_BIT(&(Local_96.f_272[func_92(bVar6)]), func_91(bVar6));
										func_107(&(Local_96.f_364[bVar6 /*2*/]));
									}
								}
								if (!BitTest(Local_96.f_275[func_92(bVar6)], func_91(bVar6)))
								{
									MISC::SET_BIT(&(Local_96.f_275[func_92(bVar6)]), func_91(bVar6));
								}
							}
						}
					}
					else if (BitTest(Local_96.f_272[func_92(bVar6)], func_91(bVar6)) || Local_96.f_27 == joaat("hydra"))
					{
						if (!func_20(&(Local_96.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_26(&(Local_96.f_48[(bVar0 * 4 + iVar1)]));
						if (BitTest(Local_96.f_272[func_92(bVar6)], func_91(bVar6)))
						{
							if (Local_96.f_85[(bVar0 * 4 + iVar1)] > 0)
							{
								Local_96.f_254++;
								func_90((bVar0 * 4 + iVar1), func_105(1));
							}
						}
						Local_96.f_85[(bVar0 * 4 + iVar1)] = 0;
						if (BitTest(Local_96.f_275[func_92(bVar6)], func_91(bVar6)))
						{
							MISC::CLEAR_BIT(&(Local_96.f_275[func_92(bVar6)]), func_91(bVar6));
						}
					}
					else
					{
						if (!BitTest(Local_96.f_272[func_92(bVar6)], func_91(bVar6)))
						{
							if (!func_23(&(Local_96.f_364[bVar6 /*2*/])))
							{
								func_21(&(Local_96.f_364[bVar6 /*2*/]), 0, 0);
							}
							else if (func_20(&(Local_96.f_364[bVar6 /*2*/]), 7000, 0))
							{
								MISC::SET_BIT(&(Local_96.f_272[func_92(bVar6)]), func_91(bVar6));
								func_107(&(Local_96.f_364[bVar6 /*2*/]));
							}
						}
						if (!BitTest(Local_96.f_275[func_92(bVar6)], func_91(bVar6)))
						{
							MISC::SET_BIT(&(Local_96.f_275[func_92(bVar6)]), func_91(bVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_96.f_249 < func_104())
			{
				if (func_74(bVar0))
				{
				}
				MISC::CLEAR_BIT(&(Local_96.f_3), 0);
			}
			bVar0++;
		}
	}
	if (!BitTest(Local_96.f_3, 2))
	{
		if (Local_96.f_247 >= Global_262145.f_10860 /* Tunable: URBANWARFAREENEMYONFOOTSPAWNS */)
		{
			MISC::SET_BIT(&(Local_96.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_96.f_243)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_48[(20 + iVar1)]))
			{
				bVar7 = (20 + iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iVar1)]), false))
				{
					MISC::CLEAR_BIT(&(Local_96.f_3), 2);
				}
				else if (BitTest(Local_96.f_272[func_92(bVar7)], func_91(bVar7)))
				{
					if (!func_20(&(Local_96.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_23(&(Local_96.f_364[bVar7 /*2*/])))
					{
						func_107(&(Local_96.f_364[bVar7 /*2*/]));
					}
					func_26(&(Local_96.f_48[(20 + iVar1)]));
					if (Local_96.f_85[(20 + iVar1)] > 0)
					{
						Local_96.f_254++;
						if (func_99() > 1)
						{
							if (Local_96.f_317 > 0)
							{
								Local_96.f_316++;
							}
						}
						func_90((20 + iVar1), func_105(1));
					}
					Local_96.f_85[(20 + iVar1)] = 0;
					if (BitTest(Local_96.f_275[func_92(bVar7)], func_91(bVar7)))
					{
						MISC::CLEAR_BIT(&(Local_96.f_275[func_92(bVar7)]), func_91(bVar7));
					}
				}
				else
				{
					if (!BitTest(Local_96.f_272[func_92(bVar7)], func_91(bVar7)))
					{
						if (!func_23(&(Local_96.f_364[bVar7 /*2*/])))
						{
							func_21(&(Local_96.f_364[bVar7 /*2*/]), 0, 0);
						}
						else if (func_20(&(Local_96.f_364[bVar7 /*2*/]), 7000, 0))
						{
							MISC::SET_BIT(&(Local_96.f_272[func_92(bVar7)]), func_91(bVar7));
							func_107(&(Local_96.f_364[bVar7 /*2*/]));
						}
					}
					if (!BitTest(Local_96.f_275[func_92(bVar7)], func_91(bVar7)))
					{
						MISC::SET_BIT(&(Local_96.f_275[func_92(bVar7)]), func_91(bVar7));
					}
				}
			}
			if (Local_96.f_247 < func_73())
			{
				if (func_52(iVar1))
				{
				}
				MISC::CLEAR_BIT(&(Local_96.f_3), 2);
			}
			iVar1++;
		}
	}
	func_37();
}

void func_37()//Position - 0x1DB2
{
	int iVar0;
	int iVar1;
	
	if (func_99() == 1)
	{
		return;
	}
	if (func_99() == 2)
	{
		if (Local_96.f_252 > 0)
		{
			if (Local_96.f_302 > 0)
			{
				if (Local_96.f_302 >= (Local_96.f_252 - 1))
				{
					if (func_51() <= func_50())
					{
						if (func_49() == 0)
						{
							iVar0 = Local_96.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_96.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_48();
									Local_96.f_279++;
									func_41();
								}
								else if (Local_96.f_318 >= func_40())
								{
									func_48();
									Local_96.f_279++;
									func_41();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_99() == 3)
	{
		if (Local_96.f_317 > 0)
		{
			if (Local_96.f_316 > 0)
			{
				if (Local_96.f_316 >= Local_96.f_317)
				{
					if (Local_96.f_317 >= func_39())
					{
						func_48();
						Local_96.f_279++;
						func_41();
					}
				}
			}
		}
	}
	else if (func_99() == 4)
	{
		if (Local_96.f_316 > 0)
		{
			if (Local_96.f_302 > 0)
			{
				if (Local_96.f_317 > 0)
				{
					if (Local_96.f_316 >= (Local_96.f_317 - 2))
					{
						if (Local_96.f_252 > 0)
						{
							if (Local_96.f_302 >= (Local_96.f_252 - 2))
							{
								if (func_51() <= func_50())
								{
									if (func_49() <= func_38())
									{
										iVar0 = Local_96.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_96.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_48();
												Local_96.f_279++;
												func_41();
											}
											else if (Local_96.f_318 >= func_40())
											{
												func_48();
												Local_96.f_279++;
												func_41();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_99() == 5)
	{
		if (Local_96.f_252 > 0)
		{
			if (Local_96.f_302 > 0)
			{
				if (Local_96.f_302 >= (Local_96.f_252 - 1))
				{
					if (func_51() <= func_50())
					{
						if (func_49() == 0)
						{
							func_48();
							Local_96.f_279++;
							func_41();
						}
					}
				}
			}
		}
	}
}

int func_38()//Position - 0x1FAB
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_96.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_96.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_99() == 4)
				{
					return 2;
				}
				else if (func_99() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_39()//Position - 0x202B
{
	return Local_96.f_305[Local_96.f_279];
}

int func_40()//Position - 0x203F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_96.f_278)
	{
		iVar0 = (iVar0 + Local_96.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_41()//Position - 0x206D
{
	int iVar0;
	
	if (Local_96.f_29 == -1)
	{
		iVar0 = func_47(Local_96.f_27);
		Local_96.f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		if (func_779())
		{
			if (Local_96.f_27 == joaat("hydra"))
			{
				if (Local_96.f_29 == 2)
				{
					Local_96.f_29 = 4;
				}
			}
			else if (Local_96.f_27 == joaat("savage"))
			{
				if (Local_96.f_29 == 0)
				{
					Local_96.f_29 = 1;
				}
				else if (Local_96.f_29 == 1)
				{
					Local_96.f_29 = 2;
				}
				else if (Local_96.f_29 == 2)
				{
					Local_96.f_29 = 3;
				}
			}
			else if (Local_96.f_27 == joaat("valkyrie"))
			{
				if (Local_96.f_29 == 2)
				{
					Local_96.f_29 = 3;
				}
				else if (Local_96.f_29 == 3)
				{
					Local_96.f_29 = 4;
				}
			}
			else if (Local_96.f_27 == joaat("buzzard"))
			{
				if (Local_96.f_29 == 0)
				{
					Local_96.f_29 = 1;
				}
				else if (Local_96.f_29 == 1)
				{
					Local_96.f_29 = 2;
				}
				else if (Local_96.f_29 == 2)
				{
					Local_96.f_29 = 3;
				}
				else if (Local_96.f_29 == 3)
				{
					Local_96.f_29 = 4;
				}
			}
		}
		else if (Local_96.f_27 == joaat("savage"))
		{
			if (Local_96.f_29 == 0)
			{
				Local_96.f_29 = 1;
			}
			else if (Local_96.f_29 == 1)
			{
				Local_96.f_29 = 2;
			}
			else if (Local_96.f_29 == 2)
			{
				Local_96.f_29 = 3;
			}
		}
	}
	switch (Local_96.f_27)
	{
		case joaat("rhino"):
			Local_96.f_280[0] = 4;
			Local_96.f_291[0] = func_46(4);
			Local_96.f_305[0] = func_45(4);
			Local_96.f_280[1] = 4;
			Local_96.f_291[1] = func_46(4);
			Local_96.f_305[1] = func_45(4);
			Local_96.f_280[2] = 4;
			Local_96.f_291[2] = func_46(4);
			Local_96.f_305[2] = func_45(4);
			if (Local_96.f_12 <= 2 || !func_779())
			{
				Local_96.f_278 = 3;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_46(4);
				Local_96.f_305[3] = func_45(4);
				Local_96.f_278 = 4;
			}
			else
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_46(4);
				Local_96.f_305[3] = func_45(4);
				Local_96.f_280[4] = 4;
				Local_96.f_291[4] = func_46(4);
				Local_96.f_305[4] = func_45(4);
				Local_96.f_278 = 5;
			}
			Local_96.f_255 = func_42();
			if (!func_779())
			{
				Local_96.f_1 = 0;
			}
			else
			{
				Local_96.f_1 = 5;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					Local_96.f_30[0 /*3*/] = { 1016.7343f, 2360.8303f, 50.4559f };
					Local_96.f_43[0] = 269.414f;
					Local_96.f_30[1 /*3*/] = { 1002.5259f, 2390.64f, 50.5438f };
					Local_96.f_43[1] = 3.5491f;
					Local_96.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_96.f_43[2] = 54.4509f;
					Local_96.f_30[3 /*3*/] = { 977.1004f, 2371.7144f, 51.0115f };
					Local_96.f_43[3] = 178.1948f;
					Local_96.f_159[0 /*3*/] = { 1028.3246f, 2436.455f, 44.2365f };
					Local_96.f_175[0] = 270.8322f;
					Local_96.f_159[1 /*3*/] = { 1166.4983f, 2403.0205f, 56.662f };
					Local_96.f_175[1] = 177.3506f;
					Local_96.f_159[2 /*3*/] = { 892.8997f, 2465.8809f, 49.7859f };
					Local_96.f_175[2] = 318.1089f;
					Local_96.f_159[3 /*3*/] = { 1078.9882f, 2246.8794f, 43.7942f };
					Local_96.f_175[3] = 272.0801f;
					Local_96.f_159[4 /*3*/] = { 1016.7836f, 2259.447f, 43.8512f };
					Local_96.f_175[4] = 104.0591f;
					Local_96.f_117[0 /*3*/] = { 1042.504f, 2280.4973f, 48.6315f };
					Local_96.f_148[0] = 296.4225f;
					Local_96.f_117[1 /*3*/] = { 991.9136f, 2278.3528f, 48.1838f };
					Local_96.f_148[1] = 164.9695f;
					Local_96.f_117[2 /*3*/] = { 1029.7627f, 2447.0415f, 44.5979f };
					Local_96.f_148[2] = 136.0596f;
					Local_96.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_96.f_148[3] = 116.379f;
					Local_96.f_117[4 /*3*/] = { 1017.2642f, 2432.0085f, 45.2054f };
					Local_96.f_148[4] = 86.6586f;
					Local_96.f_117[5 /*3*/] = { 1072.7511f, 2237.5986f, 43.3802f };
					Local_96.f_148[5] = 74.6822f;
					Local_96.f_117[6 /*3*/] = { 944.4364f, 2407.3918f, 50.0925f };
					Local_96.f_148[6] = 206.8863f;
					Local_96.f_117[7 /*3*/] = { 1059.8036f, 2280.7842f, 48.5613f };
					Local_96.f_148[7] = 267.8581f;
					Local_96.f_117[8 /*3*/] = { 1004.2717f, 2372.3445f, 54.5719f };
					Local_96.f_148[8] = 267.5856f;
					Local_96.f_117[9 /*3*/] = { 972.3055f, 2235.8213f, 53.1094f };
					Local_96.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_96.f_30[0 /*3*/] = { 1733.1344f, 3302.5454f, 40.2235f };
					Local_96.f_43[0] = 194.8062f;
					Local_96.f_30[1 /*3*/] = { 1761.2812f, 3309.8794f, 40.1489f };
					Local_96.f_43[1] = 238.9372f;
					Local_96.f_30[2 /*3*/] = { 1755.7526f, 3236.4895f, 41.0341f };
					Local_96.f_43[2] = 16.3071f;
					Local_96.f_30[3 /*3*/] = { 1676.7595f, 3279.7344f, 39.8901f };
					Local_96.f_43[3] = 209.9883f;
					Local_96.f_117[0 /*3*/] = { 1758.4493f, 3309.2473f, 40.1417f };
					Local_96.f_148[0] = 221.3913f;
					Local_96.f_117[1 /*3*/] = { 1746.4453f, 3323.7502f, 40.1528f };
					Local_96.f_148[1] = 246.3415f;
					Local_96.f_117[2 /*3*/] = { 1775.0573f, 3332.9429f, 40.3398f };
					Local_96.f_148[2] = 213.4087f;
					Local_96.f_117[3 /*3*/] = { 1713.2401f, 3302.4575f, 40.1851f };
					Local_96.f_148[3] = 100.5405f;
					Local_96.f_117[4 /*3*/] = { 1693.8173f, 3293.1633f, 40.1465f };
					Local_96.f_148[4] = 289.6017f;
					Local_96.f_117[5 /*3*/] = { 1697.449f, 3176.3118f, 44.0261f };
					Local_96.f_148[5] = 285.6456f;
					Local_96.f_117[6 /*3*/] = { 1710.5647f, 3180.9087f, 43.2884f };
					Local_96.f_148[6] = 310.9245f;
					Local_96.f_117[7 /*3*/] = { 1627.4359f, 3198.51f, 39.9059f };
					Local_96.f_148[7] = 46.7117f;
					Local_96.f_117[8 /*3*/] = { 1788.4015f, 3208.9639f, 43.0201f };
					Local_96.f_148[8] = 35.9192f;
					Local_96.f_117[9 /*3*/] = { 1698.3079f, 3289.2542f, 47.8594f };
					Local_96.f_148[9] = 207.53f;
					Local_96.f_159[0 /*3*/] = { 1669.9315f, 3132.549f, 42.2874f };
					Local_96.f_175[0] = 286.6127f;
					Local_96.f_159[1 /*3*/] = { 1943.3209f, 3263.1458f, 44.7265f };
					Local_96.f_175[1] = 124.1428f;
					Local_96.f_159[2 /*3*/] = { 1151.224f, 3172.3477f, 40.6704f };
					Local_96.f_175[2] = 275.0147f;
					Local_96.f_159[3 /*3*/] = { 1134.7161f, 3169.2302f, 40.6443f };
					Local_96.f_175[3] = 287.91f;
					Local_96.f_159[4 /*3*/] = { 1311.3516f, 2963.9622f, 40.0443f };
					Local_96.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_96.f_30[0 /*3*/] = { 2703.2812f, 1576.7003f, 23.527f };
					Local_96.f_43[0] = 172.439f;
					Local_96.f_30[1 /*3*/] = { 2702.7808f, 1512.7255f, 23.5199f };
					Local_96.f_43[1] = 53.9805f;
					Local_96.f_30[2 /*3*/] = { 2678.4321f, 1518.7335f, 23.5295f };
					Local_96.f_43[2] = 303.2142f;
					Local_96.f_30[3 /*3*/] = { 2677.5085f, 1566.5251f, 23.501f };
					Local_96.f_43[3] = 218.5974f;
					Local_96.f_117[0 /*3*/] = { 2621.7964f, 1695.8693f, 26.5983f };
					Local_96.f_148[0] = 264.5842f;
					Local_96.f_117[1 /*3*/] = { 2746.8464f, 1567.6827f, 23.501f };
					Local_96.f_148[1] = 133.7932f;
					Local_96.f_117[2 /*3*/] = { 2664.2727f, 1599.2006f, 23.7604f };
					Local_96.f_148[2] = 205.1215f;
					Local_96.f_117[3 /*3*/] = { 2757.2554f, 1576.939f, 23.501f };
					Local_96.f_148[3] = 66.1065f;
					Local_96.f_117[4 /*3*/] = { 2714.1755f, 1480.4452f, 23.5007f };
					Local_96.f_148[4] = 7.8064f;
					Local_96.f_117[5 /*3*/] = { 2713.364f, 1450.2719f, 23.6191f };
					Local_96.f_148[5] = 358.7563f;
					Local_96.f_117[6 /*3*/] = { 2739.8616f, 1463.719f, 23.5015f };
					Local_96.f_148[6] = 142.1748f;
					Local_96.f_117[7 /*3*/] = { 2676.4033f, 1589.2241f, 26.2548f };
					Local_96.f_148[7] = 247.816f;
					Local_96.f_117[8 /*3*/] = { 2703.0854f, 1685.5682f, 23.4887f };
					Local_96.f_148[8] = 124.4666f;
					Local_96.f_117[9 /*3*/] = { 2665.0217f, 1409.4331f, 23.538f };
					Local_96.f_148[9] = 348.6588f;
					Local_96.f_159[0 /*3*/] = { 2737.1147f, 1697.578f, 23.6755f };
					Local_96.f_175[0] = 89.8563f;
					Local_96.f_159[1 /*3*/] = { 2778.5981f, 1458.2183f, 23.5382f };
					Local_96.f_175[1] = 163.8004f;
					Local_96.f_159[2 /*3*/] = { 2529.7788f, 1641.1132f, 27.9752f };
					Local_96.f_175[2] = 270.0754f;
					Local_96.f_159[3 /*3*/] = { 2665.372f, 1702.3788f, 23.4882f };
					Local_96.f_175[3] = 184.9752f;
					Local_96.f_159[4 /*3*/] = { 2726.6233f, 1640.2986f, 23.5607f };
					Local_96.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_96.f_30[0 /*3*/] = { 1088.3834f, -3024.9194f, 4.901f };
					Local_96.f_43[0] = 0.5044f;
					Local_96.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_96.f_43[1] = 179.2507f;
					Local_96.f_30[2 /*3*/] = { 986.4979f, -3024.6797f, 4.9008f };
					Local_96.f_43[2] = 0.3066f;
					Local_96.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_96.f_43[3] = 180.2973f;
					Local_96.f_117[0 /*3*/] = { 991.85f, -2969.7922f, 4.9008f };
					Local_96.f_148[0] = 336.7541f;
					Local_96.f_117[1 /*3*/] = { 1178.155f, -3022.3298f, 4.9021f };
					Local_96.f_148[1] = 6.0929f;
					Local_96.f_117[2 /*3*/] = { 1107.6794f, -2983.9917f, 4.901f };
					Local_96.f_148[2] = 4.2803f;
					Local_96.f_117[3 /*3*/] = { 1043.8685f, -2979.5972f, 4.901f };
					Local_96.f_148[3] = 274.985f;
					Local_96.f_117[4 /*3*/] = { 1042.9515f, -3031.7595f, 4.901f };
					Local_96.f_148[4] = 267.2555f;
					Local_96.f_117[5 /*3*/] = { 1095.3485f, -3077.4922f, 4.8877f };
					Local_96.f_148[5] = 6.5529f;
					Local_96.f_117[6 /*3*/] = { 1114.9236f, -3031.3193f, 4.901f };
					Local_96.f_148[6] = 89.1724f;
					Local_96.f_117[7 /*3*/] = { 1048.0206f, -3077.814f, 4.901f };
					Local_96.f_148[7] = 348.279f;
					Local_96.f_117[8 /*3*/] = { 995.4651f, -3036.8967f, 4.9008f };
					Local_96.f_148[8] = 267.8075f;
					Local_96.f_117[9 /*3*/] = { 1101.3469f, -2968.8943f, 13.3329f };
					Local_96.f_148[9] = 0.5237f;
					Local_96.f_159[0 /*3*/] = { 1254.1913f, -3126.9082f, 4.8012f };
					Local_96.f_175[0] = 357.9713f;
					Local_96.f_159[1 /*3*/] = { 856.4759f, -3118.9695f, 4.9008f };
					Local_96.f_175[1] = 269.3234f;
					Local_96.f_159[2 /*3*/] = { 838.2247f, -3118.7476f, 4.9008f };
					Local_96.f_175[2] = 269.3055f;
					Local_96.f_159[3 /*3*/] = { 1197.5948f, -2983.8716f, 4.9021f };
					Local_96.f_175[3] = 359.1497f;
					Local_96.f_159[4 /*3*/] = { 962.6804f, -3016.1587f, 4.9017f };
					Local_96.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_96.f_240 = joaat("insurgent");
			Local_96.f_280[0] = 2;
			Local_96.f_291[0] = func_46(2);
			Local_96.f_280[1] = 4;
			Local_96.f_291[1] = func_46(4);
			Local_96.f_305[1] = func_45(4);
			Local_96.f_280[2] = 2;
			Local_96.f_291[2] = func_46(2);
			if (Local_96.f_12 <= 2 || !func_779())
			{
				Local_96.f_280[3] = 5;
				Local_96.f_291[3] = func_46(5);
				Local_96.f_278 = 4;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_46(4);
				Local_96.f_305[3] = func_45(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_46(2);
				Local_96.f_280[5] = 5;
				Local_96.f_291[5] = func_46(5);
				Local_96.f_278 = 6;
			}
			else
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_46(4);
				Local_96.f_305[3] = func_45(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_46(2);
				Local_96.f_280[5] = 4;
				Local_96.f_291[5] = func_46(4);
				Local_96.f_305[5] = func_45(4);
				Local_96.f_280[6] = 5;
				Local_96.f_291[6] = func_46(5);
				Local_96.f_278 = 7;
			}
			Local_96.f_255 = func_42();
			if (!func_779())
			{
				Local_96.f_1 = 2;
			}
			else
			{
				Local_96.f_1 = 7;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					Local_96.f_30[0 /*3*/] = { -1177.6504f, -2845.5422f, 12.9458f };
					Local_96.f_43[0] = 331.74f;
					Local_96.f_30[1 /*3*/] = { -1082.4794f, -2900.1914f, 12.9478f };
					Local_96.f_43[1] = 327.7335f;
					Local_96.f_30[2 /*3*/] = { -1202.0188f, -2873.6702f, 12.9454f };
					Local_96.f_43[2] = 149.1604f;
					Local_96.f_30[3 /*3*/] = { -1126.5802f, -2918.4158f, 12.9454f };
					Local_96.f_43[3] = 150.6753f;
					Local_96.f_117[0 /*3*/] = { -985.8373f, -2942.9734f, 12.9451f };
					Local_96.f_148[0] = 147.2177f;
					Local_96.f_117[1 /*3*/] = { -1051.4122f, -2880.8284f, 29.3631f };
					Local_96.f_148[1] = 103.9461f;
					Local_96.f_117[2 /*3*/] = { -1154.5397f, -2821.091f, 29.3631f };
					Local_96.f_148[2] = 160.822f;
					Local_96.f_117[3 /*3*/] = { -1211.8983f, -2789.125f, 12.9523f };
					Local_96.f_148[3] = 205.8375f;
					Local_96.f_117[4 /*3*/] = { -1199.4928f, -2724.709f, 12.9771f };
					Local_96.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_96.f_30[0 /*3*/] = { 1930.0668f, 4710.339f, 40.1633f };
					Local_96.f_43[0] = 344.2504f;
					Local_96.f_30[1 /*3*/] = { 1954.5598f, 4724.181f, 40.0604f };
					Local_96.f_43[1] = 340.3425f;
					Local_96.f_30[2 /*3*/] = { 2004.9131f, 4748.04f, 40.0604f };
					Local_96.f_43[2] = 351.5693f;
					Local_96.f_30[3 /*3*/] = { 2027.9282f, 4757.387f, 40.0595f };
					Local_96.f_43[3] = 354.2446f;
					Local_96.f_117[0 /*3*/] = { 1954.2092f, 4653.2324f, 39.7136f };
					Local_96.f_148[0] = 245.2865f;
					Local_96.f_117[1 /*3*/] = { 2116.177f, 4761.9927f, 40.2281f };
					Local_96.f_148[1] = 74.1185f;
					Local_96.f_117[2 /*3*/] = { 2123.414f, 4784.4067f, 39.9703f };
					Local_96.f_148[2] = 10.2312f;
					Local_96.f_117[3 /*3*/] = { 1925.1587f, 4817.925f, 43.9706f };
					Local_96.f_148[3] = 222.4017f;
					Local_96.f_117[4 /*3*/] = { 2009.5798f, 4802.5054f, 41.009f };
					Local_96.f_148[4] = 150.2763f;
					Local_96.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_96.f_148[5] = 105.4526f;
					Local_96.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_96.f_148[6] = 88.9429f;
					Local_96.f_117[7 /*3*/] = { 2014.2765f, 4721.062f, 40.6111f };
					Local_96.f_148[7] = 51.1733f;
					Local_96.f_117[8 /*3*/] = { 2060.4175f, 4847.6914f, 40.8344f };
					Local_96.f_148[8] = 169.7083f;
					Local_96.f_117[9 /*3*/] = { 2151.4336f, 4789.446f, 39.9594f };
					Local_96.f_148[9] = 29.5849f;
					Local_96.f_243 = 3;
					break;
				
				case 2:
					if (!func_779())
					{
						Local_96.f_30[0 /*3*/] = { 206.2382f, 7031.6694f, 1.1068f };
						Local_96.f_43[0] = 319.153f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { 206.2382f, 7031.6694f, 1.1068f };
						Local_96.f_43[0] = 319.153f;
						Local_96.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_96.f_43[1] = 316.7079f;
						Local_96.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_96.f_43[2] = 316.9623f;
						Local_96.f_30[3 /*3*/] = { 242.3287f, 6987.2627f, 1.7354f };
						Local_96.f_43[3] = 314.2003f;
					}
					Local_96.f_117[0 /*3*/] = { 131.5444f, 6956.8867f, 12.1839f };
					Local_96.f_148[0] = 326.4292f;
					Local_96.f_117[1 /*3*/] = { 201.7152f, 6842.8643f, 21.2216f };
					Local_96.f_148[1] = 6.8118f;
					Local_96.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_96.f_148[2] = 32.8776f;
					Local_96.f_117[3 /*3*/] = { 42.4962f, 7055.1904f, 1.3986f };
					Local_96.f_148[3] = 8.387f;
					Local_96.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_96.f_148[4] = 291.5504f;
					Local_96.f_117[5 /*3*/] = { 290.266f, 6946.9175f, 3.1171f };
					Local_96.f_148[5] = 333.1838f;
					Local_96.f_117[6 /*3*/] = { 50.5669f, 7102.2134f, 2.0034f };
					Local_96.f_148[6] = 203.8353f;
					Local_96.f_117[7 /*3*/] = { 274.1516f, 6856.5063f, 15.8452f };
					Local_96.f_148[7] = 32.2329f;
					Local_96.f_117[8 /*3*/] = { 88.9963f, 7113.4717f, 24.5763f };
					Local_96.f_148[8] = 195.4847f;
					Local_96.f_117[9 /*3*/] = { 131.6119f, 6956.0815f, 12.2413f };
					Local_96.f_148[9] = 327.4941f;
					Local_96.f_243 = 4;
					break;
				
				case 3:
					if (!func_779())
					{
						Local_96.f_30[0 /*3*/] = { 704.1097f, -1579.9468f, 8.6915f };
						Local_96.f_43[0] = 156.0209f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { 704.1097f, -1579.9468f, 8.6915f };
						Local_96.f_43[0] = 156.0209f;
						Local_96.f_30[1 /*3*/] = { 699.7866f, -1637.3372f, 8.7086f };
						Local_96.f_43[1] = 41.8571f;
						Local_96.f_30[2 /*3*/] = { 663.725f, -1634.0522f, 8.7086f };
						Local_96.f_43[2] = 305.7411f;
						Local_96.f_30[3 /*3*/] = { 662.7472f, -1596.4681f, 8.7086f };
						Local_96.f_43[3] = 223.2489f;
					}
					if (func_99() == 2 || func_99() == 5)
					{
						Local_96.f_242 = 3;
					}
					else
					{
						Local_96.f_242 = 4;
					}
					Local_96.f_117[0 /*3*/] = { 585.7374f, -1450.2639f, 19.043f };
					Local_96.f_148[0] = 197.3456f;
					Local_96.f_117[1 /*3*/] = { 784.6684f, -1526.1722f, 9.5498f };
					Local_96.f_148[1] = 140.7211f;
					Local_96.f_117[2 /*3*/] = { 790.8864f, -1603.6653f, 30.2421f };
					Local_96.f_148[2] = 98.9528f;
					Local_96.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_96.f_148[3] = 107.0238f;
					Local_96.f_117[4 /*3*/] = { 698.9001f, -1443.5546f, 21.3382f };
					Local_96.f_148[4] = 202.129f;
					Local_96.f_117[5 /*3*/] = { 566.2017f, -1506.3856f, 27.1027f };
					Local_96.f_148[5] = 230.1207f;
					Local_96.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_96.f_148[6] = 36.194f;
					Local_96.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_96.f_148[7] = 48.2522f;
					Local_96.f_117[8 /*3*/] = { 592.6577f, -1452.3037f, 28.8626f };
					Local_96.f_148[8] = 296.114f;
					Local_96.f_117[9 /*3*/] = { 794.9213f, -1660.6195f, 43.147f };
					Local_96.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_96.f_240 = joaat("lazer");
			Local_96.f_280[0] = 2;
			Local_96.f_291[0] = func_46(2);
			Local_96.f_280[1] = 2;
			Local_96.f_291[1] = func_46(2);
			Local_96.f_280[2] = 2;
			Local_96.f_291[2] = func_46(2);
			if (Local_96.f_12 <= 2 || !func_779())
			{
				Local_96.f_278 = 3;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 2;
				Local_96.f_291[3] = func_46(2);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_46(2);
				Local_96.f_278 = 5;
			}
			else
			{
				Local_96.f_280[3] = 2;
				Local_96.f_291[3] = func_46(2);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_46(2);
				Local_96.f_280[5] = 2;
				Local_96.f_291[5] = func_46(2);
				Local_96.f_278 = 6;
			}
			Local_96.f_255 = func_42();
			if (!func_779())
			{
				Local_96.f_1 = 1;
			}
			else
			{
				Local_96.f_1 = 6;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					if (!func_779())
					{
						Local_96.f_30[0 /*3*/] = { 145.8397f, -2790.1968f, 5.0002f };
						Local_96.f_43[0] = 197.4435f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { 145.8397f, -2790.1968f, 5.0002f };
						Local_96.f_43[0] = 197.4435f;
						Local_96.f_30[1 /*3*/] = { 132.5468f, -2805.1807f, 5.0002f };
						Local_96.f_43[1] = 197.1133f;
						Local_96.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_96.f_43[2] = 272.2065f;
						Local_96.f_30[3 /*3*/] = { 163.5494f, -2795.9202f, 5.0002f };
						Local_96.f_43[3] = 142.941f;
					}
					Local_96.f_159[0 /*3*/] = { 887.9951f, -3884.4497f, 54.3252f };
					Local_96.f_175[0] = 34.149f;
					Local_96.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_96.f_175[1] = -26.0182f;
					Local_96.f_159[2 /*3*/] = { 1271.1887f, -3196.2434f, 104.9035f };
					Local_96.f_175[2] = 88.3998f;
					Local_96.f_159[3 /*3*/] = { -879.6379f, -2210.0242f, 245.712f };
					Local_96.f_175[3] = -141.7949f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_117[0 /*3*/] = { 546.2563f, -3289.3162f, 17.714f };
					Local_96.f_148[0] = 143.4012f;
					Local_96.f_117[1 /*3*/] = { 596.183f, -3288.1736f, 17.714f };
					Local_96.f_148[1] = 212.1136f;
					Local_96.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_96.f_148[2] = 95.8248f;
					Local_96.f_117[3 /*3*/] = { 480.8767f, -3238.4136f, 5.0696f };
					Local_96.f_148[3] = 113.3084f;
					Local_96.f_117[4 /*3*/] = { 444.4339f, -3187.9558f, 5.0703f };
					Local_96.f_148[4] = 260.1329f;
					Local_96.f_242 = 4;
					break;
				
				case 1:
					if (!func_779())
					{
						Local_96.f_30[0 /*3*/] = { -1762.4076f, -786.7469f, 8.075f };
						Local_96.f_43[0] = 131.0993f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { -1762.4076f, -786.7469f, 8.075f };
						Local_96.f_43[0] = 131.0993f;
						Local_96.f_30[1 /*3*/] = { -1734.9775f, -796.148f, 8.3998f };
						Local_96.f_43[1] = 127.8408f;
						Local_96.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_96.f_43[2] = 131.1571f;
						Local_96.f_30[3 /*3*/] = { -1792.5006f, -751.6967f, 8.1782f };
						Local_96.f_43[3] = 132.943f;
					}
					Local_96.f_159[0 /*3*/] = { -1876.4971f, -665.6128f, 109.1172f };
					Local_96.f_175[0] = 316.9068f;
					Local_96.f_159[1 /*3*/] = { -1099.2975f, 20.5145f, 150.0107f };
					Local_96.f_175[1] = 142.3075f;
					Local_96.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_96.f_175[2] = 93.1231f;
					Local_96.f_159[3 /*3*/] = { -1697.5353f, -1306.9553f, 127.8882f };
					Local_96.f_175[3] = -9.0334f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_117[0 /*3*/] = { -1468.4458f, -546.457f, 84.073f };
					Local_96.f_148[0] = 236.3566f;
					Local_96.f_117[1 /*3*/] = { -1288.0239f, -439.2769f, 102.47f };
					Local_96.f_148[1] = 212.7533f;
					Local_96.f_117[2 /*3*/] = { -1556.8313f, -589.7376f, 32.9884f };
					Local_96.f_148[2] = 299.3619f;
					Local_96.f_117[3 /*3*/] = { -1353.2806f, -514.1478f, 22.2694f };
					Local_96.f_148[3] = 115.7556f;
					Local_96.f_117[4 /*3*/] = { -1314.6932f, -570.6011f, 28.3023f };
					Local_96.f_148[4] = 191.3862f;
					Local_96.f_242 = 4;
					break;
				
				case 2:
					Local_96.f_30[0 /*3*/] = { 737.7632f, 1292.3484f, 359.296f };
					Local_96.f_43[0] = 176.244f;
					Local_96.f_159[0 /*3*/] = { 737.1152f, 1296.3625f, 459.296f };
					Local_96.f_175[0] = 93.8354f;
					Local_96.f_159[1 /*3*/] = { -425.5261f, 1185.3806f, 324.6416f };
					Local_96.f_175[1] = 250.5173f;
					Local_96.f_159[2 /*3*/] = { 1157.6166f, 116.7023f, 180.3293f };
					Local_96.f_175[2] = 337.8961f;
					Local_96.f_159[3 /*3*/] = { 1604.7471f, 2094.859f, 184.1727f };
					Local_96.f_175[3] = 142.1369f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_117[0 /*3*/] = { 662.439f, 1284.1891f, 359.296f };
					Local_96.f_148[0] = 208.2624f;
					Local_96.f_117[1 /*3*/] = { 782.1017f, 1279.3444f, 359.2967f };
					Local_96.f_148[1] = 349.048f;
					Local_96.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_96.f_148[2] = 69.8162f;
					Local_96.f_117[3 /*3*/] = { 750.6609f, 1209.1548f, 326.5541f };
					Local_96.f_148[3] = 286.6181f;
					Local_96.f_242 = 4;
					Local_96.f_243 = 4;
					break;
				
				case 3:
					Local_96.f_30[0 /*3*/] = { 2521.1213f, -471.1436f, 91.9971f };
					Local_96.f_43[0] = 292.0822f;
					Local_96.f_30[1 /*3*/] = { 2510.2734f, -473.5832f, 91.9929f };
					Local_96.f_43[1] = 43.3907f;
					Local_96.f_30[2 /*3*/] = { 2481.3901f, -320.2297f, 91.9927f };
					Local_96.f_43[2] = 124.2279f;
					Local_96.f_30[3 /*3*/] = { 2560.3145f, -438.3987f, 91.9926f };
					Local_96.f_43[3] = 129.3366f;
					Local_96.f_159[0 /*3*/] = { 2870.5044f, 368.2049f, 101.6602f };
					Local_96.f_175[0] = 137.5025f;
					Local_96.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_96.f_175[1] = 227.9336f;
					Local_96.f_159[2 /*3*/] = { 2666.0332f, -931.6996f, 100.6606f };
					Local_96.f_175[2] = 6.0299f;
					Local_96.f_159[3 /*3*/] = { 1336.4745f, -345.6518f, 424.9653f };
					Local_96.f_175[3] = -87.5596f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_242 = 4;
					Local_96.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_96.f_148[0] = 338.8487f;
					Local_96.f_117[1 /*3*/] = { 2473.8284f, -384.0913f, 108.6521f };
					Local_96.f_148[1] = 272.5443f;
					Local_96.f_117[2 /*3*/] = { 2535.3215f, -335.4323f, 113.0844f };
					Local_96.f_148[2] = 223.0158f;
					Local_96.f_117[3 /*3*/] = { 2478.7522f, -416.0706f, 92.7351f };
					Local_96.f_148[3] = 355.6682f;
					Local_96.f_117[4 /*3*/] = { 2482.1758f, -353.0269f, 92.7351f };
					Local_96.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_779())
					{
						Local_96.f_30[0 /*3*/] = { -1822.3245f, -3167.588f, 12.9444f };
						Local_96.f_43[0] = 331.7771f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { -1822.3245f, -3167.588f, 12.9444f };
						Local_96.f_43[0] = 331.7771f;
						Local_96.f_30[1 /*3*/] = { -1841.3795f, -3156.6663f, 12.9444f };
						Local_96.f_43[1] = 324.1843f;
						Local_96.f_30[2 /*3*/] = { -1860.8583f, -3143.9216f, 12.9444f };
						Local_96.f_43[2] = 330.0586f;
						Local_96.f_30[3 /*3*/] = { -1885.1311f, -3129.9482f, 12.9444f };
						Local_96.f_43[3] = 329.5413f;
					}
					Local_96.f_159[0 /*3*/] = { -1185.2023f, -2364.726f, 112.9452f };
					Local_96.f_175[0] = 146.9594f;
					Local_96.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_96.f_175[1] = 137.6555f;
					Local_96.f_159[2 /*3*/] = { -412.0741f, -2847.3071f, 105.0004f };
					Local_96.f_175[2] = 114.7478f;
					Local_96.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_96.f_175[3] = -84.6269f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_242 = 4;
					Local_96.f_117[0 /*3*/] = { -1051.5664f, -2880.6667f, 29.3631f };
					Local_96.f_148[0] = 153.0449f;
					Local_96.f_117[1 /*3*/] = { -1154.1666f, -2821.0889f, 29.3631f };
					Local_96.f_148[1] = 153.1271f;
					Local_96.f_117[2 /*3*/] = { -1441.8662f, -3280.6755f, 12.9449f };
					Local_96.f_148[2] = 331.3771f;
					Local_96.f_117[3 /*3*/] = { -1209.3198f, -2789.0227f, 12.9523f };
					Local_96.f_148[3] = 183.2579f;
					Local_96.f_117[4 /*3*/] = { -1239.1879f, -2688.9426f, 12.9449f };
					Local_96.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_96.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_96.f_43[0] = 184.7817f;
					Local_96.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_96.f_175[0] = 91.7761f;
					Local_96.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_96.f_175[1] = 269.7376f;
					Local_96.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_96.f_175[1] = 211.4614f;
					Local_96.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_96.f_175[3] = 148.9204f;
					Local_96.f_228[0] = 10000;
					Local_96.f_228[1] = 10000;
					Local_96.f_228[2] = 10000;
					Local_96.f_228[3] = 10000;
					Local_96.f_242 = 4;
					Local_96.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_96.f_148[0] = 113.298f;
					Local_96.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_96.f_148[1] = 353.0292f;
					Local_96.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_96.f_148[2] = 216.1793f;
					Local_96.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_96.f_148[3] = 347.4008f;
					Local_96.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_96.f_240 = joaat("buzzard");
			Local_96.f_280[0] = 2;
			Local_96.f_291[0] = func_46(2);
			Local_96.f_305[0] = func_45(4);
			Local_96.f_280[1] = 4;
			Local_96.f_291[1] = func_46(4);
			Local_96.f_305[1] = func_45(4);
			Local_96.f_280[2] = 2;
			Local_96.f_291[2] = func_46(2);
			Local_96.f_305[2] = func_45(4);
			if (Local_96.f_12 <= 2 || !func_779())
			{
				Local_96.f_280[3] = 5;
				Local_96.f_291[3] = func_46(5);
				Local_96.f_278 = 4;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_46(4);
				Local_96.f_305[3] = func_45(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_46(2);
				Local_96.f_280[5] = 5;
				Local_96.f_291[5] = func_46(5);
				Local_96.f_278 = 6;
			}
			else
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_46(4);
				Local_96.f_305[3] = func_45(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_46(2);
				Local_96.f_280[5] = 4;
				Local_96.f_291[5] = func_46(4);
				Local_96.f_305[5] = func_45(4);
				Local_96.f_280[6] = 5;
				Local_96.f_291[6] = func_46(5);
				Local_96.f_278 = 7;
			}
			Local_96.f_255 = func_42();
			if (!func_779())
			{
				Local_96.f_1 = 3;
			}
			else
			{
				Local_96.f_1 = 8;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					if (!func_779())
					{
						Local_96.f_30[0 /*3*/] = { -758.7451f, -1488.6119f, 4.0005f };
						Local_96.f_43[0] = 290.0732f;
					}
					else
					{
						Local_96.f_30[0 /*3*/] = { -758.7451f, -1488.6119f, 4.0005f };
						Local_96.f_43[0] = 290.0732f;
						Local_96.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_96.f_43[1] = 231.5867f;
						Local_96.f_30[2 /*3*/] = { -712.4144f, -1459.3308f, 4.0005f };
						Local_96.f_43[2] = 49.6234f;
						Local_96.f_30[3 /*3*/] = { -729.9052f, -1418.7335f, 4.0005f };
						Local_96.f_43[3] = 229.3317f;
					}
					Local_96.f_117[0 /*3*/] = { -692.5144f, -1384.7744f, 4.1503f };
					Local_96.f_148[0] = 230.0049f;
					Local_96.f_117[1 /*3*/] = { -724.5416f, -1374.0242f, 0.6002f };
					Local_96.f_148[1] = 147.9421f;
					Local_96.f_117[2 /*3*/] = { -763.0113f, -1531.6372f, 4.4284f };
					Local_96.f_148[2] = 22.3204f;
					Local_96.f_117[3 /*3*/] = { -622.6572f, -1346.9967f, 10.7793f };
					Local_96.f_148[3] = 80.7676f;
					Local_96.f_117[4 /*3*/] = { -650.5557f, -1313.3373f, 9.8688f };
					Local_96.f_148[4] = 162.0507f;
					Local_96.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_96.f_148[5] = 225.9002f;
					Local_96.f_117[6 /*3*/] = { -719.8957f, -1300.3997f, 4.1019f };
					Local_96.f_148[6] = 140.0515f;
					Local_96.f_117[7 /*3*/] = { -661.9195f, -1213.2766f, 9.7043f };
					Local_96.f_148[7] = 90.6966f;
					Local_96.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_96.f_148[8] = 226.042f;
					Local_96.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_96.f_148[9] = 79.7294f;
					Local_96.f_243 = 4;
					break;
				
				case 1:
					Local_96.f_30[0 /*3*/] = { 307.4523f, 2835.2383f, 42.4361f };
					Local_96.f_43[0] = 122.9714f;
					Local_96.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_96.f_43[1] = 118.6931f;
					Local_96.f_30[2 /*3*/] = { 356.6689f, 2806.7412f, 52.9669f };
					Local_96.f_43[2] = 26.5272f;
					Local_96.f_30[3 /*3*/] = { 310.0119f, 2875.7124f, 42.5068f };
					Local_96.f_43[3] = 211.0638f;
					Local_96.f_117[0 /*3*/] = { 346.145f, 2861.5652f, 42.4603f };
					Local_96.f_148[0] = 203.4084f;
					Local_96.f_117[1 /*3*/] = { 264.2803f, 2872.2751f, 42.6105f };
					Local_96.f_148[1] = 123.7895f;
					Local_96.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_96.f_148[2] = 115.9053f;
					Local_96.f_117[3 /*3*/] = { 290.606f, 2810.9065f, 47.9461f };
					Local_96.f_148[3] = 330.5807f;
					Local_96.f_117[4 /*3*/] = { 341.4013f, 2863.1812f, 42.4361f };
					Local_96.f_148[4] = 116.311f;
					Local_96.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_96.f_148[5] = 145.855f;
					Local_96.f_117[6 /*3*/] = { 301.125f, 2814.3276f, 42.4361f };
					Local_96.f_148[6] = 41.353f;
					Local_96.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_96.f_148[7] = 266.0158f;
					Local_96.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_96.f_148[8] = 290.3963f;
					Local_96.f_117[9 /*3*/] = { 269.1239f, 2866.5085f, 73.1797f };
					Local_96.f_148[9] = 243.2495f;
					Local_96.f_243 = 4;
					break;
				
				case 2:
					Local_96.f_30[0 /*3*/] = { 714.882f, 4175.2964f, 39.7092f };
					Local_96.f_43[0] = 280.2862f;
					Local_96.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_96.f_43[1] = 32.9157f;
					Local_96.f_30[2 /*3*/] = { 750.664f, 4238.8496f, 54.7686f };
					Local_96.f_43[2] = 106.2954f;
					Local_96.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_96.f_43[3] = 272.3807f;
					Local_96.f_117[0 /*3*/] = { 724.4003f, 4198.8877f, 39.7092f };
					Local_96.f_148[0] = 254.5411f;
					Local_96.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_96.f_148[1] = 183.227f;
					Local_96.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_96.f_148[2] = 338.6039f;
					Local_96.f_117[3 /*3*/] = { 849.6327f, 4224.7793f, 49.5859f };
					Local_96.f_148[3] = 71.8258f;
					Local_96.f_117[4 /*3*/] = { 856.303f, 4257.4663f, 49.48f };
					Local_96.f_148[4] = 179.6626f;
					Local_96.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_96.f_148[5] = 272.7491f;
					Local_96.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_96.f_148[6] = 270.8252f;
					Local_96.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_96.f_148[7] = 180.4937f;
					Local_96.f_117[8 /*3*/] = { 876.0669f, 4247.9053f, 48.9739f };
					Local_96.f_148[8] = 107.4297f;
					Local_96.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_96.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_96.f_30[0 /*3*/] = { 3279.4973f, 5204.4556f, 17.3168f };
					Local_96.f_43[0] = 117.7311f;
					Local_96.f_30[1 /*3*/] = { 3280.456f, 5166.3433f, 17.9564f };
					Local_96.f_43[1] = 46.3958f;
					Local_96.f_30[2 /*3*/] = { 3258.5093f, 5225.8696f, 17.2293f };
					Local_96.f_43[2] = 189.2091f;
					Local_96.f_30[3 /*3*/] = { 3302.8962f, 5136.244f, 17.3101f };
					Local_96.f_43[3] = 50.0778f;
					Local_96.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_96.f_148[0] = 229.5714f;
					Local_96.f_117[1 /*3*/] = { 3309.2542f, 5167.526f, 17.4491f };
					Local_96.f_148[1] = 136.4963f;
					Local_96.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_96.f_148[2] = 88.3908f;
					Local_96.f_117[3 /*3*/] = { 3222.684f, 5187.7344f, 30.0174f };
					Local_96.f_148[3] = 271.8922f;
					Local_96.f_117[4 /*3*/] = { 3217.3506f, 5145.03f, 18.4178f };
					Local_96.f_148[4] = 316.4374f;
					Local_96.f_117[5 /*3*/] = { 3155.5615f, 5285.2456f, 28.0707f };
					Local_96.f_148[5] = 246.1521f;
					Local_96.f_117[6 /*3*/] = { 3311.9353f, 5176.247f, 18.6196f };
					Local_96.f_148[6] = 198.8985f;
					Local_96.f_117[7 /*3*/] = { 3230.1418f, 5200.801f, 22.8278f };
					Local_96.f_148[7] = 257.2332f;
					Local_96.f_117[8 /*3*/] = { 3420.0693f, 5169.1333f, 4.8574f };
					Local_96.f_148[8] = 104.7808f;
					Local_96.f_117[9 /*3*/] = { 3242.8682f, 5035.1655f, 20.011f };
					Local_96.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_96.f_30[0 /*3*/] = { -1736.9886f, 162.0228f, 63.371f };
					Local_96.f_43[0] = 306.7662f;
					Local_96.f_30[1 /*3*/] = { -1736.9382f, 137.1991f, 63.371f };
					Local_96.f_43[1] = 303.3918f;
					Local_96.f_30[2 /*3*/] = { -1756.2722f, 172.5584f, 63.3711f };
					Local_96.f_43[2] = 302.365f;
					Local_96.f_30[3 /*3*/] = { -1710.7477f, 129.7035f, 63.3716f };
					Local_96.f_43[3] = 304.9788f;
					Local_96.f_117[0 /*3*/] = { -1674.8676f, 141.795f, 62.4627f };
					Local_96.f_148[0] = 30.9787f;
					Local_96.f_117[1 /*3*/] = { -1668.2645f, 190.8298f, 60.7573f };
					Local_96.f_148[1] = 97.3626f;
					Local_96.f_117[2 /*3*/] = { -1661.1346f, 236.6263f, 61.391f };
					Local_96.f_148[2] = 218.2636f;
					Local_96.f_117[3 /*3*/] = { -1706.4431f, 186.8354f, 62.9277f };
					Local_96.f_148[3] = 257.6324f;
					Local_96.f_117[4 /*3*/] = { -1722.3949f, 227.362f, 60.7408f };
					Local_96.f_148[4] = 244.6777f;
					Local_96.f_117[5 /*3*/] = { -1623.3435f, 165.8969f, 59.7796f };
					Local_96.f_148[5] = 12.745f;
					Local_96.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_96.f_148[6] = 196.3743f;
					Local_96.f_117[7 /*3*/] = { -1796.2153f, 150.6246f, 67.7735f };
					Local_96.f_148[7] = 283.2556f;
					Local_96.f_117[8 /*3*/] = { -1774.0328f, 105.8673f, 69.3384f };
					Local_96.f_148[8] = 243.4268f;
					Local_96.f_117[9 /*3*/] = { -1594.7167f, 210.4007f, 73.3379f };
					Local_96.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_96.f_240 = joaat("buzzard");
			Local_96.f_280[0] = 2;
			Local_96.f_291[0] = func_46(2);
			Local_96.f_280[1] = 4;
			Local_96.f_291[1] = func_46(4);
			Local_96.f_305[1] = func_45(4);
			Local_96.f_280[2] = 2;
			Local_96.f_291[2] = func_46(2);
			if (Local_96.f_12 <= 2 || !func_779())
			{
				Local_96.f_280[3] = 5;
				Local_96.f_291[3] = func_46(5);
				Local_96.f_278 = 4;
			}
			else if (Local_96.f_12 == 3)
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_46(4);
				Local_96.f_305[3] = func_45(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_46(2);
				Local_96.f_280[5] = 5;
				Local_96.f_291[5] = func_46(5);
				Local_96.f_278 = 6;
			}
			else
			{
				Local_96.f_280[3] = 4;
				Local_96.f_291[3] = func_46(4);
				Local_96.f_305[3] = func_45(4);
				Local_96.f_280[4] = 2;
				Local_96.f_291[4] = func_46(2);
				Local_96.f_280[5] = 4;
				Local_96.f_291[5] = func_46(4);
				Local_96.f_305[5] = func_45(4);
				Local_96.f_280[6] = 5;
				Local_96.f_291[6] = func_46(5);
				Local_96.f_278 = 7;
			}
			Local_96.f_255 = func_42();
			if (!func_779())
			{
				Local_96.f_1 = 4;
			}
			else
			{
				Local_96.f_1 = 9;
			}
			Local_96.f_2 = Local_96.f_29;
			switch (Local_96.f_29)
			{
				case 0:
					Local_96.f_30[0 /*3*/] = { 1139.9434f, -1289.1946f, 33.6127f };
					Local_96.f_43[0] = 180.7904f;
					Local_96.f_30[1 /*3*/] = { 1156.358f, -1327.4016f, 33.7312f };
					Local_96.f_43[1] = 269.3001f;
					Local_96.f_30[2 /*3*/] = { 1204.9634f, -1265.3337f, 34.2267f };
					Local_96.f_43[2] = 180.39f;
					Local_96.f_30[3 /*3*/] = { 1220.9541f, -1214.8834f, 34.9485f };
					Local_96.f_43[3] = 276.7351f;
					Local_96.f_117[0 /*3*/] = { 1195.5559f, -1277.9141f, 34.3601f };
					Local_96.f_148[0] = 329.9165f;
					Local_96.f_117[1 /*3*/] = { 1197.8986f, -1297.3856f, 34.1985f };
					Local_96.f_148[1] = 264.7702f;
					Local_96.f_117[2 /*3*/] = { 1168.4347f, -1382.3054f, 33.784f };
					Local_96.f_148[2] = 359.5203f;
					Local_96.f_117[3 /*3*/] = { 1160.7958f, -1253.6257f, 33.5659f };
					Local_96.f_148[3] = 111.3101f;
					Local_96.f_117[4 /*3*/] = { 1178.2004f, -1272.3988f, 33.8277f };
					Local_96.f_148[4] = 176.3058f;
					Local_96.f_117[5 /*3*/] = { 1185.2825f, -1355.4935f, 33.9506f };
					Local_96.f_148[5] = 213.1969f;
					Local_96.f_117[6 /*3*/] = { 1217.7041f, -1381.6592f, 34.3114f };
					Local_96.f_148[6] = 275.2275f;
					Local_96.f_117[7 /*3*/] = { 1193.3881f, -1257.564f, 34.2036f };
					Local_96.f_148[7] = 220.0349f;
					Local_96.f_117[8 /*3*/] = { 1174.8335f, -1381.0643f, 41.8297f };
					Local_96.f_148[8] = 359.15f;
					Local_96.f_117[9 /*3*/] = { 1154.6473f, -1338.6132f, 33.7034f };
					Local_96.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_96.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_96.f_43[0] = 247.4892f;
					Local_96.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_96.f_43[1] = 66.129f;
					Local_96.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_96.f_43[2] = 340.0713f;
					Local_96.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_96.f_43[3] = 245.7466f;
					Local_96.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_96.f_148[0] = 252.6017f;
					Local_96.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_96.f_148[1] = 245.262f;
					Local_96.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_96.f_148[2] = 44.7945f;
					Local_96.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_96.f_148[3] = 255.6518f;
					Local_96.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_96.f_148[4] = 124.8391f;
					Local_96.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_96.f_148[5] = 188.9979f;
					Local_96.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_96.f_148[6] = 159.3613f;
					Local_96.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_96.f_148[7] = 5.7762f;
					Local_96.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_96.f_148[8] = 89.3388f;
					Local_96.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_96.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_96.f_30[0 /*3*/] = { -509.9767f, 1186.8542f, 323.8415f };
					Local_96.f_43[0] = 310.6241f;
					Local_96.f_30[1 /*3*/] = { -398.0129f, 1230.5077f, 324.6416f };
					Local_96.f_43[1] = 166.0191f;
					Local_96.f_30[2 /*3*/] = { -455.6342f, 1141.9984f, 324.9044f };
					Local_96.f_43[2] = 343.1715f;
					Local_96.f_30[3 /*3*/] = { -412.4245f, 1133.0317f, 324.9044f };
					Local_96.f_43[3] = 342.4984f;
					Local_96.f_117[0 /*3*/] = { -426.3299f, 1216.6597f, 324.7585f };
					Local_96.f_148[0] = 248.8594f;
					Local_96.f_117[1 /*3*/] = { -363.2418f, 1266.7606f, 329.8745f };
					Local_96.f_148[1] = 195.7758f;
					Local_96.f_117[2 /*3*/] = { -453.9799f, 1074.9916f, 326.6897f };
					Local_96.f_148[2] = 28.6127f;
					Local_96.f_117[3 /*3*/] = { -392.485f, 1078.5618f, 323.2558f };
					Local_96.f_148[3] = 296.7476f;
					Local_96.f_117[4 /*3*/] = { -413.6003f, 1086.8307f, 326.6821f };
					Local_96.f_148[4] = 240.9422f;
					Local_96.f_117[5 /*3*/] = { -381.0179f, 1141.2689f, 321.6503f };
					Local_96.f_148[5] = 2.473f;
					Local_96.f_117[6 /*3*/] = { -482.3448f, 1118.6459f, 319.0963f };
					Local_96.f_148[6] = 343.6776f;
					Local_96.f_117[7 /*3*/] = { -397.3531f, 1127.5273f, 321.7288f };
					Local_96.f_148[7] = 0.2495f;
					Local_96.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_96.f_148[8] = 72.7889f;
					Local_96.f_117[9 /*3*/] = { -424.5132f, 1225.0759f, 324.7585f };
					Local_96.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_96.f_30[0 /*3*/] = { 341.0539f, 3569.7888f, 32.4743f };
					Local_96.f_43[0] = 351.0324f;
					Local_96.f_30[1 /*3*/] = { 373.5018f, 3512.3215f, 33.1732f };
					Local_96.f_43[1] = 3.5452f;
					Local_96.f_30[2 /*3*/] = { 353.5068f, 3483.8394f, 34.0848f };
					Local_96.f_43[2] = 7.3237f;
					Local_96.f_30[3 /*3*/] = { 245.8774f, 3580.8813f, 32.9612f };
					Local_96.f_43[3] = 332.0844f;
					Local_96.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_96.f_148[0] = 2.6416f;
					Local_96.f_117[1 /*3*/] = { 445.3309f, 3512.0876f, 32.9825f };
					Local_96.f_148[1] = 171.8638f;
					Local_96.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_96.f_148[2] = 257.0332f;
					Local_96.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_96.f_148[3] = 91.7869f;
					Local_96.f_117[4 /*3*/] = { 395.8559f, 3577.0251f, 32.2922f };
					Local_96.f_148[4] = 4.2016f;
					Local_96.f_117[5 /*3*/] = { 380.2437f, 3560.9915f, 32.342f };
					Local_96.f_148[5] = 339.729f;
					Local_96.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_96.f_148[6] = 359.2033f;
					Local_96.f_117[7 /*3*/] = { 476.5523f, 3557.3276f, 32.2386f };
					Local_96.f_148[7] = 333.6298f;
					Local_96.f_117[8 /*3*/] = { 325.6323f, 3390.6663f, 35.4033f };
					Local_96.f_148[8] = 73.2788f;
					Local_96.f_117[9 /*3*/] = { 461.6116f, 3535.2573f, 32.318f };
					Local_96.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_96.f_30[0 /*3*/] = { 1493.1655f, 1177.5554f, 113.2209f };
					Local_96.f_43[0] = 42.1535f;
					Local_96.f_30[1 /*3*/] = { 1433.4757f, 1179.5436f, 113.1842f };
					Local_96.f_43[1] = 315.0261f;
					Local_96.f_30[2 /*3*/] = { 1471.4857f, 1108.9673f, 113.3343f };
					Local_96.f_43[2] = 1.2527f;
					Local_96.f_30[3 /*3*/] = { 1448.9137f, 1110.6216f, 113.3363f };
					Local_96.f_43[3] = 1.9403f;
					Local_96.f_117[0 /*3*/] = { 1485.6221f, 1047.3883f, 113.334f };
					Local_96.f_148[0] = 352.9674f;
					Local_96.f_117[1 /*3*/] = { 1461.5406f, 1083.6578f, 113.3344f };
					Local_96.f_148[1] = 88.8285f;
					Local_96.f_117[2 /*3*/] = { 1411.8738f, 1126.9602f, 113.3341f };
					Local_96.f_148[2] = 177.2297f;
					Local_96.f_117[3 /*3*/] = { 1442.4966f, 1148.4688f, 113.3342f };
					Local_96.f_148[3] = 273.1487f;
					Local_96.f_117[4 /*3*/] = { 1406.4763f, 1256.6952f, 106.6555f };
					Local_96.f_148[4] = 225.394f;
					Local_96.f_117[5 /*3*/] = { 1464.077f, 1134.8076f, 113.3227f };
					Local_96.f_148[5] = 175.5423f;
					Local_96.f_117[6 /*3*/] = { 1410.3141f, 1162.3165f, 113.3342f };
					Local_96.f_148[6] = 191.1842f;
					Local_96.f_117[7 /*3*/] = { 1487.483f, 1102.2426f, 113.3346f };
					Local_96.f_148[7] = 269.6831f;
					Local_96.f_117[8 /*3*/] = { 1391.0343f, 1154.2233f, 113.4433f };
					Local_96.f_148[8] = 29.4203f;
					Local_96.f_117[9 /*3*/] = { 1484.8704f, 1039.553f, 113.2318f };
					Local_96.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_42()//Position - 0x5BE5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_96.f_255 != -1)
	{
		return Local_96.f_255;
	}
	if (Local_96.f_278 == 0)
	{
		return ((4 * Global_262145.f_10859 /* Tunable: URBANWARFAREENEMYVEHSPAWNS */) + Global_262145.f_10860 /* Tunable: URBANWARFAREENEMYONFOOTSPAWNS */);
	}
	iVar2 = func_99();
	iVar3 = func_44(iVar2);
	iVar4 = func_43(iVar3);
	switch (Local_96.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_96.f_278)
			{
				iVar0 = (iVar0 + ((Local_96.f_291[iVar1] * iVar4) + Local_96.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_43(int iParam0)//Position - 0x5C8C
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x5CDD
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_96.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_96.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_96.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_96.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)//Position - 0x5D80
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_779())
			{
				iVar0 = Global_262145.f_12056 /* Tunable: COMPETITIVE_KILL_LIST_WAVE_TYPE_FOOT_ENEMIES */;
			}
			else
			{
				iVar0 = Global_262145.f_11776 /* Tunable: KILL_LIST_WAVE_TYPE_FOOT_ENEMIES */;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)//Position - 0x5DBF
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_779())
			{
				iVar0 = Global_262145.f_12057 /* Tunable: COMPETITIVE_KILL_LIST_WAVE_TYPE_AIRCRAFT_ENEMIES */;
			}
			else
			{
				iVar0 = Global_262145.f_11777 /* Tunable: KILL_LIST_WAVE_TYPE_AIRCRAFT_ENEMIES */;
			}
			break;
		
		case 5:
			if (func_779())
			{
				iVar0 = Global_262145.f_12058 /* Tunable: COMPETITIVE_KILL_LIST_WAVE_TYPE_BOSS_ENEMIES */;
			}
			else
			{
				iVar0 = Global_262145.f_11778 /* Tunable: KILL_LIST_WAVE_TYPE_BOSS_ENEMIES */;
			}
			break;
		
		case 4:
			if (func_779())
			{
				iVar0 = Global_262145.f_12055 /* Tunable: COMPETITIVE_KILL_LIST_WAVE_TYPE_GROUND_VEHICLE_ENEMIES */;
			}
			else
			{
				iVar0 = Global_262145.f_11775 /* Tunable: KILL_LIST_WAVE_TYPE_GROUND_VEHICLE_ENEMIES */;
			}
			break;
	}
	return iVar0;
}

int func_47(int iParam0)//Position - 0x5E42
{
	if (!func_779())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_48()//Position - 0x5EC8
{
	Local_96.f_252 = 0;
	Local_96.f_302 = 0;
	Local_96.f_317 = 0;
	Local_96.f_316 = 0;
}

int func_49()//Position - 0x5EE7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_32(Local_96.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_50()//Position - 0x5F1F
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_96.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_96.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_99() == 4)
				{
					return 2;
				}
				else if (func_99() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_51()//Position - 0x5F9F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_110(Local_96.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_52(int iParam0)//Position - 0x5FD0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	if (Local_96.f_318 == 0 || Local_96.f_318 == func_40())
	{
		if (func_99() == 2 || func_99() == 5)
		{
			return 0;
		}
	}
	if (func_99() == 3 || func_99() == 4)
	{
		if (Local_96.f_317 >= func_39())
		{
			iVar0 = Local_96.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_96.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_96.f_317 == 2)
	{
		iVar0 = Local_96.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_96.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_96.f_318 == func_40())
	{
		return 0;
	}
	if (Local_96.f_318 == func_72())
	{
		return 0;
	}
	if (func_99() == 1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_48[(20 + iParam0)]))
	{
		if (func_71(Local_96.f_239) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
		{
			if (func_69(&iVar3))
			{
				if (func_56(Local_96.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_55(&(Local_96.f_48[(20 + iParam0)]), 22, Local_96.f_239, Local_96.f_117[iVar3 /*3*/], Local_96.f_148[iVar3], 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), iLocal_1518);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), true, 0f);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), joaat("WEAPON_RPG"), 25000, true, true);
						}
						else
						{
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), joaat("WEAPON_ADVANCEDRIFLE"), 25000, true);
						}
						fVar6 = (30f * func_54());
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), SYSTEM::ROUND(fVar6));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), 42, true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), SYSTEM::ROUND((200f * Global_262145.f_165 /* Tunable: AI_HEALTH */)), 0, 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), true);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), 151, false);
						iVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]));
						fVar5 = func_53();
						iVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(iVar4)));
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_96.f_48[(20 + iParam0)]), iVar4, 0, 0);
						bVar7 = (20 + iParam0);
						if (BitTest(Local_96.f_272[func_92(bVar7)], func_91(bVar7)))
						{
							MISC::CLEAR_BIT(&(Local_96.f_272[func_92(bVar7)]), func_91(bVar7));
						}
						Local_96.f_247++;
						Local_96.f_317++;
						Local_96.f_250++;
						Local_96.f_318++;
						func_107(&(Local_96.f_414[bVar7 /*2*/]));
						func_21(&(Local_96.f_414[bVar7 /*2*/]), 0, 0);
						if (func_23(&(Local_96.f_364[bVar7 /*2*/])))
						{
							func_107(&(Local_96.f_364[bVar7 /*2*/]));
						}
						func_21(&(Local_3431[iVar3 /*2*/]), 0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_96.f_48[bVar7]), true, iLocal_1517);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_53()//Position - 0x6412
{
	if (func_779())
	{
		return Global_262145.f_12044 /* Tunable: COMPETITIVE_KILL_LIST_ENEMY_HEALTH */;
	}
	return Global_262145.f_11764 /* Tunable: KILL_LIST_ENEMY_HEALTH */;
}

float func_54()//Position - 0x6435
{
	if (func_779())
	{
		return Global_262145.f_12046 /* Tunable: COMPETITIVE_KILL_LIST_ENEMY_GUN_ACCURACY */;
	}
	return Global_262145.f_11766 /* Tunable: KILL_LIST_ENEMY_GUN_ACCURACY */;
}

int func_55(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x6458
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_56(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x64B7
{
	Global_2635562.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (fParam14 > 0f)
	{
		if (func_63(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_57(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635562.f_2++;
	return 1;
}

int func_57(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x65C9
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_883(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_883(bVar1, 1, 1))
		{
			if (!func_16(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_58(bVar1) || !bParam10) && !Global_2657921[bVar1 /*463*/].f_270)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(bVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(bVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x6781
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657921[iParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

Vector3 func_59(bool bParam0)//Position - 0x67AC
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_62() && Global_1845263[iVar0 /*877*/].f_844) && !func_61(Global_1845263[iVar0 /*877*/].f_845))
	{
		return Global_1845263[iVar0 /*877*/].f_845;
	}
	return func_60(bParam0);
}

Vector3 func_60(bool bParam0)//Position - 0x67FF
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_61(struct<3> Param0)//Position - 0x6812
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_62()//Position - 0x683C
{
	return Global_2684312.f_19;
}

int func_63(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0x684A
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam8 == 0)
		{
			if (func_883(bVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_58(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_64(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_60(bVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_64(bool bParam0)//Position - 0x694E
{
	if (func_68(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2706987 = { func_67(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2706987))
	{
		return 1;
	}
	if (func_65(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_65(int iParam0, bool bParam1)//Position - 0x6995
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (func_19(iVar0))
	{
		if (iVar0 == func_66(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x69BE
{
	if (func_19(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_5();
}

struct<13> func_67(bool bParam0)//Position - 0x69E1
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, int iParam1)//Position - 0x69F8
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2706987 = { func_67(iParam0) };
		Global_2707000 = { func_67(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2706987))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707000))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706917, 35, &Global_2706987);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706952, 35, &Global_2707000);
				if (Global_2706917 == Global_2706952)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_69(var uParam0)//Position - 0x6A65
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (!func_70(Local_96.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_23(&(Local_3431[iVar0 /*2*/])) || (func_23(&(Local_3431[iVar0 /*2*/])) && func_20(&(Local_3431[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_70(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x6ACA
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_71(int iParam0)//Position - 0x6B11
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_72()//Position - 0x6B2F
{
	int iVar0;
	int iVar1;
	
	if (Local_96.f_279 == 0)
	{
		iVar0 = Local_96.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_96.f_279)
		{
			iVar0 = (iVar0 + Local_96.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_73()//Position - 0x6B73
{
	int iVar0;
	int iVar1;
	
	switch (Local_96.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_96.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_74(bool bParam0)//Position - 0x6BC8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_99() == 3)
	{
		return 0;
	}
	if (Local_96.f_242 < iVar0)
	{
	}
	if (Local_96.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_99() > 1)
	{
		iVar1 = func_89();
		if (Local_96.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_71(Local_96.f_240) && func_71(Local_96.f_239))
	{
		if (func_75(bParam0))
		{
			if (BitTest(Local_96.f_245, bParam0))
			{
				Local_96.f_249++;
				Local_96.f_251++;
				Local_96.f_252++;
				MISC::CLEAR_BIT(&(Local_96.f_245), bParam0);
				if (!BitTest(Local_96.f_3, 19))
				{
					MISC::SET_BIT(&(Local_96.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_75(bool bParam0)//Position - 0x6C7D
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_81(bParam0))
		{
			if (func_76(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_76(bool bParam0)//Position - 0x6CA7
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	
	if (func_110(Local_96.f_73[bParam0]) && BitTest(Local_96.f_245, bParam0))
	{
		if (func_80(Local_96.f_73[bParam0]))
		{
			if (Local_96.f_116 <= 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0])) == joaat("insurgent"))
				{
					Local_96.f_116 = 2;
				}
				else
				{
					Local_96.f_116 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0])) + 1;
					if (Local_96.f_116 > 4)
					{
						Local_96.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_96.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_48[(bParam0 * 4 + iVar6)]))
				{
					if (func_71(Local_96.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_79(&(Local_96.f_48[(bParam0 * 4 + iVar6)]), Local_96.f_73[bParam0], 22, Local_96.f_239, iVar4, 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), iLocal_1518);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true, 0f);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), joaat("WEAPON_APPISTOL"), 25000, false);
							if (func_78())
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), joaat("WEAPON_ADVANCEDRIFLE"), 25000, true);
							}
							else
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), joaat("WEAPON_ADVANCEDRIFLE"), 25000, true);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_54());
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 3, false);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 0, true);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_262145.f_165 /* Tunable: AI_HEALTH */)), 0, 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 52, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 53, true);
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 151, false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]))))
							{
								if (iVar6 == 0)
								{
									PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_77());
									PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 50);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 52, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 53, true);
									PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
								}
								fVar0 = Global_262145.f_12028 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE */;
								fVar1 = Global_262145.f_12029 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE_CLOSE */;
								fVar2 = Global_262145.f_12030 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_CLOSE_DISTANCE */;
								fVar3 = Global_262145.f_12031 /* Tunable: URBANW_HOMING_ROCKET_TURN_RATE_MODIFIER */;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 26, fVar3);
							}
							else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]))))
							{
								PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_77());
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 52, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 53, true);
								fVar0 = Global_262145.f_12028 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE */;
								fVar1 = Global_262145.f_12029 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE_CLOSE */;
								fVar2 = Global_262145.f_12030 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_CLOSE_DISTANCE */;
								fVar3 = Global_262145.f_12031 /* Tunable: URBANW_HOMING_ROCKET_TURN_RATE_MODIFIER */;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 26, fVar3);
							}
							bVar7 = (bParam0 * 4 + iVar6);
							if (BitTest(Local_96.f_272[func_92(bVar7)], func_91(bVar7)))
							{
								MISC::CLEAR_BIT(&(Local_96.f_272[func_92(bVar7)]), func_91(bVar7));
							}
							PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), true, iLocal_1517);
							Local_96.f_250++;
							func_107(&(Local_96.f_414[(bParam0 * 4 + iVar6) /*2*/]));
							func_21(&(Local_96.f_414[(bParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_23(&(Local_96.f_364[(bParam0 * 4 + iVar6) /*2*/])))
							{
								func_107(&(Local_96.f_364[(bParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_96.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_32(Local_96.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[(bParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_96.f_73[bParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_77()//Position - 0x73E4
{
	if (func_779())
	{
		return Global_262145.f_12047 /* Tunable: COMPETITIVE_KILL_LIST_ENEMY_MISSILE_ACCURACY */;
	}
	return Global_262145.f_11767 /* Tunable: KILL_LIST_ENEMY_MISSILE_ACCURACY */;
}

int func_78()//Position - 0x7407
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7425
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_80(int iParam0)//Position - 0x74AD
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_81(bool bParam0)//Position - 0x74CF
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	struct<3> Var12;
	var uVar15;
	bool bVar16;
	
	iVar0 = func_99();
	Local_96.f_240 = func_44(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_73[bParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_96.f_116)
		{
			iVar3 = (bParam0 * 4 + iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_71(Local_96.f_240) && !BitTest(Local_96.f_245, bParam0))
		{
			fVar10 = 300f;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_96.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_96.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_96.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_96.f_242)
			{
				if (func_88(iVar11))
				{
					func_87(Local_96.f_240, iVar11, &Var12, &uVar15);
					if (!func_70(Var12, 0f, 0f, 0f, 0))
					{
						if (func_56(Var12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0, 0))
						{
							Var4 = { Var12 };
							fVar7 = uVar15;
							iVar8 = 1;
							func_8(&(Local_96.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_96.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				bVar16 = true;
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_96.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_96.f_240))
				{
					bVar16 = false;
				}
				if (func_86(bParam0))
				{
					if (func_83(&(Local_96.f_73[bParam0]), Local_96.f_240, Var4, fVar7, 1, 1, 1, 0, bVar16, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), 2);
						VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), 2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), true, true, false);
						VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), false);
						VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_96.f_240))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]));
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]));
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), false);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_96.f_240))
						{
							VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), 3);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]));
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), 30f);
							VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), true);
							VEHICLE::SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), true);
							fVar1 = 500f;
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), SYSTEM::ROUND(fVar1), 0, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), true, 1);
						}
						if (func_99() == 5)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_82());
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), SYSTEM::ROUND(fVar1), 0, 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), SYSTEM::ROUND(fVar1));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), false);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), fVar1);
							VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), fVar1);
						}
						if (func_23(&(Local_96.f_336[bParam0 /*2*/])))
						{
							func_107(&(Local_96.f_336[bParam0 /*2*/]));
						}
						MISC::CLEAR_BIT(&(Local_96.f_253), bParam0);
						MISC::SET_BIT(&(Local_96.f_245), bParam0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), true, iLocal_1517);
						if (BitTest(Local_96.f_271, bParam0))
						{
							MISC::CLEAR_BIT(&(Local_96.f_271), bParam0);
						}
						if (BitTest(Local_96.f_303, bParam0))
						{
							MISC::CLEAR_BIT(&(Local_96.f_303), bParam0);
						}
						if (Local_96.f_240 == joaat("hydra") || Local_96.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_73[bParam0]))
	{
		return 0;
	}
	return 1;
}

var func_82()//Position - 0x7945
{
	if (func_779())
	{
		return Global_262145.f_12045 /* Tunable: COMPETITIVE_KILL_LIST_BOSS_HEALTH */;
	}
	return Global_262145.f_11765 /* Tunable: KILL_LIST_BOSS_HEALTH */;
}

int func_83(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x7968
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2738587.f_6762 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_84(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_84(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x7A71
{
	int iVar0;
	
	if (func_85(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635562.f_3230[1 /*6*/].f_5 == iParam5 && Global_2635562.f_3230[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635562.f_3230[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635562.f_3230[iVar0 /*6*/] = { Global_2635562.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635562.f_3230[1 /*6*/] = { Param0 };
		Global_2635562.f_3230[1 /*6*/].f_3 = fParam3;
		Global_2635562.f_3230[1 /*6*/].f_4 = iParam4;
		Global_2635562.f_3230[1 /*6*/].f_5 = iParam5;
	}
}

int func_85(int iParam0, struct<3> Param1, int iParam4)//Position - 0x7B44
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_86(bool bParam0)//Position - 0x7BE2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (BitTest(Local_730[iVar0 /*18*/].f_6, bParam0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_87(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x7C2C
{
	bool bVar0;
	
	bVar0 = (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0));
	switch (Local_96.f_27)
	{
		case joaat("rhino"):
			if (!func_70(Local_96.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_96.f_159[iParam1 /*3*/] };
				*uParam3 = Local_96.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_70(Local_96.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_96.f_159[iParam1 /*3*/] };
				*uParam3 = Local_96.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_96.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.1892f, -2572.8677f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.8428f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.1886f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.3334f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.9421f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.8442f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.6818f, -2725.7065f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.9856f, 4600.0435f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.5337f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.1166f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.9856f, 4600.0435f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.9537f, 4635.8574f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.4869f, 4843.9814f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.9537f, 4635.8574f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.0957f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.6514f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.8843f, -1955.9698f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.4663f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.1937f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.1937f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.7975f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.8453f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.7864f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.5101f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_96.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.7793f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.9587f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.7485f, -1708.6348f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.7541f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.1196f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.9482f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.4634f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.1567f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.2472f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.4014f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.5725f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.5667f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.0435f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.4834f, 3175.8672f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.4722f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.9498f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.8784f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.4653f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.4247f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.9578f, 5957.4653f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.2356f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.4465f, 4758.9004f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.1272f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.6355f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.5488f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.6394f, 5482.4844f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.2378f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.4795f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.1648f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.8242f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.7891f, 1493.7218f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.4761f, 1366.4535f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.1268f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.6829f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.6982f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.4968f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_96.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.4414f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.4328f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.6221f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.4901f, -1131.3379f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.4141f, -1518.3896f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.8285f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.2275f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.9093f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.3257f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.7699f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.3021f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.6508f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.7725f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.2373f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.2725f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.4447f, 3430.1528f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.7927f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.4534f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.4552f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.0144f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.2203f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.8916f, 1586.2098f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.8656f, 1852.8563f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.9591f, 1717.2666f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.4127f, 1297.0952f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.1743f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_88(int iParam0)//Position - 0x90D4
{
	if (Local_96.f_228[iParam0] > 0)
	{
		if (!func_23(&(Local_96.f_207[iParam0 /*2*/])))
		{
			func_21(&(Local_96.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_20(&(Local_96.f_207[iParam0 /*2*/]), Local_96.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_23(&(Local_96.f_186[iParam0 /*2*/])))
	{
		if (!func_20(&(Local_96.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_89()//Position - 0x9152
{
	return Local_96.f_291[Local_96.f_279];
}

void func_90(int iParam0, int iParam1)//Position - 0x9166
{
	struct<4> Var0;
	
	Var0.f_0 = -1257215590;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iParam1, Var0.f_0);
	}
}

int func_91(bool bParam0)//Position - 0x919A
{
	if (bParam0 < 31)
	{
		return bParam0;
	}
	else if (bParam0 < 62)
	{
		return (bParam0 - 31);
	}
	return (bParam0 - func_92(bParam0) * 31);
}

int func_92(bool bParam0)//Position - 0x91CB
{
	if (bParam0 < 31)
	{
		return 0;
	}
	else if (bParam0 < 62)
	{
		return 1;
	}
	return (bParam0 / 31);
}

void func_93(int* iParam0)//Position - 0x91F1
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_94(bool bParam0)//Position - 0x9263
{
	if (Local_96.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (BitTest(Local_96.f_272[func_92(bParam0)], func_91(bParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_95(bool bParam0)//Position - 0x9297
{
	return func_96(bParam0);
}

int func_96(int iParam0)//Position - 0x92A5
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[iParam0]), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_96.f_48[iParam0]), false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	return 0;
}

int func_97(bool bParam0)//Position - 0x92E8
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (BitTest(Local_96.f_271, bParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (BitTest(Local_96.f_271, bParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_96.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_96.f_27 == joaat("hydra"))
		{
			if (BitTest(Local_96.f_271, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_98(bool bParam0, int iParam1)//Position - 0x9366
{
	struct<4> Var0;
	
	Var0.f_0 = -289807473;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = bParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iParam1, Var0.f_0);
	}
}

int func_99()//Position - 0x939A
{
	return Local_96.f_280[Local_96.f_279];
}

void func_100(int iParam0, bool bParam1)//Position - 0x93AE
{
	struct<4> Var0;
	
	Var0.f_0 = -1195009211;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = bParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iParam0, Var0.f_0);
	}
}

int func_101(bool bParam0)//Position - 0x93E2
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0 < 0 || bParam0 >= 5)
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), false))
			{
				if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(iVar1, NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(iVar1, NETWORK::NET_TO_VEH(Local_96.f_73[bParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

void func_102(int iParam0, bool bParam1)//Position - 0x947C
{
	struct<4> Var0;
	
	Var0.f_0 = -1529273040;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = bParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iParam0, Var0.f_0);
	}
}

bool func_103(int iParam0)//Position - 0x94B0
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[iParam0]));
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_73[iParam0]), false);
	}
	return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_73[iParam0]), false);
}

int func_104()//Position - 0x9506
{
	int iVar0;
	int iVar1;
	
	switch (Local_96.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_96.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_96.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_105(int iParam0)//Position - 0x957F
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_883(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_106()//Position - 0x95DC
{
	if (func_779())
	{
		return Global_262145.f_12038 /* Tunable: COMPETITIVE_KILL_LIST_EVENT_EXPIRY_TIME */;
	}
	return Global_262145.f_11761 /* Tunable: KILL_LIST_EVENT_EXPIRY_TIME */;
}

void func_107(var uParam0)//Position - 0x95FF
{
	uParam0->f_1 = 0;
}

void func_108(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)//Position - 0x960C
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam15 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Param0, 15, iParam15, Param0.f_0);
	}
}

int func_109(int iParam0, int iParam1, bool bParam2)//Position - 0x963B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_883(iVar2, 1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
				{
					if (iVar2 != PLAYER::PLAYER_ID() || iParam1)
					{
						MISC::SET_BIT(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_110(int iParam0)//Position - 0x96B1
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_111(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x96D1
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_112()//Position - 0x970A
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_96.f_3, 20))
	{
		return;
	}
	if (!func_23(&uLocal_3475))
	{
		func_21(&uLocal_3475, 0, 0);
		return;
	}
	if (!func_20(&uLocal_3475, 5000, 0))
	{
		return;
	}
	iVar0 = func_113();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(NETWORK::NET_TO_VEH(Local_96.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_26(&(Local_96.f_7[iVar1]));
		}
		iVar1++;
	}
	MISC::SET_BIT(&(Local_96.f_3), 20);
}

int func_113()//Position - 0x9795
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_96.f_12 != 0)
	{
		return Local_96.f_12;
	}
	if (!func_779())
	{
		Local_96.f_12 = 1;
		return Local_96.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (!func_16(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_115())
	{
		Local_96.f_12 = 2;
	}
	else if (iVar1 < func_114())
	{
		Local_96.f_12 = 3;
	}
	else
	{
		Local_96.f_12 = 4;
	}
	return Local_96.f_12;
}

int func_114()//Position - 0x9820
{
	return Global_262145.f_11786 /* Tunable: COMP_KILL_LIST_COMP_MIN_PLAYER_3_VEHICLE_THRESHOLD */;
}

int func_115()//Position - 0x982F
{
	return Global_262145.f_11785 /* Tunable: COMP_KILL_LIST_COMP_MIN_PLAYER_2_VEHICLE_THRESHOLD */;
}

void func_116()//Position - 0x983E
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar0]))
		{
			func_122(iVar0);
			func_121(iVar0, Local_96.f_256[iVar0], Local_96.f_22[iVar0]);
		}
		else if (Local_96.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_122(iVar0);
		}
		iVar0++;
	}
	func_120();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_119(iVar0);
			if (Local_730[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_730[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_730[iVar0 /*18*/].f_9;
					func_118(uVar1, Local_730[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_118(-1, -1, iVar2);
			}
		}
		else if (Local_96.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_119(iVar0);
		}
		iVar0++;
	}
	func_117();
}

void func_117()//Position - 0x9934
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_96.f_465[iVar1 /*4*/].f_1 > Local_96.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_96.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_96.f_465[iVar1 /*4*/];
					uVar4 = Local_96.f_465[iVar1 /*4*/].f_2;
					Local_96.f_465[iVar1 /*4*/].f_1 = Local_96.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_96.f_465[iVar1 /*4*/] = Local_96.f_465[(iVar1 - 1) /*4*/];
					Local_96.f_465[iVar1 /*4*/].f_2 = Local_96.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_96.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_96.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_96.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_118(int iParam0, int iParam1, int iParam2)//Position - 0x9A19
{
	Local_96.f_465[iParam2 /*4*/] = iParam0;
	Local_96.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_96.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_119(int iParam0)//Position - 0x9A46
{
	Local_96.f_465[iParam0 /*4*/] = -1;
	Local_96.f_465[iParam0 /*4*/].f_2 = -1;
	Local_96.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_120()//Position - 0x9A70
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_96.f_594[iVar1 /*4*/].f_1 > Local_96.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_96.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_96.f_594[iVar1 /*4*/];
					uVar4 = Local_96.f_594[iVar1 /*4*/].f_2;
					Local_96.f_594[iVar1 /*4*/].f_1 = Local_96.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_96.f_594[iVar1 /*4*/] = Local_96.f_594[(iVar1 - 1) /*4*/];
					Local_96.f_594[iVar1 /*4*/].f_2 = Local_96.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_96.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_96.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_96.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_121(int iParam0, var uParam1, var uParam2)//Position - 0x9B53
{
	Local_96.f_594[iParam0 /*4*/] = iParam0;
	Local_96.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_96.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_122(int iParam0)//Position - 0x9B80
{
	Local_96.f_594[iParam0 /*4*/] = -1;
	Local_96.f_594[iParam0 /*4*/].f_1 = -1;
	Local_96.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_123()//Position - 0x9BAA
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_113();
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		if (!func_124(bVar1))
		{
			func_107(&(Local_96.f_5));
			return 0;
		}
		if (!BitTest(Local_96.f_13, bVar1))
		{
			func_107(&(Local_96.f_5));
			return 0;
		}
		else if (func_4(NETWORK::NET_TO_VEH(Local_96.f_7[bVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_107(&(Local_96.f_5));
			return 0;
		}
		bVar1++;
	}
	if (!func_23(&(Local_96.f_5)))
	{
		func_21(&(Local_96.f_5), 0, 0);
	}
	else if (func_20(&(Local_96.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_124(bool bParam0)//Position - 0x9C52
{
	if (func_110(Local_96.f_7[bParam0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), -1, false) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_125()//Position - 0x9C84
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_779())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar0]))
		{
			if (func_110(Local_96.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_96.f_12)
	{
		Local_96.f_12 = iVar1;
	}
	if (Local_96.f_12 <= 1)
	{
		MISC::CLEAR_BIT(&(Local_96.f_3), 8);
		if (!func_110(Local_96.f_7[0]))
		{
			if (func_110(Local_96.f_7[iVar2]))
			{
				func_26(&(Local_96.f_7[0]));
				Local_96.f_7[0] = Local_96.f_7[iVar2];
			}
		}
	}
}

void func_126()//Position - 0x9D2A
{
	bool bVar0;
	
	if (!func_779())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_96.f_15 != false;
			}
			else
			{
				bVar0 = Local_96.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_96.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_96.f_413 == -1)
		{
			Local_96.f_413 = func_128();
		}
		if (!func_23(&(Local_96.f_326)))
		{
			func_21(&(Local_96.f_326), 0, 0);
		}
		else if (!BitTest(Local_96.f_3, 4))
		{
			if ((Local_96.f_413 - func_127(&(Local_96.f_326), 0, 0)) < 0)
			{
				MISC::SET_BIT(&(Local_96.f_3), 4);
			}
		}
	}
	else if (func_23(&(Local_96.f_326)))
	{
		func_107(&(Local_96.f_326));
		Local_96.f_413 = (Local_96.f_413 - func_127(&(Local_96.f_326), 0, 0));
	}
}

int func_127(var uParam0, bool bParam1, bool bParam2)//Position - 0x9E06
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

var func_128()//Position - 0x9E4D
{
	if (func_779())
	{
		return Global_262145.f_12048 /* Tunable: COMPETITIVE_KILL_LIST_PLAYER_WAIT_TIMER_2_PLAYER_VEHICLES */;
	}
	return Global_262145.f_11768 /* Tunable: KILL_LIST_PLAYER_WAIT_TIMER_2_PLAYER_VEHICLES */;
}

void func_129()//Position - 0x9E70
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		iLocal_1520[bVar0] = 0;
		iLocal_725[bVar0] = -2;
		iLocal_1525[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	if (Local_96.f_0 != 4)
	{
		bLocal_1315 = false;
		while (bLocal_1315 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_1315)))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_1315));
				if (!func_16(iVar7, 0))
				{
					if (Local_730[bLocal_1315 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					bVar0 = false;
					while (bVar0 < 4)
					{
						func_136(bLocal_1315, bVar0, iVar7);
						bVar0++;
					}
					bVar0 = false;
					bVar0 = false;
					while (bVar0 < 5)
					{
						func_135(bLocal_1315, bVar0);
						bVar0++;
					}
					if (!BitTest(Local_96.f_3, 14))
					{
						if (!BitTest(Local_730[bLocal_1315 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					bVar0 = false;
					while (bVar0 <= 23)
					{
						func_134(bLocal_1315, bVar0);
						bVar0++;
					}
					if (!bVar5)
					{
						if (!BitTest(Local_730[bLocal_1315 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_132(bLocal_1315, iVar7);
					if (func_883(iVar7, 1, 1))
					{
						bVar0 = false;
						bVar0 = false;
						while (bVar0 < 4)
						{
							if (Local_96.f_17[bVar0] == func_5())
							{
								if (BitTest(Local_730[bLocal_1315 /*18*/].f_2, (0 + bVar0)))
								{
									Local_96.f_17[bVar0] = iVar7;
								}
							}
							else if (Local_96.f_17[bVar0] == iVar7 && Local_96.f_241 == 0)
							{
								if (!BitTest(Local_730[bLocal_1315 /*18*/].f_2, (0 + bVar0)))
								{
									Local_96.f_17[bVar0] = func_5();
								}
							}
							bVar0++;
						}
					}
				}
			}
			bLocal_1315++;
		}
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!BitTest(Local_96.f_13, bVar0))
		{
			if (iLocal_1520[bVar0] == func_131() && func_124(bVar0))
			{
				MISC::SET_BIT(&(Local_96.f_13), bVar0);
			}
			if (!BitTest(Local_96.f_14, bVar0))
			{
				if (iLocal_1520[bVar0] >= 1 && func_124(bVar0))
				{
					MISC::SET_BIT(&(Local_96.f_14), bVar0);
				}
			}
			else if (iLocal_1520[bVar0] == 0 || !func_124(bVar0))
			{
				if (BitTest(Local_96.f_14, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_96.f_14), bVar0);
					if (iLocal_1520[bVar0] == 0)
					{
						if (Local_96.f_241 >= 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[bVar0]))
							{
								func_26(&(Local_96.f_7[bVar0]));
							}
						}
					}
				}
			}
			if (!BitTest(Local_96.f_15, bVar0) && func_124(bVar0))
			{
				if (iLocal_1520[bVar0] >= 2)
				{
					MISC::SET_BIT(&(Local_96.f_15), bVar0);
				}
			}
			else if (iLocal_1520[bVar0] <= 1 || !func_124(bVar0))
			{
				if (BitTest(Local_96.f_15, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_96.f_15), bVar0);
				}
			}
		}
		else if (iLocal_1520[bVar0] < func_131() || !func_124(bVar0))
		{
			MISC::CLEAR_BIT(&(Local_96.f_13), bVar0);
		}
		if (Local_96.f_266[bVar0] != iLocal_1520[bVar0])
		{
			Local_96.f_266[bVar0] = iLocal_1520[bVar0];
			if (Local_96.f_241 == 1)
			{
				if (Local_96.f_266[bVar0] == 0)
				{
					if (!BitTest(Local_96.f_616, bVar0))
					{
						MISC::SET_BIT(&(Local_96.f_616), bVar0);
					}
				}
			}
		}
		if (Local_96.f_241 == 0)
		{
			if (func_779())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[bVar0]))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]));
					if (iLocal_1520[bVar0] >= func_130(iVar3) && func_124(bVar0))
					{
						iLocal_1525[bVar0] = 1;
					}
				}
			}
		}
		if (Local_96.f_241 == 1)
		{
			if (Local_96.f_256[bVar0] != iLocal_725[bVar0])
			{
				if (iLocal_725[bVar0] >= 0)
				{
					if (iLocal_725[bVar0] > Local_96.f_256[bVar0])
					{
						Local_96.f_256[bVar0] = iLocal_725[bVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_96.f_256[bVar0] - iLocal_725[bVar0]);
						if (Local_96.f_261[bVar0] != iVar8)
						{
							Local_96.f_261[bVar0] = iVar8;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar4)
	{
		func_116();
	}
	if (!BitTest(Local_96.f_3, 11))
	{
		if (!bVar5)
		{
			MISC::SET_BIT(&(Local_96.f_3), 11);
		}
	}
	bVar0 = false;
	iVar9 = 0;
	if (Local_96.f_241 == 0)
	{
		if (func_779())
		{
			bVar0 = false;
			while (bVar0 < 4)
			{
				if (iLocal_1525[bVar0])
				{
					iVar9++;
				}
				bVar0++;
			}
			if (!BitTest(Local_96.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					MISC::SET_BIT(&(Local_96.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				MISC::CLEAR_BIT(&(Local_96.f_3), 9);
			}
		}
	}
	if (Local_96.f_241 == 0)
	{
		if (!func_23(&(Local_96.f_360)))
		{
			func_21(&(Local_96.f_360), 0, 0);
		}
		else if (func_20(&(Local_96.f_360), 5000, 0))
		{
			if (!BitTest(Local_96.f_3, 14))
			{
				if (func_779())
				{
					if (Local_96.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							MISC::SET_BIT(&(Local_96.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_96.f_3), 14);
					}
				}
				else if (Local_96.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_96.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					MISC::SET_BIT(&(Local_96.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_96.f_614)
	{
		Local_96.f_614 = iVar1;
	}
	else
	{
		Local_96.f_613 = (Local_96.f_614 - iVar1);
	}
	if (iVar2 > Local_96.f_615)
	{
		Local_96.f_615 = iVar2;
	}
}

int func_130(int iParam0)//Position - 0xA3FC
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_131()//Position - 0xA43F
{
	return Local_96.f_28;
}

void func_132(bool bParam0, int iParam1)//Position - 0xA44B
{
	bool bVar0;
	int iVar1;
	
	if (!BitTest(Local_96.f_16, bParam0))
	{
		if (BitTest(Local_730[bParam0 /*18*/].f_2, 12))
		{
			func_133(iParam1, 1);
			MISC::SET_BIT(&(Local_96.f_16), bParam0);
		}
		else if (Local_96.f_241 >= 1)
		{
			if (Local_730[bParam0 /*18*/].f_1 == 0)
			{
				func_133(iParam1, 1);
				MISC::SET_BIT(&(Local_96.f_16), bParam0);
			}
			else if (Local_730[bParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar1]))
					{
						if (func_110(Local_96.f_7[iVar1]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iParam1), NETWORK::NET_TO_VEH(Local_96.f_7[iVar1]), false))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_133(iParam1, 1);
					MISC::SET_BIT(&(Local_96.f_16), bParam0);
				}
			}
		}
	}
	else if (Local_96.f_241 < 1)
	{
		if (!BitTest(Local_730[bParam0 /*18*/].f_2, 12))
		{
			func_133(iParam1, 0);
			MISC::CLEAR_BIT(&(Local_96.f_16), bParam0);
		}
	}
}

void func_133(int iParam0, bool bParam1)//Position - 0xA547
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_96.f_7[iVar0]), iParam0, bParam1);
		}
		iVar0++;
	}
}

void func_134(int iParam0, bool bParam1)//Position - 0xA584
{
	if (!BitTest(Local_96.f_272[func_92(bParam1)], func_91(bParam1)))
	{
		if (BitTest(Local_730[iParam0 /*18*/].f_3[func_92(bParam1)], func_91(bParam1)))
		{
			MISC::SET_BIT(&(Local_96.f_272[func_92(bParam1)]), func_91(bParam1));
			if (Local_730[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bParam1]))
			{
				if (!func_32(Local_96.f_48[bParam1]))
				{
					if (!func_95(bParam1))
					{
						MISC::CLEAR_BIT(&(Local_96.f_272[func_92(bParam1)]), func_91(bParam1));
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[bParam1]), false))
					{
						if (bParam1 >= 20)
						{
							MISC::CLEAR_BIT(&(Local_96.f_272[func_92(bParam1)]), func_91(bParam1));
						}
					}
				}
			}
		}
	}
}

void func_135(int iParam0, bool bParam1)//Position - 0xA65C
{
	if (!BitTest(Local_96.f_271, bParam1))
	{
		if (BitTest(Local_730[iParam0 /*18*/].f_6, bParam1))
		{
			MISC::SET_BIT(&(Local_96.f_271), bParam1);
			if (Local_730[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (BitTest(Local_96.f_303, bParam1))
			{
				if (!BitTest(Local_96.f_253, bParam1))
				{
					Local_96.f_251 = (Local_96.f_251 - 1);
					if (func_99() > 1)
					{
						if (Local_96.f_252 > 0)
						{
							Local_96.f_302++;
							func_98(bParam1, func_105(1));
						}
					}
					MISC::SET_BIT(&(Local_96.f_253), bParam1);
				}
				if (func_23(&(Local_96.f_336[bParam1 /*2*/])))
				{
					func_107(&(Local_96.f_336[bParam1 /*2*/]));
				}
				func_26(&(Local_96.f_73[bParam1]));
				MISC::CLEAR_BIT(&(Local_96.f_303), bParam1);
			}
		}
	}
}

void func_136(int iParam0, bool bParam1, int iParam2)//Position - 0xA71F
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_730[iParam0 /*18*/].f_1, bParam1))
	{
		iLocal_1520[bParam1]++;
		if (iLocal_725[bParam1] < 0)
		{
			if (Local_730[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_96.f_261[bParam1] > 0)
				{
					iLocal_725[bParam1] = Local_96.f_261[bParam1];
				}
				else
				{
					iLocal_725[bParam1] = 0;
				}
			}
		}
		iLocal_725[bParam1] = (iLocal_725[bParam1] + Local_730[iParam0 /*18*/].f_8);
		if (Local_96.f_241 >= 1)
		{
			if (Local_96.f_22[bParam1] == func_5())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[bParam1]))
				{
					if (func_110(Local_96.f_7[bParam1]))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[bParam1]), -1, false);
						if (iVar1 != 0)
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (iVar0 == iParam2)
								{
									Local_96.f_22[bParam1] = iParam2;
									func_116();
								}
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_96.f_319, bParam1))
		{
			if (Local_730[iParam0 /*18*/].f_10 > -1)
			{
				MISC::SET_BIT(&(Local_96.f_319), bParam1);
				func_21(&(Local_96.f_349[bParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_96.f_22[bParam1] != func_5())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_96.f_22[bParam1]))
		{
			iVar0 = func_137(bParam1, 1);
			if (iVar0 != func_5())
			{
				Local_96.f_22[bParam1] = iVar0;
			}
			else
			{
				Local_96.f_22[bParam1] = func_5();
			}
		}
		else if (func_16(Local_96.f_22[bParam1], 0))
		{
			Local_96.f_22[bParam1] = func_5();
			func_116();
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_96.f_22[bParam1]);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (func_110(Local_96.f_7[bParam1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_96.f_7[bParam1]), false))
					{
						iVar0 = func_137(bParam1, 1);
						if (iVar0 != func_5())
						{
							Local_96.f_22[bParam1] = iVar0;
						}
						else
						{
							Local_96.f_22[bParam1] = func_5();
						}
					}
				}
			}
		}
	}
}

int func_137(bool bParam0, bool bParam1)//Position - 0xA91F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_5();
	if (bParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (iVar0 == func_5())
				{
					if (Local_730[iVar3 /*18*/].f_17 == 1)
					{
						if (BitTest(Local_730[iVar3 /*18*/].f_1, bParam0))
						{
							if (!bParam1)
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
							}
							else
							{
								iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
								if (func_110(Local_96.f_7[bParam0]))
								{
									iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_IN_VEHICLE(iVar2, NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), false))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_138(int iParam0)//Position - 0xA9DB
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 1927637822;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	iVar4 = func_139(1, 1);
	if (!iVar4 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

var func_139(int iParam0, bool bParam1)//Position - 0xAA17
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_883(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAA7C
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_141(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_141(int iParam0)//Position - 0xB2F6
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		default:
	}
	return -1;
}

int func_142()//Position - 0xB57C
{
	func_113();
	if (func_71(Local_96.f_27))
	{
		if (func_143())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_96.f_27);
			return 1;
		}
	}
	return 0;
}

int func_143()//Position - 0xB5A8
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	while (bVar0 < Local_96.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[bVar0]))
		{
			if (func_71(Local_96.f_27))
			{
				if (!BitTest(Local_96.f_244, bVar0))
				{
					MISC::CLEAR_AREA(Local_96.f_30[bVar0 /*3*/], 5f, true, false, false, true);
					MISC::SET_BIT(&(Local_96.f_244), bVar0);
				}
				if (func_83(&(Local_96.f_7[bVar0]), Local_96.f_27, Local_96.f_30[bVar0 /*3*/], Local_96.f_43[bVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_96.f_7[bVar0]), true, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), 1);
					VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true, true, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_96.f_27) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_96.f_27))
					{
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_96.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_146());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_96.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_145());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), SYSTEM::ROUND(fVar1), 0, 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), fVar1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_96.f_27))
						{
							VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_96.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), fVar1);
							VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), fVar1);
						}
					}
					else
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_96.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_146());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_96.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_145());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), SYSTEM::ROUND(fVar1), 0, 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), fVar1);
					}
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true);
					if (Local_96.f_27 == joaat("savage"))
					{
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), "MPBitset"))
						{
							iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), "MPBitset");
						}
						MISC::SET_BIT(&iVar2, 10);
						MISC::SET_BIT(&iVar2, 15);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), "MPBitset", iVar2);
					}
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false, iLocal_1517);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false, Global_1837258[iVar3]);
						iVar3++;
					}
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false, false);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false);
					VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), 0);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < Local_96.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[bVar0]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

var func_144()//Position - 0xBA16
{
	if (func_779())
	{
		return Global_262145.f_12042 /* Tunable: COMPETITIVE_KILL_LIST_VEHICLE_HEALTH_TANK */;
	}
	return Global_262145.f_11781 /* Tunable: KILL_LIST_VEHICLE_HEALTH_TANK */;
}

var func_145()//Position - 0xBA39
{
	if (func_779())
	{
		return Global_262145.f_12043 /* Tunable: COMPETITIVE_KILL_LIST_VEHICLE_HEALTH_PLANE */;
	}
	return Global_262145.f_11782 /* Tunable: KILL_LIST_VEHICLE_HEALTH_PLANE */;
}

var func_146()//Position - 0xBA5C
{
	if (func_779())
	{
		return Global_262145.f_12041 /* Tunable: COMPETITIVE_KILL_LIST_VEHICLE_HEALTH_HELI */;
	}
	return Global_262145.f_11780 /* Tunable: KILL_LIST_VEHICLE_HEALTH_HELI */;
}

int func_147()//Position - 0xBA7F
{
	int iVar0;
	int iVar1;
	
	if (!func_23(&(Local_96.f_362)))
	{
		func_21(&(Local_96.f_362), 0, 0);
		return 0;
	}
	else if (!func_20(&(Local_96.f_362), 3000, 0))
	{
		return 0;
	}
	if (!BitTest(Local_96.f_3, 10))
	{
		if (func_161(&iVar0))
		{
			if (iVar0 < func_160())
			{
				MISC::SET_BIT(&(Local_96.f_3), 10);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_12036 /* Tunable: COMPETITIVE_KILL_LIST_WEIGHTHING_SUB_TYPE */) && !Global_262145.f_12034 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE */) || Global_262145.f_12035 /* Tunable: KILL_LIST_DISABLE */)
				{
					MISC::SET_BIT(&(Local_96.f_3), 8);
					MISC::SET_BIT(&(Local_96.f_3), 10);
				}
				else
				{
					MISC::SET_BIT(&(Local_96.f_3), 10);
				}
			}
		}
	}
	if (BitTest(Local_96.f_3, 10))
	{
		if (Local_96.f_12 == 0)
		{
			func_113();
			return 0;
		}
		if (!BitTest(Local_96.f_3, 13))
		{
			if (func_156())
			{
				if (!func_154(129, Local_96.f_1, Local_96.f_2, 0))
				{
					if (func_148())
					{
						MISC::SET_BIT(&(Local_96.f_3), 13);
					}
					else
					{
						Local_96.f_29 = -1;
					}
				}
				else
				{
					Local_96.f_29 = -1;
				}
			}
		}
	}
	return BitTest(Local_96.f_3, 13);
}

int func_148()//Position - 0xBBA8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_113();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_149(Local_96.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_56(Local_96.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_149(struct<3> Param0, float fParam3)//Position - 0xBC22
{
	int iVar0[32];
	int iVar33;
	int iVar34;
	bool bVar35;
	struct<3> Var36;
	struct<3> Var39;
	int iVar42;
	struct<10> Var43;
	int iVar53;
	
	if (Global_2656319.f_399.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2656319.f_399[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = MISC::GET_HASH_KEY(&(Global_2656319.f_399[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2656319.f_399.f_225)
			{
				bVar35 = false;
			}
		}
		iVar34++;
		if (iVar34 >= 32)
		{
			bVar35 = false;
		}
	}
	if (iVar33 == 0)
	{
		return 0;
	}
	Var36 = { 0f, 0f, 0f };
	Var39 = { Param0 };
	iVar42 = 0;
	Var43.f_1 = -1;
	Var43.f_2 = -1;
	Var43.f_9 = -1;
	iVar53 = 0;
	iVar34 = 0;
	while (iVar34 < Global_1573885)
	{
		if (BitTest(Global_4544310[iVar34 /*26*/].f_12, 11))
		{
			Var36 = { Global_4544310[iVar34 /*26*/].f_3 };
			Var39.f_2 = Var36.f_2;
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var36, Var39, true) < fParam3)
			{
				Var43 = { Global_4544310[iVar34 /*26*/].f_15 };
				iVar53 = func_150(&Var43);
				iVar42 = 0;
				while (iVar42 < iVar33)
				{
					if (iVar53 == iVar0[iVar42])
					{
						return 1;
					}
					iVar42++;
				}
			}
		}
		iVar34++;
	}
	return 0;
}

int func_150(var uParam0)//Position - 0xBD60
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_151(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_135107[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_949659.f_28505[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_151(var uParam0)//Position - 0xBDB7
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_153(uParam0->f_1))
	{
		if (func_152(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794744.f_4[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794744.f_4[uParam0->f_1 /*89*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794744.f_4[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1518)
			{
				if (BitTest(Global_794744.f_4[iVar0 /*89*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794744.f_4[iVar0 /*89*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_949659.f_1804[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_949659.f_1804[uParam0->f_1 /*89*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_949659.f_1804[uParam0->f_1 /*89*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 300)
			{
				if (BitTest(Global_949659.f_1804[iVar0 /*89*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_949659.f_1804[iVar0 /*89*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_982384.f_4[uParam0->f_1 /*89*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_982384.f_4[uParam0->f_1 /*89*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_982384.f_4[uParam0->f_1 /*89*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_982384.f_4[iVar0 /*89*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_982384.f_4[iVar0 /*89*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_152(var uParam0)//Position - 0xC00E
{
	if (Global_2628582)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2628582.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_153(int iParam0)//Position - 0xC033
{
	return iParam0 == 9999;
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC041
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_155(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8755 /* Tunable: NUMBER_OF_SCRIPTS_IN_LAUNCH_HISTORY_LIST */)
		{
			if (Global_2698947.f_136[iVar0 /*2*/] == iVar1 && Global_2698947.f_136[iVar0 /*2*/].f_1 == func_140(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_155(int iParam0)//Position - 0xC0C6
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_156()//Position - 0xC165
{
	if (func_158(&(Local_96.f_27)))
	{
		if (Local_96.f_4)
		{
			func_157();
		}
		func_41();
		return 1;
	}
	return 0;
}

void func_157()//Position - 0xC18F
{
	Global_1937732 = 1;
	if (!BitTest(Global_2748465, 0))
	{
		MISC::SET_BIT(&Global_2748465, 0);
		MISC::SET_BIT(&Global_1937733, 0);
	}
	if (!BitTest(Global_2748465, 1))
	{
		MISC::SET_BIT(&Global_2748465, 1);
		MISC::SET_BIT(&Global_1937733, 1);
	}
	if (!BitTest(Global_2748465, 5))
	{
		MISC::SET_BIT(&Global_2748465, 5);
		MISC::SET_BIT(&Global_1937733, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

int func_158(var uParam0)//Position - 0xC298
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_159(joaat("rhino")))
			{
				Local_96.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_159(joaat("hydra")))
			{
				Local_96.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_96.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_159(joaat("savage")))
			{
				Local_96.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_96.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_159(joaat("valkyrie")))
			{
				Local_96.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_159(joaat("buzzard")))
			{
				Local_96.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_159(int iParam0)//Position - 0xC37D
{
	if (!func_779())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11770 /* Tunable: KILL_LIST_DISABLE_CAR_RHINO */;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11772 /* Tunable: KILL_LIST_DISABLE_HELI_HYDRA */;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11771 /* Tunable: KILL_LIST_DISABLE_HELI_SAVAGE */;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11774 /* Tunable: KILL_LIST_DISABLE_HELI_BUZZARD */;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11773 /* Tunable: KILL_LIST_DISABLE_HELI_VALKYRIE */;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_12050 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_CAR_RHINO */;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_12052 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_HELI_HYDRA */;
				break;
			
			case joaat("savage"):
				return Global_262145.f_12051 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_HELI_SAVAGE */;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_12054 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_HELI_BUZZARD */;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_12053 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_HELI_VALKYRIE */;
				break;
			}
	}
	return 0;
}

int func_160()//Position - 0xC45D
{
	return Global_262145.f_11784 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPANTS_LAUNCH */;
}

int func_161(var uParam0)//Position - 0xC46C
{
	int iVar0;
	
	if (!func_23(&(Local_96.f_334)))
	{
		func_21(&(Local_96.f_334), 0, 0);
	}
	else if (func_20(&(Local_96.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 0))
				{
					if (!BitTest(Local_730[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_162(var uParam0)//Position - 0xC4F0
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_163(var uParam0)//Position - 0xC519
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_21(uParam0, 0, 0);
		}
	}
}

void func_164()//Position - 0xC538
{
	struct<3> Var0;
	
	if (iLocal_3484 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iLocal_3484]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_7[iLocal_3484]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[iLocal_3484]), false) };
				if (Var0.f_2 < -25f)
				{
					func_26(&(Local_96.f_7[iLocal_3484]));
				}
			}
		}
	}
	iLocal_3484++;
	if (iLocal_3484 >= 4)
	{
		iLocal_3484 = 0;
	}
}

void func_165()//Position - 0xC5AA
{
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
	{
		if (!BitTest(uLocal_1308, 13))
		{
			MISC::SET_BIT(&uLocal_1308, 13);
			NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
		}
	}
	else if (BitTest(uLocal_1308, 13))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				MISC::CLEAR_BIT(&uLocal_1308, 13);
			}
		}
	}
}

void func_166()//Position - 0xC61D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (func_433())
	{
		func_281(0);
	}
	iVar0 = Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_813;
	if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_5())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
				iVar2 = iVar1;
				iVar3 = Local_730[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_201();
						func_198(iVar2);
						break;
					
					case 1:
						func_197();
						func_171();
						func_167(1);
						break;
					
					case 2:
						func_167(0);
						break;
					}
				}
			}
	}
}

void func_167(bool bParam0)//Position - 0xC6DC
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (bParam0)
		{
			func_168(Local_96.f_48[bVar0], &(Local_1324[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
		}
		else
		{
			func_168(Local_96.f_48[bVar0], &(Local_1324[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1, 0, 0);
		}
		if (HUD::DOES_BLIP_EXIST(Local_1324[bVar0 /*8*/]))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1324[bVar0 /*8*/], "UW_BLIP2" /* GXT: Merryweather */);
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_1324[bVar0 /*8*/], true);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_1324[bVar0 /*8*/].f_1))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1324[bVar0 /*8*/].f_1, "UW_BLIP2" /* GXT: Merryweather */);
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_1324[bVar0 /*8*/].f_1, true);
			}
		}
		if (Local_96.f_27 != joaat("hydra"))
		{
			if (BitTest(Local_96.f_272[func_92(bVar0)], func_91(bVar0)) || BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar0)], func_91(bVar0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bVar0]))
				{
					func_93(&(Local_1324[bVar0 /*8*/]));
				}
			}
		}
		else if ((bVar0 % 4) == 0)
		{
			iVar1 = (bVar0 / 4);
			if (BitTest(Local_96.f_271, iVar1) || BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bVar0]))
				{
					func_93(&(Local_1324[bVar0 /*8*/]));
				}
			}
		}
		bVar0++;
	}
}

void func_168(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)//Position - 0xC84F
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_170(0))
		{
			Global_2672741 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_169(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2672741, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_169(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2672741, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_93(iParam1);
	}
}

int func_169(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)//Position - 0xC8D3
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_170(bool bParam0)//Position - 0xCAC5
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

void func_171()//Position - 0xCAD6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar9;
	int iVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;
	
	iVar2 = (func_35() - func_127(&(Local_96.f_332), 0, 0));
	if (iLocal_3430 == 0)
	{
		if (BitTest(uLocal_1307, 26))
		{
			if ((BitTest(Local_96.f_3, 0) && BitTest(Local_96.f_3, 1)) && BitTest(Local_96.f_3, 2))
			{
				iLocal_3430 = (func_35() - func_127(&(Local_96.f_332), 0, 0));
				iVar2 = iLocal_3430;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3430;
	}
	if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		return;
	}
	if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_779())
	{
		iVar0 = (((Local_96.f_256[0] + Local_96.f_256[1]) + Local_96.f_256[2]) + Local_96.f_256[3]);
	}
	else
	{
		iVar0 = Local_96.f_256[0];
	}
	func_193(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_779())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = PLAYER::INT_TO_PLAYERINDEX(Local_96.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_5())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar21))
				{
					sVar4[iVar1] = PLAYER::GET_PLAYER_NAME(iVar21);
					iVar10[iVar1] = Local_96.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_96.f_594[iVar1 /*4*/];
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 == uVar15[iVar1])
					{
						iVar20 = uVar15[iVar1];
						iVar20++;
					}
					uVar15[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar10[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar10[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_35() - func_127(&(Local_96.f_332), 0, 0)) >= 0)
		{
			if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
			{
				func_189(sVar4[0], uVar15[0], sVar4[1], uVar15[1], sVar4[2], uVar15[2], sVar4[3], uVar15[3], iVar10[0], iVar10[1], iVar10[2], iVar10[3], iVar2, iVar3, func_190(), iVar20);
			}
			else
			{
				func_187(iVar10[0], uVar15[0], iVar10[1], uVar15[1], iVar10[2], uVar15[2], iVar10[3], uVar15[3], iVar2, iVar3, func_190(), iVar20);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_96.f_255)
		{
			iVar0 = Local_96.f_255;
		}
		if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
		{
			func_186(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), iVar0, iVar0, Local_96.f_255, iVar2, iVar3, 0, func_190());
		}
		else
		{
			func_172(iVar0, iVar0, Local_96.f_255, iVar2, iVar3, 0, func_190(), 1);
		}
		if (bVar9)
		{
			func_116();
		}
	}
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)//Position - 0xCDBC
{
	struct<8> Var0;
	char* sVar16;
	
	if (func_183(0) == 0)
	{
		return;
	}
	func_182();
	func_181();
	StringCopy(&Var0, "HUD_TEAM" /* GXT: TEAM */, 64);
	if (bParam5)
	{
		func_178(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	func_177(iParam1, iParam2, "UW_KLL" /* GXT: KILLS */, -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar16 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_176(sParam6))
	{
		sVar16 = sParam6;
	}
	func_173(iParam3, sVar16, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

void func_173(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xCE4E
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_175(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_174(7, iVar0);
		Global_1669875.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1669875.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1669875.f_4714.f_172[iVar0] = iParam2;
		Global_1669875.f_4714.f_216[iVar0] = iParam3;
		Global_1669875.f_4714.f_183[iVar0] = iParam4;
		Global_1669875.f_4714.f_194[iVar0] = iParam5;
		Global_1669875.f_4714.f_249[iVar0] = iParam6;
		Global_1669875.f_4714.f_260[iVar0] = iParam7;
		Global_1669875.f_4714.f_205[iVar0] = iParam8;
		Global_1669875.f_4714.f_314[iVar0] = iParam9;
		Global_1669875.f_4714.f_325[iVar0] = iParam10;
		Global_1669875.f_4714.f_357[iVar0] = iParam11;
		Global_1669875.f_4714.f_238[iVar0] = iParam12;
		Global_1669875.f_4714.f_271[iVar0] = iParam13;
		Global_1669875.f_4714.f_368[iVar0] = iParam14;
		Global_1669875.f_4714.f_379[iVar0] = iParam15;
		Global_1669875.f_4714.f_390[iVar0] = iParam16;
		Global_1669875.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_174(int iParam0, int iParam1)//Position - 0xCFAB
{
	MISC::SET_BIT(&(Global_1669875.f_7064[iParam0]), iParam1);
}

int func_175(int iParam0, int iParam1)//Position - 0xCFC4
{
	return BitTest(Global_1669875.f_7064[iParam0], iParam1);
}

int func_176(char* sParam0)//Position - 0xCFDA
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_177(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xD011
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_175(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_174(4, iVar0);
		Global_1669875.f_3391[iVar0] = iParam0;
		Global_1669875.f_3391.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1669875.f_3391.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1669875.f_3391.f_183[iVar0] = iParam3;
		Global_1669875.f_3391.f_216[iVar0] = iParam5;
		Global_1669875.f_3391.f_194[iVar0] = iParam4;
		Global_1669875.f_3391.f_227[iVar0] = iParam6;
		Global_1669875.f_3391.f_270[iVar0] = iParam7;
		Global_1669875.f_3391.f_281[iVar0] = iParam8;
		Global_1669875.f_3391.f_292[iVar0] = iParam9;
		Global_1669875.f_3391.f_303[iVar0] = iParam10;
		Global_1669875.f_3391.f_314[iVar0] = iParam11;
		Global_1669875.f_3391.f_325[iVar0] = iParam13;
		Global_1669875.f_3391.f_336[iVar0] = iParam14;
		Global_1669875.f_3391.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1669875.f_1172 = 1;
		}
	}
}

void func_178(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26)//Position - 0xD16B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_175(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_174(6, iVar0);
		Global_1669875.f_4085[iVar0] = iParam0;
		StringCopy(&(Global_1669875.f_4085.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1669875.f_4085.f_183[iVar0] = iParam3;
		Global_1669875.f_4085.f_172[iVar0] = iParam2;
		Global_1669875.f_4085.f_260[iVar0] = iParam4;
		Global_1669875.f_4085.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1669875.f_4085.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1669875.f_4085.f_443[iVar0] = iParam7;
		Global_1669875.f_4085.f_454[iVar0] = iParam8;
		Global_1669875.f_4085.f_497[iVar0] = iParam9;
		Global_1669875.f_4085.f_508[iVar0] = iParam10;
		Global_1669875.f_4085.f_205[iVar0] = iParam11;
		Global_1669875.f_4085.f_216[iVar0] = iParam12;
		Global_1669875.f_4085.f_227[iVar0] = iParam13;
		Global_1669875.f_4085.f_238[iVar0] = iParam14;
		Global_1669875.f_4085.f_249[iVar0] = iParam15;
		Global_1669875.f_4085.f_519[iVar0] = iParam16;
		Global_1669875.f_4085.f_530[iVar0] = iParam17;
		Global_1669875.f_4085.f_541[iVar0] = iParam18;
		Global_1669875.f_4085.f_552[iVar0] = iParam19;
		Global_1669875.f_4085.f_563[iVar0] = iParam20;
		Global_1669875.f_4085.f_574[iVar0] = iParam21;
		Global_1669875.f_4085.f_585[iVar0] = iParam22;
		Global_1669875.f_4085.f_596[iVar0] = iParam23;
		Global_1669875.f_4085.f_607[iVar0] = iParam24;
		Global_1669875.f_4085.f_194[iVar0] = iParam25;
		Global_1669875.f_4085.f_618[iVar0] = iParam26;
		if (iParam15 == 5 && func_180())
		{
			Global_1669875.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1669875.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1669875.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1669875.f_1172 = 1;
			}
			if (func_179())
			{
				Global_1669875.f_1176 = 1;
			}
		}
	}
}

int func_179()//Position - 0xD3EC
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_180()//Position - 0xD410
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_181()//Position - 0xD44E
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2697833 = 1;
}

void func_182()//Position - 0xD471
{
	Global_1669875.f_1172 = 1;
}

int func_183(bool bParam0)//Position - 0xD481
{
	if (func_185())
	{
		return 0;
	}
	if (func_184())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_883(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_184()//Position - 0xD4B8
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_192 != 0;
}

bool func_185()//Position - 0xD4CF
{
	return BitTest(Global_2621446, 12);
}

void func_186(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xD4DE
{
	char* sVar0;
	
	if (func_183(0) == 0)
	{
		return;
	}
	func_181();
	func_182();
	if (bParam6)
	{
		func_178(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS" /* GXT: ~1~ kills */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	func_177(iParam2, iParam3, "UW_KLL" /* GXT: KILLS */, -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_176(sParam7))
	{
		sVar0 = sParam7;
	}
	func_173(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0xD569
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	
	if (func_183(0) == 0)
	{
		return;
	}
	func_182();
	func_181();
	if (iParam0 > -1)
	{
		Var0 = { func_188(iParam1) };
		iVar16 = 1;
		if (iParam11 == iParam1)
		{
			iVar16 = 9;
		}
		func_178(iParam0, &Var0, -1, iVar16, 7, 1, "", 0, 0, 0, 0, iVar16, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_188(iParam3) };
		iVar17 = 1;
		if (iParam11 == iParam3)
		{
			iVar17 = 9;
		}
		func_178(iParam2, &Var0, -1, iVar17, 6, 1, "", 0, 0, 0, 0, iVar17, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_188(iParam5) };
		iVar18 = 1;
		if (iParam11 == iParam5)
		{
			iVar18 = 9;
		}
		func_178(iParam4, &Var0, -1, iVar18, 5, 1, "", 0, 0, 0, 0, iVar18, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_188(iParam7) };
		iVar19 = 1;
		if (iParam11 == iParam7)
		{
			iVar19 = 9;
		}
		func_178(iParam6, &Var0, -1, iVar19, 4, 1, "", 0, 0, 0, 0, iVar19, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	sVar20 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_176(sParam10))
	{
		sVar20 = sParam10;
	}
	func_173(iParam8, sVar20, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}

struct<16> func_188(int iParam0)//Position - 0xD6C2
{
	struct<16> Var0;
	
	StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_TEAM" /* GXT: TEAM */), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_189(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)//Position - 0xD6E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_183(0) == 0)
	{
		return;
	}
	func_182();
	func_181();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_178(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_178(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_178(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_178(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);
	}
	sVar4 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!func_176(sParam14))
	{
		sVar4 = sParam14;
	}
	func_173(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}

char* func_190()//Position - 0xD810
{
	return "HUD_COUNTDOWN" /* GXT: EVENT END */;
	switch (func_192(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG" /* GXT: MOVING TARGET END */;
		
		case 132:
			return "AET_CHK_COLL" /* GXT: CHECKPOINTS END */;
		
		case 133:
			switch (func_191())
			{
				case 0:
					return "AET_CHALL_LJ" /* GXT: LONGEST JUMP CHALLENGE END */;
				
				case 1:
					return "AET_CHALL_LS" /* GXT: LONGEST FREEFALL CHALLENGE END */;
				
				case 2:
					return "AET_CHALL_HS" /* GXT: HIGHEST SPEED CHALLENGE END */;
				
				case 3:
					return "AET_CHALL_LST" /* GXT: LONGEST STOPPIE CHALLENGE END */;
				
				case 4:
					return "AET_CHALL_LW" /* GXT: LONGEST WHEELIE CHALLENGE END */;
				
				case 5:
					return "AET_CHALL_NC" /* GXT: NO CRASHES CHALLENGE END */;
				
				case 6:
					return "AET_CHALL_LP" /* GXT: LOWEST PARACHUTE CHALLENGE END */;
				
				case 7:
					return "AET_CHALL_VS" /* GXT: VEHICLES STOLEN CHALLENGE END */;
				
				case 8:
					return "AET_CHALL_NM" /* GXT: NEAR MISSES CHALLENGE END */;
				
				case 9:
					return "AET_CHALL_RD" /* GXT: REVERSE DRIVING CHALLENGE END */;
				
				case 10:
					return "AET_CHALL_LF" /* GXT: LONGEST FALL SURVIVED CHALLENGE END */;
				
				case 11:
					return "AET_CHALL_LFL" /* GXT: LOW FLYING CHALLENGE END */;
				
				case 12:
					return "AET_CHALL_LFI" /* GXT: LOW FLYING INVERTED CHALLENGE END */;
				
				case 13:
					return "AET_CHALL_LB" /* GXT: LONGEST BAIL CHALLENGE END */;
				
				case 14:
					return "AET_CHALL_MB" /* GXT: MOST BRIDGES CHALLENGE END */;
				
				case 15:
					return "AET_CHALL_HSH" /* GXT: HEADSHOTS CHALLENGE END */;
				
				case 16:
					return "AET_CHALL_DB" /* GXT: DRIVE-BY CHALLENGE END */;
				
				case 17:
					return "AET_CHALL_ML" /* GXT: MELEE CHALLENGE END */;
				
				case 18:
					return "AET_CHALL_LSN" /* GXT: SNIPER KILLS CHALLENGE END */;
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED" /* GXT: PENNED IN END */;
		
		case 138:
			return "AET_PARCEL" /* GXT: HOLD THE WHEEL END */;
		
		case 139:
			return "AET_PROPERTY" /* GXT: HOT PROPERTY END */;
		
		case 140:
			return "AET_DDROP" /* GXT: DEAD DROP END */;
		
		case 141:
			return "AET_KCASTLE" /* GXT: KING OF THE CASTLE END */;
		
		case 144:
			return "AET_BLAST" /* GXT: CRIMINAL DAMAGE END */;
		
		case 129:
			return "AET_UWARF" /* GXT: KILL LIST END */;
		
		case 146:
			return "AET_BEAST" /* GXT: HUNT THE BEAST END */;
	}
	return "";
}

int func_191()//Position - 0xD9AC
{
	if (func_192(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2738587.f_5152;
	}
	return -1;
}

int func_192(int iParam0)//Position - 0xD9CF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1886967[iVar0 /*609*/];
	}
	return -1;
}

void func_193(int iParam0)//Position - 0xD9EE
{
	if (func_195(PLAYER::PLAYER_ID()) || func_194(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2738587.f_5068, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2738587.f_5070)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2738587.f_5070));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2738587.f_5078 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2738587.f_5078);
				Global_2738587.f_5078 = -1;
			}
			Global_2738587.f_5068 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2738587.f_5068, 0))
		{
			if (BitTest(Global_2738587.f_5068, 4))
			{
				if (!BitTest(Global_2738587.f_5068, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2738587.f_5070)))
						{
							StringCopy(&(Global_2738587.f_5070), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2738587.f_5068), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2738587.f_5068, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2738587.f_5068, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2738587.f_5068), 1);
			}
			else if (!BitTest(Global_2738587.f_5068, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2738587.f_5070), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2738587.f_5068), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2738587.f_5068, 3))
				{
					Global_2738587.f_5078 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2738587.f_5078, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2738587.f_5068), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2738587.f_5068, 0))
			{
				Global_2738587.f_5068 = 0;
				Global_2738587.f_5078 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2738587.f_5068), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2738587.f_5068, 2))
				{
					MISC::SET_BIT(&(Global_2738587.f_5068), 2);
					MISC::SET_BIT(&(Global_2738587.f_5068), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2738587.f_5068), 5);
					MISC::CLEAR_BIT(&(Global_2738587.f_5068), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2738587.f_5068, 0))
		{
			Global_2738587.f_5068 = 0;
			Global_2738587.f_5078 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2738587.f_5068), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2738587.f_5068), 2);
				MISC::SET_BIT(&(Global_2738587.f_5068), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2738587.f_5068), 2);
				MISC::CLEAR_BIT(&(Global_2738587.f_5068), 5);
			}
		}
	}
}

int func_194(int iParam0)//Position - 0xDDCE
{
	if (iParam0 != func_5() && func_883(iParam0, 1, 1))
	{
		return Global_2657921[iParam0 /*463*/].f_321.f_17;
	}
	return -1;
}

int func_195(int iParam0)//Position - 0xDDFF
{
	if (iParam0 != func_5())
	{
		if (func_883(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_196(Global_2657921[iParam0 /*463*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

int func_196(int iParam0)//Position - 0xDE46
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
	}
	return -1;
}

void func_197()//Position - 0xE320
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_1319[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_1319[iVar0]));
		}
		iVar0++;
	}
}

void func_198(int iParam0)//Position - 0xE353
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_1319[bVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[bVar0]))
			{
				if (!BitTest(Local_96.f_13, bVar0))
				{
					if (!BitTest(Local_730[iParam0 /*18*/].f_1, bVar0))
					{
						iLocal_1319[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]));
						HUD::SET_BLIP_SPRITE(iLocal_1319[bVar0], 429 /*RADAR_TEMP_1*/);
						func_199(&(iLocal_1319[bVar0]), 29);
						if (func_779())
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1319[bVar0], "UW_BLIPC" /* GXT: Kill List Competitive */);
						}
						else
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1319[bVar0], "UW_BLIP" /* GXT: Kill List */);
						}
						HUD::SET_BLIP_PRIORITY(iLocal_1319[bVar0], 9);
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_1319[bVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_1319[bVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_1319[bVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_1319[bVar0]));
				}
			}
		}
		bVar0++;
	}
}

void func_199(var uParam0, int iParam1)//Position - 0xE445
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_200(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_200(int iParam0)//Position - 0xE46B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_201()//Position - 0xE6D3
{
	bool bVar0;
	
	bVar0 = func_273();
	if (bVar0)
	{
		if (Local_96.f_413 > -1)
		{
			if ((Local_96.f_413 - func_127(&(Local_96.f_326), 0, 0)) >= 0)
			{
				if (!func_205())
				{
					func_204((Local_96.f_413 - func_127(&(Local_96.f_326), 0, 0)));
					func_202((Local_96.f_413 - func_127(&(Local_96.f_326), 0, 0)), func_203(-1));
				}
			}
			else
			{
				if (!func_205())
				{
					func_202(0, func_203(-1));
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::SET_BIT(&(Local_96.f_3), 4);
				}
			}
		}
	}
}

void func_202(int iParam0, char* sParam1)//Position - 0xE760
{
	char* sVar0;
	
	if (func_183(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING" /* GXT: EVENT START */;
	if (!func_176(sParam1))
	{
		sVar0 = sParam1;
	}
	func_173(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_203(int iParam0)//Position - 0xE7A0
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING" /* GXT: EVENT START */;
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG" /* GXT: MOVING TARGET START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL" /* GXT: CHECKPOINTS START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ" /* GXT: LONGEST JUMP CHALLENGE START */;
			
			case 1:
				return "AST_CHALL_LS" /* GXT: LONGEST FREEFALL CHALLENGE START */;
			
			case 2:
				return "AST_CHALL_HS" /* GXT: HIGHEST SPEED CHALLENGE START */;
			
			case 3:
				return "AST_CHALL_LST" /* GXT: LONGEST STOPPIE CHALLENGE START */;
			
			case 4:
				return "AST_CHALL_LW" /* GXT: LONGEST WHEELIE CHALLENGE START */;
			
			case 5:
				return "AST_CHALL_NC" /* GXT: NO CRASHES CHALLENGE START */;
			
			case 6:
				return "AST_CHALL_LP" /* GXT: LOWEST PARACHUTE CHALLENGE START */;
			
			case 7:
				return "AST_CHALL_VS" /* GXT: VEHICLES STOLEN CHALLENGE START */;
			
			case 8:
				return "AST_CHALL_NM" /* GXT: NEAR MISSES CHALLENGE START */;
			
			case 9:
				return "AST_CHALL_RD" /* GXT: REVERSE DRIVING CHALLENGE START */;
			
			case 10:
				return "AST_CHALL_LF" /* GXT: LONGEST FALL SURVIVED CHALLENGE START */;
			
			case 11:
				return "AST_CHALL_LFL" /* GXT: LOW FLYING CHALLENGE START */;
			
			case 12:
				return "AST_CHALL_LFI" /* GXT: LOW FLYING INVERTED CHALLENGE START */;
			
			case 13:
				return "AST_CHALL_LB" /* GXT: LONGEST BAIL CHALLENGE START */;
			
			case 14:
				return "AST_CHALL_MB" /* GXT: MOST BRIDGES CHALLENGE START */;
			
			case 15:
				return "AST_CHALL_HSH" /* GXT: HEADSHOTS CHALLENGE START */;
			
			case 16:
				return "AST_CHALL_DB" /* GXT: DRIVE-BY CHALLENGE START */;
			
			case 17:
				return "AST_CHALL_ML" /* GXT: MELEE CHALLENGE START */;
			
			case 18:
				return "AST_CHALL_LSN" /* GXT: SNIPER KILLS CHALLENGE START */;
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED" /* GXT: PENNED IN START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL" /* GXT: HOLD THE WHEEL START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY" /* GXT: HOT PROPERTY START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP" /* GXT: DEAD DROP START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE" /* GXT: KING OF THE CASTLE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST" /* GXT: CRIMINAL DAMAGE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF" /* GXT: KILL LIST START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST" /* GXT: HUNT THE BEAST START */;
	}
	return "";
}

void func_204(int iParam0)//Position - 0xE9A8
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2738587.f_5068 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2738587.f_5068, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2738587.f_5068 = 0;
			MISC::SET_BIT(&(Global_2738587.f_5068), 1);
		}
	}
}

bool func_205()//Position - 0xE9FD
{
	bool bVar0;
	int iVar1;
	
	if (func_272(17))
	{
		bVar0 = true;
	}
	if (!func_260(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_212(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					func_210(0, -1);
					MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
	{
		MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
	}
	if (Global_1927715)
	{
		bVar0 = true;
	}
	if (func_209(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	if (func_208(PLAYER::PLAYER_ID(), 2))
	{
		bVar0 = true;
	}
	if (func_206(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	return bVar0;
}

int func_206(int iParam0)//Position - 0xEAD9
{
	if (func_207(iParam0))
	{
		return 1;
	}
	return BitTest(Global_1886967[iParam0 /*609*/].f_1, 8);
}

bool func_207(int iParam0)//Position - 0xEAFC
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_1, 2);
}

bool func_208(int iParam0, int iParam1)//Position - 0xEB11
{
	return BitTest(Global_2657921[iParam0 /*463*/].f_218, iParam1);
}

int func_209(int iParam0)//Position - 0xEB27
{
	if (!func_883(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2);
}

void func_210(bool bParam0, int iParam1)//Position - 0xEB4F
{
	if (bParam0)
	{
		if (!Global_1845131)
		{
			if (!func_272(func_211(iParam1)))
			{
				Global_1845131 = 1;
			}
		}
	}
	else if (Global_1845131)
	{
		Global_1845131 = 0;
	}
}

int func_211(int iParam0)//Position - 0xEB86
{
	switch (iParam0)
	{
		case 132:
			return 11;
		
		case 133:
			return 12;
		
		case 136:
			return 19;
		
		case 138:
			return 14;
		
		case 139:
			return 15;
		
		case 129:
			return 17;
		
		case 141:
			return 18;
		
		case 144:
			return 13;
		
		case 146:
			return 16;
		
		case 236:
			return 20;
		
		case 150:
			return 20;
		
		default:
	}
	return Global_262145.f_24354 /* Tunable: -1488550814 */;
}

int func_212(bool bParam0, bool bParam1, bool bParam2)//Position - 0xEC15
{
	if (func_259(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_208(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_208(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_257(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_255(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_254())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_253(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_237(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_236(PLAYER::PLAYER_ID()) != func_5() && func_236(PLAYER::PLAYER_ID()) == func_66(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_233(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_231(func_232()) && !func_230(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_229())
	{
		return 0;
	}
	if (func_184())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_227(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_225())
	{
		return 0;
	}
	if (func_208(PLAYER::PLAYER_ID(), 0) || func_208(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_208(PLAYER::PLAYER_ID(), 12) || func_208(PLAYER::PLAYER_ID(), 14)) || func_208(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_224(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_223() && !Global_2707279)
		{
			return 0;
		}
	}
	if (func_222(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_221())
	{
		return 0;
	}
	if (Global_1927715)
	{
		return 0;
	}
	if (func_209(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_220())
	{
		return 0;
	}
	if (func_218(PLAYER::PLAYER_ID()) && Global_1844902.f_172)
	{
		return 0;
	}
	if (func_217())
	{
		return 0;
	}
	if (func_216())
	{
		return 0;
	}
	if (Global_2737614)
	{
		return 0;
	}
	if (Global_1961366)
	{
		return 0;
	}
	if (func_215(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_214(PLAYER::PLAYER_ID()))
	{
		if (func_213(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_213(int iParam0)//Position - 0xEE81
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1882422[iVar0 /*142*/].f_78.f_63 != 0;
	}
	return 0;
}

int func_214(int iParam0)//Position - 0xEEA5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 7);
	}
	return 0;
}

int func_215(int iParam0)//Position - 0xEEC8
{
	if (iParam0 != func_5())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_5, 4);
	}
	return 0;
}

bool func_216()//Position - 0xEEED
{
	return Global_2707705;
}

bool func_217()//Position - 0xEEF9
{
	return Global_1942781.f_544;
}

int func_218(int iParam0)//Position - 0xEF08
{
	if (func_219(Global_1845263[iParam0 /*877*/].f_267.f_34))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xEF2A
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_220()//Position - 0xEF59
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_221()//Position - 0xEF71
{
	return Global_101444.f_394 > 0;
}

bool func_222(int iParam0)//Position - 0xEF82
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 11);
}

bool func_223()//Position - 0xEF9B
{
	return BitTest(Global_1956030, 5);
}

int func_224(int iParam0, bool bParam1, bool bParam2)//Position - 0xEFA9
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_225()//Position - 0xF00D
{
	if (func_226() == 0)
	{
		return 1;
	}
	return 0;
}

int func_226()//Position - 0xF022
{
	return Global_1574632.f_18;
}

bool func_227(int iParam0)//Position - 0xF030
{
	return func_228(iParam0);
}

var func_228(int iParam0)//Position - 0xF03E
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_11.f_1, 0);
}

bool func_229()//Position - 0xF055
{
	return Global_1575079;
}

int func_230(int iParam0)//Position - 0xF061
{
	if (func_192(iParam0) == 236 || func_192(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0)//Position - 0xF089
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_232()//Position - 0xF0D3
{
	return Global_2672741.f_2518[0 /*80*/].f_1;
}

int func_233(int iParam0, int iParam1)//Position - 0xF0E7
{
	if (func_235(iParam0, 0))
	{
		return func_234(Global_1886967[iParam0 /*609*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_234(int iParam0)//Position - 0xF111
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 312:
		case 313:
		case 315:
		case 316:
		case 317:
		case 322:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return 0;
		
		case 276:
		case 267:
		case 318:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_235(int iParam0, int iParam1)//Position - 0xF3DD
{
	if (func_19(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)//Position - 0xF421
{
	return Global_1886967[iParam0 /*609*/].f_10.f_35;
}

int func_237(int iParam0)//Position - 0xF436
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_252(iParam0) && !func_207(iParam0)) && !BitTest(Global_1886967[iParam0 /*609*/].f_1, 8));
	bVar2 = func_253(iParam0);
	bVar3 = func_251();
	uVar4 = func_242();
	if ((bVar1 && (func_214(iParam0) || func_241(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_240(iParam0)) && !func_238(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2738587.f_5234.f_222 != iVar0)
	{
		Global_2738587.f_5234.f_222 = iVar0;
	}
	return iVar0;
}

bool func_238(int iParam0)//Position - 0xF4F1
{
	return func_239(iParam0, 19);
}

var func_239(int iParam0, int iParam1)//Position - 0xF501
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_240(int iParam0)//Position - 0xF519
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_239(iParam0, 9);
	}
	return 0;
}

int func_241(int iParam0)//Position - 0xF537
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

int func_242()//Position - 0xF55A
{
	if ((func_239(PLAYER::PLAYER_ID(), 21) || func_239(PLAYER::PLAYER_ID(), 22)) || func_247())
	{
		return 1;
	}
	if (func_244())
	{
		func_243(22);
		return 1;
	}
	return 0;
}

void func_243(int iParam0)//Position - 0xF59F
{
	MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}

int func_244()//Position - 0xF5BC
{
	if (func_235(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_251() && !func_246()) || func_208(PLAYER::PLAYER_ID(), 21)) || func_208(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_245(27);
		}
	}
	return 0;
}

void func_245(int iParam0)//Position - 0xF60F
{
	MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}

bool func_246()//Position - 0xF62C
{
	return Global_1574582.f_1;
}

int func_247()//Position - 0xF63A
{
	return func_248(428, -1);
}

int func_248(int iParam0, int iParam1)//Position - 0xF64A
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_249(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_249(int iParam0, var uParam1)//Position - 0xF66E
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_250(uParam1));
}

int func_250(var uParam0)//Position - 0xF683
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

bool func_251()//Position - 0xF6B7
{
	return Global_1574582;
}

int func_252(int iParam0)//Position - 0xF6C3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1886967[iVar0 /*609*/] != -1;
	}
	return 0;
}

bool func_253(int iParam0)//Position - 0xF6E4
{
	return func_239(iParam0, 20);
}

bool func_254()//Position - 0xF6F4
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 5;
}

int func_255(int iParam0)//Position - 0xF709
{
	if (Global_2657921[iParam0 /*463*/].f_272.f_4 != 0 || Global_2657921[iParam0 /*463*/].f_272.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_256()//Position - 0xF73D
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 0);
}

int func_257(int iParam0)//Position - 0xF756
{
	if (func_258(iParam0, 1, 0))
	{
		if (Global_1845263[iParam0 /*877*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_258(int iParam0, bool bParam1, bool bParam2)//Position - 0xF77B
{
	if (bParam1)
	{
		if (func_227(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845263[iParam0 /*877*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_259(int iParam0, int iParam1)//Position - 0xF7AD
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_5, iParam1);
}

int func_260(int iParam0, bool bParam1, bool bParam2)//Position - 0xF7C5
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8323 /* Tunable: SET_ALL_PHONE_SERVICES_AVAILABLE */ == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_266(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4570 /* Tunable: RANK_RESTRICTION_CRATE_DROP */ == 1)
		{
			return 1;
		}
	}
	if (func_265() || func_264())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_261())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836926[iVar1], iVar0);
}

int func_261()//Position - 0xF930
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2738587.f_1831, 23))
	{
		return 1;
	}
	if (func_265())
	{
		return 1;
	}
	if (func_264())
	{
		return 1;
	}
	uVar0 = func_262(1304, -1);
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2738587.f_1831), 23);
		return 1;
	}
	return 0;
}

int func_262(int iParam0, int iParam1)//Position - 0xF98D
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_263(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_263(int iParam0, var uParam1)//Position - 0xF9BC
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_250(uParam1));
}

bool func_264()//Position - 0xF9D1
{
	return Global_1575067;
}

bool func_265()//Position - 0xF9DD
{
	return Global_1575069;
}

int func_266(int iParam0, int iParam1)//Position - 0xF9E9
{
	if (!func_270())
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_267(&(Global_1845263[iParam0 /*877*/].f_803), func_268(iParam1));
}

var func_267(var uParam0, var uParam1)//Position - 0xFA29
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_268(int iParam0)//Position - 0xFA4C
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		case 190:
			return 42;
		
		case 197:
			return 43;
		
		default:
	}
	return 1;
}

bool func_269()//Position - 0xFC2D
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_143, 3);
}

int func_270()//Position - 0xFC44
{
	if (!func_271())
	{
		return 0;
	}
	return 1;
}

int func_271()//Position - 0xFC59
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_265())
	{
		return 1;
	}
	if (func_264())
	{
		return 1;
	}
	return func_248(120, -1);
}

bool func_272(int iParam0)//Position - 0xFC89
{
	var uVar0;
	
	uVar0 = func_262(2483, -1);
	return (BitTest(uVar0, iParam0) || BitTest(uVar0, 24));
}

bool func_273()//Position - 0xFCAB
{
	bool bVar0;
	
	if (!func_779())
	{
		if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
	{
		if (func_113() == 2)
		{
			return 0;
		}
	}
	if (!func_779())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_96.f_15 != false;
			}
			else
			{
				bVar0 = Local_96.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_96.f_3, 9);
	}
	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 && !func_205())
		{
			if (func_779())
			{
				if (!func_280("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */))
				{
					func_274("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */, 0);
				}
			}
			else if (!func_280("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
			{
				func_274("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */, 0);
			}
		}
		else if (func_280("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || func_280("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_274(char* sParam0, bool bParam1)//Position - 0xFDC6
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_278(sParam0))
	{
		return;
	}
	func_10();
	Global_1574764 = 0;
	StringCopy(&(Global_1574764.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574764.f_9 = MISC::GET_HASH_KEY(&(Global_1574764.f_1));
	StringCopy(&(Global_1574764.f_12), sParam0, 16);
	func_277();
	func_276(bParam1);
	func_275();
}

void func_275()//Position - 0xFE31
{
	MISC::SET_BIT(&(Global_1574764.f_59), 1);
}

void func_276(bool bParam0)//Position - 0xFE44
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574764.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574764.f_59), 0);
}

void func_277()//Position - 0xFE6A
{
	Global_1574764.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574764.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_278(char* sParam0)//Position - 0xFE8F
{
	if (!func_15())
	{
		return 0;
	}
	if (Global_1574764 == 11)
	{
		return func_279(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574764.f_12));
}

bool func_279(char* sParam0)//Position - 0xFED3
{
	if (!func_15())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574764.f_16));
}

int func_280(char* sParam0)//Position - 0xFF05
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_15())
	{
		return 0;
	}
	if (Global_1574764 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_278(sParam0);
}

void func_281(bool bParam0)//Position - 0xFF56
{
	int iVar0;
	struct<4> Var1;
	bool bVar5;
	
	Var1 = { func_432() };
	bVar5 = false;
	if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1533[iVar0 /*42*/] = -1;
			Local_1533[iVar0 /*42*/].f_1 = func_5();
			Local_1533[iVar0 /*42*/].f_7 = 0;
			Local_1533[iVar0 /*42*/].f_31 = -1;
			if (Local_96.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1533[iVar0 /*42*/].f_1 = Local_96.f_465[iVar0 /*4*/].f_2;
				Local_1533[iVar0 /*42*/].f_7 = Local_96.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_431())
			{
				if (Local_2878.f_103 != 129)
				{
					Local_2878.f_103 = 129;
				}
				else
				{
					func_210(1, 129);
				}
			}
		}
		else if (Local_2878.f_103 != 129)
		{
			Local_2878.f_103 = 129;
		}
		func_286(&Local_1533, &iLocal_1532, 28, &Local_2878, &uLocal_2994, -1, 0, 0);
		if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_1533[0 /*42*/].f_1 != PLAYER::PLAYER_ID())
			{
				if (Local_96.f_465[0 /*4*/].f_1 > 0)
				{
					func_285();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1533[iVar0 /*42*/] = -1;
			Local_1533[iVar0 /*42*/].f_1 = func_5();
			Local_1533[iVar0 /*42*/].f_7 = 0;
			Local_1533[iVar0 /*42*/].f_31 = -1;
			Local_1533[iVar0 /*42*/].f_39 = -1;
			if (Local_96.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1533[iVar0 /*42*/].f_39 = Local_96.f_465[iVar0 /*4*/] + 1;
				Local_1533[iVar0 /*42*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Local_96.f_465[iVar0 /*4*/].f_2);
				Local_1533[iVar0 /*42*/].f_40 = Local_96.f_465[iVar0 /*4*/].f_1;
				Local_1533[iVar0 /*42*/].f_7 = Local_96.f_465[iVar0 /*4*/].f_1;
				Local_1533[iVar0 /*42*/].f_2 = Local_96.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_282();
		if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_96.f_594[0 /*4*/] > 0)
			{
				if (Local_96.f_594[0 /*4*/] != Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9)
				{
					if (Local_96.f_256[Local_96.f_594[0 /*4*/]] > 0)
					{
						func_285();
					}
				}
			}
		}
		func_286(&Local_1533, &iLocal_1532, 28, &Local_2878, &uLocal_2994, -1, 1, 0);
		if (bParam0)
		{
			if (!func_431())
			{
				if (Local_2878.f_103 != 129)
				{
					Local_2878.f_103 = 129;
				}
				else
				{
					func_210(1, 129);
				}
			}
		}
		else if (Local_2878.f_103 != 129)
		{
			Local_2878.f_103 = 129;
		}
	}
}

void func_282()//Position - 0x101DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_3519[0] = Local_96.f_594[0 /*4*/];
	uLocal_3519[1] = Local_96.f_594[1 /*4*/];
	uLocal_3519[2] = Local_96.f_594[2 /*4*/];
	uLocal_3519[3] = Local_96.f_594[3 /*4*/];
	iVar3 = Local_96.f_594[0 /*4*/];
	iVar4 = Local_96.f_594[1 /*4*/];
	iVar5 = Local_96.f_594[2 /*4*/];
	iVar6 = Local_96.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_96.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_96.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_96.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_96.f_266[iVar6];
	}
	uLocal_3524[0] = uVar7;
	uLocal_3524[1] = uVar8;
	uLocal_3524[2] = uVar9;
	uLocal_3524[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		iVar2 = func_284(uLocal_3519[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1533[iVar2 /*42*/].f_7 = Local_96.f_594[iVar0 /*4*/].f_1;
		}
		func_283(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3524[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_283(int iParam0, int iParam1)//Position - 0x10315
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1533[iParam1 /*42*/] };
	Local_1533[iParam1 /*42*/] = { Local_1533[iParam0 /*42*/] };
	Local_1533[iParam0 /*42*/] = { Var0 };
}

int func_284(int iParam0, int iParam1)//Position - 0x10363
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (iParam0 == Local_1533[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		}
		iVar0++;
	}
	return iVar1;
}

void func_285()//Position - 0x103A0
{
	MISC::SET_BIT(&(Global_2738587.f_1834), 19);
}

void func_286(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x103B5
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	bool bVar36;
	char* sVar37;
	int iVar38;
	struct<4> Var39;
	int iVar43;
	int iVar44;
	bool bVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	struct<2> Var58;
	
	if (func_430(iParam2))
	{
		return;
	}
	fVar46 = -1f;
	iVar47 = -1;
	iVar48 = -1;
	iVar50 = 0;
	iVar51 = 0;
	uParam3->f_36 = 0;
	if (func_428() || iParam2 == 29)
	{
		if (func_378(iParam1, iParam2, uParam3, Global_1836440, 0, func_433(), sParam7))
		{
			func_377(1);
			if ((!func_375() && !func_373()) || BitTest(Global_2738587.f_4694, 1))
			{
				if (func_372())
				{
					func_367();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_366(1);
						Global_1836440 = 0;
						iVar55 = -1;
						if (Global_1836664 != 1)
						{
							func_365(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 29)
						{
							iVar53 = 0;
							while (iVar53 < 32)
							{
								iVar1[iVar53] = -1;
								iVar53++;
							}
							iVar53 = 0;
							while (iVar53 < 32)
							{
								if (func_883(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
									if (!func_16(bVar36, 0))
									{
										if (func_361(bVar36) || func_359(bVar36, bVar35))
										{
											bVar45 = bVar36;
											if (func_358(bVar36))
											{
												iVar1[bVar45] = iVar56;
												iVar56++;
												iVar0++;
												func_355(&iVar1, bVar36, &iVar56, &iVar0, bVar35);
											}
										}
									}
								}
								iVar53++;
							}
						}
						if (!func_352(PLAYER::PLAYER_ID(), 0) && func_351(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar53 = 0;
						while (iVar53 < 32)
						{
							if (func_350())
							{
								if (func_883(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
								}
								else
								{
									bVar36 = func_5();
								}
							}
							else
							{
								bVar36 = (iParam0[iVar53 /*42*/])->f_1;
							}
							if ((func_349(bVar36) && func_346(bVar36, iParam2, bVar35)) && func_883(bVar36, 0, 1))
							{
								bVar45 = bVar36;
								iVar43 = Global_1845263[bVar45 /*877*/].f_205.f_6;
								Var39 = { func_340(bVar36) };
								if (bVar36 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar54;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar36), 64);
								*(uParam4[iVar53 /*13*/]) = { func_67(bVar36) };
								iVar38 = func_334(bVar36);
								sVar37 = "";
								if (iVar38 != 0)
								{
									sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
								}
								Global_1836440++;
								if ((iParam0[iVar53 /*42*/])->f_22 != -1f)
								{
									fVar46 = (iParam0[iVar53 /*42*/])->f_22;
								}
								if ((iParam0[iVar53 /*42*/])->f_31 != -1)
								{
									iVar47 = (iParam0[iVar53 /*42*/])->f_31;
								}
								if ((iParam0[iVar53 /*42*/])->f_41 != -1)
								{
									iVar48 = (iParam0[iVar53 /*42*/])->f_41;
								}
								iVar44 = (iParam0[iVar53 /*42*/])->f_7;
								if (((iParam0[iVar53 /*42*/])->f_7 != -1 || (iParam0[iVar53 /*42*/])->f_22 != -1f) || (iParam0[iVar53 /*42*/])->f_31 != -1)
								{
									if (!func_350())
									{
										iVar51 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_329(&iVar44, &fVar46, (iParam0[iVar53 /*42*/])->f_7, iParam5);
									StringCopy(&(uParam3->f_104), func_328(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar49 = (iParam0[iVar53 /*42*/])->f_2 + 1;
									if (iVar55 != iVar49)
									{
										iVar55 = iVar49;
									}
									else
									{
										iVar49 = -2;
									}
								}
								iVar52 = func_323(bVar36, 0);
								if (bVar34)
								{
									if (func_322(bVar36, 1) && iVar1[bVar45] != -1)
									{
										iVar54 = iVar1[bVar45];
									}
									else
									{
										iVar54 = (iVar0 + iVar57);
										iVar57++;
									}
								}
								uParam3->f_38[bVar45 /*2*/].f_1 = iVar54;
								if ((iParam0[iVar53 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var58, "UW_TM", 16);
									StringIntConCat(&Var58, (iParam0[iVar53 /*42*/])->f_39, 16);
								}
								if (func_321(iParam5))
								{
									func_320(bVar36, iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar44, iVar48, &Var58, (iParam0[iVar53 /*42*/])->f_40, iVar49, bParam6);
								}
								else
								{
									func_320(bVar36, iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar44, iVar52, iVar51, fVar46, iVar47, iVar48, &Var58, (iParam0[iVar53 /*42*/])->f_40, iVar49, bParam6);
								}
								MISC::SET_BIT(&iVar50, bVar36);
								iVar54++;
							}
							iVar53++;
						}
						iVar53 = 0;
						while (iVar53 < 32)
						{
							bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
							if (func_883(bVar36, 0, 1) && !BitTest(iVar50, bVar36))
							{
								bVar36 = PLAYER::INT_TO_PLAYERINDEX(iVar53);
							}
							else
							{
								bVar36 = func_5();
							}
							if (func_349(bVar36))
							{
								if (func_883(PLAYER::INT_TO_PLAYERINDEX(iVar53), 0, 1))
								{
									bVar45 = bVar36;
									iVar43 = Global_1845263[bVar45 /*877*/].f_205.f_6;
									Var39 = { func_340(bVar36) };
									*(uParam4[iVar53 /*13*/]) = { func_67(bVar36) };
									iVar38 = func_334(bVar36);
									sVar37 = "";
									if (iVar38 != 0)
									{
										sVar37 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar38);
									}
									Global_1836440++;
									iVar52 = func_323(bVar36, 1);
									if (bVar34)
									{
										if (func_322(bVar36, 1))
										{
											iVar54 = iVar1[iVar53];
										}
										else
										{
											iVar54 = (iVar0 + iVar57);
											iVar57++;
										}
									}
									uParam3->f_38[bVar45 /*2*/].f_1 = iVar54;
									func_299(bVar36, PLAYER::GET_PLAYER_NAME(bVar36), iParam1, uParam3, iVar54, Var39, sVar37, iVar43, iVar52, iVar51);
									iVar54++;
								}
							}
							iVar53++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_296(uParam3, iParam1, iParam2);
						}
						func_107(&(uParam3->f_21));
						func_295();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_294(uParam3, iParam1);
							func_293(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_294(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_289(uParam3))
						{
							Global_1836664 = 1;
						}
						func_287(uParam3);
						if (Global_1836664 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836664 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_295();
			func_366(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_287(var uParam0)//Position - 0x109E1
{
	if (!func_23(&(uParam0->f_21)))
	{
		func_21(&(uParam0->f_21), 0, 0);
	}
	else if (func_20(&(uParam0->f_21), 250, 0))
	{
		func_107(&(uParam0->f_21));
		func_288(0);
	}
}

void func_288(bool bParam0)//Position - 0x10A1D
{
	if (bParam0)
	{
		if (Global_1836664 != 2)
		{
			Global_1836664 = 2;
		}
	}
	else
	{
		switch (Global_1836664)
		{
			case 0:
				Global_1836664 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_289(var uParam0)//Position - 0x10A63
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_5() && func_883(bVar15, 0, 1))
	{
		Var2 = { func_67(bVar15) };
		iVar1 = func_292(uParam0, uParam0->f_37);
		if (func_291(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_290(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_290(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_290(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_290(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_290(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_290(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_290(var uParam0, int iParam1, int iParam2)//Position - 0x10B90
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_291(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x10BA2
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_292(var uParam0, int iParam1)//Position - 0x10BB2
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_293(int* iParam0, bool bParam1, int iParam2)//Position - 0x10BC2
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_294(var uParam0, int* iParam1)//Position - 0x10BFA
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_295()//Position - 0x10C2F
{
	if (Global_1836664 != 0)
	{
		Global_1836664 = 0;
	}
}

void func_296(var uParam0, int* iParam1, int iParam2)//Position - 0x10C44
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_5())
		{
			if (func_883(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_298(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_297(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1845263[iVar0 /*877*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_297(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10CB9
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_298(int iParam0, bool bParam1, int iParam2)//Position - 0x10CF6
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 22:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_299(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x10D3D
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_319() && iParam4 < func_318())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836442)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836664 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_317("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_317(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_317("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_317("");
			if (uParam3->f_108 == 6)
			{
				func_317("");
			}
			else
			{
				func_317(&sParam5);
			}
			func_304(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_303(uParam3))
			{
				func_302("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_301(uParam3))
			{
				func_302("DPAD_FRIEND" /* GXT: F */);
			}
			else if (func_300(uParam3))
			{
				func_302("DPAD_CREW" /* GXT: C */);
			}
			else
			{
				func_302("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_300(var uParam0)//Position - 0x10E5F
{
	return BitTest(uParam0->f_33, 6);
}

bool func_301(var uParam0)//Position - 0x10E6D
{
	return BitTest(uParam0->f_33, 5);
}

void func_302(char* sParam0)//Position - 0x10E7B
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_303(var uParam0)//Position - 0x10E8D
{
	if (func_301(uParam0) && func_300(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_304(var uParam0, int iParam1)//Position - 0x10EAE
{
	if (func_316(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_309(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && BitTest(Global_2657921[iParam1 /*463*/].f_433, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_305())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_305()//Position - 0x10F29
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_307() || func_306())
		{
			return 1;
		}
	}
	return 0;
}

var func_306()//Position - 0x10F4E
{
	return Global_2684312.f_17;
}

int func_307()//Position - 0x10F5C
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_306();
	}
	return func_308(Global_4718592.f_126144);
}

int func_308(int iParam0)//Position - 0x10F80
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4850[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_309(int iParam0)//Position - 0x10FBA
{
	if ((func_883(iParam0, 0, 1) && func_313()) && func_310(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_310(int iParam0, bool bParam1)//Position - 0x10FE7
{
	return func_311(iParam0, bParam1, 1);
}

int func_311(int iParam0, bool bParam1, int iParam2)//Position - 0x10FF8
{
	int iVar0;
	
	if (!func_19(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_312(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1886967[iParam0 /*609*/].f_10;
	if (iVar0 != func_5() && Global_1886967[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_312(int iParam0, int iParam1)//Position - 0x11055
{
	if (func_19(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_5())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 == iParam0 && Global_1886967[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_313()//Position - 0x110A4
{
	if (func_252(PLAYER::PLAYER_ID()) || func_315())
	{
		if (!func_314(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_314(int iParam0)//Position - 0x110D2
{
	if (func_192(iParam0) == 236 || func_192(iParam0) == 150)
	{
		return func_214(iParam0);
	}
	return 0;
}

int func_315()//Position - 0x110FF
{
	switch (func_351(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_316(int iParam0)//Position - 0x1113D
{
	if (func_305())
	{
		if (func_883(iParam0, 0, 1))
		{
			return func_358(iParam0);
		}
	}
	if (func_883(iParam0, 0, 1))
	{
		if (func_313())
		{
			if (func_312(iParam0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_317(char* sParam0)//Position - 0x11184
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_318()//Position - 0x11192
{
	int iVar0;
	
	if (Global_1836442)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_319()//Position - 0x111AE
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836442)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_320(int iParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x111C6
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_319() && iParam3 < func_318())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836442)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836664 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_317("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_302(sParam16);
				}
				else
				{
					func_317(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_317("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_350())
				{
					func_317("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT" /* GXT: ~a~ ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT" /* GXT: ~1~~a~ */);
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH" /* GXT: -$~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_302(&(uParam2->f_104));
					}
					else
					{
						func_317("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_317("");
				}
				if (uParam2->f_108 == 6)
				{
					func_317("");
				}
				else
				{
					func_317(&sParam4);
				}
				func_304(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_317("");
					func_317("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_303(uParam2))
				{
					func_302("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_301(uParam2))
				{
					func_302("DPAD_FRIEND" /* GXT: F */);
				}
				else if (func_300(uParam2))
				{
					func_302("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					func_302("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_321(int iParam0)//Position - 0x11513
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_322(bool bParam0, bool bParam1)//Position - 0x11537
{
	if (!func_19(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_358(bParam0))
		{
			return 0;
		}
	}
	return Global_1886967[bParam0 /*609*/].f_10 != func_5();
}

int func_323(bool bParam0, bool bParam1)//Position - 0x11570
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_252(bParam0)) && !func_253(bParam0))
	{
		iVar0 = func_327();
	}
	iVar1 = func_326(bParam0);
	if (!iVar1 == -1)
	{
		return func_324(iVar1);
	}
	return iVar0;
}

int func_324(int iParam0)//Position - 0x115BA
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_325(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_325(int iParam0)//Position - 0x1167D
{
	return Global_2648918.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_326(int iParam0)//Position - 0x11694
{
	if (func_19(iParam0))
	{
		if (func_322(iParam0, 1))
		{
			return Global_2648918.f_818.f_11[func_66(iParam0)];
		}
	}
	return -1;
}

int func_327()//Position - 0x116C4
{
	return 21;
}

char* func_328(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x116CE
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB" /* GXT: m */;
				}
				else if (bParam2)
				{
					return "AMCH_M" /* GXT: ~1~m */;
				}
				else
				{
					return "AMCH_METRES" /* GXT:  meters */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB" /* GXT: ft */;
			}
			else if (bParam2)
			{
				return "AMCH_FT" /* GXT: ~1~ft */;
			}
			else
			{
				return "AMCH_FEET" /* GXT:  feet */;
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB" /* GXT: km/h */;
				}
				else if (bParam2)
				{
					return "AMCH_KMHN" /* GXT: ~1~km/h */;
				}
				else
				{
					return "AMCH_KMH" /* GXT:  km/h */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB" /* GXT: mph */;
			}
			else if (bParam2)
			{
				return "AMCH_MPHN" /* GXT: ~1~mph */;
			}
			else
			{
				return "AMCH_MPH" /* GXT:  mph */;
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH" /* GXT:  vehicles */;
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS" /* GXT:  kills */;
			}
			else
			{
				return "AMCH_KILL" /* GXT:  kill */;
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY" /* GXT: ~r~~s~ */;
}

int func_329(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x11858
{
	if (func_333(iParam3))
	{
		*fParam1 = (func_330(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_321(iParam3))
	{
		*fParam1 = (func_330(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_330(int iParam0, int iParam1)//Position - 0x118A8
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_332(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_331(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_331(float fParam0)//Position - 0x1194B
{
	return (fParam0 * 1.609344f);
}

float func_332(float fParam0)//Position - 0x1195B
{
	return (fParam0 / 0.3048f);
}

int func_333(int iParam0)//Position - 0x1196B
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_334(bool bParam0)//Position - 0x119C7
{
	int iVar0;
	
	iVar0 = func_337(bParam0);
	if (iVar0 == -1)
	{
		func_335(bParam0, 1);
		return 0;
	}
	Global_1680805[iVar0 /*5*/].f_4 = 1;
	return Global_1680805[iVar0 /*5*/].f_2;
}

void func_335(int iParam0, bool bParam1)//Position - 0x119FD
{
	if (!func_883(iParam0, 0, 1))
	{
		return;
	}
	if (func_337(iParam0) != -1)
	{
		return;
	}
	if (Global_1680968)
	{
		if (iParam0 == Global_1680968.f_1)
		{
			return;
		}
	}
	if (func_336(iParam0))
	{
		return;
	}
	if (Global_1681006 >= 32)
	{
		return;
	}
	Global_1680973[Global_1681006] = iParam0;
	Global_1681006++;
	if (bParam1)
	{
	}
}

int func_336(int iParam0)//Position - 0x11A69
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681006)
	{
		if (Global_1680973[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_337(int iParam0)//Position - 0x11A9B
{
	int iVar0;
	
	if (!func_883(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1680966 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1680966)
	{
		if (Global_1680805[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1680805[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_338(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_338(int iParam0)//Position - 0x11B1A
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1680966)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1680805[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1680805[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1680805[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1680966)
	{
		Global_1680805[iVar32 /*5*/] = { Global_1680805[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_339(&(Global_1680805[iVar32 /*5*/]));
	Global_1680966 = (Global_1680966 - 1);
}

void func_339(var uParam0)//Position - 0x11BD0
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_340(bool bParam0)//Position - 0x11BFD
{
	char cVar0[32];
	
	if (func_883(bParam0, 0, 1))
	{
		Global_2706987 = { func_67(bParam0) };
		if (func_345())
		{
			if (func_291(Global_2706987))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2706987))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_344(&Global_2706987))
		{
			Global_2706917 = { func_342(bParam0) };
			func_341(&Global_2706917, &cVar0);
		}
	}
	return cVar0;
}

void func_341(var* uParam0, char* sParam1)//Position - 0x11C7E
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_342(int iParam0)//Position - 0x11C90
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_343(iParam0))
	{
		return Global_1575111[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_67(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_343(int iParam0)//Position - 0x11CCC
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_344(var* uParam0)//Position - 0x11CE2
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_345()//Position - 0x11D08
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_346(int iParam0, int iParam1, bool bParam2)//Position - 0x11D1E
{
	if (iParam1 == 28)
	{
		if ((func_207(iParam0) || func_348(iParam0)) || func_206(iParam0))
		{
			return 0;
		}
	}
	if (!func_347(iParam0))
	{
		return 0;
	}
	if (!func_361(iParam0) && !func_359(iParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_347(int iParam0)//Position - 0x11D7D
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_139, 22);
}

int func_348(int iParam0)//Position - 0x11D93
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1886967[iParam0 /*609*/].f_1, 10) || BitTest(Global_1886967[iParam0 /*609*/].f_1, 9));
	}
	return 0;
}

int func_349(bool bParam0)//Position - 0x11DCB
{
	int iVar0;
	
	if (bParam0 == func_5())
	{
		return 0;
	}
	if (func_16(bParam0, 0))
	{
		return 0;
	}
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (BitTest(Global_1845263[iVar0 /*877*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_350()//Position - 0x11E0D
{
	switch (func_351(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_192(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_253(PLAYER::PLAYER_ID()))
	{
		switch (func_351(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_314(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_351(int iParam0)//Position - 0x11F47
{
	if (func_19(iParam0))
	{
		if (func_235(iParam0, 0))
		{
			return Global_1886967[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_352(int iParam0, int iParam1)//Position - 0x11F73
{
	if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 && func_353(Global_1886967[iParam0 /*609*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1)
	{
		if (func_353(Global_1886967[iParam0 /*609*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_353(int iParam0)//Position - 0x11FD9
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_354(iParam0, 0);
	return 0;
}

int func_354(int iParam0, int iParam1)//Position - 0x12033
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_355(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x12088
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_883(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_16(iVar1, 0))
			{
				if (func_361(iVar1) || func_359(iVar1, bParam4))
				{
					if (func_356(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_356(int iParam0, int iParam1, bool bParam2)//Position - 0x12101
{
	if (func_19(iParam1))
	{
		if (!bParam2)
		{
			if (func_357(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1886967[iParam0 /*609*/].f_10 != func_5())
		{
			return iParam1 == Global_1886967[iParam0 /*609*/].f_10;
		}
	}
	return 0;
}

int func_357(int iParam0, int iParam1)//Position - 0x1214B
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 != func_5())
			{
				if (Global_1886967[iParam0 /*609*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_358(int iParam0)//Position - 0x12190
{
	if (func_19(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_5())
		{
			return Global_1886967[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_359(int iParam0, bool bParam1)//Position - 0x121C5
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2657921[iParam0 /*463*/].f_246 != -1 || func_360(iParam0));
}

bool func_360(int iParam0)//Position - 0x121EF
{
	return Global_1845263[iParam0 /*877*/].f_192 != 0;
}

int func_361(int iParam0)//Position - 0x12204
{
	if (!func_883(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_883(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_362(iParam0))
	{
		return 0;
	}
	if ((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iParam0, PLAYER::PLAYER_ID()) || func_351(iParam0) == 233) || func_351(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0)//Position - 0x1226D
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_363(PLAYER::PLAYER_ID());
	bVar1 = func_363(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_363(int iParam0)//Position - 0x122A9
{
	return func_364(&(Global_2657921[iParam0 /*463*/].f_442), 0);
}

var func_364(var uParam0, int iParam1)//Position - 0x122C2
{
	return BitTest(*uParam0, iParam1);
}

void func_365(int* iParam0, int iParam1, int iParam2)//Position - 0x122D0
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_366(bool bParam0)//Position - 0x122FE
{
	if (bParam0)
	{
		if (Global_1668314.f_2 == 0)
		{
			Global_1668314.f_2 = 1;
		}
	}
	else if (Global_1668314.f_2 == 1)
	{
		Global_1668314.f_2 = 0;
	}
}

void func_367()//Position - 0x12330
{
	if (BitTest(Global_2738587.f_4694, 1))
	{
		if (func_371())
		{
			func_368();
		}
	}
}

void func_368()//Position - 0x1234F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672741.f_2518[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672741.f_2518[iVar0 /*80*/].f_2 = 5;
			func_369(&(Global_2672741.f_2518[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_369(var uParam0, int iParam1)//Position - 0x1239A
{
	func_370(uParam0, iParam1);
}

void func_370(var uParam0, var uParam1)//Position - 0x123AA
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_371()//Position - 0x123BB
{
	return Global_2672741.f_2518[0 /*80*/].f_1 != 0;
}

int func_372()//Position - 0x123D1
{
	if (BitTest(Global_2738587.f_4694, 0) && func_371())
	{
		return 1;
	}
	if (BitTest(Global_2738587.f_4694, 1) && func_371())
	{
		return 1;
	}
	return 0;
}

int func_373()//Position - 0x1240C
{
	if (func_371())
	{
		if (func_374(Global_2672741.f_2518[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0)//Position - 0x12433
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_375()//Position - 0x124B9
{
	if (func_371())
	{
		if (func_376(Global_2672741.f_2518[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_376(int iParam0)//Position - 0x124E0
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_377(int iParam0)//Position - 0x12572
{
	if (Global_1668314.f_1 != Global_1668314)
	{
		Global_1668314.f_1 = Global_1668314;
	}
	if (Global_1668314 != iParam0)
	{
		Global_1668314 = iParam0;
	}
}

int func_378(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x125A0
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 21;
	bVar6 = func_427(iParam1);
	fVar7 = func_426();
	iVar8 = -1;
	if (iParam1 == 28 || iParam1 == 29)
	{
		if (func_425())
		{
			if (func_424() > 0 && Global_1836442)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_411())
		{
			func_410(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2738587.f_4697, 26))
	{
		func_410(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_23(&(uParam2->f_19)))
	{
		if (func_424() == 1)
		{
			func_409(bVar6, iParam0, 0);
			func_21(&(uParam2->f_19), 0, 0);
			func_410(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2738587.f_4699), 5);
		}
	}
	if (func_23(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_20(&(uParam2->f_19), 10000, 0) || (func_424() == 0 && !bParam5))
		{
			func_410(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_408();
				if (iParam1 == 28 || iParam1 == 29)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_408();
					if (iParam1 == 28 || iParam1 == 29)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_409(bVar6, iParam0, 0))
				{
					func_365(iParam0, 0, 0);
					sVar4 = func_406(iParam1, &(Global_4718592.f_126151), bParam4);
					Var0 = { func_404(iParam1) };
					if (bParam4)
					{
						func_401(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 28)
					{
						func_396(iParam0, func_398(uParam2), func_397(uParam2), -1);
					}
					else if (iParam1 == 29)
					{
						sVar9 = func_389(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_387(iParam0, sVar9, func_388(), -1);
					}
					else if (func_305())
					{
						uParam2->f_34 = Global_1836441;
						func_401(iParam0, sVar4, &Var0, 1, -1, Global_1836441, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_380(iParam1);
						uParam2->f_34 = Global_1836441;
						func_401(iParam0, sVar4, "", 0, iVar8, func_379(), 1);
					}
					else
					{
						iVar8 = func_380(iParam1);
						func_401(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836440 = uParam3;
				Global_1836439 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1836441)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_379()//Position - 0x12870
{
	return Global_1836441;
}

int func_380(int iParam0)//Position - 0x1287C
{
	int iVar0;
	
	iVar0 = -1;
	if (func_386())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 41:
			iVar0 = 22;
			break;
		
		case 0:
		case 32:
		case 31:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 42:
		case 43:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 27:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 13:
		case 14:
		case 15:
		case 18:
		case 44:
			iVar0 = 2;
			break;
		
		case 16:
			iVar0 = 17;
			break;
		
		case 17:
			iVar0 = 18;
			break;
		
		case 19:
			if (func_385(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_384(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_383(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_381())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_381()//Position - 0x129ED
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_62();
	}
	return func_382(Global_4718592.f_126144);
}

int func_382(int iParam0)//Position - 0x12A11
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4868[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_383(int iParam0)//Position - 0x12A4B
{
	return Global_2657921[iParam0 /*463*/].f_121 == 4;
}

bool func_384(int iParam0)//Position - 0x12A60
{
	return Global_2657921[iParam0 /*463*/].f_121 == 7;
}

bool func_385(int iParam0)//Position - 0x12A75
{
	return Global_2657921[iParam0 /*463*/].f_121 == 2;
}

bool func_386()//Position - 0x12A8A
{
	return Global_4718592.f_1 == 0;
}

void func_387(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x12A9A
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_302(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_302("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_388()//Position - 0x12AF8
{
	switch (func_351(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1" /* GXT: Total Value */;
			break;
		
		case 160:
			return "BD_SORT_4" /* GXT: Packages Collected */;
			break;
		
		case 154:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
		
		case 155:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
	}
	return "";
}

char* func_389(var uParam0)//Position - 0x12B4F
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E" /* GXT: Steal Cargo */;
			break;
		
		case 1:
			return "GR_DPD_F" /* GXT: Sell Cargo */;
			break;
		
		case 2:
			return "GR_DPD_S" /* GXT: Business Setup */;
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A" /* GXT: Business Setup */;
			break;
		
		case 1:
			return "GR_DPD_B" /* GXT: Steal Supplies */;
			break;
		
		case 2:
			return "GR_DPD_C" /* GXT: Sell Weapons */;
			break;
		
		case 3:
			return "GR_DPD_D" /* GXT: Defend Business */;
			break;
	}
	switch (func_351(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET" /* GXT: Heist Prep */;
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T" /* GXT: Gunrunning */;
			break;
		
		case 182:
			return "DEAL_DEALN" /* GXT: By the Pound */;
			break;
		
		case 194:
			return "PI_BIK_13_0" /* GXT: Rippin' it Up */;
			break;
		
		case 189:
			return "PI_BIK_4_1" /* GXT: Race to Point */;
			break;
		
		case 193:
			return "PI_BIK_13_1" /* GXT: Hit & Ride */;
			break;
		
		case 205:
			return "PI_BIK_13_3" /* GXT: Criminal Mischief */;
			break;
		
		case 186:
			return "CELL_BIKER_CK" /* GXT: Weapon of Choice */;
			break;
		
		case 207:
			return "DV_SH_TITLE" /* GXT: Fragile Goods */;
			break;
		
		case 208:
			return "BA_SH_TITLE" /* GXT: Torched */;
			break;
		
		case 209:
			return "SHU_SH_TITLE" /* GXT: Outrider */;
			break;
		
		case 210:
			return "PI_BIK_13_4" /* GXT: Wheelie Rider */;
			break;
		
		case 183:
			return "CELL_BIKER_RESC" /* GXT: P.O.W. */;
			break;
		
		case 199:
			return "CELL_BIKER_SEAR" /* GXT: Search and Destroy */;
			break;
		
		case 201:
			return "CELL_BIKER_STAN" /* GXT: Stand Your Ground */;
			break;
		
		case 142:
			return "PIM_MAGM210" /* GXT: Sightseer */;
			break;
		
		case 163:
			return "PIM_MAGM608" /* GXT: Auto Buyout */;
			break;
		
		case 160:
			return "PIM_MAGM604" /* GXT: Due Diligence */;
			break;
		
		case 154:
			return "PIM_MAGM602" /* GXT: Market Manipulation */;
			break;
		
		case 155:
			return "PIM_MAGM603" /* GXT: Courier Service */;
			break;
		
		case 148:
			if (func_392())
			{
				return "LBD_BKVBK" /* GXT: Deathmatch */;
			}
			return "PIM_MAGM201" /* GXT: Executive Deathmatch */;
			break;
		
		case 151:
			if (func_391(1))
			{
				return "GB_DPAD_BMFD" /* GXT: Marked For Death */;
			}
			return "PIM_MAGM202" /* GXT: Put Out a Hit */;
			break;
		
		case 152:
			return "PIM_MAGM204" /* GXT: Piracy Prevention */;
			break;
		
		case 153:
			if (func_391(1))
			{
				return "PI_BIK_3_2" /* GXT: On The Run */;
			}
			return "PIM_MAGM601" /* GXT: Most Wanted */;
			break;
		
		case 157:
			return "PIM_MAGM207" /* GXT: Asset Recovery */;
			break;
		
		case 159:
			return "PIM_MAGM206" /* GXT: Hostile Takeover */;
			break;
		
		case 162:
			return "PIM_MAGM607" /* GXT: Point to Point */;
			break;
		
		case 164:
			return "PIM_MAGM212" /* GXT: Executive Search */;
			break;
		
		case 166:
			return "GB_DPAD_HEAD" /* GXT: Headhunter */;
		
		case 167:
			return "GB_DPAD_BUY" /* GXT: Buy Special Cargo */;
		
		case 168:
			return "GB_DPAD_SELL" /* GXT: Sell Special Cargo */;
		
		case 169:
			return "GB_DPAD_DEF" /* GXT: Defend Special Cargo */;
		
		case 170:
			return "GB_DPAD_AIR" /* GXT: Airfreight */;
		
		case 171:
			return "GB_DPAD_CASH" /* GXT: Cashing Out */;
		
		case 172:
			return "GB_DPAD_SAL" /* GXT: Salvage */;
		
		case 173:
			return "GB_DPAD_FRA" /* GXT: Haulage */;
		
		case 178:
			return "VEX_TITLEa" /* GXT: Steal Vehicle */;
		
		case 188:
			return "VEX_TITLEb" /* GXT: Export Vehicle */;
		
		case 218:
			return "FRT_MODE" /* GXT: Fortified */;
		
		case 217:
			return "FRT_TRNS" /* GXT: Transporter */;
		
		case 214:
			return "MODE_PLW" /* GXT: Plowed */;
		
		case 215:
			return "MODE_FUL" /* GXT: Fully Loaded */;
		
		case 216:
			return "MODE_AA" /* GXT: Amphibious Assault */;
		
		case 219:
			return "MODE_VEL" /* GXT: Velocity */;
		
		case 220:
			return "MODE_RMP" /* GXT: Ramped Up */;
		
		case 221:
			return "MODE_STK" /* GXT: Stockpiling */;
		
		case 225:
			return "GR_TITLEL" /* GXT: Gunrunning */;
		
		case 226:
			return "GRS_TITLEL" /* GXT: Gunrunning Sell */;
		
		case 227:
			return "GRD_TITLEL" /* GXT: Gunrunning Defend */;
		
		case 195:
			return "GB_STEAL_T" /* GXT: Nine Tenths Of The Law */;
		
		case 198:
			return "SC_MENU_TITLE" /* GXT: Cracked */;
		
		case 190:
			return "GB_DPAD_BSEL" /* GXT: Biker Sell */;
		
		case 191:
			return "GB_DPAD_BDEF" /* GXT: Biker Defend */;
		
		case 185:
			return "GB_DPAD_GFH" /* GXT: Guns For Hire */;
		
		case 197:
			return "GB_DPAD_JB" /* GXT: Jailbreak */;
		
		case 179:
			return "CELL_JOUST" /* GXT: Joust */;
		
		case 200:
			return "CAG_BLIP" /* GXT: Caged In */;
		
		case 192:
			if (func_390(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_182))
			{
				return "GB_DPAD_BSET" /* GXT: Business Setup */;
			}
			return "GB_DPAD_BBUY" /* GXT: Resupply */;
			break;
	}
	return "";
}

int func_390(int iParam0)//Position - 0x12F7A
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_391(bool bParam0)//Position - 0x12FAC
{
	return func_310(PLAYER::PLAYER_ID(), bParam0);
}

bool func_392()//Position - 0x12FBE
{
	return (func_395() && func_393(func_394()));
}

int func_393(int iParam0)//Position - 0x12FD7
{
	return func_312(iParam0, 1);
}

int func_394()//Position - 0x12FE6
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_35;
}

bool func_395()//Position - 0x12FFD
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 148;
}

void func_396(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x13013
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_302(sParam1);
		}
		else if (func_192(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C" /* GXT: ~a~ Challenge (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_302("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_397(var uParam0)//Position - 0x13099
{
	int iVar0;
	
	iVar0 = func_192(PLAYER::PLAYER_ID());
	if (func_431())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5" /* GXT: Points */;
		
		case 133:
			switch (func_191())
			{
				case 0:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 1:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 2:
					return "FM_AE_SORT_3" /* GXT: Speed */;
				
				case 3:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 4:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 5:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 6:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 7:
					return "FM_AE_SORT_13" /* GXT: Vehicles */;
				
				case 8:
					return "FM_AE_SORT_4" /* GXT: Misses */;
				
				case 9:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 10:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 11:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 12:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 13:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				
				case 14:
					return "FM_AE_SORT_5" /* GXT: Points */;
				
				case 15:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 16:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 17:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				case 18:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10" /* GXT: Possession Time */;
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5" /* GXT: Points */;
		
		case 144:
			return "FM_AE_SORT_1" /* GXT: Destruction Value */;
		
		case 129:
			return "FM_AE_SORT_9" /* GXT: Kills */;
	}
	return "";
}

char* func_398(var uParam0)//Position - 0x1323F
{
	int iVar0;
	
	iVar0 = func_192(PLAYER::PLAYER_ID());
	if (func_431())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9" /* GXT: Moving Target */;
		
		case 132:
			if (func_400() == 0)
			{
				return "CPC_TILEL" /* GXT: Checkpoints */;
			}
			else if (func_400() == 1)
			{
				return "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			return "PIM_TA0" /* GXT: Checkpoints */;
			break;
		
		case 133:
			switch (func_191())
			{
				case 0:
					return "AMCH_0SLC" /* GXT: Longest Jump */;
				
				case 1:
					return "AMCH_1SLC" /* GXT: Longest Freefall */;
				
				case 2:
					return "AMCH_2SLC" /* GXT: Highest Speed */;
				
				case 3:
					return "AMCH_3SLC" /* GXT: Longest Stoppie */;
				
				case 4:
					return "AMCH_4SLC" /* GXT: Longest Wheelie */;
				
				case 5:
					return "AMCH_5SLC" /* GXT: No Crashes */;
				
				case 6:
					return "AMCH_6SLC" /* GXT: Lowest Parachute */;
				
				case 7:
					return "AMCH_7SLC" /* GXT: Vehicles Stolen */;
				
				case 8:
					return "AMCH_8SLC" /* GXT: Near Misses */;
				
				case 9:
					return "AMCH_12SLC" /* GXT: Reverse Driving */;
				
				case 10:
					return "AMCH_13SLC" /* GXT: Longest Fall Survived */;
				
				case 11:
					return "AMCH_15SLC" /* GXT: Low Flying */;
				
				case 12:
					return "AMCH_16SLC" /* GXT: Inverted Flying */;
				
				case 13:
					return "AMCH_23SLC" /* GXT: Longest Bail */;
				
				case 14:
					return "AMCH_9SLC" /* GXT: Fly Under Bridges */;
				
				case 15:
					return "AMCH_19SLC" /* GXT: Headshot Kills */;
				
				case 16:
					return "AMCH_20SLC" /* GXT: Drive-By */;
				
				case 17:
					return "AMCH_21SLC" /* GXT: Melee */;
				
				case 18:
					return "AMCH_22SLC" /* GXT: Sniper Kills */;
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10" /* GXT: Penned In */;
		
		case 138:
			return "PIM_TA4" /* GXT: Hold the Wheel */;
		
		case 139:
			return "PIM_TA5" /* GXT: Hot Property */;
		
		case 140:
			return "PIM_TA3" /* GXT: Dead Drop */;
		
		case 141:
			return "PIM_TA8" /* GXT: King of the Castle */;
		
		case 144:
			return "PIM_TA2" /* GXT: Criminal Damage */;
		
		case 129:
			if (func_399() == 1)
			{
				return "FM_AE_TITL_12" /* GXT: Kill List Competitive */;
			}
			else
			{
				return "PIM_TA7" /* GXT: Kill List */;
			}
			break;
		
		case 146:
			return "PIM_TA6" /* GXT: Hunt the Beast */;
	}
	return "";
}

int func_399()//Position - 0x13433
{
	return Global_2738587.f_5155;
}

int func_400()//Position - 0x13442
{
	if (func_192(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2738587.f_5150;
	}
	return -1;
}

void func_401(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13465
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_317(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_302(sParam1);
		}
		if (func_425() && iParam6)
		{
			if (func_403())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT" /* GXT: (~1~/~1~) */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_302(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_402(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_62())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_402(int iParam0)//Position - 0x13526
{
	if (func_385(iParam0) || func_384(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_403()//Position - 0x13548
{
	return Global_1836442;
}

struct<4> func_404(int iParam0)//Position - 0x13554
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_405(PLAYER::PLAYER_ID()) || func_383(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 18:
		case 16:
		case 17:
		case 19:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_3251, 16);
			break;
	}
	if (func_305() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_3251, 16);
	}
	return Var0;
}

bool func_405(int iParam0)//Position - 0x135F0
{
	return Global_2657921[iParam0 /*463*/].f_121 == 5;
}

char* func_406(int iParam0, char* sParam1, bool bParam2)//Position - 0x13605
{
	var uVar0;
	
	if (iParam0 == 21 && (!func_305() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_407();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP" /* GXT: One on One Deathmatch */;
	}
	else if (iParam0 == 26)
	{
		if (Global_1836684 == 0)
		{
			Global_1836684 = 1;
		}
		return "HUD_LBD_OVR" /* GXT: Overall Results */;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836684 == 1)
		{
			Global_1836684 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836684 == 0)
		{
			Global_1836684 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 32:
			case 43:
				return "HUD_LBD_DM" /* GXT: Deathmatch Leaderboard */;
				break;
			
			case 1:
				return "HUD_LBD_TDM" /* GXT: Team Deathmatch Leaderboard */;
				break;
			
			case 5:
				return "HUD_LBD_GRCE" /* GXT: GTA Race Leaderboard */;
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 27:
			case 11:
			case 12:
				return "HUD_LBD_RCE" /* GXT: Race Leaderboard */;
				break;
			
			case 7:
				return "HUD_LBD_BRCE" /* GXT: Parachute Race Leaderboard */;
				break;
			
			case 19:
			case 15:
			case 18:
			case 16:
			case 14:
			case 13:
			case 17:
			case 20:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD" /* GXT: Survival Leaderboard */;
				break;
			
			case 23:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_407()//Position - 0x13775
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF" /* GXT: GTA Online (Friend, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS" /* GXT: GTA Online (Solo, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW() || NETWORK::NETWORK_SESSION_GET_UNIQUE_CREW_LIMIT() > 0)
	{
		return "HUD_LBD_FMC" /* GXT: GTA Online (Crew, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI" /* GXT: GTA Online (Invite, ~1~) */;
	}
	return "HUD_LBD_FMP" /* GXT: GTA Online (Public, ~1~) */;
}

void func_408()//Position - 0x137C5
{
	Global_44876 = 1;
}

bool func_409(bool bParam0, int* iParam1, bool bParam2)//Position - 0x137D1
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_410(int* iParam0, var uParam1, bool bParam2)//Position - 0x13811
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836440 = 0;
	func_295();
	Global_1836439 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_23(&(uParam1->f_19)))
		{
			func_107(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2738587.f_4699), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_411()//Position - 0x13880
{
	if (func_423())
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	if (!func_421())
	{
		return 0;
	}
	if (!func_225())
	{
		return 0;
	}
	if (func_420(8, -1))
	{
		return 0;
	}
	if (func_424() == 2)
	{
		return 0;
	}
	if (Global_2738587.f_4649)
	{
		return 0;
	}
	if (func_184())
	{
		return 0;
	}
	else if (!func_258(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_419(1) || func_417(1)) || Global_23572.f_124) || Global_23572)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_416() && Global_1962941 == 2)
	{
		return 0;
	}
	if (func_414(PLAYER::PLAYER_ID()) && !func_416())
	{
		return 0;
	}
	if (Global_1927715)
	{
		return 0;
	}
	if (Global_1927720)
	{
		return 0;
	}
	if (func_413(0))
	{
		return 0;
	}
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 4))
	{
		return 0;
	}
	if (Global_1662976)
	{
		return 0;
	}
	if ((Global_1957039.f_718.f_5 || Global_1959865.f_718.f_5) || Global_1956067.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1963945.f_724.f_5 || Global_1963945.f_744.f_724.f_5) || Global_1963945.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1970744.f_732.f_5)
	{
		return 0;
	}
	if (func_412(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1663018 || Global_1663019) || Global_1663020)
	{
		return 0;
	}
	return 1;
}

int func_412(int iParam0)//Position - 0x13A58
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_4, 6);
}

bool func_413(int iParam0)//Position - 0x13A7D
{
	return BitTest(Global_2738587.f_5234.f_49, iParam0);
}

int func_414(int iParam0)//Position - 0x13A91
{
	if (func_16(iParam0, 0))
	{
		return 1;
	}
	if (func_415())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657921[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_415()//Position - 0x13AD0
{
	return BitTest(Global_2621446, 3);
}

bool func_416()//Position - 0x13ADE
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1962942, 0));
}

int func_417(bool bParam0)//Position - 0x13AFA
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_418(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23572.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)//Position - 0x13BE5
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_419(bool bParam0)//Position - 0x13C42
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

bool func_420(int iParam0, int iParam1)//Position - 0x13C6B
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

int func_421()//Position - 0x13CA3
{
	if (func_422())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_422()//Position - 0x13CE2
{
	return Global_1574604;
}

bool func_423()//Position - 0x13CEE
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_424()//Position - 0x13D03
{
	return Global_1668317.f_68;
}

int func_425()//Position - 0x13D11
{
	if (Global_1836441 > 16)
	{
		return 1;
	}
	return 0;
}

float func_426()//Position - 0x13D27
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_427(int iParam0)//Position - 0x13D4B
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 28:
		case 29:
		case 41:
			return 1;
		
		default:
	}
	return 0;
}

int func_428()//Position - 0x13D7D
{
	if (func_433())
	{
		return 1;
	}
	if (func_206(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_431())
	{
		return 1;
	}
	if (func_252(PLAYER::PLAYER_ID()))
	{
		switch (func_192(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_429(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_429(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_429(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_429(int iParam0)//Position - 0x13E58
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_1, 4);
}

int func_430(int iParam0)//Position - 0x13E6D
{
	if (iParam0 == 29)
	{
		if ((func_252(PLAYER::PLAYER_ID()) && !func_253(PLAYER::PLAYER_ID())) && !func_314(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 28)
	{
		if (func_235(PLAYER::PLAYER_ID(), 0) && func_253(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_237(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_431()//Position - 0x13EDC
{
	return Global_1845131;
}

struct<4> func_432()//Position - 0x13EE8
{
	struct<4> Var0;
	
	switch (Local_96.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN" /* GXT: RHINO */, 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD" /* GXT: HYDRA */, 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV" /* GXT: SAVAGE */, 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK" /* GXT: VALKYRIE */, 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ" /* GXT: BUZZARD */, 16);
			break;
	}
	return Var0;
}

int func_433()//Position - 0x13F52
{
	if (func_434(PLAYER::PLAYER_ID()))
	{
		return Global_1581985;
	}
	return 0;
}

int func_434(int iParam0)//Position - 0x13F6D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_16(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_435()//Position - 0x13F90
{
	struct<2> Var0;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17)
	{
		case 0:
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_96.f_241 == 0)
				{
					func_785();
				}
			}
			if (!BitTest(uLocal_1307, 22))
			{
				if (Local_96.f_27 == joaat("rhino") && Local_96.f_29 == 2)
				{
					func_753(Local_96.f_30[0 /*3*/], 1120403456);
					MISC::SET_BIT(&uLocal_1307, 22);
				}
				else if (!func_70(Local_96.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_753(Local_96.f_30[0 /*3*/], 1120403456);
					MISC::SET_BIT(&uLocal_1307, 22);
				}
			}
			func_752();
			func_746();
			if (Local_96.f_241 == 0)
			{
				func_743(1);
			}
			func_742(0);
			if (Local_96.f_241 == 0)
			{
				if (!Local_96.f_27 == joaat("hydra") && !Local_96.f_27 == joaat("rhino"))
				{
					func_201();
				}
				else if (func_779())
				{
					func_201();
				}
				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!BitTest(uLocal_1308, 1))
					{
						func_741(129);
						func_710(1);
						MISC::SET_BIT(&uLocal_1308, 1);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					}
					if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 6))
					{
						if (Local_96.f_28 > 1 || (Local_96.f_28 == 1 && func_113() > 1))
						{
							if (BitTest(Local_96.f_3, 4))
							{
								Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
								MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (BitTest(uLocal_1308, 1))
				{
					MISC::CLEAR_BIT(&uLocal_1308, 1);
					func_709(1);
					func_708();
					func_710(0);
				}
			}
			if (Local_96.f_241 == 1)
			{
				func_707(&bVar4, &uVar5);
				iLocal_3420 = bVar4;
				func_706(0);
				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!func_705())
					{
						MISC::SET_BIT(&uLocal_1308, 19);
					}
					if (func_280("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || func_280("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
					{
						func_9();
					}
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					if ((func_704("UW_MINV" /* GXT: Players are required in at least two Kill List Competitive vehicles before the mode will start. */) || func_704("UW_TIMELA" /* GXT: Kill List Competitive will start when all the vehicles are full or when the time expires. */)) || func_704("UW_TIMEL" /* GXT: Kill List will start when the vehicle is full or when the time expires. */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_197();
					func_693(129, 0f, 0f, 1, 1, 1, 0);
					func_682(1);
					func_681();
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					iLocal_1317 = PLAYER::GET_MAX_WANTED_LEVEL();
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					func_680(1);
					func_679(1);
					if (Local_96.f_27 != joaat("rhino"))
					{
						func_659(1);
					}
					iLocal_1519 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1517);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, false);
					func_658(0);
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iLocal_3420;
					if (!func_779())
					{
						func_657(63, "UW_TITLE" /* GXT: KILL LIST */, "UW_DESC" /* GXT: Destroy the Merryweather patrols */, func_327(), -1, func_327(), 1, 0);
					}
					else if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
					{
						func_657(63, "UW_TITLEC" /* GXT: KILL LIST COMPETITIVE */, "UW_DESCC" /* GXT: Take out the most Merryweather patrols to win */, func_327(), -1, func_327(), 1, 0);
					}
					else
					{
						bVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, bVar4, 16);
						func_656(63, &Var0, "UW_DESCCT" /* GXT: Take out the most Merryweather patrols to win. You are on ~a~. */, "UW_TITLE" /* GXT: KILL LIST */, 15000, -1, -1082130432, "", func_327(), func_327(), 0);
					}
					Local_713.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					func_658(0);
					func_654(3, 0, 1);
					func_21(&uLocal_3458, 0, 0);
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 1;
				}
				else
				{
					func_197();
					if (func_280("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || func_280("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
					{
						func_9();
					}
					if (func_651("UW_HELP1" /* GXT: ~s~Kill List~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter the vehicle and destroy the Merryweather patrols for $~1~ and RP. */, func_653(), func_652(1)) || func_651("UW_HELP1C" /* GXT: ~s~Kill List Competitive~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter one of the vehicles and destroy the Merryweather patrols for $~1~ and RP. */, func_653(), func_652(1)))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					func_658(0);
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
					{
					}
					else if (!func_650())
					{
					}
				}
			}
			else if (Local_96.f_241 == 3)
			{
				func_658(0);
				if (func_651("UW_HELP1" /* GXT: ~s~Kill List~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter the vehicle and destroy the Merryweather patrols for $~1~ and RP. */, func_653(), func_652(1)) || func_651("UW_HELP1C" /* GXT: ~s~Kill List Competitive~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter one of the vehicles and destroy the Merryweather patrols for $~1~ and RP. */, func_653(), func_652(1)))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!func_649())
				{
				}
				if (func_280("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || func_280("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
				{
					func_9();
				}
				func_197();
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_96.f_241 > 3)
			{
				if (func_280("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || func_280("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
				{
					func_9();
				}
				func_658(0);
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					func_648();
					func_647();
					if (func_123())
					{
						func_681();
					}
				}
				if (func_779())
				{
					if (func_641(2, 0, 1, 0, 0))
					{
						if (func_280("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || func_280("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
						{
							func_9();
						}
						func_658(0);
						Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
				else if (Local_96.f_27 == joaat("valkyrie"))
				{
					if (func_641(2, 0, 1, 0, 0))
					{
						if (func_280("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || func_280("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
						{
							func_9();
						}
						func_658(0);
						Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_167(1);
			func_746();
			func_562();
			func_171();
			func_560();
			func_548();
			func_281(0);
			func_544();
			func_541();
			func_648();
			func_647();
			if (!BitTest(uLocal_1307, 26))
			{
				if (!func_540(55))
				{
					if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
						{
							if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
							{
								if (!func_779())
								{
									if (!func_280("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
									{
										func_274("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */, 0);
									}
								}
								else if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
								{
									if (!func_280("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
									{
										func_274("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */, 0);
									}
								}
								else if (!func_280("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
								{
									func_707(&bVar4, &uVar5);
									bVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, bVar4, 16);
									func_274("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */, 0);
								}
							}
							else if (func_280("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
							{
								func_9();
							}
						}
					}
				}
			}
			func_539();
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
				{
					func_681();
				}
			}
			if (!func_883(PLAYER::PLAYER_ID(), 1, 1))
			{
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
				MISC::SET_BIT(&uLocal_1307, 21);
			}
			else if (func_184())
			{
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
			{
				if (!func_538())
				{
					MISC::SET_BIT(&uLocal_1307, 23);
					func_9();
					if (iLocal_3420 > -1)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iLocal_3420]))
						{
							func_26(&(Local_96.f_7[iLocal_3420]));
						}
					}
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				}
			}
			if (Local_96.f_241 == 3)
			{
				func_709(1);
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_96.f_241 > 3)
			{
				func_709(1);
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else if (func_779())
			{
				if (func_641(2, 0, 1, 0, 0))
				{
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_96.f_241 == 3)
			{
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_96.f_241 > 3)
			{
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			func_470();
			if (func_649())
			{
				if (func_192(PLAYER::PLAYER_ID()) == 129)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !HUD::IS_RADAR_HIDDEN())
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
						if (BitTest(uLocal_1307, 22))
						{
							func_469();
							MISC::CLEAR_BIT(&uLocal_1307, 22);
						}
						func_708();
						func_466();
						func_464(0);
						func_462(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
						func_710(0);
						func_709(1);
					}
					func_461();
				}
			}
			else if (!BitTest(uLocal_1308, 8))
			{
				MISC::SET_BIT(&uLocal_1308, 8);
			}
			if (!func_205())
			{
				func_460();
				func_560();
				func_167(0);
				func_548();
				func_281(1);
				func_544();
				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_459();
			}
			func_452();
			func_451();
			func_562();
			if (!BitTest(uLocal_1308, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[iVar6]))
					{
						if (!func_32(Local_96.f_48[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_96.f_48[iVar6]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_80[iVar6]))
					{
						if (!func_32(Local_96.f_80[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_96.f_80[iVar6]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar6++;
				}
				MISC::SET_BIT(&uLocal_1308, 7);
			}
			else if (Local_96.f_247 != iLocal_3418)
			{
				iLocal_3418 = Local_96.f_247;
				MISC::CLEAR_BIT(&uLocal_1308, 7);
			}
			if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
			}
			if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
			{
				MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1517)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1519);
			}
			break;
		
		case 3:
			if (!BitTest(uLocal_1307, 31))
			{
				if (BitTest(Local_96.f_3, 12))
				{
					func_197();
					MISC::SET_BIT(&uLocal_1307, 31);
				}
			}
			func_539();
			func_446();
			if (!func_205())
			{
				if (!BitTest(Local_96.f_3, 14) && !BitTest(Local_96.f_3, 12))
				{
					func_281(1);
				}
				func_548();
				func_560();
				func_544();
				func_437();
			}
			func_470();
			func_451();
			func_562();
			if (Local_96.f_241 > 3)
			{
				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_823();
			break;
	}
	func_436();
}

void func_436()//Position - 0x149F4
{
	bool bVar0;
	
	if (iLocal_3481 != Local_96.f_616)
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (BitTest(Local_96.f_616, bVar0))
			{
				if (!BitTest(iLocal_3481, bVar0))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[bVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_7[bVar0]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), 2);
							func_26(&(Local_96.f_7[bVar0]));
							MISC::SET_BIT(&iLocal_3481, bVar0);
						}
					}
					else
					{
						MISC::SET_BIT(&iLocal_3481, bVar0);
					}
				}
			}
			bVar0++;
		}
	}
}

void func_437()//Position - 0x14A7E
{
	if (BitTest(Local_96.f_3, 14))
	{
		if (!BitTest(uLocal_1308, 5))
		{
			if (func_440(0, 1, 1, 1))
			{
				if (func_779())
				{
					func_439("UW_TFEWC" /* GXT: Kill List Competitive is no longer available as there aren't enough valid players. */, 30000);
				}
				else
				{
					func_439("UW_TFEW" /* GXT: Kill List is no longer available as there aren't enough valid players. */, 30000);
				}
				func_438(1);
				MISC::SET_BIT(&uLocal_1308, 5);
			}
		}
	}
}

void func_438(int iParam0)//Position - 0x14AD4
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_371())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_439(char* sParam0, int iParam1)//Position - 0x14B03
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_440(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x14B1A
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_445())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_423())
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_258(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_444(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_443())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1836439)
	{
		return 0;
	}
	if (func_442())
	{
		return 0;
	}
	if (func_441())
	{
		return 0;
	}
	if (func_184())
	{
		return 0;
	}
	if (Global_76369)
	{
		return 0;
	}
	if (Global_2749453)
	{
		return 0;
	}
	if (func_216())
	{
		return 0;
	}
	return 1;
}

bool func_441()//Position - 0x14C13
{
	return Global_2684312.f_691;
}

bool func_442()//Position - 0x14C22
{
	return Global_2684312.f_845;
}

bool func_443()//Position - 0x14C31
{
	return Global_2672741.f_2842.f_582;
}

int func_444(int iParam0)//Position - 0x14C43
{
	if (Global_2657921[iParam0 /*463*/].f_218 == 0)
	{
		return 0;
	}
	return 1;
}

int func_445()//Position - 0x14C5F
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_446()//Position - 0x14C81
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!BitTest(uLocal_1307, (27 + iVar2)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_7[iVar2]), false))
				{
					MISC::SET_BIT(&uLocal_1307, (27 + iVar2));
					iLocal_3421[iVar2] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3421[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_96.f_7[iVar2]), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_3421[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_779())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[0]))
		{
			if (!BitTest(Local_96.f_319, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_7[0]), false))
				{
					if ((func_450() - func_127(&(Local_96.f_324), 0, 0)) >= 0)
					{
						if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_96.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_205())
								{
									func_449();
									func_173((func_450() - func_127(&(Local_96.f_324), 0, 0)), "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_96.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_205())
								{
									func_449();
									func_173(0, "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							func_709(1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_7[0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_96.f_7[0]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_96.f_7[0]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_7[0]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_96.f_7[0]), true, false, -1);
								func_26(&(Local_96.f_7[0]));
							}
							else
							{
								NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_96.f_7[0]), true, false, 0);
								func_26(&(Local_96.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_197();
		if (!func_205())
		{
			if (!BitTest(uLocal_1307, 12))
			{
				if (func_110(Local_96.f_7[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[0])))
						{
							if (!func_779())
							{
								if (!func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */))
								{
									func_274("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */, 0);
								}
							}
							else if (!func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
							{
								func_274("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */, 0);
							}
							MISC::SET_BIT(&uLocal_1307, 12);
						}
					}
				}
			}
			else if (func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) || func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[bVar0]))
			{
				if (!BitTest(Local_96.f_319, bVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false))
					{
						if ((func_450() - func_127(&(Local_96.f_324), 0, 0)) >= 0)
						{
							if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_96.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_205())
									{
										if (!bVar1)
										{
											func_449();
											func_173((func_450() - func_127(&(Local_96.f_324), 0, 0)), "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_96.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_205())
									{
										if (!bVar1)
										{
											func_449();
											func_173(0, "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
							{
								func_709(1);
							}
							if (func_447(Local_96.f_7[bVar0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_7[bVar0]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true);
									if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]))))
									{
										NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true, false, -1);
										func_26(&(Local_96.f_7[bVar0]));
									}
									else
									{
										NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), true, false, 0);
										func_26(&(Local_96.f_7[bVar0]));
									}
								}
							}
						}
					}
				}
				if (!BitTest(uLocal_1307, 12))
				{
					if (func_110(Local_96.f_7[bVar0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[bVar0])))
							{
								if (!func_205())
								{
									if (!func_779())
									{
										if (!func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */))
										{
											func_274("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */, 0);
										}
									}
									else if (!func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
									{
										func_274("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */, 0);
									}
									MISC::SET_BIT(&uLocal_1307, 12);
								}
							}
						}
					}
				}
				else if (func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) || func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							func_9();
						}
					}
				}
			}
			bVar0++;
		}
	}
}

int func_447(int iParam0)//Position - 0x15276
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_448(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x15299
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_80(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_449()//Position - 0x152C9
{
	Global_1669875.f_1173 = 1;
}

int func_450()//Position - 0x152D9
{
	if (func_779())
	{
		return Global_262145.f_12049 /* Tunable: COMPETITIVE_KILL_LIST_DETONATION_TIME */;
	}
	return Global_262145.f_11769 /* Tunable: KILL_LIST_DETONATION_TIME */;
}

void func_451()//Position - 0x152FC
{
	if (!BitTest(uLocal_1308, 4))
	{
		if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_709(1);
					MISC::SET_BIT(&uLocal_1308, 4);
				}
			}
		}
	}
}

void func_452()//Position - 0x15342
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1316);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
		{
			if (iLocal_1316 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (!BitTest(uLocal_3482, iLocal_1316))
				{
					if (!func_205())
					{
						if (Local_730[iLocal_1316 /*18*/].f_17 == 1)
						{
							MISC::SET_BIT(&uLocal_3482, iLocal_1316);
							func_453(bVar1, 55, 1, 0);
						}
					}
				}
				else if (func_205())
				{
					func_453(bVar1, 55, 0, 0);
					MISC::CLEAR_BIT(&uLocal_3482, iLocal_1316);
				}
				else if (Local_730[iLocal_1316 /*18*/].f_17 > 1)
				{
					MISC::CLEAR_BIT(&uLocal_3482, iLocal_1316);
					func_453(bVar1, 55, 0, 0);
				}
			}
		}
	}
	iLocal_1316++;
	if (iLocal_1316 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_1316 = 0;
	}
}

void func_453(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x15405
{
	var uVar0;
	
	if (func_455(bParam0))
	{
		return;
	}
	if (func_454(&(Global_2647042.f_624[bParam0]), &(Global_2647042.f_987[bParam0]), &(Global_2647042.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2647042.f_459[bParam0] = iParam1;
		}
	}
}

int func_454(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)//Position - 0x15457
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_455(int iParam0)//Position - 0x15516
{
	if (iParam0 == func_5())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_456())
	{
		return 1;
	}
	return 0;
}

int func_456()//Position - 0x1553F
{
	switch (func_458())
	{
		case 0:
			return func_457();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_457()//Position - 0x15572
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_458()//Position - 0x15596
{
	return Global_32828;
}

void func_459()//Position - 0x155A1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1324[iVar0 /*8*/]))
		{
			HUD::REMOVE_BLIP(&(Local_1324[iVar0 /*8*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_1324[iVar0 /*8*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1324[iVar0 /*8*/].f_1));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[iVar0]))
		{
			if (!func_32(Local_96.f_48[iVar0]))
			{
				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_96.f_48[iVar0])))
				{
					func_93(&(Local_1324[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_460()//Position - 0x1562F
{
	if (!BitTest(uLocal_1307, 11))
	{
		if (!BitTest(Local_96.f_3, 6))
		{
			if (!BitTest(uLocal_1307, 13))
			{
				if (func_192(PLAYER::PLAYER_ID()) != 129)
				{
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						if (!func_540(65) && !func_540(66))
						{
							if (BitTest(uLocal_1308, 11))
							{
								if (!BitTest(uLocal_1308, 12))
								{
									if (func_440(0, 1, 1, 1))
									{
										if (func_779())
										{
											func_439("UW_HELIMC" /* GXT: Although you were eliminated from Kill List Competitive and are unable to return to the vehicle, your team could still win and claim the reward. */, -1);
										}
										else
										{
											func_439("UW_HELIM" /* GXT: Although you were eliminated from Kill List and are unable to return to the vehicle, your team could still win and claim the reward. */, -1);
										}
										func_438(1);
										MISC::SET_BIT(&uLocal_1308, 12);
									}
								}
							}
							else if (!(Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra")))
							{
								if (func_440(0, 1, 1, 1))
								{
									if (!func_779())
									{
										func_439("UW_TAVAIL" /* GXT: You are no longer able to take part in Kill List. */, 30000);
									}
									else
									{
										func_439("UW_TAVAILC" /* GXT: You are no longer able to take part in Kill List Competitive. */, 30000);
									}
									func_438(1);
									MISC::SET_BIT(&uLocal_1307, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_461()//Position - 0x1572D
{
	float fVar0;
	
	if (iLocal_3477 != 0)
	{
		return;
	}
	if (func_23(&uLocal_3458))
	{
		iLocal_3477 = func_127(&uLocal_3458, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_3477);
	fVar0 = (fVar0 / 60000f);
	iLocal_3477 = SYSTEM::FLOOR(fVar0);
	if (iLocal_3477 >= 1)
	{
	}
	else
	{
		iLocal_3477 = 1;
	}
	if (iLocal_3477 > Global_262145.f_12109 /* Tunable: PARTICIPATION_T_CAP */)
	{
		iLocal_3477 = Global_262145.f_12109 /* Tunable: PARTICIPATION_T_CAP */;
	}
}

void func_462(bool bParam0)//Position - 0x15796
{
	int iVar0;
	
	if (bParam0)
	{
		Global_101444.f_8 = 1;
	}
	else
	{
		Global_101444.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_463(iVar0);
		iVar0++;
	}
}

void func_463(int iParam0)//Position - 0x157CD
{
	Global_101444.f_205[iParam0] = 1;
	Global_101444.f_204 = 1;
}

void func_464(int iParam0)//Position - 0x157E7
{
	if (func_465() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_4594666)
	{
		return;
	}
	Global_4594666 = iParam0;
	Global_4594668 = 0;
	Global_4594669 = 0;
}

int func_465()//Position - 0x1581C
{
	if ((((Global_1057441 != -1 && Global_1057441 != 33) && Global_1057441 != 35) && Global_1057441 != 37) && Global_1057441 != 21)
	{
		return 1;
	}
	return 0;
}

void func_466()//Position - 0x15862
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_468();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836941.f_1), 8);
	func_467();
}

void func_467()//Position - 0x15888
{
	if (Global_1937732)
	{
		if (BitTest(Global_1937733, 0))
		{
			MISC::CLEAR_BIT(&Global_2748465, 0);
		}
		if (BitTest(Global_1937733, 1))
		{
			MISC::CLEAR_BIT(&Global_2748465, 1);
		}
		if (BitTest(Global_1937733, 5))
		{
			MISC::CLEAR_BIT(&Global_2748465, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1937733 = 0;
	}
	Global_1937732 = 0;
}

void func_468()//Position - 0x1597F
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2738587.f_5230))
	{
		if (!Global_2738587.f_5230 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2738587.f_5229 < 1f)
		{
			return;
		}
	}
	Global_2738587.f_5230 = -1;
	Global_2738587.f_5229 = 1f;
}

void func_469()//Position - 0x159C6
{
	Global_4594670 = { 0f, 0f, 0f };
	Global_4594673 = 0;
	Global_4594674 = 100f;
}

void func_470()//Position - 0x159E5
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (BitTest(uLocal_1307, 13))
	{
		return;
	}
	bVar0 = BitTest(Local_96.f_3, 6);
	bVar1 = BitTest(uLocal_1307, 21);
	bVar2 = BitTest(uLocal_1307, 23);
	bVar3 = Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_649())
	{
		if (!BitTest(uLocal_1308, 17))
		{
			if (func_883(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || bVar2)
				{
					if (!func_205())
					{
						if (!func_779())
						{
							if (bVar0)
							{
								func_657(65, "UW_BIGF" /* GXT: LOSER */, "UW_FAILNX" /* GXT: You failed to destroy all the Merryweather patrols */, 1, 15000, 2, 1, 0);
							}
							else if (bVar1)
							{
								if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
								{
									func_657(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
								}
								else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[0]) && func_110(Local_96.f_7[0]))
								{
									MISC::SET_BIT(&uLocal_1308, 11);
									MISC::SET_BIT(&uLocal_1308, 16);
									func_657(66, "UW_BIGE" /* GXT: ELIMINATED */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
								}
								else
								{
									func_657(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
								}
							}
							else if (bVar2)
							{
								func_657(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
							}
							else if (bVar3 || BitTest(Local_96.f_3, 16))
							{
								func_657(66, "UW_BIGO" /* GXT: EVENT OVER */, "UW_ABAND" /* GXT: There aren't enough players left in your vehicle. */, 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar0)
						{
							func_657(65, "UW_BIGF" /* GXT: LOSER */, "UW_FAILNX" /* GXT: You failed to destroy all the Merryweather patrols */, 1, 15000, 2, 1, 0);
						}
						else if (bVar1)
						{
							if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
							{
								if (func_537())
								{
									MISC::SET_BIT(&uLocal_1308, 11);
									MISC::SET_BIT(&uLocal_1308, 16);
									func_657(66, "UW_BIGE" /* GXT: ELIMINATED */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
								}
								else
								{
									func_657(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
								}
							}
							else if (func_537())
							{
								MISC::SET_BIT(&uLocal_1308, 11);
								MISC::SET_BIT(&uLocal_1308, 16);
								func_657(66, "UW_BIGE" /* GXT: ELIMINATED */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
							}
							else
							{
								func_657(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar2)
						{
							if (func_537())
							{
								MISC::SET_BIT(&uLocal_1308, 11);
								MISC::SET_BIT(&uLocal_1308, 16);
								func_657(66, "UW_BIGE" /* GXT: ELIMINATED */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
							}
							else
							{
								func_657(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar3 || BitTest(Local_96.f_3, 16))
						{
							func_657(66, "UW_BIGO" /* GXT: EVENT OVER */, "UW_ABAND" /* GXT: There aren't enough players left in your vehicle. */, 1, 15000, 2, 1, 0);
						}
					}
					iVar4 = func_536(1);
					Local_713.f_6 = (Local_713.f_6 + iVar4);
					if (!Global_262145.f_12176 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */)
					{
						if (Local_713.f_6 > 0)
						{
							func_534(19, Local_713.f_6);
						}
					}
					Global_2698492 = iVar4;
					if (iVar4 > 0)
					{
						if (func_533())
						{
							func_521(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_520(1);
					Local_713.f_7 = (Local_713.f_7 + iVar10);
					func_519();
					func_471(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar10, 1, -1, 0, 0, 0);
					Local_713.f_5 = 2;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
					if (!BitTest(uLocal_1308, 16))
					{
						MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					MISC::SET_BIT(&uLocal_1308, 17);
					MISC::SET_BIT(&uLocal_1308, 18);
				}
			}
		}
	}
}

int func_471(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x15D9C
{
	return func_472(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_472(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x15DBE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_482(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_478(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_473(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_473(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x15E51
{
	struct<3> Var0;
	
	Var0 = { func_476(iParam0, 1) };
	if (iParam0 == func_475(PLAYER::PLAYER_PED_ID()))
	{
		func_474(1);
	}
	func_478(Var0, iParam1, 0, sParam2, iParam3);
}

void func_474(int iParam0)//Position - 0x15E85
{
	Global_2672741.f_1686 = iParam0;
}

int func_475(int iParam0)//Position - 0x15E96
{
	return iParam0;
}

Vector3 func_476(int iParam0, bool bParam1)//Position - 0x15EA0
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_477(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_477(int iParam0)//Position - 0x15F64
{
	return iParam0;
}

void func_478(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x15F6E
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672741.f_1085[iVar0 /*30*/].f_6 == 0 || Global_2672741.f_1085[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672741.f_1085[iVar1 /*30*/] = { Param0 };
			Global_2672741.f_1085[iVar1 /*30*/].f_6 = 1;
			Global_2672741.f_1085[iVar1 /*30*/].f_4 = func_481(Global_2672741.f_1085[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672741.f_1085[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672741.f_1085[iVar1 /*30*/].f_3 = iParam3;
			Global_2672741.f_1085[iVar1 /*30*/].f_8 = iParam4;
			Global_2672741.f_1085[iVar1 /*30*/].f_9 = func_480();
			Global_2672741.f_1085[iVar1 /*30*/].f_10 = func_479();
			StringCopy(&(Global_2672741.f_1085[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672741.f_1085[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_479()//Position - 0x16085
{
	if (Global_2672741.f_1686)
	{
		Global_2672741.f_1686 = 0;
		return 1;
	}
	Global_2672741.f_1686 = 0;
	return 0;
}

var func_480()//Position - 0x160AF
{
	var uVar0;
	
	uVar0 = Global_2672741.f_1688;
	Global_2672741.f_1688 = 1;
	return uVar0;
}

float func_481(struct<3> Param0, var uParam3, var uParam4)//Position - 0x160CA
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_482(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x16163
{
	var uVar0;
	
	uVar0 = func_483(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_483(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x16186
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_513();
	if (func_176(sParam2))
	{
	}
	if (func_512())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_510(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_509(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_507(0, &iVar1);
					break;
				
				case 3:
					func_507(1, &iVar1);
					break;
				
				case 1:
					func_502(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13604 /* Tunable: -9502162 */)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_501(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_491((func_500(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_2 != -1)
				{
					func_501(1166, iVar1, -1);
				}
				func_488(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_484((func_486(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_484((func_486(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_484(int iParam0)//Position - 0x162F4
{
	if (func_512())
	{
		Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_5 = iParam0;
		func_485(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_485(int iParam0, int iParam1)//Position - 0x1631F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_486(int iParam0)//Position - 0x1633B
{
	if (iParam0 > -1)
	{
		if (func_883(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_487(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1845263[iParam0 /*877*/].f_205.f_5;
			}
		}
		else
		{
			return func_487(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_487(int iParam0)//Position - 0x1638C
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_488(int iParam0)//Position - 0x163AA
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_67(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_489(func_490(&Var0));
			if (iVar13 == 0)
			{
				func_485(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_487(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_485(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_487(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_485(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_487(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_485(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_487(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_485(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_487(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_489(int iParam0)//Position - 0x16474
{
	if (iParam0 == func_487(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_487(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_487(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_487(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_487(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_490(var* uParam0)//Position - 0x164EA
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2695893;
		}
	}
	return Global_2695893;
}

void func_491(int iParam0, int iParam1, int iParam2)//Position - 0x1650D
{
	if (func_512())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10256 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_262(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_262(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10255 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10255 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_499(PLAYER::PLAYER_ID()))
		{
			Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_1 = iParam0;
			Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_6 = func_496(iParam0, 1);
		}
		func_495(640, iParam0, -1, 1);
		func_495(641, func_496(iParam0, 1), -1, 1);
		func_492(-1109644434, 7, 0);
	}
}

void func_492(int iParam0, int iParam1, int iParam2)//Position - 0x1661F
{
	int iVar0;
	
	if (func_494(iParam1, iParam2))
	{
		iVar0 = func_493();
		Global_2695845[iVar0] = iParam1;
		Global_2695856[iVar0] = iParam0;
	}
}

int func_493()//Position - 0x1664C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2695845[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_494(int iParam0, var uParam1)//Position - 0x16681
{
	if (Global_1575067)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575079) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_495(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x16707
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_263(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_496(int iParam0, bool bParam1)//Position - 0x16735
{
	if (bParam1)
	{
	}
	return func_497(iParam0, 0);
}

int func_497(int iParam0, int iParam1)//Position - 0x16749
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_498(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_498(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_498(int iParam0)//Position - 0x16804
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200/*func_567*/;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return 663800;
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_499(int iParam0)//Position - 0x16D3F
{
	if (!func_19(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672741.f_1, iParam0);
}

int func_500(int iParam0)//Position - 0x16D5E
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_262(640, -1);
			}
			else if (func_499(iParam0))
			{
				return Global_1845263[iParam0 /*877*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_262(640, -1);
	}
	return 0;
}

void func_501(int iParam0, int iParam1, int iParam2)//Position - 0x16DB5
{
	int iVar0;
	
	iVar0 = func_262(iParam0, func_250(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_495(iParam0, iVar0, iParam2, 1);
}

void func_502(int iParam0)//Position - 0x16DDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_504(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_68(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_503(*iParam0, 100) * (10f * Global_262145.f_4051 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_503(*iParam0, 100) * (20f * Global_262145.f_4044 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_503(int iParam0, int iParam1)//Position - 0x16EC9
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_504(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16EEA
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058104.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25548, bVar0))
			{
				bVar1 = Global_1058104.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_505(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x17235
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25549, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3318[iParam2 /*25763*/].f_25549, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_883(iVar1, 1, 1) || func_16(iVar1, 0)) || BitTest(Global_2657921[iVar1 /*463*/].f_199, 2)) || func_506(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_506(int iParam0)//Position - 0x17361
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_36.f_18, 14);
}

void func_507(bool bParam0, int iParam1)//Position - 0x17379
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_883(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_68(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_883(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_508(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_68(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_503(*iParam1, 100) * (10f * Global_262145.f_4051 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_503(*iParam1, 100) * (20f * Global_262145.f_4044 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_508(int iParam0, int iParam1)//Position - 0x17491
{
	return SYSTEM::VDIST(func_60(iParam0), func_60(iParam1));
	return 0f;
}

int func_509(int iParam0)//Position - 0x174AD
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_503(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_510(int iParam0)//Position - 0x174E4
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_500(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_500(PLAYER::PLAYER_ID());
		}
	}
	if (func_511(8000, 0, 0) > 0)
	{
		if (func_511(8000, 0, 0) < (iParam0 + func_500(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_511(8000, 0, 0) - func_500(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_511(int iParam0, bool bParam1, int iParam2)//Position - 0x17548
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_498(iParam0);
}

int func_512()//Position - 0x1756E
{
	return 1;
}

int func_513()//Position - 0x17577
{
	int iVar0;
	
	if (func_518(PLAYER::PLAYER_ID()) || func_517(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10288 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10288 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_381() || func_515(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23493 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23493 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (func_514(Global_4718592.f_183007))
	{
		if (Global_262145.f_7168 /* Tunable: 1840127983 */ > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7168 /* Tunable: 1840127983 */;
		}
	}
	else if (Global_262145.f_7167 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7167 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

bool func_514(int iParam0)//Position - 0x17645
{
	return iParam0 == 89;
}

int func_515(int iParam0)//Position - 0x17652
{
	return func_516(func_351(iParam0));
}

int func_516(int iParam0)//Position - 0x17664
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_517(int iParam0)//Position - 0x1767E
{
	return Global_2657921[iParam0 /*463*/].f_121 == 2;
}

bool func_518(int iParam0)//Position - 0x17693
{
	return Global_2657921[iParam0 /*463*/].f_121 == 7;
}

void func_519()//Position - 0x176A8
{
	Global_2697829 = 1;
}

int func_520(bool bParam0)//Position - 0x176B5
{
	int iVar0;
	
	if (BitTest(uLocal_1308, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_779())
		{
			return Global_262145.f_11990 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPATION_RP */;
		}
		else
		{
			return Global_262145.f_11929 /* Tunable: KILL_LIST_MINIMUM_PARTICIPATION_RP */;
		}
	}
	func_461();
	if (func_779())
	{
		iVar0 = (Global_262145.f_11990 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPATION_RP */ * iLocal_3477);
	}
	else
	{
		iVar0 = (Global_262145.f_11929 /* Tunable: KILL_LIST_MINIMUM_PARTICIPATION_RP */ * iLocal_3477);
	}
	return iVar0;
}

void func_521(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x17718
{
	int iVar0;
	
	if (!func_533())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_VEH_ROB_SETUP"):
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: 1103207774 */)
			{
				func_522(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_522(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_CLAIM_VEH"):
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: 1103207774 */)
			{
				func_522(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
		case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
			func_522(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_522(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1802C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_533())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537357 = 1;
			return 0;
		}
		if (Global_2697412)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4537358 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535851[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_529(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535851[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535851[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537338 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537356 = 1;
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_528(1, iParam4);
			Global_4537356 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_523(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_523(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x181D9
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_524(iParam0);
	}
}

void func_524(int iParam0)//Position - 0x18211
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_533())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_527(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535851[iParam0 /*85*/].f_66);
		}
		func_525(&(Global_4535851[iParam0 /*85*/]));
	}
}

void func_525(var uParam0)//Position - 0x18265
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_526(&(uParam0->f_14));
	func_526(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_526(var uParam0)//Position - 0x1836D
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_527(int iParam0)//Position - 0x183B5
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535851[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_528(int iParam0, int iParam1)//Position - 0x183E0
{
	Global_2698632 = iParam1;
	Global_2698631 = iParam0;
}

int func_529(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x183F4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535851[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_533())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535851[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535851[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535851[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535851[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535851[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535851[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535851[iVar0 /*85*/].f_66 = iParam0;
			Global_4535851[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535851[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535851[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535851[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535851[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535851[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535851[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537338 = 0;
			if (bParam6)
			{
				Global_4535851[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_530(Global_4535851[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_530(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x18531
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_532(Var0.f_1);
	if ((Global_262145.f_24288 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24289 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24290 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_531();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_531()//Position - 0x185C5
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_532(int iParam0)//Position - 0x185D5
{
	var uVar0;
	
	if (func_19(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_533()//Position - 0x185F0
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_534(int iParam0, int iParam1)//Position - 0x18607
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24208 /* Tunable: 277748102 */ != -1)
		{
			if (func_535())
			{
				Global_2738587.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7116 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7116 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2738587.f_284 = iParam1;
				Global_2738587.f_285 = 0;
			}
		}
	}
}

int func_535()//Position - 0x1865C
{
	if (MISC::IS_PC_VERSION() && Global_1977964 == 0)
	{
		return 0;
	}
	return 0;
}

int func_536(bool bParam0)//Position - 0x1867B
{
	int iVar0;
	
	if (BitTest(uLocal_1308, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_779())
		{
			return Global_262145.f_11989 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPATION_CASH */;
		}
		else
		{
			return Global_262145.f_11928 /* Tunable: KILL_LIST_MINIMUM_PARTICIPATION_CASH */;
		}
	}
	func_461();
	if (func_779())
	{
		iVar0 = (Global_262145.f_11989 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPATION_CASH */ * iLocal_3477);
	}
	else
	{
		iVar0 = (Global_262145.f_11928 /* Tunable: KILL_LIST_MINIMUM_PARTICIPATION_CASH */ * iLocal_3477);
	}
	return iVar0;
}

int func_537()//Position - 0x186DE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iLocal_3420]))
	{
		if (func_110(Local_96.f_7[iLocal_3420]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_96.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_96.f_256[iLocal_3420];
	if (!bVar0)
	{
		if (Local_96.f_594[0 /*4*/] != iLocal_3420)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_96.f_594[0 /*4*/] == iLocal_3420)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_96.f_256[Local_96.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_96.f_255 - iVar2);
		if (iVar5 > iVar6)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_538()//Position - 0x187B2
{
	bool bVar0;
	var uVar1;
	
	func_707(&bVar0, &uVar1);
	if (iLocal_3420 > -1)
	{
		if (func_110(Local_96.f_7[iLocal_3420]))
		{
			return 1;
		}
	}
	return 0;
}

void func_539()//Position - 0x187DE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_96.f_241 == 1)
	{
		if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
			{
				if (!func_23(&uLocal_3456) || (func_23(&uLocal_3456) && func_20(&uLocal_3456, 5000, 0)))
				{
					if (Local_96.f_27 == joaat("savage") || Local_96.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3420;
						if (iVar1 > -1)
						{
							if (func_110(Local_96.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_96.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3420;
						if (iVar1 > -1)
						{
							if (func_110(Local_96.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
								{
									iVar4 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
									bVar2 = false;
									while (bVar2 < iVar4)
									{
										iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[iVar1]), bVar2, false);
										if (iVar0 != 0)
										{
											if (!PED::IS_PED_INJURED(iVar0))
											{
												if (PED::IS_PED_A_PLAYER(iVar0))
												{
													iVar3++;
												}
											}
										}
										bVar2++;
									}
									if (iVar3 == 0)
									{
										Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_107(&uLocal_3456);
					func_21(&uLocal_3456, 0, 0);
				}
			}
		}
	}
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < 4)
	{
		if (BitTest(Local_96.f_319, bVar2))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[bVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_7[bVar2]), false))
				{
					if ((func_450() - func_127(&(Local_96.f_349[bVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[bVar2]), false))
							{
								if (!func_205())
								{
									func_449();
									func_173((func_450() - func_127(&(Local_96.f_349[bVar2 /*2*/]), 0, 0)), "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[bVar2]), false))
							{
								if (!func_205())
								{
									func_449();
									func_173(0, "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_7[bVar2]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_96.f_7[bVar2]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_96.f_7[bVar2]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_7[bVar2]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_96.f_7[bVar2]), true, false, -1);
								func_26(&(Local_96.f_7[bVar2]));
							}
							else
							{
								NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_96.f_7[bVar2]), true, false, 0);
								func_26(&(Local_96.f_7[bVar2]));
							}
						}
					}
				}
			}
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == bVar2)
			{
				if (!BitTest(uLocal_1308, 6))
				{
					if (func_440(0, 1, 1, 1))
					{
						if (func_779())
						{
							if (!BitTest(uLocal_1308, 19))
							{
								func_439("UW_NOPILC" /* GXT: There aren't enough players left in your vehicle to continue with Kill List Competitive. */, 30000);
							}
							else
							{
								func_439("UW_NOGUN" /* GXT: You need a gunner to take part in Kill List Competitive in a Valkyrie. */, 30000);
							}
						}
						else
						{
							func_439("UW_NOPIL" /* GXT: There aren't enough players left in your vehicle to continue with Kill List. */, 30000);
						}
						func_438(1);
						MISC::SET_BIT(&uLocal_1308, 6);
					}
					else if (BitTest(uLocal_1308, 19))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar5 = Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10;
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar5]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[iVar5])))
						{
							if (!func_779())
							{
								if (!func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */))
								{
									func_274("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */, 0);
								}
							}
							else if (!func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
							{
								func_274("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */, 0);
							}
						}
						else if (func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) || func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
						{
							func_9();
						}
					}
					else if (func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) || func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
					{
						func_9();
					}
				}
			}
		}
		bVar2++;
	}
}

bool func_540(int iParam0)//Position - 0x18C96
{
	return Global_2672741.f_2518[0 /*80*/].f_1 == iParam0;
}

void func_541()//Position - 0x18CAD
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (Local_96.f_27 == joaat("rhino"))
		{
			if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
				{
					if (!func_23(&uLocal_3452) || (func_23(&uLocal_3452) && func_20(&uLocal_3452, 5000, 0)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_70(Local_3478, 0f, 0f, 0f, 0))
							{
								Local_3478 = { Local_96.f_30[0 /*3*/] };
							}
							fVar0 = func_543(PLAYER::PLAYER_PED_ID(), Local_3478, 1);
							if (fVar0 > 750f)
							{
								MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							}
						}
						func_107(&uLocal_3452);
						func_21(&uLocal_3452, 0, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_280("UW_OOB" /* GXT: Get back to the combat zone. */))
					{
						func_274("UW_OOB" /* GXT: Get back to the combat zone. */, 0);
					}
					if (!func_23(&uLocal_3454))
					{
						iVar2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_96.f_7[func_542()]), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iVar2, "Time", 30f);
						func_21(&uLocal_3454, 0, 0);
					}
					if (func_23(&uLocal_3454))
					{
						if ((func_450() - func_127(&uLocal_3454, 0, 0)) >= 0)
						{
							func_449();
							func_173((func_450() - func_127(&uLocal_3454, 0, 0)), "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
						else
						{
							func_449();
							func_173(0, "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							func_9();
							MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
						}
					}
					if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						fVar0 = func_543(PLAYER::PLAYER_PED_ID(), Local_96.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							func_107(&uLocal_3454);
							AUDIO::STOP_SOUND(iVar2);
						}
					}
				}
			}
		}
	}
	if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		func_709(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_542();
			if (iVar1 > -1)
			{
				if (func_110(Local_96.f_7[iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_7[iVar1]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_96.f_7[iVar1]), false);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_96.f_7[iVar1]), true);
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_96.f_7[iVar1]), true, false, -1);
						func_26(&(Local_96.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_542()//Position - 0x18F48
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar1]))
			{
				if (func_110(Local_96.f_7[iVar1]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_543(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x18FB2
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_544()//Position - 0x18FEC
{
	var uVar0;
	bool bVar1;
	
	bVar1 = -1;
	if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!BitTest(uLocal_1307, 24))
	{
		if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			func_707(&bVar1, &uVar0);
			if (func_547(bVar1))
			{
				if (bVar1 > -1)
				{
					if (Local_96.f_22[bVar1] != func_5())
					{
						fLocal_1318 = NETWORK::NETWORK_GET_TALKER_PROXIMITY();
						NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
						func_546(1, bVar1);
						MISC::SET_BIT(&uLocal_1307, 24);
						func_545(1);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_1307, 24);
				MISC::SET_BIT(&uLocal_1307, 25);
			}
		}
	}
	if (!BitTest(uLocal_1307, 25))
	{
		if (BitTest(uLocal_1307, 24))
		{
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1318);
				func_707(&bVar1, &uVar0);
				if (bVar1 > -1)
				{
					func_546(0, bVar1);
					MISC::SET_BIT(&uLocal_1307, 25);
					func_545(0);
				}
			}
		}
	}
}

void func_545(bool bParam0)//Position - 0x190D8
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
	}
}

void func_546(bool bParam0, bool bParam1)//Position - 0x1910D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_883(iVar1, 0, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (BitTest(Local_730[iVar0 /*18*/].f_1, bParam1) || !bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, true);
				}
				else if (bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, false);
				}
			}
		}
		iVar0++;
	}
}

bool func_547(bool bParam0)//Position - 0x1918B
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bVar0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (iVar1 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (BitTest(Local_730[iVar1 /*18*/].f_1, bParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_548()//Position - 0x191D8
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return;
	}
	if (!BitTest(uLocal_1307, 15))
	{
		if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
		{
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_96.f_22[0] != func_5())
				{
					if (func_440(0, 0, 1, 1))
					{
						if (!func_779())
						{
							if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
							{
								if (!func_779())
								{
									func_559("UW_START1P" /* GXT: ~a~ ~s~has started Kill List. */, PLAYER::GET_PLAYER_NAME(Local_96.f_22[0]), 1, 30000);
								}
								else
								{
									func_559("UW_START1PC" /* GXT: ~a~ ~s~has started Kill List Competitive. */, PLAYER::GET_PLAYER_NAME(Local_96.f_22[0]), 1, 30000);
								}
								func_438(1);
							}
							else if (BitTest(Local_96.f_15, 0))
							{
								if (!BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 14))
								{
									if (!func_779())
									{
										func_439("UW_STARTM" /* GXT: Kill List has started without you. */, 30000);
									}
									else
									{
										func_439("UW_STARTMC" /* GXT: Kill List Competitive has started without you. */, 30000);
									}
									func_438(1);
								}
							}
							else
							{
								func_559("UW_START1P" /* GXT: ~a~ ~s~has started Kill List. */, PLAYER::GET_PLAYER_NAME(Local_96.f_22[0]), 1, 30000);
								func_438(1);
							}
						}
						else if (!BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 14))
						{
							if (!func_779())
							{
								func_439("UW_STARTM" /* GXT: Kill List has started without you. */, 30000);
							}
							else
							{
								func_439("UW_STARTMC" /* GXT: Kill List Competitive has started without you. */, 30000);
							}
							func_438(1);
						}
						MISC::SET_BIT(&uLocal_1307, 15);
					}
				}
			}
		}
	}
	if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
	{
		if (Local_96.f_241 == 1)
		{
			if (Local_96.f_27 != joaat("hydra") && Local_96.f_27 != joaat("rhino"))
			{
				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (iLocal_3420 >= 0)
					{
						if (!BitTest(uLocal_1308, 10))
						{
							if (!BitTest(uLocal_1308, 9))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iLocal_3420]))
								{
									if (func_110(Local_96.f_7[iLocal_3420]))
									{
										MISC::SET_BIT(&uLocal_1308, 9);
									}
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iLocal_3420]))
							{
								if (!func_110(Local_96.f_7[iLocal_3420]))
								{
									func_558("UW_TEAMV" /* GXT: Your team vehicle was destroyed. */, 0);
									MISC::SET_BIT(&uLocal_1308, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_779())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!BitTest(Local_96.f_3, 6))
			{
				if (!BitTest(uLocal_1307, (16 + iVar1)))
				{
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 >= 2)
					{
						if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
						{
							if ((BitTest(Local_96.f_3, 0) && BitTest(Local_96.f_3, 1)) && BitTest(Local_96.f_3, 2))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[0]))
								{
									if (func_110(Local_96.f_7[0]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[0]), -1, false) != 0)
										{
											iVar0 = func_557(iVar1, 0);
											if (iVar0 != func_5())
											{
												func_549("UW_COMP" /* GXT: ~a~ completed Kill List. */, iVar0, 1, 0, 0, 0, 1, 0);
											}
											MISC::SET_BIT(&uLocal_1307, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_549(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x194D6
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_555(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2706987 = { func_67(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706917, 35, &Global_2706987))
			{
				bVar17 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2706917.f_22), "Leader") && Global_2706917.f_30 == 0)
				{
					bVar17 = true;
				}
				if (Global_2706917.f_21 > 0)
				{
					bVar18 = false;
				}
				else
				{
					bVar18 = true;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_554(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2706917, 35), &(Global_2706917.f_17), Global_2706917.f_30, bVar17, false, Global_2706917, &Var1, Global_1576236, Global_1576237, Global_1576238);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2706917, 35), &(Global_2706917.f_17), Global_2706917.f_30, bVar17, false, Global_2706917, Global_1576236, Global_1576237, Global_1576238);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_550(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_550(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x19637
{
	int iVar0;
	
	if ((!func_553() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_551(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1936604.f_5[iVar0 /*53*/] = iParam0;
		Global_1936604.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1936604.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1936604.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1936604.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1936604.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1936604.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_551(int iParam0)//Position - 0x1973F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1936604 - 1))
	{
		if (iParam0 > Global_1936604.f_5[iVar0 /*53*/].f_1)
		{
			func_552(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1936604++;
	if (Global_1936604 > 5)
	{
		Global_1936604 = 5;
		return Global_1936604;
	}
	return (Global_1936604 - 1);
}

void func_552(int iParam0)//Position - 0x197A1
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1936604.f_5[iVar0 /*53*/] = { Global_1936604.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_553()//Position - 0x197DA
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_554(char* sParam0)//Position - 0x197EB
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_555(char* sParam0)//Position - 0x19816
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_556(&cVar0);
}

var func_556(char[4] cParam0)//Position - 0x1983A
{
	return cParam0;
}

int func_557(int iParam0, int iParam1)//Position - 0x19844
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar2 = (iParam0 - 1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[iParam1]))
	{
		if (func_110(Local_96.f_7[iParam1]))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[iParam1]), iVar2, false);
			if (iVar1 != 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_558(char* sParam0, bool bParam1)//Position - 0x198A4
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_550(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_559(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x198DC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

void func_560()//Position - 0x19907
{
	if (!BitTest(uLocal_1307, 9))
	{
		if (Local_96.f_241 == 1)
		{
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC"))
				{
					MISC::SET_BIT(&uLocal_1307, 9);
				}
			}
		}
	}
	if (!BitTest(uLocal_1307, 10))
	{
		if (BitTest(uLocal_1307, 9))
		{
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL"))
						{
							MISC::SET_BIT(&uLocal_1307, 10);
						}
					}
					else if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC"))
					{
						MISC::SET_BIT(&uLocal_1307, 10);
						func_561();
					}
				}
			}
		}
	}
}

void func_561()//Position - 0x199AF
{
	if (BitTest(Global_2738587.f_5068, 1))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_5068), 1);
	}
	if (Global_2738587.f_5068 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2738587.f_5068 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2738587.f_5078 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2738587.f_5078);
				Global_2738587.f_5078 = -1;
			}
		}
	}
}

void func_562()//Position - 0x19A4A
{
	struct<2> Var0;
	struct<2> Var4;
	int iVar8;
	int iVar9[2];
	int iVar12;
	int iVar13;
	int iVar14[4];
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	var uVar27;
	var uVar28;
	var uVar32;
	var uVar33;
	var uVar37;
	var uVar38;
	var uVar42;
	var uVar43;
	var uVar47;
	var uVar48;
	bool bVar52;
	int iVar53;
	char* sVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	var uVar61;
	var uVar62;
	
	iVar20 = 1;
	if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
		{
			if (!BitTest(uLocal_1307, 26))
			{
				if ((((BitTest(Local_96.f_3, 0) && BitTest(Local_96.f_3, 1)) && BitTest(Local_96.f_3, 2)) || (func_779() && BitTest(Local_96.f_3, 6))) || (func_779() && BitTest(Local_96.f_3, 15)))
				{
					if (!func_23(&uLocal_3473))
					{
						func_21(&uLocal_3473, 0, 0);
					}
					if (func_20(&uLocal_3473, 1000, 0))
					{
						if (func_280("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
						{
							func_9();
						}
						func_640();
						if (func_639())
						{
							iVar25 = func_536(1);
							if (iVar25 > 0)
							{
								Local_713.f_6 = (Local_713.f_6 + iVar25);
								if ((!Global_262145.f_12176 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */ && !BitTest(Local_96.f_3, 8)) || (!Global_262145.f_12177 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */ && BitTest(Local_96.f_3, 8)))
								{
									if (Local_713.f_6 > 0)
									{
										func_534(19, Local_713.f_6);
									}
								}
								Global_2698492 = iVar25;
								if (func_533())
								{
									func_521(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_520(1);
							func_519();
							Local_713.f_7 = (Local_713.f_7 + iVar23);
							func_471(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar23, 1, -1, 0, 0, 0);
							Local_713.f_5 = 2;
							func_657(65, "UW_BIGF" /* GXT: LOSER */, "UW_DRAWZ" /* GXT: Your vehicle destroyed no Merryweather patrols */, 1, 15000, 2, 1, 0);
						}
						else if (!func_779())
						{
							iVar25 = func_652(0);
							func_627(&iVar25, 1);
							iVar25 = (iVar25 + func_536(1));
							if (iVar25 > 0)
							{
								Local_713.f_6 = (Local_713.f_6 + iVar25);
								if (!Global_262145.f_12176 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */)
								{
									if (Local_713.f_6 > 0)
									{
										func_534(19, Local_713.f_6);
									}
								}
								Global_2698492 = iVar25;
								if (func_533())
								{
									func_521(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_520(1);
							iVar23 = (iVar23 + func_626());
							Local_713.f_7 = (Local_713.f_7 + iVar23);
							func_519();
							func_471(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar23, 1, -1, 0, 0, 0);
							Local_713.f_5 = 1;
							func_656(64, "", "UW_BIG_BMEXP" /* GXT: You destroyed all the Merryweather patrols */, "UW_BIGM" /* GXT: WINNER */, 15000, -1, -1082130432, 0, 1, 2, 0);
						}
						else if (func_625())
						{
							if (!func_624(1))
							{
								if (!func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
								{
									func_9();
								}
								iVar25 = func_652(0);
								func_627(&iVar25, 1);
								iVar25 = (iVar25 + func_536(1));
								Local_713.f_6 = (Local_713.f_6 + iVar25);
								if (!Global_262145.f_12177 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */)
								{
									if (Local_713.f_6 > 0)
									{
										func_534(19, Local_713.f_6);
									}
								}
								Global_2698492 = iVar25;
								if (iVar25 > 0)
								{
									if (func_533())
									{
										func_521(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
								{
									func_656(64, "", "UW_WON1P" /* GXT: You destroyed the most Merryweather patrols */, "UW_BIGM" /* GXT: WINNER */, 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								else
								{
									func_656(64, "", "UW_WON" /* GXT: Your vehicle destroyed the most Merryweather patrols */, "UW_BIGM" /* GXT: WINNER */, 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								Local_713.f_5 = 1;
								iVar23 = func_626();
								iVar23 = (iVar23 + func_520(1));
								Local_713.f_7 = (Local_713.f_7 + iVar23);
								func_519();
								func_471(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), 459130717, iVar23, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar25 = func_536(1);
								iVar23 = func_520(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_96.f_465[iVar22 /*4*/].f_1 == Local_96.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
										{
											if (Local_96.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_96.f_465[iVar22 /*4*/].f_2 != PLAYER::PLAYER_ID())
												{
													if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_96.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_96.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3420 > -1)
										{
											if (iLocal_3420 != Local_96.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_96.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
								{
									if (iVar20 > 2)
									{
										bVar21 = true;
									}
									else if (iVar9[0] == func_5())
									{
										bVar21 = true;
									}
									else
									{
										func_623(68, "UW_DRAWP" /* GXT: Your vehicle tied with <C>~a~</C> ~s~to win Kill List Competitive */, PLAYER::GET_PLAYER_NAME(iVar9[0]), 1, 15000, "UW_BIGO" /* GXT: EVENT OVER */, 2);
									}
								}
								else if (iVar20 > 2)
								{
									bVar21 = true;
								}
								else if (iVar14[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									func_656(68, &Var0, "UW_DRAWP" /* GXT: Your vehicle tied with <C>~a~</C> ~s~to win Kill List Competitive */, "UW_BIGO" /* GXT: EVENT OVER */, 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								if (bVar21)
								{
									if (!func_779())
									{
										func_657(68, "UW_BIGO" /* GXT: EVENT OVER */, "UW_DRAW" /* GXT: Kill List was drawn */, 1, 15000, 2, 1, 0);
									}
									else
									{
										func_657(68, "UW_BIGO" /* GXT: EVENT OVER */, "UW_DRAWC" /* GXT: Kill List Competitive was drawn */, 1, 15000, 2, 1, 0);
									}
								}
								iVar26 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_652(0)) / SYSTEM::TO_FLOAT(iVar20)));
								iVar24 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_626()) / SYSTEM::TO_FLOAT(iVar20)));
								func_627(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_713.f_6 = (Local_713.f_6 + iVar25);
								if (!Global_262145.f_12177 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */)
								{
									if (Local_713.f_6 > 0)
									{
										func_534(19, Local_713.f_6);
									}
								}
								Global_2698492 = iVar25;
								if (iVar25 > 0)
								{
									if (func_533())
									{
										func_521(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_713.f_7 = (Local_713.f_7 + iVar23);
								func_519();
								func_471(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), 459130717, iVar23, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_621(1);
							iVar25 = func_536(1);
							iVar23 = func_520(1);
							Local_713.f_6 = (Local_713.f_6 + iVar25);
							if (!Global_262145.f_12177 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */)
							{
								if (Local_713.f_6 > 0)
								{
									func_534(19, Local_713.f_6);
								}
							}
							Global_2698492 = iVar25;
							if (iVar25 > 0)
							{
								if (func_533())
								{
									func_521(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_713.f_7 = (Local_713.f_7 + iVar23);
							func_519();
							func_471(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), 459130717, iVar23, 1, -1, 0, 0, 0);
							if (!func_624(0))
							{
								iVar13 = Local_96.f_465[0 /*4*/];
								if (!func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
								{
									func_9();
								}
								if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
								{
									iVar8 = PLAYER::INT_TO_PLAYERINDEX(Local_96.f_465[0 /*4*/].f_2);
									if (func_322(iVar8, 1))
									{
										iVar53 = func_326(iVar8);
										if (iVar53 > -1)
										{
											uVar55 = func_324(iVar53);
											sVar54 = func_615(iVar8);
											bVar52 = true;
										}
									}
									if (iVar8 != func_5())
									{
										if (!bVar52)
										{
											if (!func_779())
											{
												func_623(65, "UW_FWONP" /* GXT: Kill List was won by <C>~a~</C> */, PLAYER::GET_PLAYER_NAME(iVar8), 6, 15000, "UW_BIGF" /* GXT: LOSER */, 2);
											}
											else
											{
												func_623(65, "UW_FWONPC" /* GXT: Kill List Competitive was won by <C>~a~</C> */, PLAYER::GET_PLAYER_NAME(iVar8), 6, 15000, "UW_BIGF" /* GXT: LOSER */, 2);
											}
										}
										else if (!func_779())
										{
											func_613(66, "PEN_OVR" /* GXT: EVENT OVER */, "UW_FWONG" /* GXT: ~a~ ~s~won Kill List */, sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_613(66, "PEN_OVR" /* GXT: EVENT OVER */, "UW_FWONGC" /* GXT: ~a~ ~s~won Kill List Competitive */, sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_779())
									{
										func_656(65, &Var0, "UW_FWONT" /* GXT: Kill List was won by ~a~ */, "UW_BIGF" /* GXT: LOSER */, 15000, -1, -1082130432, "", 6, 2, 0);
									}
									else
									{
										func_656(65, &Var0, "UW_FWONTC" /* GXT: Kill List Competitive was won by ~a~ */, "UW_BIGF" /* GXT: LOSER */, 15000, -1, -1082130432, "", 6, 2, 0);
									}
								}
							}
							else
							{
								if (!func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
								{
									func_9();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_96.f_465[iVar22 /*4*/].f_1 == Local_96.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
										{
											if (Local_96.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_96.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_96.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3420 > -1)
										{
											if (iLocal_3420 != Local_96.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_96.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_96.f_27 == joaat("hydra") || Local_96.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9[0]))
										{
											if (iVar9[1] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9[1]))
											{
												func_568(68, func_5(), func_5(), -1, "UW_DRAW2P" /* GXT: <C>~a~</C> and <C>~a~</C> tied to win Kill List Competitive */, "UW_BIGF" /* GXT: LOSER */, func_327(), 15000, func_327(), PLAYER::GET_PLAYER_NAME(iVar9[0]), PLAYER::GET_PLAYER_NAME(iVar9[1]), 0);
											}
											else
											{
												bVar21 = true;
											}
										}
										else
										{
											bVar21 = true;
										}
									}
									else
									{
										bVar21 = true;
									}
								}
								else if (iVar20 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									StringCopy(&Var4, "UW_TM", 16);
									StringIntConCat(&Var4, iVar14[1] + 1, 16);
									func_656(11, &Var0, "UW_DRAW2P" /* GXT: <C>~a~</C> and <C>~a~</C> tied to win Kill List Competitive */, "UW_BIGO" /* GXT: EVENT OVER */, 15000, -1, -1082130432, &Var4, 1, 2, 0);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_657(68, "UW_BIGO" /* GXT: EVENT OVER */, "UW_DRAW" /* GXT: Kill List was drawn */, 1, 15000, 2, 1, 0);
								}
							}
						}
						func_679(0);
						if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
						{
							Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
						}
						MISC::SET_BIT(&uLocal_1307, 13);
						MISC::SET_BIT(&uLocal_1307, 26);
					}
				}
				else if (BitTest(Local_96.f_3, 6) || (!func_779() && BitTest(Local_96.f_3, 15)))
				{
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1)
					{
						func_657(66, "UW_BIGO" /* GXT: EVENT OVER */, "UW_ABAND" /* GXT: There aren't enough players left in your vehicle. */, 1, 15000, 2, 1, 0);
					}
					else
					{
						func_656(65, "", "UW_FAIL" /* GXT: You failed to destroy all the Merryweather patrols */, "UW_BIGF" /* GXT: LOSER */, 15000, -1, -1082130432, 0, 6, 2, 0);
					}
					func_679(0);
					MISC::SET_BIT(&uLocal_1307, 26);
					iVar25 = func_536(1);
					Local_713.f_6 = (Local_713.f_6 + iVar25);
					if (!Global_262145.f_12176 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */)
					{
						if (Local_713.f_6 > 0)
						{
							func_534(19, Local_713.f_6);
						}
					}
					Global_2698492 = iVar25;
					if (iVar25 > 0)
					{
						if (func_533())
						{
							func_521(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_520(1);
					Local_713.f_7 = (Local_713.f_7 + iVar23);
					func_519();
					func_471(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar23, 1, -1, 0, 0, 0);
					Local_713.f_5 = 2;
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_96.f_3, 14))
				{
					func_679(0);
					MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 3)
					{
						Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
					}
				}
				else if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
				{
					func_656(65, "", "UW_FAILD" /* GXT: You died before completing the objective */, "UW_BIGF" /* GXT: LOSER */, 15000, -1, -1082130432, 0, 6, 2, 0);
					func_679(0);
					MISC::SET_BIT(&uLocal_1307, 26);
					MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					iVar25 = func_536(1);
					Local_713.f_6 = (Local_713.f_6 + iVar25);
					if (!Global_262145.f_12176 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */)
					{
						if (Local_713.f_6 > 0)
						{
							func_534(19, Local_713.f_6);
						}
					}
					Global_2698492 = iVar25;
					if (iVar25 > 0)
					{
						if (func_533())
						{
							func_521(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_520(1);
					Local_713.f_7 = (Local_713.f_7 + iVar23);
					func_519();
					func_471(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar23, 1, -1, 0, 0, 0);
					Local_713.f_5 = 2;
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_96.f_3, 12))
				{
					MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
				}
			}
			if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
			{
				if (BitTest(uLocal_1307, 26))
				{
					if (func_280("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
					{
						func_9();
					}
					if (func_563(&uLocal_3411, 1))
					{
						MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					if (!func_280("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !func_280("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
					{
						if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 > -1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (func_110(Local_96.f_7[Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])))
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
	{
		MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
	}
}

int func_563(var uParam0, bool bParam1)//Position - 0x1A86F
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_371()) && !(func_235(PLAYER::PLAYER_ID(), 0) && (func_240(PLAYER::PLAYER_ID()) || func_238(PLAYER::PLAYER_ID())))) && !func_567(PLAYER::PLAYER_ID())) && !func_215(PLAYER::PLAYER_ID()))
	{
		func_566();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_23(&(uParam0->f_3)))
			{
				func_21(&(uParam0->f_3), 0, 0);
			}
			else if (func_20(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836941.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2738587.f_4694), 0);
					func_21(&(uParam0->f_5), 0, 0);
				}
				func_21(&(uParam0->f_1), 0, 0);
				func_565(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_23(&(uParam0->f_5)))
			{
				if (func_20(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_564();
				func_565(uParam0, 2);
			}
			break;
		
		case 2:
			func_564();
			if (func_20(&(uParam0->f_1), 15000, 0))
			{
				if (func_704("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				func_565(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_20(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2738587.f_4694), 1);
				func_565(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2738587.f_4694), 1);
			return 1;
	}
	return 0;
}

void func_564()//Position - 0x1A9F9
{
	if (BitTest(Global_2738587.f_4694, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2738587.f_853, 2)) && func_883(PLAYER::PLAYER_ID(), 1, 1)) && !Global_76369) && !Global_61219) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2738587.f_4694), 1);
			func_439("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */, -1);
			func_438(1);
			MISC::CLEAR_BIT(&(Global_2738587.f_4694), 0);
		}
	}
}

void func_565(var uParam0, int iParam1)//Position - 0x1AA76
{
	*uParam0 = iParam1;
}

void func_566()//Position - 0x1AA83
{
	Global_2697830 = 1;
}

int func_567(int iParam0)//Position - 0x1AA90
{
	int iVar0;
	
	if (iParam0 != func_5())
	{
		if (func_883(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				iVar0 = func_196(Global_2657921[iParam0 /*463*/].f_321.f_7);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_568(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1AAE5
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_612(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_569(&Var0);
}

int func_569(var uParam0)//Position - 0x1AB74
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672741.f_2840)
		{
			return 0;
		}
	}
	func_580(uParam0, uParam0->f_17);
	func_579(uParam0);
	if (func_62())
	{
		func_579(uParam0);
	}
	if (func_578(uParam0->f_1))
	{
		func_571();
		if (Global_2672741.f_2518[0 /*80*/].f_2 == 0)
		{
			Global_2672741.f_2518[0 /*80*/] = { *uParam0 };
			if (func_570(uParam0->f_69, 8192))
			{
				Global_1927721 = 1;
			}
			return 1;
		}
		if (((Global_2672741.f_2518[0 /*80*/].f_1 == 13 || Global_2672741.f_2518[0 /*80*/].f_1 == 53) || Global_2672741.f_2518[0 /*80*/].f_1 == 54) || Global_2672741.f_2518[0 /*80*/].f_1 == 58)
		{
			Global_2672741.f_2518[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672741.f_2518[iVar0 + 1 /*80*/] = { Global_2672741.f_2518[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672741.f_2518[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672741.f_2518[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672741.f_2518[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_571();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_369(&(Global_2672741.f_2518[iVar0 /*80*/].f_69), 2);
				Global_2672741.f_2518[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_570(uParam0->f_69, 128))
			{
				if (func_374(Global_2672741.f_2518[iVar0 /*80*/].f_1))
				{
					Global_2672741.f_2518[iVar0 /*80*/].f_2 = 5;
					func_369(&(Global_2672741.f_2518[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_570(var uParam0, int iParam1)//Position - 0x1AD59
{
	return (uParam0 && iParam1) != 0;
}

void func_571()//Position - 0x1AD68
{
	bool bVar0;
	
	if (Global_2672741.f_2841)
	{
		return;
	}
	if (!Global_79517)
	{
		Global_79517 = 1;
		bVar0 = true;
	}
	else if (Global_79518)
	{
		Global_79518 = 0;
		bVar0 = true;
	}
	func_572();
	if (bVar0)
	{
		Global_79517 = 0;
	}
}

void func_572()//Position - 0x1ADAD
{
	Global_2672741.f_2842 = 0;
	Global_2672741.f_2842.f_582 = 0;
	func_576(&(Global_2672741.f_2842.f_1));
	Global_2672741.f_2842.f_1.f_1 = 0;
	func_573(&(Global_2672741.f_2842.f_1), 1);
}

void func_573(var uParam0, int iParam1)//Position - 0x1ADEF
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_79517)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_79519)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_575(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_574(0);
}

void func_574(int iParam0)//Position - 0x1AE9E
{
	Global_79509 = iParam0;
	Global_79510 = iParam0;
}

int func_575(bool bParam0)//Position - 0x1AEB2
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_576(var uParam0)//Position - 0x1AEDA
{
	func_577(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_577(var uParam0)//Position - 0x1AF04
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_578(int iParam0)//Position - 0x1AF83
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

void func_579(var uParam0)//Position - 0x1B09B
{
	if (func_376(uParam0->f_1))
	{
		uParam0->f_72 = func_327();
	}
}

void func_580(var uParam0, int iParam1)//Position - 0x1B0B6
{
	if (func_376(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_5() || !func_883(iParam1, 0, 1))
	{
		return;
	}
	if (func_374(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_581(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_581(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1B10D
{
	int iVar0;
	int iVar1;
	
	if (!func_19(iParam0))
	{
		return 1;
	}
	if (func_414(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_120437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_414(PLAYER::PLAYER_ID()) || (func_611() && func_610())) && !BitTest(Global_2738587.f_4697, 31)) && !bParam4)
	{
		iVar1 = func_609();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_883(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_120437[iParam1] != -1)
							{
								return func_607(iParam1, iParam0, 0);
							}
							else
							{
								return func_593(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_593(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_120437[iParam1] != -1)
				{
					return func_607(iParam1, iParam0, 0);
				}
				else
				{
					return func_582(0, -1, 0);
				}
			}
			else
			{
				return func_582(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_120437[iParam1] != -1)
		{
			return func_607(iParam1, iParam0, 0);
		}
		else
		{
			return func_593(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_593(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_582(bool bParam0, int iParam1, bool bParam2)//Position - 0x1B2F8
{
	return func_583(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_583(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1B30E
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_592() || (func_591() && func_589())) && Global_1679836.f_1)
	{
		if (bParam1)
		{
			return func_588(iParam2, iVar0);
		}
		else
		{
			return func_588(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_504(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_587(1);
				}
				else
				{
					return func_587(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_584(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_584(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_587(1);
	}
	return func_587(0);
}

int func_584(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1B410
{
	int iVar0;
	
	iVar0 = func_586(iParam0, iParam1, iParam3);
	if (func_585(Global_4718592.f_126144, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_585(int iParam0, bool bParam1)//Position - 0x1B528
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_183007 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9672[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_586(int iParam0, int iParam1, int iParam2)//Position - 0x1B579
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_504(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_587(bool bParam0)//Position - 0x1B5C1
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_588(int iParam0, int iParam1)//Position - 0x1B5D8
{
	if (iParam0 == -1)
	{
		iParam0 = func_586(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_589()//Position - 0x1B626
{
	if (func_590())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_187226, 4);
}

bool func_590()//Position - 0x1B645
{
	return BitTest(Global_4718592.f_176243, 12);
}

bool func_591()//Position - 0x1B65A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_187226, 0);
	}
	return ((BitTest(Global_4718592.f_187226, 0) || Global_1919183) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_592()//Position - 0x1B6A1
{
	if (func_590() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_593(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1B6BE
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845263[iVar2 /*877*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_596())
			{
				iVar3 = func_326(iParam0);
				if (!iVar3 == -1)
				{
					return func_324(iVar3);
				}
			}
			if ((func_595(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_504(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_587(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_594(1);
			}
			else
			{
				return func_583(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836669 || Global_1836659) || Global_1845263[iParam0 /*877*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836669 == 1 && Global_1836679 == 0))
			{
				return func_587(1);
			}
			else
			{
				return func_583(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836663 && Global_1836147.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_326(iParam0);
	if (!iVar4 == -1)
	{
		return func_324(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_594(bool bParam0)//Position - 0x1B856
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_595(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1B86D
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_596()//Position - 0x1B8E5
{
	if (((((((func_306() || func_606()) || func_62()) || func_605()) || func_604()) || func_602()) || func_600()) || func_597())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_597()//Position - 0x1B957
{
	return func_598(Global_4718592.f_126144);
}

int func_598(int iParam0)//Position - 0x1B96D
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_599(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_599(int iParam0)//Position - 0x1B9A1
{
	if (iParam0 != -1)
	{
		return Global_262145.f_34045 /* Tunable: 1597065378 */[iParam0];
	}
	return -1;
}

int func_600()//Position - 0x1B9C0
{
	return func_601(Global_4718592.f_126144);
}

int func_601(int iParam0)//Position - 0x1B9D6
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_32038[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_602()//Position - 0x1BA0F
{
	return func_603(Global_4718592.f_126144);
}

int func_603(int iParam0)//Position - 0x1BA25
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31332[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_604()//Position - 0x1BA5F
{
	return Global_2684312.f_24;
}

bool func_605()//Position - 0x1BA6D
{
	return Global_2684312.f_21;
}

var func_606()//Position - 0x1BA7B
{
	return Global_2684312.f_18;
}

int func_607(int iParam0, int iParam1, bool bParam2)//Position - 0x1BA89
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058104.f_14[iParam0];
	if (func_596())
	{
		iVar2 = func_326(iParam1);
		if (!iVar2 == -1)
		{
			return func_324(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_8496[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_4718592.f_120437[iParam0] != -1 && Global_4718592.f_120437[iParam0] <= 4)
		{
			if (Global_4718592.f_120437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_120437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_120437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_120437[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_120437[iParam0];
			}
		}
		else
		{
			iVar0 = func_583(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_608(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_504(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_594(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_608(int iParam0)//Position - 0x1BC09
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_183183;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_183184;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_183185;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_183186;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_609()//Position - 0x1BCDE
{
	return Global_2621446.f_2;
}

var func_610()//Position - 0x1BCEC
{
	return BitTest(Global_2621446, 4);
}

var func_611()//Position - 0x1BCFA
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

void func_612(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1BD14
{
	uParam1->f_17 = func_5();
	uParam1->f_18 = func_5();
	uParam1->f_19 = func_5();
	uParam1->f_20 = func_5();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_613(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1BD90
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar1 = func_5();
	iVar2 = func_5();
	return func_614(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_614(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1BDCB
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_612(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_369(&(Var0.f_69), 4);
	return func_569(&Var0);
}

char* func_615(int iParam0)//Position - 0x1BE7F
{
	char* sVar0;
	int iVar1;
	
	if (!func_19(iParam0))
	{
		sVar0 = func_619(iParam0, 0);
		return sVar0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_618(&(Global_1886967[iParam0 /*609*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1886967[iParam0 /*609*/].f_10.f_121 != Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_121)
	{
		sVar0 = func_619(iParam0, 0);
		return sVar0;
	}
	if (((func_239(iParam0, 28) || func_239(PLAYER::PLAYER_ID(), 28)) || func_617(iParam0)) && !func_616(iParam0))
	{
		return func_619(iParam0, 0);
	}
	iVar1 = func_66(iParam0);
	if (iVar1 != func_5())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (Global_262145.f_36085 /* Tunable: 664611037 */)
			{
				return func_619(iVar1, 0);
			}
			if (!func_345() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_619(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_5())
	{
		sVar0 = func_618(&(Global_1886967[iVar1 /*609*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_619(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_616(int iParam0)//Position - 0x1BFB3
{
	struct<13> Var0;
	
	Var0 = { func_67(iParam0) };
	if (func_345())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_617(int iParam0)//Position - 0x1BFF3
{
	struct<13> Var0;
	
	if (iParam0 != func_5())
	{
		Var0 = { func_67(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_345() || MISC::IS_PROSPERO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
		if ((func_291(Var0) && NETWORK::NETWORK_PERMISSIONS_HAS_GAMER_RECORD(&Var0)) && !NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
		{
			return 1;
		}
	}
	return 1;
}

var func_618(var uParam0)//Position - 0x1C089
{
	return uParam0;
}

char* func_619(int iParam0, bool bParam1)//Position - 0x1C093
{
	if (!bParam1)
	{
		if (func_310(iParam0, 1))
		{
			return func_620();
		}
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /* GXT: An Organization */);
}

char* func_620()//Position - 0x1C0BA
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /* GXT: Motorcycle Club */);
}

void func_621(bool bParam0)//Position - 0x1C0CA
{
	if (bParam0)
	{
		if (func_622(1))
		{
			MISC::SET_BIT(&Global_1836966, 1);
		}
	}
	else if (func_622(2))
	{
		MISC::SET_BIT(&Global_1836966, 2);
	}
}

int func_622(int iParam0)//Position - 0x1C0FC
{
	var uVar0;
	
	uVar0 = func_262(2537, -1);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_623(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x1C1A8
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_612(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_569(&Var0);
}

int func_624(bool bParam0)//Position - 0x1C21A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_707(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_96.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_96.f_27 == joaat("rhino") || Local_96.f_27 == joaat("hydra"))
	{
		return Local_96.f_465[0 /*4*/].f_1 == Local_96.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_96.f_594[0 /*4*/].f_1 == Local_96.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_625()//Position - 0x1C2AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_707(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_96.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_626()//Position - 0x1C2EA
{
	if (!func_779())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11925 /* Tunable: KILL_LIST_DEFAULT_RP */) * Global_262145.f_12115 /* Tunable: KILL_LIST_EVENT_MULTIPLIER_RP */));
	}
	if ((BitTest(Local_96.f_3, 0) && BitTest(Local_96.f_3, 1)) && BitTest(Local_96.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11986 /* Tunable: COMP_KILL_LIST_DEFAULT_RP */) * Global_262145.f_12117 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_RP */));
	}
	if (BitTest(Local_96.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11986 /* Tunable: COMP_KILL_LIST_DEFAULT_RP */) * Global_262145.f_12117 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_RP */));
	}
	return 0;
}

void func_627(int iParam0, int iParam1)//Position - 0x1C37A
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_638())
		{
			if (func_637(0))
			{
				if (!func_391(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_636()))
					{
						if (func_635() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_635());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_633(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_632("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_636(), iVar0, 0, 0, 1);
						}
						func_631(20);
						func_628(func_636(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_628(int iParam0, int iParam1, int iParam2)//Position - 0x1C41A
{
	struct<9> Var0;
	
	if (func_883(iParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_630(iParam0);
		func_629(&(Var0.f_7), &(Var0.f_8));
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_532(iParam0), Var0.f_0);
	}
}

void func_629(var uParam0, var uParam1)//Position - 0x1C472
{
	*uParam0 = Global_1916087.f_9;
	*uParam1 = Global_1916087.f_10;
}

var func_630(int iParam0)//Position - 0x1C48C
{
	return Global_1886967[iParam0 /*609*/].f_511;
}

void func_631(int iParam0)//Position - 0x1C4A0
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2738587.f_5234.f_7[iVar0]), iVar1);
}

int func_632(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x1C4C9
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_581(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_555(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_550(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_633(int iParam0, bool bParam1)//Position - 0x1C561
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_634(1);
	}
	else
	{
		iVar1 = func_634(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_634(bool bParam0)//Position - 0x1C593
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_13065 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_635()//Position - 0x1C5B9
{
	return Global_262145.f_13064 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_636()//Position - 0x1C5C8
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_637(bool bParam0)//Position - 0x1C5DD
{
	return func_322(PLAYER::PLAYER_ID(), bParam0);
}

bool func_638()//Position - 0x1C5EF
{
	return func_358(PLAYER::PLAYER_ID());
}

int func_639()//Position - 0x1C5FF
{
	int iVar0;
	
	if (!BitTest(Local_96.f_3, 6) && !BitTest(Local_96.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_96.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_640()//Position - 0x1C646
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_73[iVar0]))
		{
			if (!func_110(Local_96.f_73[iVar0]))
			{
				func_26(&(Local_96.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[iVar0]))
		{
			if (func_32(Local_96.f_48[iVar0]))
			{
				func_26(&(Local_96.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_641(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x1C6CB
{
	if (func_235(PLAYER::PLAYER_ID(), 0) || func_352(PLAYER::PLAYER_ID(), 0))
	{
		if (func_240(PLAYER::PLAYER_ID()) || func_253(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_646(sParam3, sParam4, 1);
		}
		if (func_645(26, -1))
		{
			func_643(26, -1);
		}
		return 1;
	}
	if (func_23(&(Global_1836941.f_18)))
	{
		if (!func_20(&(Global_1836941.f_18), 7500, 0))
		{
			return 0;
		}
		func_107(&(Global_1836941.f_18));
	}
	if (func_642())
	{
		if (bParam2)
		{
			func_646(sParam3, sParam4, 0);
		}
		if (func_645(26, -1))
		{
			func_643(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_646(sParam3, sParam4, 1);
		}
		if (func_645(26, -1))
		{
			func_643(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_642()//Position - 0x1C7C2
{
	return BitTest(Global_1836941.f_1, 0);
}

void func_643(bool bParam0, int iParam1)//Position - 0x1C7D2
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_644(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

int func_644(int iParam0)//Position - 0x1C82B
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_645(int iParam0, int iParam1)//Position - 0x1C88E
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = func_644(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_646(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1C8B7
{
	if ((!BitTest(Global_1836941.f_1, 2) && !func_207(PLAYER::PLAYER_ID())) && !func_206(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1" /* GXT: EVENT OVER */;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2" /* GXT: Not enough players in the session */;
			}
			else
			{
				sParam1 = "FMEVEN_NUM3" /* GXT: Not enough players available in the session */;
			}
		}
		func_657(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836941.f_1), 2);
	}
}

void func_647()//Position - 0x1C92E
{
	Global_2738587.f_1893.f_56 = 1;
}

void func_648()//Position - 0x1C940
{
	Global_2738587.f_1893.f_54 = 1;
}

bool func_649()//Position - 0x1C952
{
	return BitTest(Global_2738587.f_1834, 11);
}

int func_650()//Position - 0x1C964
{
	if (iLocal_3420 > -1)
	{
		if (func_110(Local_96.f_7[iLocal_3420]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[iLocal_3420])))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_651(char* sParam0, char* sParam1, int iParam2)//Position - 0x1C9A0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_652(bool bParam0)//Position - 0x1C9BF
{
	if (!func_779())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11924 /* Tunable: KILL_LIST_DEFAULT_CASH */) * Global_262145.f_12114 /* Tunable: KILL_LIST_EVENT_MULTIPLIER_CASH */));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11985 /* Tunable: COMP_KILL_LIST_DEFAULT_CASH */) * Global_262145.f_12116 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_CASH */));
	}
	if ((BitTest(Local_96.f_3, 0) && BitTest(Local_96.f_3, 1)) && BitTest(Local_96.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11985 /* Tunable: COMP_KILL_LIST_DEFAULT_CASH */) * Global_262145.f_12116 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_CASH */));
	}
	if (BitTest(Local_96.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11985 /* Tunable: COMP_KILL_LIST_DEFAULT_CASH */) * Global_262145.f_12116 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_CASH */));
	}
	return 0;
}

char* func_653()//Position - 0x1CA71
{
	if (Local_96.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK" /* GXT: ~BLIP_TEMP_1~ */;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_96.f_27))
	{
		return "ABLIP_PLANE" /* GXT: ~BLIP_TEMP_1~ */;
	}
	return "ABLIP_HELI" /* GXT: ~BLIP_TEMP_1~ */;
}

void func_654(int iParam0, int iParam1, bool bParam2)//Position - 0x1CAA5
{
	if (func_251())
	{
		if (iParam1 == 1)
		{
			if (Global_2738587.f_4499 == -1)
			{
				Global_2738587.f_4499 = Global_262145.f_27440 /* Tunable: 945146471 */;
			}
			func_8(&(Global_2738587.f_4497), 0, 0);
			if (bParam2)
			{
				if (Global_2738587.f_4502 == -1)
				{
					Global_2738587.f_4502 = Global_262145.f_27441 /* Tunable: -29732167 */;
				}
				func_8(&(Global_2738587.f_4500), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
				func_709(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
			func_709(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_655()) && !func_257(PLAYER::PLAYER_ID()))
		{
			Global_1057440 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

bool func_655()//Position - 0x1CB6F
{
	return Global_2684312.f_841;
}

int func_656(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1CB7E
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_612(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_369(&(Var0.f_69), iParam10);
	}
	return func_569(&Var0);
}

int func_657(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1CC0F
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_612(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_369(&(Var0.f_69), iParam7);
	}
	return func_569(&Var0);
}

void func_658(bool bParam0)//Position - 0x1CC8F
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 4);
	}
}

void func_659(bool bParam0)//Position - 0x1CCC3
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		func_677(PLAYER::PLAYER_ID(), func_262(586, -1), 0);
		if (func_676(3610, -1))
		{
		}
		iVar0 = func_262(2042, -1);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_675(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_637(0))
		{
			func_677(PLAYER::PLAYER_ID(), func_262(586, -1), 0);
		}
		else
		{
			func_677(PLAYER::PLAYER_ID(), func_674(Global_2748778), 0);
		}
		func_672(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_665(PLAYER::PLAYER_PED_ID(), iVar0), func_664(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_663(func_262(2042, -1), 1);
		Global_2738587.f_287 = 1;
		func_660(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_660(int iParam0, int iParam1, int iParam2)//Position - 0x1CD98
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_662();
		if (iParam2 == -1)
		{
			iParam2 = func_262(2042, -1);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_665(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_664(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_675(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_665(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_664(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_675(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_262(586, -1);
		}
		if (func_637(1) && func_661(iParam0))
		{
			func_677(iParam0, func_674(Global_2748778), 0);
		}
		else
		{
			func_677(iParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			func_677(iParam0, Global_1836697, 1);
		}
		func_672(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

var func_661(int iParam0)//Position - 0x1CE85
{
	return func_239(iParam0, 10);
}

void func_662()//Position - 0x1CE95
{
	Global_79220 = 0;
	Global_79221 = -1;
	Global_79222 = -1;
	Global_79223 = -1;
	Global_79224 = -1;
	Global_79228 = -1;
}

void func_663(int iParam0, int iParam1)//Position - 0x1CEBB
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_662();
		func_495(2042, iParam0, -1, 1);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_665(PLAYER::PLAYER_PED_ID(), iParam0), func_664(PLAYER::PLAYER_PED_ID(), iParam0), false);
		func_672(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_675(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_660(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_664(int iParam0, int iParam1)//Position - 0x1CF40
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
		
		case 67:
			return 0;
			break;
	}
	return 0;
}

var func_665(int iParam0, int iParam1)//Position - 0x1D2E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
	bVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar6 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if (((((((bVar3 != Global_79220 || iParam1 != Global_79221) || iVar4 != Global_79222) || iVar5 != Global_79223) || iVar6 != Global_79224) || iVar0 != Global_79225) || iVar1 != Global_79226) || iVar2 != Global_79227)
	{
		Global_79220 = bVar3;
		Global_79221 = iParam1;
		Global_79222 = iVar4;
		Global_79223 = iVar5;
		Global_79224 = iVar6;
		Global_79225 = iVar0;
		Global_79226 = iVar1;
		Global_79227 = iVar2;
		Global_79228 = func_666(iParam0, iParam1);
	}
	return Global_79228;
}

int func_666(int iParam0, int iParam1)//Position - 0x1D3F3
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("MP_M_Freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_671(iParam0, iParam1, 1);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8))
			{
				return func_671(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_671(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_671(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_671(iParam0, iParam1, 6);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_671(iParam0, iParam1, 7);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_671(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_671(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		return func_671(iParam0, iParam1, 9);
	}
	if (func_670(iParam0))
	{
		if (bVar1)
		{
			return func_671(iParam0, iParam1, 7);
		}
		else
		{
			return func_671(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT01"), 0))
		{
			return func_671(iParam0, iParam1, 0);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT02"), 0))
		{
			return func_671(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT03"), 0))
		{
			return func_671(iParam0, iParam1, 2);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT04"), 0))
		{
			return func_671(iParam0, iParam1, 3);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT05"), 0))
		{
			return func_671(iParam0, iParam1, 4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT06"), 0))
		{
			return func_671(iParam0, iParam1, 5);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT07"), 0))
		{
			return func_671(iParam0, iParam1, 6);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT08"), 0))
		{
			return func_671(iParam0, iParam1, 7);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT09"), 0))
		{
			return func_671(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT10"), 0))
		{
			return func_671(iParam0, iParam1, 9);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT11"), 0))
		{
			return func_671(iParam0, iParam1, 10);
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MINI_DRESS"), 0))
		{
			return func_671(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_671(iParam0, iParam1, 5);
			}
			else
			{
				return func_671(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_671(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_669(iVar4, 0);
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_671(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_671(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_668(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_671(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_668(iVar4);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_667(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_671(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_671(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_671(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_671(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_671(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
						return func_671(iParam0, iParam1, 9);
					}
					else
					{
						return func_671(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
						return func_671(iParam0, iParam1, 9);
					}
					else
					{
						return func_671(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return func_671(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_668(iVar4);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 1);
			}
			else
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 1);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 8);
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_671(iParam0, iParam1, 10);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 6);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_F_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 9);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 5);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_671(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 0);
			}
			else
			{
				return func_671(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("MP_M_Freemode_01"))
				{
					return func_671(iParam0, iParam1, 10);
				}
				else
				{
					return func_671(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 1);
			}
			else
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 3);
			}
			else
			{
				return func_671(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 1);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 9);
			}
			else
			{
				return func_671(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 10);
			}
			else
			{
				return func_671(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("MP_F_Freemode_01"))
		{
			if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("MP_F_Freemode_01"))
		{
			if (bVar1)
			{
				return func_671(iParam0, iParam1, 7);
			}
			else
			{
				return func_671(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return func_671(iParam0, iParam1, 2);
			}
			else
			{
				return func_671(iParam0, iParam1, 7);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
		{
			return func_671(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_668(iVar4);
		}
	}
	if (iVar2 == joaat("MP_M_Freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 6);
				}
				else
				{
					return func_671(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 2);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 2);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 2);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 2);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 6);
				}
				else
				{
					return func_671(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 5);
				}
				else
				{
					return func_671(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 6);
				}
				else
				{
					return func_671(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 3);
				}
				else
				{
					return func_671(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 5);
				}
				else
				{
					return func_671(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 6);
				}
				else
				{
					return func_671(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 6);
				}
				else
				{
					return func_671(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 6);
				}
				else
				{
					return func_671(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_671(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 6);
				}
				else
				{
					return func_671(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 7);
				}
				else
				{
					return func_671(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_671(iParam0, iParam1, 1);
				}
				else
				{
					return func_671(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_671(iParam0, iParam1, 0);
	return 0;
}

int func_667(int iParam0, int iParam1)//Position - 0x1FB95
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_668(int iParam0)//Position - 0x1FD35
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_669(int iParam0, int iParam1)//Position - 0x1FEA2
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_670(int iParam0)//Position - 0x1FFE6
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("DUNGAREES")))
	{
		return 1;
	}
	return 0;
}

int func_671(int iParam0, int iParam1, int iParam2)//Position - 0x20003
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
		
		case 67:
			switch (iParam2)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 101;
					break;
				
				case 2:
					return 102;
					break;
				
				case 3:
					return 103;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 105;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 107;
					break;
				
				case 8:
					return 108;
					break;
				
				case 9:
					return 109;
					break;
				
				case 10:
					return 110;
					break;
			}
			break;
	}
	return 0;
}

void func_672(int iParam0, int iParam1)//Position - 0x206C4
{
	int iVar0;
	
	iVar0 = func_673(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_673(int iParam0)//Position - 0x206EF
{
	if (iParam0 > 66)
	{
		return joaat("reh_p_para_bag_reh_s_01a");
	}
	else if (iParam0 > 63)
	{
		return joaat("p_para_bag_tr_s_01a");
	}
	else if (iParam0 > 61)
	{
		return joaat("vw_p_para_bag_vine_s");
	}
	else if (iParam0 > 51)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	else if (iParam0 > 46)
	{
		return joaat("p_para_bag_xmas_s");
	}
	else if (iParam0 > 26)
	{
		return joaat("lts_p_para_bag_lts_s");
	}
	else if (iParam0 > 0)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	return joaat("p_parachute_s");
}

int func_674(var uParam0)//Position - 0x20776
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_675(int iParam0, int iParam1)//Position - 0x2082E
{
	return 0;
}

bool func_676(int iParam0, int iParam1)//Position - 0x20837
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_677(int iParam0, int iParam1, int iParam2)//Position - 0x20853
{
	int iVar0;
	int iVar1;
	
	if (func_678(iParam1, iParam2, &iVar0, &iVar1))
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iVar1);
		PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, 0);
		PLAYER::CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0);
	}
}

bool func_678(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2088A
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			*uParam2 = joaat("xm_prop_x17_para_sp_s");
			*uParam3 = iParam0;
			break;
		
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 0;
					break;
				
				case 1:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 1;
					break;
				
				case 2:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 2;
					break;
				
				case 3:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 3;
					break;
				
				case 4:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 4;
					break;
				
				case 5:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 5;
					break;
				
				case 6:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 6;
					break;
				
				case 7:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 7;
					break;
				
				case 8:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 8;
					break;
				
				case 9:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 9;
					break;
				
				case 10:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 10;
					break;
				
				case 11:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 11;
					break;
				
				case 12:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 12;
					break;
				
				case 13:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 13;
					break;
				
				case 14:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 1;
					break;
				
				case 15:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 2;
					break;
				
				case 16:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 3;
					break;
				
				case 17:
					*uParam2 = joaat("reh_prop_reh_para_sp_s_01a");
					*uParam3 = 1;
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

void func_679(bool bParam0)//Position - 0x20A49
{
	if (bParam0)
	{
		if (!BitTest(Global_2738587.f_1834, 11))
		{
			MISC::SET_BIT(&(Global_2738587.f_1834), 11);
		}
	}
	else if (BitTest(Global_2738587.f_1834, 11))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_1834), 11);
	}
}

void func_680(bool bParam0)//Position - 0x20A8E
{
	if (bParam0)
	{
		if (!BitTest(Global_2738587.f_1834, 9))
		{
			MISC::SET_BIT(&(Global_2738587.f_1834), 9);
		}
	}
	else if (BitTest(Global_2738587.f_1834, 9))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_1834), 9);
	}
}

void func_681()//Position - 0x20AD3
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
}

void func_682(bool bParam0)//Position - 0x20AEF
{
	int iVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
		{
			if (((!func_253(PLAYER::PLAYER_ID()) && !func_206(PLAYER::PLAYER_ID())) && !func_692(PLAYER::PLAYER_ID())) && !func_691(PLAYER::PLAYER_ID()))
			{
				if (func_251())
				{
					func_654(2, 0, 1);
					func_690();
				}
				if (func_272(func_211(func_192(PLAYER::PLAYER_ID()))))
				{
					iVar0 = func_262(2483, -1);
					MISC::CLEAR_BIT(&iVar0, func_211(func_192(PLAYER::PLAYER_ID())));
					func_690();
				}
				if (func_689())
				{
					func_690();
				}
				if (func_192(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
					if (func_230(PLAYER::PLAYER_ID()))
					{
						func_688();
					}
					func_685(func_687(func_192(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 7);
		func_683();
	}
}

void func_683()//Position - 0x20BFD
{
	if (func_684())
	{
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
	}
}

bool func_684()//Position - 0x20C1F
{
	return BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 17);
}

void func_685(int iParam0)//Position - 0x20C37
{
	int iVar0;
	
	if (Global_262145.f_9222 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_686() /*5569*/].f_681.f_4243[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574743.f_1[iVar0] == -1)
			{
				Global_1574743.f_1[iVar0] = iParam0;
				Global_1574743 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_686()//Position - 0x20C9A
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_687(int iParam0)//Position - 0x20CA7
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_688()//Position - 0x20CD9
{
	if (!func_684())
	{
		Global_2738587.f_6910 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 17);
	}
}

int func_689()//Position - 0x20D07
{
	if (Global_2672741.f_951.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_690()//Position - 0x20D21
{
	if (func_689())
	{
		Global_2672741.f_951.f_16 = 1;
	}
}

int func_691(int iParam0)//Position - 0x20D3A
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2707705;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_692(int iParam0)//Position - 0x20DA6
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_251() && !func_246()) || func_208(PLAYER::PLAYER_ID(), 21)) || func_208(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_23(&(Global_1836941.f_13)))
		{
			if (!func_20(&(Global_1836941.f_13), Global_262145.f_14 /* Tunable: FM_EVENT_PASSIVE_COOL_DOWN */, 0))
			{
				return 1;
			}
			func_107(&(Global_1836941.f_13));
		}
	}
	else if (BitTest(Global_1886967[iParam0 /*609*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1886967[iParam0 /*609*/].f_1, 9);
}

void func_693(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x20E42
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2738587.f_5078 = -1;
	bVar0 = (func_235(PLAYER::PLAYER_ID(), 0) && func_240(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_702(func_703(iParam0), 1);
	}
	else
	{
		func_701(iParam0, -1);
		if (func_207(PLAYER::PLAYER_ID()))
		{
			Global_1836941.f_3 = iParam0;
		}
		else
		{
			func_741(iParam0);
		}
		Global_1836941.f_4 = -1;
		if (func_207(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836941.f_1), 5);
		}
		if (((func_251() && !func_246()) || func_208(PLAYER::PLAYER_ID(), 21)) || func_208(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836941.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 17);
		MISC::SET_BIT(&(Global_1836941.f_1), 20);
		if (func_700(iParam0))
		{
			func_699();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_698(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (func_697(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836941.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_4594666)
			{
				func_464(1);
				if (func_622(0))
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_462(1);
			MISC::SET_BIT(&(Global_1836941.f_1), 12);
		}
		if (bParam5)
		{
			func_696();
			MISC::SET_BIT(&(Global_1836941.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_694(iParam0))
			{
				MISC::SET_BIT(&(Global_1836941.f_1), 21);
			}
		}
	}
	Global_2706878 = 1;
}

int func_694(int iParam0)//Position - 0x21026
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_141(iParam0) == 1)
	{
		return 1;
	}
	if (func_695())
	{
		return 1;
	}
	return 0;
}

int func_695()//Position - 0x21095
{
	switch (func_191())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_696()//Position - 0x210C3
{
	MISC::SET_BIT(&(Global_2738587.f_5069), 0);
}

int func_697(int iParam0)//Position - 0x210D7
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_241(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_698(float fParam0)//Position - 0x21115
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_456())
	{
		return;
	}
	fVar0 = (Global_2738587.f_5229 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2738587.f_5230))
	{
		if (!Global_2738587.f_5230 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2738587.f_5229 = fParam0;
	Global_2738587.f_5230 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

void func_699()//Position - 0x21181
{
	Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_210 = 0;
	MISC::CLEAR_BIT(&(Global_2738587.f_4667), 1);
}

int func_700(int iParam0)//Position - 0x211A3
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_701(int iParam0, int iParam1)//Position - 0x211BD
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_272(func_211(iVar0)))
		{
			MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 2);
		}
	}
}

void func_702(bool bParam0, bool bParam1)//Position - 0x21218
{
	if (bParam1)
	{
		if (!BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
	}
}

int func_703(int iParam0)//Position - 0x21275
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

bool func_704(char* sParam0)//Position - 0x2129B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_705()//Position - 0x212AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_96.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, false);
		if (iVar4 != 0)
		{
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if (PED::IS_PED_A_PLAYER(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_706(bool bParam0)//Position - 0x21335
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
		}
	}
}

void func_707(bool bParam0, var uParam1)//Position - 0x2136E
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bVar0))
		{
			*bParam0 = bVar0;
			*uParam1 = Local_96.f_256[bVar0];
		}
		bVar0++;
	}
}

void func_708()//Position - 0x213AA
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1886967[iVar0 /*609*/] = -1;
	}
}

void func_709(bool bParam0)//Position - 0x213C8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_251())
		{
			if (func_883(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_883(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

void func_710(bool bParam0)//Position - 0x214C1
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 0))
		{
			Global_2698462 = func_192(PLAYER::PLAYER_ID());
			if (Global_2698462 == -1)
			{
				Global_2698462 = Global_1836941.f_4;
			}
			if (func_740(Global_2698462) == 0)
			{
				if (func_739(1) > 0)
				{
					func_738(26, -1);
				}
			}
			if (func_251())
			{
				func_654(2, 0, 1);
				func_690();
			}
			if (func_272(func_211(func_192(PLAYER::PLAYER_ID()))))
			{
				iVar1 = func_262(2483, -1);
				MISC::CLEAR_BIT(&iVar1, func_211(func_192(PLAYER::PLAYER_ID())));
				func_690();
			}
			if (func_689())
			{
				func_690();
			}
			MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 0);
		}
	}
	else if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 0))
	{
		if ((!func_229() && !func_737()) && !func_736())
		{
			Global_2698462 = -1;
			func_643(26, -1);
		}
		else if (func_740(Global_2698462) == 0)
		{
			iVar0 = func_712(1);
			if (iVar0 > 0)
			{
				func_711(joaat("MPPLY_FMEVN_CHEAT_END"), iVar0);
				func_501(1934, 1, -1);
				func_711(joaat("MPPLY_ACTIVITY_ENDED"), 1);
			}
		}
		else if (func_645(26, -1))
		{
			Global_2698462 = -1;
			func_643(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 0);
	}
}

void func_711(int iParam0, int iParam1)//Position - 0x21622
{
	int iVar0;
	
	iVar0 = func_487(iParam0);
	iVar0 = (iVar0 + iParam1);
	func_485(iParam0, iVar0);
}

int func_712(int iParam0)//Position - 0x21641
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 2;
	bVar1 = func_725();
	if (Global_2697308 == 0)
	{
		return 0;
	}
	if (func_736())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_724() || func_722()))
		{
			Global_2695955 = 1;
		}
	}
	Global_2697308 = 0;
	if (Global_1577921)
	{
		iVar0 = 1;
	}
	if (Global_2695955)
	{
		iVar0 = 1;
	}
	if (Global_2695954)
	{
		iVar0 = 1;
	}
	if (func_570(Global_113398.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2695894)
	{
		iVar0 = 1;
	}
	if (func_721(512))
	{
		iVar0 = 1;
	}
	if (func_720(128))
	{
		iVar0 = 1;
	}
	if (Global_1577945 == 1)
	{
		if (bVar1)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 2;
		}
	}
	if (func_170(0))
	{
		iVar0 = 0;
	}
	if (Global_2696453)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_718())
		{
			if (Global_4718592.f_126706 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_717())
	{
		iVar0 = 0;
	}
	if ((Global_2695955 || Global_2695954) || Global_1577921)
	{
		if (func_722())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837398)
	{
		iVar0 = 2;
	}
	Global_2696453 = 0;
	Global_2695954 = 0;
	Global_2695955 = 0;
	Global_1577921 = 0;
	Global_2695894 = 0;
	func_715(&(Global_113398.f_1), 32);
	func_714(512);
	func_713(128);
	Global_1837398 = 0;
	return iVar0;
}

void func_713(int iParam0)//Position - 0x217A8
{
	Global_113455 = (Global_113455 - (Global_113455 && iParam0));
}

void func_714(int iParam0)//Position - 0x217C0
{
	Global_113456 = (Global_113456 - (Global_113456 && iParam0));
}

void func_715(var uParam0, int iParam1)//Position - 0x217D8
{
	func_716(uParam0, iParam1);
}

void func_716(var uParam0, var uParam1)//Position - 0x217E8
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_717()//Position - 0x217FD
{
	if (((Global_1836687 || Global_1836656) || func_16(PLAYER::PLAYER_ID(), 0)) || func_611())
	{
		return 1;
	}
	return 0;
}

int func_718()//Position - 0x21834
{
	switch (func_719())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_719()//Position - 0x2186E
{
	return Global_2685249.f_1.f_2823;
}

bool func_720(int iParam0)//Position - 0x2187F
{
	return (Global_113455 && iParam0) != 0;
}

bool func_721(int iParam0)//Position - 0x21890
{
	return (Global_113456 && iParam0) != 0;
}

int func_722()//Position - 0x218A1
{
	if (func_740(Global_2698462))
	{
		return 0;
	}
	if (func_723(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_723(int iParam0, int iParam1)//Position - 0x218CA
{
	if (Global_1886967[iParam0 /*609*/] == iParam1)
	{
		return func_241(iParam0);
	}
	return 0;
}

int func_724()//Position - 0x218EA
{
	if (func_740(Global_2698462))
	{
		return 0;
	}
	if (func_241(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_725()//Position - 0x21911
{
	if (Global_1577945 == 1 && (func_734() || func_726()))
	{
		return 1;
	}
	return 0;
}

int func_726()//Position - 0x2193A
{
	if ((((((func_604() || func_602()) || func_600()) || func_732(Global_4718592.f_126144)) || func_730(Global_4718592.f_126144)) || func_597()) || func_727())
	{
		return 1;
	}
	return 0;
}

int func_727()//Position - 0x2199E
{
	return func_728(Global_4718592.f_126144);
}

int func_728(int iParam0)//Position - 0x219B4
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == func_729(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_729(int iParam0)//Position - 0x219E8
{
	if (iParam0 != -1)
	{
		return Global_262145.f_34072[iParam0];
	}
	return -1;
}

int func_730(int iParam0)//Position - 0x21A07
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (iParam0 == func_731(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_731(int iParam0)//Position - 0x21A32
{
	if (iParam0 != -1)
	{
		return Global_262145.f_34181 /* Tunable: XM22_STORY_MISSION_ROOT_CONTENT_ID_10 */[iParam0];
	}
	return -1;
}

int func_732(int iParam0)//Position - 0x21A51
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_733(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_733(int iParam0)//Position - 0x21A7B
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33191 /* Tunable: ULP_MISSION_ROOT_CONTENT_ID_5 */[iParam0];
	}
	return -1;
}

int func_734()//Position - 0x21A9A
{
	return func_735(Global_4718592.f_126144);
}

int func_735(int iParam0)//Position - 0x21AB0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_32045[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_736()//Position - 0x21ADF
{
	return BitTest(Global_1574589, 0);
}

bool func_737()//Position - 0x21AED
{
	return Global_1575044;
}

void func_738(bool bParam0, int iParam1)//Position - 0x21AF9
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		
		default:
			iVar1 = func_644(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

int func_739(int iParam0)//Position - 0x21B53
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 2;
	bVar1 = func_725();
	if (Global_1577945 == 1)
	{
		if (bVar1)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 2;
		}
	}
	if (func_170(0))
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_718())
		{
			if (Global_4718592.f_126706 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_717())
	{
		iVar0 = 0;
	}
	Global_2697308 = 1;
	return iVar0;
}

int func_740(int iParam0)//Position - 0x21BC4
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_12063 /* Tunable: DISABLE_BAD_SPORT_HOT_TARGET */)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_12065 /* Tunable: DISABLE_BAD_SPORT_CHECKPOINT */)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_12062 /* Tunable: DISABLE_BAD_SPORT_CHALLENGE */)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_12066 /* Tunable: DISABLE_BAD_SPORT_PENNED_IN */)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_12067 /* Tunable: DISABLE_BAD_SPORT_PASS_THE_PARCEL */)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_12068 /* Tunable: DISABLE_BAD_SPORT_HOT_PROPERTY */)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_12064 /* Tunable: DISABLE_BAD_SPORT_KILL_LIST */)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_12069 /* Tunable: DISABLE_BAD_SPORT_DEAD_DROP */)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_12070 /* Tunable: DISABLE_BAD_SPORT_KING_OF_THE_CASTLE */)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_12071 /* Tunable: DISABLE_BAD_SPORT_CRIMINAL_DAMAGES */)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_12072 /* Tunable: DISABLE_BAD_SPORT_HUNT_THE_BEAST */)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_741(int iParam0)//Position - 0x21CE0
{
	Global_1886967[PLAYER::PLAYER_ID() /*609*/] = iParam0;
}

void func_742(int iParam0)//Position - 0x21CF5
{
	Global_2697550 = iParam0;
}

void func_743(int iParam0)//Position - 0x21D03
{
	if (func_205())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!BitTest(uLocal_1307, 0))
			{
				if ((((func_745(60000) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_423()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_440(0, 1, 1, 1))
				{
					if (!func_779())
					{
						func_744("UW_HELP1" /* GXT: ~s~Kill List~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter the vehicle and destroy the Merryweather patrols for $~1~ and RP. */, func_653(), func_652(1), 30000);
					}
					else
					{
						func_744("UW_HELP1C" /* GXT: ~s~Kill List Competitive~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter one of the vehicles and destroy the Merryweather patrols for $~1~ and RP. */, func_653(), func_652(1), 30000);
					}
					func_438(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
					MISC::SET_BIT(&uLocal_1307, 0);
				}
			}
			break;
	}
}

void func_744(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x21DB2
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_745(int iParam0)//Position - 0x21DD5
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2644858, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_746()//Position - 0x21DF0
{
	bool bVar0;
	
	MISC::CLEAR_BIT(&uLocal_1308, 15);
	bVar0 = false;
	while (bVar0 < 4)
	{
		func_747(bVar0);
		bVar0++;
	}
	if (BitTest(uLocal_1308, 15))
	{
		if (!BitTest(Global_1836941.f_1, 15))
		{
			MISC::SET_BIT(&(Global_1836941.f_1), 15);
		}
	}
	else if (BitTest(Global_1836941.f_1, 15))
	{
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 15);
	}
}

void func_747(bool bParam0)//Position - 0x21E56
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[bParam0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), false))
		{
			if (Local_96.f_241 == 0)
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), false))
		{
			if (!func_205())
			{
				if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!BitTest(uLocal_1308, 15))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]))
							{
								MISC::SET_BIT(&uLocal_1308, 15);
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), false))
						{
							if (func_751("UW_HELP2" /* GXT: Enter the vehicle ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~to start Kill List. */, func_653()) || func_751("UW_HELP2C" /* GXT: Enter a vehicle ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~to start Kill List Competitive. */, func_653()))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!func_429(PLAYER::PLAYER_ID()))
							{
								func_658(1);
							}
							iVar0 = func_750(PLAYER::PLAYER_PED_ID(), 0);
							if (func_651("UW_HELP1" /* GXT: ~s~Kill List~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter the vehicle and destroy the Merryweather patrols for $~1~ and RP. */, func_653(), func_652(1)) || func_651("UW_HELP1C" /* GXT: ~s~Kill List Competitive~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter one of the vehicles and destroy the Merryweather patrols for $~1~ and RP. */, func_653(), func_652(1)))
							{
								HUD::CLEAR_HELP(true);
							}
							if (Local_96.f_463 != -1)
							{
								if (iVar0 > (Local_96.f_463 - 2))
								{
									iVar0 = (Local_96.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar0 + 1));
							MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
							Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = bParam0;
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
							func_197();
							iLocal_3483 = iVar0;
						}
						else if (Local_96.f_241 == 0)
						{
							if (!BitTest(uLocal_1307, 1))
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), true)) < 2500f)
									{
										if (func_440(0, 1, 1, 1))
										{
											if (!func_779())
											{
												func_749("UW_HELP2" /* GXT: Enter the vehicle ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~to start Kill List. */, func_653(), 30000);
											}
											else
											{
												func_749("UW_HELP2C" /* GXT: Enter a vehicle ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~to start Kill List Competitive. */, func_653(), 30000);
											}
											func_438(1);
											MISC::SET_BIT(&uLocal_1307, 1);
										}
									}
								}
							}
							if (!func_251())
							{
								if (BitTest(uLocal_1308, 2))
								{
									MISC::CLEAR_BIT(&uLocal_1308, 2);
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									if (!BitTest(uLocal_1307, 4))
									{
										if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
										{
											MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), true)) < 2500f)
											{
												if (func_440(0, 1, 1, 1))
												{
													if (!func_779())
													{
														func_439("UW_COPS" /* GXT: Lose the Cops before starting Kill List. */, 30000);
													}
													else
													{
														func_439("UW_COPSC" /* GXT: Lose the Cops before starting Kill List Competitive. */, 30000);
													}
													func_438(1);
													MISC::SET_BIT(&uLocal_1307, 4);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), true)) > 10000f)
									{
										MISC::CLEAR_BIT(&uLocal_1307, 4);
									}
								}
								else
								{
									if (BitTest(uLocal_1307, 4))
									{
										MISC::CLEAR_BIT(&uLocal_1307, 4);
									}
									if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
									{
										MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
								{
									MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
								}
								if (!BitTest(uLocal_1308, 2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), true)) < 2500f)
									{
										if (func_440(0, 1, 1, 1))
										{
											if (!func_779())
											{
												func_439("UW_PASSMD" /* GXT: You can't participate in this event while Passive Mode is enabled. */, 30000);
											}
											else
											{
												func_439("UW_PASSMD" /* GXT: You can't participate in this event while Passive Mode is enabled. */, 30000);
											}
											func_438(1);
											MISC::SET_BIT(&uLocal_1308, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), false))
							{
								iVar2 = 0;
								while (iVar2 < Local_96.f_28)
								{
									if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
								{
									MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
								}
								if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 != -1)
								{
									Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
								}
								if (func_704("UW_TIMEL" /* GXT: Kill List will start when the vehicle is full or when the time expires. */))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_704("UW_TIMELA" /* GXT: Kill List Competitive will start when all the vehicles are full or when the time expires. */))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_429(PLAYER::PLAYER_ID()))
								{
									func_658(0);
								}
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
							}
							else
							{
								if (Local_96.f_241 == 0 && !BitTest(Local_96.f_3, 4))
								{
									iVar0 = func_750(PLAYER::PLAYER_PED_ID(), 0);
									if (Local_96.f_463 != -1)
									{
										if (iVar0 > (Local_96.f_463 - 2))
										{
											iVar0 = (Local_96.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3483)
									{
										MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
										MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iLocal_3483 + 1));
									}
								}
								bVar1 = false;
								if (func_273())
								{
									if (Local_96.f_413 > -1)
									{
										iVar3 = (Local_96.f_413 - func_127(&(Local_96.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_748(bVar1);
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0])) == joaat("rhino"))
								{
									VEHICLE::DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]));
								}
								if (!func_23(&uLocal_1530))
								{
									func_21(&uLocal_1530, 0, 0);
								}
								else if (func_20(&uLocal_1530, 2000, 0))
								{
									if (BitTest(Local_96.f_3, 9) || !func_779())
									{
										if (func_704("UW_MINV" /* GXT: Players are required in at least two Kill List Competitive vehicles before the mode will start. */))
										{
										}
										if (!BitTest(uLocal_1307, 5))
										{
											if (Local_96.f_28 > 1 || (Local_96.f_28 == 1 && func_113() > 1))
											{
												if (func_23(&(Local_96.f_326)))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														if (func_113() > 1)
														{
															func_439("UW_TIMELA" /* GXT: Kill List Competitive will start when all the vehicles are full or when the time expires. */, 30000);
														}
														else
														{
															func_439("UW_TIMEL" /* GXT: Kill List will start when the vehicle is full or when the time expires. */, 30000);
														}
														func_438(1);
														MISC::SET_BIT(&uLocal_1307, 5);
													}
												}
											}
										}
									}
									else if (func_779())
									{
										if (!BitTest(Local_96.f_3, 9))
										{
											if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0])) != joaat("valkyrie"))
											{
												if (!BitTest(uLocal_1307, 14))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														func_439("UW_MINV" /* GXT: Players are required in at least two Kill List Competitive vehicles before the mode will start. */, 30000);
														func_438(1);
														MISC::SET_BIT(&uLocal_1307, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_96.f_241 == 0)
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0])) == joaat("valkyrie"))
						{
							if (!func_704("UW_VALK" /* GXT: At least two players are required to start Kill List in a Valkyrie. */) && !func_704("UW_VALKC" /* GXT: At least two players are required in at least two Valkyrie helicopters to start Kill List Competitive. */))
							{
								HUD::CLEAR_ALL_HELP_MESSAGES();
								if (BitTest(uLocal_1307, 8))
								{
									MISC::CLEAR_BIT(&uLocal_1307, 8);
								}
							}
							if (!BitTest(uLocal_1307, 8))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									iVar6 = 0;
									iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), (iVar5 - 1), false))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_779())
										{
											func_439("UW_VALK" /* GXT: At least two players are required to start Kill List in a Valkyrie. */, 30000);
										}
										else
										{
											func_439("UW_VALKC" /* GXT: At least two players are required in at least two Valkyrie helicopters to start Kill List Competitive. */, 30000);
										}
										func_438(1);
										MISC::SET_BIT(&uLocal_1307, 8);
									}
									if (!BitTest(uLocal_1307, 8))
									{
										if (func_779())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != bParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar7]))
														{
															if (func_110(Local_96.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_96.f_7[iVar7]), (iVar5 - 1), false))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_439("UW_VALKC" /* GXT: At least two players are required in at least two Valkyrie helicopters to start Kill List Competitive. */, 30000);
												func_438(1);
												MISC::SET_BIT(&uLocal_1307, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_96.f_241 == 1)
					{
						if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
						{
							if (!BitTest(uLocal_1307, 6))
							{
								if (func_110(Local_96.f_7[bParam0]))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[bParam0])))
										{
											if (!BitTest(uLocal_1307, 7))
											{
												if ((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
												{
													MISC::SET_BIT(&uLocal_1307, 7);
												}
											}
											if (BitTest(uLocal_1307, 7))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													if (func_779())
													{
														func_439("UW_EXITVC" /* GXT: You can't exit the vehicle while Kill List Competitive is active. */, 30000);
													}
													else
													{
														func_439("UW_EXITV" /* GXT: You can't exit the vehicle while Kill List is active. */, 30000);
													}
													func_438(1);
													MISC::SET_BIT(&uLocal_1307, 6);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[iVar10]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_96.f_7[iVar10]), false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_96.f_7[iVar10]), false))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_272(17))
					{
						iVar9 = func_262(2483, -1);
						MISC::CLEAR_BIT(&iVar9, 17);
						func_495(2483, iVar9, -1, 1);
						func_690();
						if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
					}
					if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
					{
						MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
					}
				}
				if (!BitTest(uLocal_1308, 14))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_110(Local_96.f_7[bParam0]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[bParam0]), true)) < 2500f)
							{
								if (func_440(0, 1, 1, 1))
								{
									if (!func_260(129, 0, 0))
									{
										if (!func_779())
										{
											func_439("UW_TUT" /* GXT: You are unable to take part in Kill List until you have completed the tutorial. */, -1);
										}
										else
										{
											func_439("UW_TUTC" /* GXT: You are unable to take part in Kill List Competitive until you have completed the tutorial. */, -1);
										}
										func_438(1);
										MISC::SET_BIT(&uLocal_1308, 14);
									}
									else
									{
										if (!func_779())
										{
											func_439("UW_HIDE" /* GXT: You are unable to take part in Kill List as you have chosen to hide the event. */, -1);
										}
										else
										{
											func_439("UW_HIDEC" /* GXT: You are unable to take part in Kill List Competitive as you have chosen to hide the event. */, -1);
										}
										func_438(1);
										MISC::SET_BIT(&uLocal_1308, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_883(PLAYER::PLAYER_ID(), 1, 1) && Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (!BitTest(Global_2738587.f_4699, 1))
				{
					MISC::SET_BIT(&(Global_2738587.f_4699), 1);
				}
			}
			else if (BitTest(Global_2738587.f_4699, 1))
			{
				MISC::CLEAR_BIT(&(Global_2738587.f_4699), 1);
			}
		}
	}
}

void func_748(bool bParam0)//Position - 0x22943
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 105 /*INPUT_VEH_DROP_PROJECTILE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
}

void func_749(char* sParam0, char* sParam1, int iParam2)//Position - 0x22A79
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

int func_750(int iParam0, bool bParam1)//Position - 0x22A96
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_751(char* sParam0, char* sParam1)//Position - 0x22B1B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_752()//Position - 0x22B34
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_96.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_7[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_96.f_7[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				PHYSICS::SET_USE_KINEMATIC_PHYSICS(iVar1, true);
			}
		}
		iVar0++;
	}
}

void func_753(struct<3> Param0, int iParam3)//Position - 0x22B99
{
	Global_4594670 = { Param0 };
	Global_4594673 = 1;
	Global_4594674 = iParam3;
}

void func_754()//Position - 0x22BB6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_770(iVar0);
				break;
			
			case 174:
				func_755(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_755(int iParam0)//Position - 0x22C02
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 3);
	switch (iVar0)
	{
		case -289807473:
			func_769(iParam0);
			break;
		
		case -1257215590:
			func_768(iParam0);
			break;
		
		case -798996443:
			func_767(iParam0);
			break;
		
		case -1522997624:
			func_766(iParam0);
			break;
		
		case 677929255:
			func_765(iParam0);
			break;
		
		case -1529273040:
			func_762(iParam0);
			break;
		
		case -1195009211:
			func_756(iParam0);
			break;
	}
}

void func_756(int iParam0)//Position - 0x22C85
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		bVar7 = Var0.f_3;
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_73[bVar7]))
		{
			return;
		}
		if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar7))
		{
			if (!BitTest(Local_96.f_271, bVar7))
			{
				if (func_101(bVar7))
				{
					if (bVar7 >= 0 && bVar7 < 5)
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_73[bVar7]), false))
						{
							if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_96.f_73[bVar7]), &uVar6))
							{
								bVar9 = true;
							}
						}
						else if (NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_96.f_73[bVar7]), &uVar6))
						{
							bVar9 = true;
						}
					}
				}
				else if (!func_779())
				{
					if (Local_96.f_465[0 /*4*/].f_1 > 0)
					{
						iVar10 = PLAYER::INT_TO_PLAYERINDEX(Local_96.f_465[0 /*4*/].f_2);
						if (iVar10 != func_5())
						{
							if (iVar10 == PLAYER::PLAYER_ID())
							{
								bVar9 = true;
							}
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[0]))
					{
						if (func_110(Local_96.f_7[0]))
						{
							iVar12 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[0]), -1, false);
							if (iVar12 != 0)
							{
								if (PED::IS_PED_A_PLAYER(iVar12))
								{
									iVar11 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
									if (iVar11 == PLAYER::PLAYER_ID())
									{
										bVar9 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar9)
		{
			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
			{
				iVar5 = func_761();
				if (bVar7 >= 0 && bVar7 < 5)
				{
					iVar13 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[bVar7]));
				}
				iVar8 = bVar7 * 4;
				if (func_760(iVar13))
				{
					iVar4 = func_43(iVar13);
					bVar15 = iVar8;
					while (bVar15 <= (iVar8 + (iVar4 - 1)))
					{
						if (bVar15 < 0 || bVar15 >= 24)
						{
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bVar15]) && !BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar15)], func_91(bVar15)))
						{
							iVar14++;
							MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar15)]), func_91(bVar15));
						}
						bVar15++;
					}
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
					iVar5 = (iVar5 * iVar14);
				}
				else
				{
					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
				}
				if (Local_713.f_11 == 0)
				{
					Local_713.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_759())
				{
					Local_713.f_7 = (Local_713.f_7 + iVar5);
					func_758(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar5, 1, -1, 0);
					func_757();
				}
			}
			MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar7);
		}
	}
}

void func_757()//Position - 0x22F4A
{
	if (!func_23(&uLocal_3460) || (func_23(&uLocal_3460) && func_20(&uLocal_3460, 2000, 0)))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", false);
		func_107(&uLocal_3460);
		func_21(&uLocal_3460, 0, 0);
	}
}

var func_758(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x22F98
{
	return func_482(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_759()//Position - 0x22FB4
{
	if (func_779())
	{
		return Global_262145.f_11988 /* Tunable: COMP_KILL_LIST_AI_ENEMY_KILL_CAP */;
	}
	return Global_262145.f_11927 /* Tunable: KILL_LIST_ENEMY_KILL_CAP */;
}

bool func_760(int iParam0)//Position - 0x22FD7
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_761()//Position - 0x23011
{
	if (func_779())
	{
		return Global_262145.f_11987 /* Tunable: COMP_KILL_LIST_AI_ENEMY_KILL_RP */;
	}
	return Global_262145.f_11926 /* Tunable: KILL_LIST_ENEMY_KILL_RP */;
}

void func_762(int iParam0)//Position - 0x23034
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		bVar7 = Var0.f_3;
		if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar7))
		{
			if (!BitTest(Local_96.f_271, bVar7))
			{
				if (func_764(bVar7))
				{
					bVar9 = true;
				}
				else if (!func_763(bVar7))
				{
					if (func_101(bVar7))
					{
						if (bVar7 >= 0 && bVar7 < 5)
						{
							if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_96.f_73[bVar7]), false))
							{
								if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_96.f_73[bVar7]), &uVar6))
								{
									bVar9 = true;
								}
							}
							else if (NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_96.f_73[bVar7]), &uVar6))
							{
								bVar9 = true;
							}
						}
					}
					else if (!func_779())
					{
						if (Local_96.f_465[0 /*4*/].f_1 > 0)
						{
							iVar10 = PLAYER::INT_TO_PLAYERINDEX(Local_96.f_465[0 /*4*/].f_2);
							if (iVar10 != func_5())
							{
								if (iVar10 == PLAYER::PLAYER_ID())
								{
									bVar9 = true;
								}
							}
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[0]))
						{
							if (func_110(Local_96.f_7[0]))
							{
								iVar12 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[0]), -1, false);
								if (iVar12 != 0)
								{
									if (PED::IS_PED_A_PLAYER(iVar12))
									{
										iVar11 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
										if (iVar11 == PLAYER::PLAYER_ID())
										{
											bVar9 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar9)
				{
					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						iVar4 = func_43(joaat("savage"));
						iVar8 = bVar7 * 4;
						iVar14 = 0;
						bVar13 = iVar8;
						while (bVar13 <= (iVar8 + (iVar4 - 1)))
						{
							if (bVar13 < 0 || bVar13 >= 24)
							{
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bVar13]) && !BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar13)], func_91(bVar13)))
							{
								iVar14++;
								MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar13)]), func_91(bVar13));
							}
							bVar13++;
						}
						Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
						iVar5 = (iVar5 * iVar14);
						if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_759())
						{
							iVar5 = func_761();
							iVar5 = (iVar5 * iVar4);
							Local_713.f_7 = (Local_713.f_7 + iVar5);
							func_758(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar5, 1, -1, 0);
							func_757();
							if (Local_713.f_11 == 0)
							{
								Local_713.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
							}
						}
						MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar7);
					}
				}
			}
		}
	}
}

int func_763(bool bParam0)//Position - 0x232CC
{
	int iVar0;
	
	if (bParam0 < 0 || bParam0 >= 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_730[iVar0 /*18*/].f_11[bParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_764(bool bParam0)//Position - 0x23321
{
	int iVar0;
	
	if (bParam0 < 0 || bParam0 >= 5)
	{
		return 1;
	}
	if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_730[iVar0 /*18*/].f_11[bParam0] > Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_765(int iParam0)//Position - 0x233A4
{
	struct<4> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", -1, 0) != func_5())
		{
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			MISC::SET_BIT(&(Local_96.f_464), Var0.f_3);
		}
	}
}

void func_766(int iParam0)//Position - 0x233E1
{
	struct<4> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		MISC::SET_BIT(&uLocal_3427, Var0.f_3);
	}
}

void func_767(int iParam0)//Position - 0x23404
{
	struct<4> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		MISC::SET_BIT(&uLocal_3428, Var0.f_3);
	}
}

void func_768(int iParam0)//Position - 0x23427
{
	struct<4> Var0;
	int iVar4;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		iVar4 = func_92(Var0.f_3);
		if (iVar4 >= 0 && iVar4 < 2)
		{
			if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[iVar4], func_91(Var0.f_3)))
			{
				MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[iVar4]), func_91(Var0.f_3));
			}
		}
	}
}

void func_769(int iParam0)//Position - 0x2348F
{
	struct<4> Var0;
	bool bVar4;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		bVar4 = Var0.f_3;
		if (BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar4))
		{
			MISC::CLEAR_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar4);
		}
	}
}

void func_770(int iParam0)//Position - 0x234CF
{
	struct<6> Var0;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	int iVar23;
	var uVar24;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		bVar13 = false;
		while (bVar13 < 5)
		{
			if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar13))
			{
				if (!BitTest(Local_96.f_271, bVar13))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_73[bVar13]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_96.f_73[bVar13])))
								{
									if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_96.f_73[bVar13]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
										{
											if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
											{
												if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
												{
													if (Var0.f_5)
													{
														iVar16 = ENTITY::GET_ENTITY_MODEL(Var0.f_0);
														if (Local_96.f_27 == joaat("hydra"))
														{
															if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
															{
																iVar19 = func_761();
																if (func_760(iVar16))
																{
																	iVar14 = func_43(iVar16);
																	Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																	iVar19 = (iVar19 * iVar14);
																}
																else
																{
																	Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																}
																if (Local_713.f_11 == 0)
																{
																	Local_713.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																}
																if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_759())
																{
																	Local_713.f_7 = (Local_713.f_7 + iVar19);
																	func_758(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar19, 1, -1, 0);
																	func_757();
																}
															}
															MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
														}
														else if (iVar16 == joaat("buzzard"))
														{
															iVar21 = -1;
															iVar21 = -1;
															while (iVar21 <= 3)
															{
																iVar18 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_73[bVar13]), iVar21, false);
																if (iVar18 != 0)
																{
																	iVar20 = func_771(iVar18);
																	if (iVar20 > -1)
																	{
																		if (!BitTest(Local_96.f_272[func_92(iVar20)], func_91(iVar20)))
																		{
																			if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(iVar20)], func_91(iVar20)))
																			{
																				MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(iVar20)]), func_91(iVar20));
																				iVar19 = func_761();
																				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_759())
																				{
																					Local_713.f_7 = (Local_713.f_7 + iVar19);
																					func_758(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar19, 1, -1, 0);
																					func_757();
																				}
																				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_96.f_48[iVar20])))
																				{
																					func_93(&(Local_1324[iVar20 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar21++;
															}
															MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
														}
													}
													else if (!func_110(Local_96.f_73[bVar13]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
													{
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			bVar13++;
		}
		if (Local_96.f_27 != joaat("hydra"))
		{
			bVar13 = false;
			while (bVar13 <= 19)
			{
				if (!BitTest(Local_96.f_272[func_92(bVar13)], func_91(bVar13)))
				{
					if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar13)], func_91(bVar13)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bVar13]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_96.f_48[bVar13])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_PED(Local_96.f_48[bVar13]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar17))
														{
															if (iVar17 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	iVar19 = func_761();
																	if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_759())
																		{
																			func_758(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar19, 1, -1, 0);
																			Local_713.f_7 = (Local_713.f_7 + iVar19);
																			func_757();
																		}
																	}
																	if (Local_713.f_11 == 0)
																	{
																		Local_713.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																	}
																	MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar13)]), func_91(bVar13));
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (bVar13 < 5)
				{
					if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar13))
					{
						if (!BitTest(Local_96.f_271, bVar13))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_73[bVar13]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_96.f_73[bVar13])))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_96.f_73[bVar13]))
											{
												if (ENTITY::GET_ENTITY_MODEL(Var0.f_0) == joaat("savage"))
												{
													if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar13)], func_91(bVar13)))
													{
														if (Var0.f_5)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar17))
																	{
																		if (iVar17 == PLAYER::PLAYER_PED_ID())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																				{
																					iVar14 = func_43(joaat("savage"));
																					Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																					iVar19 = func_761();
																					iVar19 = (iVar19 * iVar14);
																					if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_759())
																					{
																						func_758(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar19, 1, -1, 0);
																						Local_713.f_7 = (Local_713.f_7 + iVar19);
																						func_757();
																						if (Local_713.f_11 == 0)
																						{
																							Local_713.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																						}
																					}
																					bVar22 = bVar13 * 4;
																					MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22)]), func_91(bVar22));
																					MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22 + 1)]), func_91(bVar22 + 1));
																					MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22 + 2)]), func_91(bVar22 + 2));
																					MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22 + 3)]), func_91(bVar22 + 3));
																					MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
																				}
																			}
																		}
																	}
																	else if (func_764(bVar13))
																	{
																		if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																		{
																			iVar14 = func_43(joaat("savage"));
																			Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_759())
																			{
																				iVar19 = func_761();
																				iVar19 = (iVar19 * iVar14);
																				Local_713.f_7 = (Local_713.f_7 + iVar19);
																				func_758(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar19, 1, -1, 0);
																				func_757();
																				if (Local_713.f_11 == 0)
																				{
																					Local_713.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																				}
																			}
																			bVar22 = bVar13 * 4;
																			MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22)]), func_91(bVar22));
																			MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22 + 1)]), func_91(bVar22 + 1));
																			MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22 + 2)]), func_91(bVar22 + 2));
																			MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22 + 3)]), func_91(bVar22 + 3));
																			MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
																		}
																	}
																	else if (func_763(bVar13))
																	{
																	}
																	else if (NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(iVar23, Var0.f_0, &uVar24))
																	{
																		if (iVar23 == PLAYER::PLAYER_ID())
																		{
																			if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																			{
																				iVar14 = func_43(joaat("savage"));
																				Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																				if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_759())
																				{
																					iVar19 = func_761();
																					iVar19 = (iVar19 * iVar14);
																					Local_713.f_7 = (Local_713.f_7 + iVar19);
																					func_758(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar19, 1, -1, 0);
																					func_757();
																					if (Local_713.f_11 == 0)
																					{
																						Local_713.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																					}
																				}
																				bVar22 = bVar13 * 4;
																				MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22)]), func_91(bVar22));
																				MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22 + 1)]), func_91(bVar22 + 1));
																				MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22 + 2)]), func_91(bVar22 + 2));
																				MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar22 + 3)]), func_91(bVar22 + 3));
																				MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar17))
																	{
																		if (iVar17 == PLAYER::PLAYER_PED_ID())
																		{
																			iVar15 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bVar13] = iVar15;
																		}
																	}
																}
															}
															if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), false))
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				bVar13++;
			}
			bVar13 = 20;
			while (bVar13 <= 23)
			{
				if (!BitTest(Local_96.f_272[func_92(bVar13)], func_91(bVar13)))
				{
					if (!BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar13)], func_91(bVar13)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bVar13]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_96.f_48[bVar13])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_PED(Local_96.f_48[bVar13]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar17))
														{
															if (iVar17 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_759())
																		{
																			iVar19 = func_761();
																			Local_713.f_7 = (Local_713.f_7 + iVar19);
																			if (Local_713.f_11 == 0)
																			{
																				Local_713.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			}
																			func_758(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar19, 1, -1, 0);
																			func_757();
																		}
																	}
																	MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar13)]), func_91(bVar13));
																}
															}
														}
													}
												}
												else
												{
													MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_92(bVar13)]), func_91(bVar13));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bVar13]))
				{
				}
				bVar13++;
			}
		}
	}
}

int func_771(int iParam0)//Position - 0x23FB1
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[iVar1]))
			{
				if (NETWORK::NET_TO_PED(Local_96.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_772()//Position - 0x23FFB
{
	int iVar0;
	int iVar1;
	
	if (Local_96.f_27 != joaat("hydra"))
	{
		if (iLocal_3485 == 0)
		{
			iLocal_3485 = 20;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[iLocal_3485]))
		{
			if (!func_32(Local_96.f_48[iLocal_3485]))
			{
				iVar0 = NETWORK::NETWORK_ENTITY_GET_OBJECT_ID(NETWORK::NET_TO_PED(Local_96.f_48[iLocal_3485]));
				if (iLocal_3486[iLocal_3485] != iVar0)
				{
					iLocal_3486[iLocal_3485] = iVar0;
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_96.f_48[iLocal_3485], true);
				}
			}
		}
		iLocal_3485++;
		if (iLocal_3485 == 23)
		{
			iLocal_3485 = 20;
		}
	}
	if (Local_96.f_27 != joaat("hydra") && Local_96.f_27 != joaat("rhino"))
	{
		if (!bLocal_3518)
		{
			if (func_99() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_73[iVar1]))
					{
						if (func_110(Local_96.f_73[iVar1]))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_96.f_73[iVar1])) == joaat("savage"))
							{
								NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_96.f_73[iVar1], true);
								bLocal_3518 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_73[iLocal_3511]))
	{
		if (func_110(Local_96.f_73[iLocal_3511]))
		{
			iVar0 = NETWORK::NETWORK_ENTITY_GET_OBJECT_ID(NETWORK::NET_TO_PED(Local_96.f_73[iLocal_3511]));
			if (iLocal_3512[iLocal_3511] != iVar0)
			{
				iLocal_3512[iLocal_3511] = iVar0;
				if (!bLocal_3518)
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_96.f_73[iLocal_3511], true);
				}
			}
		}
	}
	iLocal_3511++;
	if (iLocal_3511 == 5)
	{
		iLocal_3511 = 0;
	}
}

void func_773()//Position - 0x24187
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar13 = -1;
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (BitTest(uLocal_3429, bVar0))
		{
			if (Local_96.f_85[bVar0] != 2)
			{
				MISC::CLEAR_BIT(&uLocal_3429, bVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_48[bVar0]))
		{
			func_777(bVar0);
			if (!func_32(Local_96.f_48[bVar0]))
			{
				switch (Local_96.f_85[bVar0])
				{
					case 1:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_48[bVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), false))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), false);
								iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
								if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_96.f_48[bVar0]))
										{
											iVar9 = func_28();
											if (iVar9 != func_5())
											{
												iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
												if (!PED::IS_PED_INJURED(iVar10))
												{
													if (func_27(iVar2, iVar10, 1) > 250f)
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar10, true) };
														TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_96.f_48[bVar0]))
									{
										iVar15 = 1;
										iVar14 = (bVar0 / 4);
									}
									if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1309[iVar14] != Local_96.f_110[iVar14]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_96.f_48[bVar0]))
										{
											iVar13 = Local_96.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = PLAYER::INT_TO_PLAYERINDEX(iVar13);
												if (iVar9 != func_5())
												{
													iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
													if (!PED::IS_PED_INJURED(iVar10))
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar10, true) };
														TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 1.4E-43f, 7E-44f, true);
														if (iLocal_1309[iVar14] != Local_96.f_110[iVar14])
														{
															iLocal_1309[iVar14] = Local_96.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED")) != 1)
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_96.f_48[bVar0]))
									{
										iVar9 = func_28();
										if (iVar9 != func_5())
										{
											iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
											if (!PED::IS_PED_INJURED(iVar10))
											{
												fVar11 = func_27(iVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), ENTITY::GET_ENTITY_COORDS(iVar10, true), 2f, iVar2, true, 786469, -1f, 0f, 20f, 0, 30f, 4f);
												}
												else if (fVar11 > 250f)
												{
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), iVar2, iVar10, 4, 30f, 786469, 5f, 5f, true);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_48[bVar0]))
						{
							if (!func_24())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), false))
									{
										if (!BitTest(uLocal_3429, bVar0))
										{
											iVar12 = func_776(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), 1133084672);
											if (iVar12 > -1)
											{
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), 299f, 0);
											}
											else if (!BitTest(uLocal_3429, bVar0))
											{
												func_775(bVar0, func_105(1));
												MISC::SET_BIT(&uLocal_3429, bVar0);
											}
										}
									}
									else
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), -251125078) != 0)
						{
							Var6 = { func_774() };
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), true);
							TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_96.f_48[bVar0]), Var6, 10000f, 999999, false, false);
						}
						break;
					}
				}
		}
		bVar0++;
	}
}

Vector3 func_774()//Position - 0x246A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar0]))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[iVar0]), false);
		}
		iVar0++;
	}
	return Local_96.f_30[0 /*3*/];
}

void func_775(bool bParam0, int iParam1)//Position - 0x246EC
{
	struct<4> Var0;
	
	Var0.f_0 = 677929255;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = bParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iParam1, Var0.f_0);
	}
}

int func_776(int iParam0, float fParam1)//Position - 0x24720
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar3]))
		{
			if (func_110(Local_96.f_7[iVar3]))
			{
				iVar7 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_96.f_7[iVar3]), -1, false);
				if (!PED::IS_PED_INJURED(iVar7))
				{
					if (PED::IS_PED_A_PLAYER(iVar7))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[iVar3]), true) };
						fVar2 = func_543(iParam0, Var4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_777(bool bParam0)//Position - 0x247C5
{
	int iVar0;
	
	return;
	if (!func_32(Local_96.f_48[bParam0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_96.f_48[bParam0]))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_96.f_48[bParam0])))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_96.f_48[bParam0]), false);
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_96.f_48[bParam0]), 5, 0, 0);
					}
				}
			}
		}
	}
}

void func_778(struct<3> Param0)//Position - 0x24850
{
	Global_1836941.f_6 = { Param0 };
}

bool func_779()//Position - 0x24864
{
	return BitTest(Local_96.f_3, 8);
}

void func_780(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x24873
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 6:
					func_781(12);
					break;
			}
			break;
	}
}

void func_781(int iParam0)//Position - 0x248A1
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_784(iParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		if (BitTest(Global_4544310[iVar1 /*26*/].f_12, 11))
		{
			if (func_782(&(Global_4544310[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!BitTest(Global_4544310[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_4544310[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_782(var uParam0)//Position - 0x2491C
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_151(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_783(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_783(var uParam0)//Position - 0x24983
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_151(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_135107[iVar13 /*13*/];
		
		case 62:
			return Global_949659.f_28505[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_784(int iParam0)//Position - 0x249FA
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 0:
			return MISC::GET_HASH_KEY("fXl9rb9ZW0KNkiaqmbV48Q");
		
		case 1:
			return MISC::GET_HASH_KEY("1n5uWPRHHUSjE71oygaFjQ");
		
		case 2:
			return MISC::GET_HASH_KEY("BffKLFClw0qXLkqr0Hh5mA");
		
		case 3:
			return MISC::GET_HASH_KEY("fUi3OcVHSk2BENX1rCrMnQ");
		
		case 4:
			return MISC::GET_HASH_KEY("HdgoQCvj9Uah2F7g4J_Ytw");
		
		case 5:
			return MISC::GET_HASH_KEY("9-9CRMVazU-V5zCLSJOLpQ");
		
		case 6:
			return MISC::GET_HASH_KEY("BCzUO0f2oEabhOUkd8kLdw");
		
		case 7:
			return MISC::GET_HASH_KEY("cIyGoaFVFECl1J8-vgHnUA");
		
		case 8:
			return MISC::GET_HASH_KEY("NCWwNYdkYkOMGbD196ujMg");
		
		case 9:
			return MISC::GET_HASH_KEY("tVsw33Vpx0SYy5ZavTyzQA");
		
		case 10:
			return MISC::GET_HASH_KEY("jSWoqEVSy0a9Ooltyu3j7w");
		
		case 11:
			return MISC::GET_HASH_KEY("R4wff65YmEi9YpijfRrSDg");
		
		case 12:
			return MISC::GET_HASH_KEY("734uySYXUk2ej47Ni5jlZw");
		
		case 13:
			return MISC::GET_HASH_KEY("lrzPuq8XL06_hq_GWOXFPQ");
		
		case 14:
			return MISC::GET_HASH_KEY("HaOV5MHIxk-3RJ0-y4DXQA");
		
		case 15:
			return MISC::GET_HASH_KEY("vPKgcOhrMkizAqhqn4qzIg");
		
		case 16:
			return MISC::GET_HASH_KEY("7yauF2fboUCjDM9TbuZZEQ");
		
		case 17:
			return MISC::GET_HASH_KEY("3trklOr22kS9DU-mXJh1qA");
		
		case 18:
			return MISC::GET_HASH_KEY("1hg2iY8LZ0KmWS2rlodW-g");
		
		case 19:
			return MISC::GET_HASH_KEY("NzShi-OiLk679G01b-DLbg");
		
		case 20:
			return MISC::GET_HASH_KEY("k-tuZ-mn6UKQlXT_bsB8Yg");
		
		case 21:
			return MISC::GET_HASH_KEY("Mu_L8vLbCUm32nIl_z61ug");
		
		case 22:
			return MISC::GET_HASH_KEY("6GGfmeTgR0KUAjTIQUmWXQ");
		
		case 23:
			return MISC::GET_HASH_KEY("XDpP0K4sgUq_gS6IK_hi5Q");
		
		case 24:
			return MISC::GET_HASH_KEY("G-5i7HSTsUeCWWDymd_14g");
		
		case 25:
			return MISC::GET_HASH_KEY("WsA9Weyo4EqaoGJEM7GAGA");
		
		case 26:
			return MISC::GET_HASH_KEY("0RQfVKkq30i3Xtmpo5HNSg");
		
		case 27:
			return MISC::GET_HASH_KEY("3HWcaKl-RkiCS5I5w5A9fA");
		
		case 28:
			return MISC::GET_HASH_KEY("NVHcew3RaEqhamPuLrzccg");
		
		case 29:
			return MISC::GET_HASH_KEY("5WI8qiscrUmmL2vjsGSEGQ");
		
		case 30:
			return MISC::GET_HASH_KEY("nPNK7URl_EerWTlMXDeFKA");
		
		case 31:
			return -1;
		
		default:
	}
	return -1;
}

void func_785()//Position - 0x24C2D
{
	bool bVar0;
	struct<3> Var1;
	
	if (BitTest(Local_96.f_3, 12))
	{
		func_197();
	}
	if (func_779())
	{
		if (iLocal_3419 != Local_96.f_12)
		{
			iLocal_3419 = Local_96.f_12;
			func_197();
		}
	}
	if (!func_205())
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_1319[bVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[bVar0]))
				{
					if (func_110(Local_96.f_7[bVar0]))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]), false) };
						if (!func_786(bVar0, Var1))
						{
							if (!BitTest(Local_96.f_13, bVar0))
							{
								iLocal_1319[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_96.f_7[bVar0]));
								HUD::SET_BLIP_SPRITE(iLocal_1319[bVar0], 429 /*RADAR_TEMP_1*/);
								func_199(&(iLocal_1319[bVar0]), 29);
								if (!BitTest(uLocal_1307, 20))
								{
									HUD::SET_BLIP_FLASHES(iLocal_1319[bVar0], true);
									HUD::SET_BLIP_FLASH_TIMER(iLocal_1319[bVar0], 7000);
									MISC::SET_BIT(&uLocal_1307, 20);
								}
								HUD::SET_BLIP_PRIORITY(iLocal_1319[bVar0], 9);
								if (func_779())
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1319[bVar0], "UW_BLIPC" /* GXT: Kill List Competitive */);
								}
								else
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1319[bVar0], "UW_BLIP" /* GXT: Kill List */);
								}
								if (!BitTest(uLocal_1308, 3))
								{
									HUD::FLASH_MINIMAP_DISPLAY();
									MISC::SET_BIT(&uLocal_1308, 3);
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[bVar0]))
			{
				if (!func_110(Local_96.f_7[bVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_1319[bVar0]));
				}
				else if (BitTest(Local_96.f_13, bVar0))
				{
					HUD::REMOVE_BLIP(&(iLocal_1319[bVar0]));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(iLocal_1319[bVar0]));
			}
			bVar0++;
		}
	}
	else
	{
		func_197();
	}
}

int func_786(int iParam0, struct<3> Param1)//Position - 0x24DD7
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_96.f_7[iVar0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_96.f_7[iVar0]), false) };
				if (func_70(Param1, Var1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_1319[iVar0]))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_787()//Position - 0x24E3F
{
	return Local_96.f_0;
}

int func_788(int iParam0)//Position - 0x24E49
{
	return Local_730[iParam0 /*18*/];
}

void func_789()//Position - 0x24E58
{
	if (BitTest(Global_1836941.f_1, 6))
	{
		func_466();
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 6);
	}
	if (!BitTest(Global_1836941.f_1, 7))
	{
		if (BitTest(Global_1836941.f_1, 4) || BitTest(Global_1836941.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_371()) && func_883(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836941.f_1), 7);
				func_439("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				func_438(1);
			}
		}
		else if (BitTest(Global_1836941.f_1, 17))
		{
			if (func_251() && !func_246())
			{
				MISC::CLEAR_BIT(&(Global_1836941.f_1), 17);
				MISC::SET_BIT(&(Global_1836941.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836941.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2738587.f_853, 2)) && func_883(PLAYER::PLAYER_ID(), 1, 1)) && !Global_76369) && !Global_61219) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_812())
			{
				func_439("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (func_351(PLAYER::PLAYER_ID()) != 200)
				{
					func_438(1);
				}
				MISC::SET_BIT(&(Global_1836941.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_241(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
		}
	}
	if (BitTest(Global_1836941.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_371()) && func_883(PLAYER::PLAYER_ID(), 1, 1)) && !func_208(PLAYER::PLAYER_ID(), 21)) && !func_208(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836941.f_1), 9);
			func_811(0);
			func_439("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			func_438(1);
		}
	}
	if (func_252(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836941.f_1, 18))
		{
			if ((func_208(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836941.f_1, 20)) && !BitTest(Global_1836941.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836941.f_1), 18);
			}
		}
		else if (BitTest(Global_1836941.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_371()) && func_883(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_810())
			{
				MISC::CLEAR_BIT(&(Global_1836941.f_1), 18);
				MISC::SET_BIT(&(Global_1836941.f_1), 19);
				func_439("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				func_438(1);
			}
		}
	}
	if (((((func_252(PLAYER::PLAYER_ID()) && !func_207(PLAYER::PLAYER_ID())) && func_192(PLAYER::PLAYER_ID()) != 146) && !func_206(PLAYER::PLAYER_ID())) && !func_692(PLAYER::PLAYER_ID())) && !func_800())
	{
		if (func_697(func_192(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836941.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836941.f_1), 22);
		}
		if (func_214(PLAYER::PLAYER_ID()) || func_695())
		{
			if (!BitTest(Global_1836941.f_1, 10))
			{
				if (func_798(func_192(PLAYER::PLAYER_ID())))
				{
					if (func_622(0) && !Global_4594666)
					{
						MISC::SET_BIT(&(Global_1836941.f_1), 9);
					}
					if (!Global_4594666)
					{
						func_464(1);
						MISC::SET_BIT(&(Global_1836941.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836941.f_1), 10);
			}
		}
		if (func_241(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836941.f_1, 11))
			{
				if (!Global_101444.f_8)
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 12);
					func_462(1);
				}
				if (!func_797())
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 13);
					func_696();
				}
				if (!Global_4594666)
				{
					MISC::SET_BIT(&(Global_1836941.f_1), 14);
					if (func_622(0) && !Global_4594666)
					{
						MISC::SET_BIT(&(Global_1836941.f_1), 9);
					}
					func_464(1);
				}
				MISC::SET_BIT(&(Global_1836941.f_1), 11);
			}
		}
		else
		{
			func_795(0);
		}
	}
	else
	{
		func_795(1);
	}
	func_790();
	if (func_694(func_192(PLAYER::PLAYER_ID())) && !BitTest(Global_1836941.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836941.f_1), 21);
	}
	if (((func_251() && !func_246()) || func_208(PLAYER::PLAYER_ID(), 21)) || func_208(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 10);
	}
}

void func_790()//Position - 0x2535F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_371())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_540(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (BitTest(Global_1836941.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836941.f_1), 26);
				}
				func_791(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836941.f_1, 26))
	{
		func_107(&(Global_1836941.f_22));
		MISC::SET_BIT(&(Global_1836941.f_1), 26);
	}
}

void func_791(int iParam0, int iParam1)//Position - 0x253FC
{
	if (!func_23(&(Global_1836941.f_22)))
	{
		func_21(&(Global_1836941.f_22), 0, 0);
	}
	else if (func_20(&(Global_1836941.f_22), iParam1, 0))
	{
		if (func_424() > 0)
		{
			func_794(iParam0);
			if (func_704("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_107(&(Global_1836941.f_22));
		}
	}
	else
	{
		func_793(0);
		func_792();
	}
}

void func_792()//Position - 0x25465
{
	Global_2738587.f_4636 = 0;
}

void func_793(int iParam0)//Position - 0x25475
{
	Global_1668317.f_68 = iParam0;
}

void func_794(int iParam0)//Position - 0x25485
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672741.f_2518[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2672741.f_2518[iVar0 /*80*/].f_2 = 5;
			func_369(&(Global_2672741.f_2518[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_795(int iParam0)//Position - 0x254D1
{
	if ((BitTest(Global_1836941.f_1, 11) || (BitTest(Global_1836941.f_1, 10) && iParam0)) || (BitTest(Global_1836941.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836941.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836941.f_1), 12);
			func_462(0);
		}
		if (BitTest(Global_1836941.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836941.f_1), 13);
			func_796();
		}
		if (BitTest(Global_1836941.f_1, 14) && !func_235(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836941.f_1), 14);
			func_464(0);
		}
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 22);
	}
}

void func_796()//Position - 0x2559A
{
	MISC::CLEAR_BIT(&(Global_2738587.f_5069), 0);
}

bool func_797()//Position - 0x255AE
{
	return BitTest(Global_2738587.f_5069, 0);
}

int func_798(int iParam0)//Position - 0x255BF
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_241(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_695() || func_799(func_191()));
		
		default:
	}
	return 0;
}

int func_799(int iParam0)//Position - 0x2562F
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_800()//Position - 0x25667
{
	if (((((((((func_809() || func_808()) || func_807()) || func_184()) || (func_806() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_803() && !func_802())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_801() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_801()//Position - 0x256FB
{
	return Global_1057441;
}

bool func_802()//Position - 0x25707
{
	return BitTest(Global_2684312.f_2, 27);
}

int func_803()//Position - 0x25718
{
	if (func_805() || func_804())
	{
		return Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_95 == 8;
	}
	return 0;
}

var func_804()//Position - 0x25745
{
	return Global_2684312.f_735;
}

var func_805()//Position - 0x25754
{
	return BitTest(Global_2684312.f_2, 11);
}

var func_806()//Position - 0x25765
{
	return BitTest(Global_2684312, 5);
}

var func_807()//Position - 0x25773
{
	return BitTest(Global_2684312, 2);
}

var func_808()//Position - 0x25781
{
	return BitTest(Global_2684312, 20);
}

bool func_809()//Position - 0x25790
{
	return Global_2684312.f_698;
}

bool func_810()//Position - 0x2579F
{
	return Global_2738587.f_5164 != -1;
}

void func_811(int iParam0)//Position - 0x257B0
{
	int iVar0;
	
	iVar0 = func_262(2537, -1);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!BitTest(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!BitTest(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_495(2537, iVar0, -1, 1);
}

int func_812()//Position - 0x258C2
{
	int iVar0;
	
	if (!func_23(&(Global_1836941.f_15)))
	{
		func_21(&(Global_1836941.f_15), 0, 0);
		Global_1836941.f_17 = 0;
	}
	else if (func_20(&(Global_1836941.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836941.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836941.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_883(iVar0, 1, 1) && func_813(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_60(PLAYER::PLAYER_ID()), func_60(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836941.f_17++;
		if (Global_1836941.f_17 >= 32)
		{
			Global_1836941.f_17 = 0;
			func_107(&(Global_1836941.f_15));
		}
	}
	return 0;
}

int func_813(int iParam0, int iParam1)//Position - 0x2598A
{
	int iVar0;
	
	if (func_458() != 0)
	{
		return 0;
	}
	if (!func_499(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1845263[iVar0 /*877*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_814()//Position - 0x259C3
{
	return Global_1836941.f_24;
}

bool func_815(int iParam0)//Position - 0x259D1
{
	return !func_816(iParam0);
}

int func_816(int iParam0)//Position - 0x259E0
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7193 /* Tunable: DISABLE_EVENT_CRATE_DROP */)
			{
				return 0;
			}
			if (func_208(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7194 /* Tunable: DISABLE_EVENT_ARMOURED_TRUCK */)
			{
				return 0;
			}
			if (func_208(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7195 /* Tunable: DISABLE_EVENT_HIGH_PRIORITY_VEHICLE */)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7196 /* Tunable: DISABLE_EVENT_JOYRIDER */)
			{
				return 0;
			}
			if (func_208(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_817(4))
			{
				return 0;
			}
			if (func_208(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_817(4))
			{
				return 0;
			}
			if (func_208(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_817(4))
			{
				return 0;
			}
			if (func_208(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_817(4))
			{
				return 0;
			}
			if (func_208(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_817(4))
			{
				return 0;
			}
			if (func_208(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_817(4))
			{
				return 0;
			}
			if (func_208(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_817(bool bParam0)//Position - 0x25D14
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_883(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657921[iVar0 /*463*/].f_218, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_818()//Position - 0x25D57
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_821())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_820())
	{
		return 1;
	}
	if (func_819(159))
	{
		if (!func_809())
		{
			return 1;
		}
	}
	if (func_819(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_456() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_456()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_819(int iParam0)//Position - 0x25DDB
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_820()//Position - 0x25DF2
{
	return Global_2695951;
}

bool func_821()//Position - 0x25DFE
{
	return Global_2684312.f_693;
}

void func_822()//Position - 0x25E0D
{
	SYSTEM::WAIT(0);
}

void func_823()//Position - 0x25E1A
{
	int iVar0;
	
	func_197();
	if (func_787() == 4 && Local_96.f_27 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_96.f_27, false);
	}
	MISC::CLEAR_BIT(&(Global_2738587.f_4699), 1);
	func_702(19, 0);
	func_680(0);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_829(129, 0, BitTest(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8));
	}
	func_828(129);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_1317 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_1317);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 129)
		{
			Global_1845263[PLAYER::PLAYER_ID() /*877*/] = -1;
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1517)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1519);
	}
	func_827();
	func_210(0, 129);
	if (BitTest(uLocal_1307, 22))
	{
		func_469();
		MISC::CLEAR_BIT(&uLocal_1307, 22);
	}
	if (BitTest(uLocal_1307, 9))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		if (!BitTest(uLocal_1307, 10))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1318 != -100f)
	{
		func_546(0, 0);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1318);
	}
	func_545(0);
	if (func_818())
	{
		Local_713.f_5 = 5;
	}
	else if (func_641(2, 0, 0, 0, 0))
	{
		Local_713.f_5 = 6;
	}
	else if (Local_713.f_5 != 1)
	{
		Local_713.f_5 = 2;
	}
	AUDIO::STOP_SOUND(iLocal_3426);
	Local_713.f_0 = Local_96.f_611;
	Local_713.f_1 = Local_96.f_612;
	Local_713.f_4 = Local_96.f_613;
	Local_713.f_3 = Local_96.f_615;
	if (Local_713.f_9 > 0)
	{
		Local_713.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_713.f_9);
	}
	if ((!Global_262145.f_12176 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */ && !BitTest(Local_96.f_3, 8)) || (!Global_262145.f_12177 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */ && BitTest(Local_96.f_3, 8)))
	{
		if (Local_713.f_6 > 0)
		{
		}
	}
	if (BitTest(Local_96.f_3, 8))
	{
		iVar0 = 1;
	}
	if (BitTest(uLocal_1308, 1))
	{
		func_709(1);
		NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
	}
	if (iVar0 == 0)
	{
		func_825(Local_713, Local_96.f_27, Local_96.f_279, iVar0, -1, -1, -1);
	}
	else if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_825(Local_713, Local_96.f_279, Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_429(PLAYER::PLAYER_ID()))
	{
		func_658(0);
	}
	func_679(0);
	func_742(1);
	func_824();
}

void func_824()//Position - 0x26082
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_825(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x2608E
{
	char* sVar0;
	struct<13> Var1;
	struct<17> Var14;
	struct<18> Var31;
	struct<14> Var55;
	struct<13> Var69;
	struct<14> Var82;
	struct<14> Var96;
	struct<16> Var110;
	struct<13> Var126;
	struct<14> Var139;
	struct<14> Var153;
	struct<13> Var167;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_79248)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_VEHICLETARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_826()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			Var14.f_14 = iParam14;
			Var14.f_15 = iParam15;
			Var14.f_16 = iParam16;
			STATS::PLAYSTATS_FM_EVENT_ATOB(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var31 = { Param0 };
			Var31.f_12 = uParam12;
			Var31.f_13 = iParam13;
			Var31.f_14 = iParam14;
			Var31.f_15 = iParam15;
			Var31.f_16 = iParam16;
			Var31.f_17 = iParam17;
			STATS::PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(&Var31);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var55 = { Param0 };
			Var55.f_12 = uParam12;
			Var55.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var55.f_13 = (Var55.f_13 / 10f);
			}
			STATS::PLAYSTATS_FM_EVENT_CHALLENGES(&Var55);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::PLAYSTATS_FM_EVENT_PENNEDIN(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var69 = { Param0 };
			Var69.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_PASSTHEPARCEL(&Var69);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var82 = { Param0 };
			Var82.f_12 = uParam12;
			Var82.f_13 = iParam13;
			STATS::PLAYSTATS_FM_EVENT_HOTPROPERTY(&Var82);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var96 = { Param0 };
			Var96.f_12 = uParam12;
			Var96.f_13 = iParam13;
			STATS::PLAYSTATS_FM_EVENT_DEADDROP(&Var96);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var110 = { Param0 };
			Var110.f_12 = uParam12;
			Var110.f_13 = iParam13;
			Var110.f_14 = iParam14;
			Var110.f_15 = iParam15;
			STATS::PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(&Var110);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var126 = { Param0 };
			Var126.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(&Var126);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var139 = { Param0 };
				Var139.f_12 = uParam12;
				Var139.f_13 = iParam13;
				STATS::PLAYSTATS_FM_EVENT_URBANWARFARE(&Var139);
			}
			else
			{
				Var153 = { Param0 };
				Var153.f_12 = uParam12;
				Var153.f_13 = iParam13;
				STATS::PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(&Var153);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var167 = { Param0 };
			Var167.f_12 = uParam12;
			STATS::PLAYSTATS_FM_EVENT_HUNTBEAST(&Var167);
		}
	}
}

char* func_826()//Position - 0x26315
{
	switch (Global_2698640)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_827()//Position - 0x26337
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1518);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1517);
}

void func_828(int iParam0)//Position - 0x2634D
{
	if (iParam0 == iParam0)
	{
	}
}

void func_829(int iParam0, bool bParam1, int iParam2)//Position - 0x2635C
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (iParam0 == 133)
	{
		func_869(79, 1);
	}
	else
	{
		func_869(80, 1);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 13);
		}
		if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836941.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836941.f_1), 21);
	}
	func_865();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_864(func_192(PLAYER::PLAYER_ID()));
		func_702(func_703(iParam0), 0);
	}
	else
	{
		if ((iParam2 && PLAYER::PLAYER_ID() != -1) && func_863(PLAYER::PLAYER_ID()) >= 12)
		{
			func_862(2549, -1);
			iVar1 = func_262(2549, -1);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836967, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836967, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836967, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836967, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836967, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836967, 5);
			}
		}
		func_708();
		func_861();
		func_860();
		if ((!func_240(PLAYER::PLAYER_ID()) && !func_238(PLAYER::PLAYER_ID())) && !func_859())
		{
			func_838();
		}
		func_837();
		if (!BitTest(Global_1940367.f_3, 0) && !BitTest(Global_1940367.f_3, 1))
		{
			func_466();
		}
		func_836();
		MISC::CLEAR_BIT(&(Global_2738587.f_1848), 2);
		func_561();
		func_835();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_208(PLAYER::PLAYER_ID(), 21)) && !func_208(PLAYER::PLAYER_ID(), 25)) && !func_235(PLAYER::PLAYER_ID(), 0))
		{
			func_464(0);
			func_462(0);
			if (!bParam1)
			{
				func_834();
			}
		}
	}
	if (iParam2 && !bParam1)
	{
		if (func_645(26, -1))
		{
			Global_2698462 = -1;
			func_643(26, -1);
		}
	}
	if (!func_830())
	{
		Global_2706878 = 1;
	}
}

int func_830()//Position - 0x265D0
{
	if (((((((!func_402(PLAYER::PLAYER_ID()) && !func_383(PLAYER::PLAYER_ID())) && func_192(PLAYER::PLAYER_ID()) != 146) && !func_833()) && !func_832()) && !func_831(Global_4718592.f_183007)) && !func_605()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_831(int iParam0)//Position - 0x2664B
{
	return iParam0 == 57;
}

int func_832()//Position - 0x26658
{
	if (Global_4718592.f_126144 == Global_262145.f_10249 /* Tunable: TRANSFORM_INFERNO */)
	{
		return 1;
	}
	return 0;
}

int func_833()//Position - 0x26679
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_183007 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_834()//Position - 0x26711
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_4544310[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_4544310[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_4544310[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_835()//Position - 0x26761
{
	Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_7 = 0;
}

void func_836()//Position - 0x26777
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836941 = { Var0 };
}

void func_837()//Position - 0x267A6
{
	var uVar0;
	
	Global_1581985 = uVar0;
}

void func_838()//Position - 0x267B4
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_24), &Global_2640158, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_26), &Global_2640160, 19);
	func_857();
	func_841(1, 1, 0);
	func_839();
}

void func_839()//Position - 0x267EA
{
	func_840(0, 0);
}

void func_840(int iParam0, int iParam1)//Position - 0x267F8
{
	Global_2635562.f_22 = iParam0;
	Global_2635562.f_23 = iParam1;
}

void func_841(bool bParam0, bool bParam1, bool bParam2)//Position - 0x26810
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_45), &Global_2640179, 323);
	}
	else
	{
		Global_2635562.f_45 = { Global_2640179 };
		Global_2635562.f_45.f_49 = { Global_2640179.f_49 };
		Global_2635562.f_45.f_52 = Global_2640179.f_52;
		Global_2635562.f_45.f_53 = Global_2640179.f_53;
	}
	if (bParam0)
	{
		func_856();
	}
	if (!bParam2)
	{
		func_844(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_843(0);
	func_842();
}

void func_842()//Position - 0x268B6
{
	struct<6> Var0;
	
	if (Global_2635562.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635562.f_490 = { Var0 };
	}
}

void func_843(bool bParam0)//Position - 0x268DB
{
	if (bParam0)
	{
		Global_2635562.f_713 = 0;
	}
	else
	{
		Global_2635562.f_713 = 1;
	}
}

void func_844(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x268FB
{
	if (bParam0)
	{
		if (func_855())
		{
			func_854();
		}
		Global_2635562.f_714.f_668 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635562.f_714.f_654 = iParam1;
		Global_2635562.f_714.f_655 = iParam2;
		Global_2635562.f_714.f_656 = iParam10;
		func_852();
		func_848(8, 0, 0, 0, 0);
		Global_2635562.f_714.f_657 = iParam11;
		Global_2635562.f_714.f_662 = iParam3;
		Global_2635562.f_714.f_663 = iParam4;
		Global_2635562.f_714.f_660 = iParam5;
		Global_2635562.f_714.f_661 = iParam6;
		Global_2635562.f_714.f_664 = iParam7;
		Global_2635562.f_714.f_665 = iParam8;
		Global_2635562.f_714.f_666 = iParam9;
		Global_2635562.f_714.f_667 = iParam14;
		Global_2635562.f_714.f_658 = iParam12;
		Global_2635562.f_714.f_659 = iParam13;
		Global_2635562.f_2053 = 1;
	}
	else
	{
		func_845();
	}
}

void func_845()//Position - 0x269E6
{
	if (func_855() && !func_847())
	{
		func_854();
	}
	if (func_847())
	{
		func_846();
	}
	else
	{
		func_852();
		func_848(0, 0, 0, 0, 0);
		Global_2635562.f_2053 = 0;
		Global_2635562.f_2052 = 0;
	}
}

void func_846()//Position - 0x26A2E
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_714), &(Global_2635562.f_1383), 669);
	Global_2635562.f_490 = { Global_2635562.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_714.f_668)
	{
		Global_2635562.f_2052 = 0;
	}
}

int func_847()//Position - 0x26A76
{
	if ((Global_2635562.f_2052 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_1383.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635562.f_1383.f_668))
	{
		return 1;
	}
	return 0;
}

void func_848(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x26AB5
{
	if (Global_2672741.f_1689.f_703.f_16 != func_5())
	{
		if (BitTest(Global_2657921[Global_2672741.f_1689.f_703.f_16 /*463*/].f_424, 0) && func_849())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643603 = 0;
	}
	Global_2635562.f_490 = iParam0;
	Global_2635562.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635562.f_490.f_2 = iParam1;
	Global_2635562.f_490.f_3 = iParam2;
	Global_2635562.f_490.f_4 = iParam3;
	Global_2635562.f_490.f_5 = iParam4;
}

int func_849()//Position - 0x26B51
{
	if ((((((func_351(PLAYER::PLAYER_ID()) == 229 || func_351(PLAYER::PLAYER_ID()) == 191) || func_851()) || func_859()) || func_216()) || Global_2707706.f_227 == 1) || (Global_2635562.f_2053 && func_850(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_850(int iParam0)//Position - 0x26BC3
{
	if (func_214(iParam0))
	{
		return 1;
	}
	if (func_253(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_851()//Position - 0x26BE6
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_852()//Position - 0x26BFB
{
	if (func_855() && !func_847())
	{
		func_854();
	}
	func_853();
	Global_2635562.f_714 = 0;
	Global_2635562.f_714.f_602 = 0;
}

void func_853()//Position - 0x26C2F
{
	int iVar0;
	struct<6> Var1;
	struct<3> Var7;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635562.f_714.f_1[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
	Var7 = -1;
	Var7.f_2 = -3;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_2635562.f_714.f_603[iVar0 /*3*/] = { Var7 };
		iVar0++;
	}
}

void func_854()//Position - 0x26CA0
{
	if (func_847())
	{
		if (Global_2635562.f_714.f_668 == Global_2635562.f_1383.f_668)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_714.f_668)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_1383), &(Global_2635562.f_714), 669);
		Global_2635562.f_496 = { Global_2635562.f_490 };
		Global_2635562.f_2052 = 1;
	}
}

int func_855()//Position - 0x26D0E
{
	if ((Global_2635562.f_2053 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_714.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635562.f_714.f_668))
	{
		return 1;
	}
	return 0;
}

void func_856()//Position - 0x26D4D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635562.f_368), &Global_2640502, 121);
}

void func_857()//Position - 0x26D66
{
	func_858();
}

void func_858()//Position - 0x26D72
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2635562.f_2563[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635562.f_2562 = 0;
}

bool func_859()//Position - 0x26DA6
{
	return Global_1836663;
}

void func_860()//Position - 0x26DB2
{
	Global_2738587.f_5069 = 0;
}

void func_861()//Position - 0x26DC2
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1 = 0;
	}
}

void func_862(int iParam0, int iParam1)//Position - 0x26DE0
{
	int iVar0;
	
	iVar0 = func_262(iParam0, func_250(iParam1));
	iVar0++;
	func_495(iParam0, iVar0, iParam1, 1);
}

int func_863(int iParam0)//Position - 0x26E07
{
	return Global_1845263[iParam0 /*877*/].f_205.f_6;
}

int func_864(int iParam0)//Position - 0x26E1C
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_241(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_865()//Position - 0x26E7E
{
	if (BitTest(Global_2738587.f_1835, 3) || BitTest(Global_2738587.f_1835, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2738587.f_1835, 5))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_1835), 5);
	}
	if (BitTest(Global_2738587.f_1835, 3))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_1835), 3);
	}
	if (BitTest(Global_2738587.f_1835, 4))
	{
		MISC::CLEAR_BIT(&(Global_2738587.f_1835), 4);
	}
	func_868(0);
	func_867(0);
	func_866(0);
}

void func_866(int iParam0)//Position - 0x26F10
{
	if (Global_2738587.f_4624 != iParam0)
	{
		Global_2738587.f_4624 = iParam0;
	}
}

void func_867(bool bParam0)//Position - 0x26F2D
{
	if (Global_2738587.f_4623 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2738587.f_4623 = bParam0;
	}
}

void func_868(int iParam0)//Position - 0x26F52
{
	if (Global_2738587.f_4621 != iParam0)
	{
		Global_2738587.f_4621 = iParam0;
	}
}

void func_869(int iParam0, int iParam1)//Position - 0x26F6F
{
	int iVar0;
	
	if (!func_870())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_2737646[iVar0 /*6*/] == iParam0)
		{
			if (Global_1574748.f_4[iVar0] == -1)
			{
				Global_1574748.f_4[iVar0] = iParam0;
				Global_1574748.f_1 = 1;
				Global_1574748 = iParam1;
				return;
			}
		}
		iVar0++;
	}
}

int func_870()//Position - 0x26FCB
{
	if (Global_262145.f_36061 /* Tunable: 511978708 */)
	{
		return 1;
	}
	return 0;
}

void func_871(struct<21> Param0)//Position - 0x26FE5
{
	int iVar0;
	
	func_880(func_881(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(24);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(9);
	func_879(0, -1, 0);
	func_877(129);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_96, 617, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_730, 577, 0);
	func_876(1);
	if (!func_875())
	{
		func_823();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_96.f_17[iVar0] = func_5();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_96.f_22[iVar0] = func_5();
				Local_96.f_256[iVar0] = -1;
				Local_96.f_110[iVar0] = -1;
				iVar0++;
			}
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_96.f_611), &(Local_96.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1309[iVar0] = -1;
			iVar0++;
		}
		Local_713.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_713.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_702(19, 1);
		func_872();
		if (func_205())
		{
			MISC::SET_BIT(&(Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 7);
		}
		Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
		Global_2738587.f_5155 = -1;
		Local_730[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 0;
	}
	else
	{
		func_823();
	}
}

void func_872()//Position - 0x27126
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_1517);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_1518);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837258[iVar0], iLocal_1517);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1517, Global_1837258[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837258[iVar0], iLocal_1518);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1518, Global_1837258[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1517, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1517);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1517, Global_1837306[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837306[5], iLocal_1517);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1517, Global_1837291);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837291, iLocal_1517);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1517, iLocal_1518);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1518, iLocal_1517);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), iLocal_1518);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), iLocal_1517);
	func_874(1, &iLocal_1518);
	func_873(&iLocal_1518);
	func_873(&iLocal_1517);
}

void func_873(int iParam0)//Position - 0x2722F
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_LOST"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_LOST"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_MEXICAN"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_MEXICAN"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_FAMILY"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_FAMILY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_MARABUNTE"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_MARABUNTE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_CULT"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_SALVA"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_SALVA"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_WEICHENG"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_WEICHENG"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_BALLAS"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_BALLAS"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_HILLBILLY"), *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, joaat("AMBIENT_GANG_HILLBILLY"));
}

void func_874(int iParam0, int iParam1)//Position - 0x27321
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("ARMY"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("ARMY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("SECURITY_GUARD"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("SECURITY_GUARD"));
}

int func_875()//Position - 0x2737D
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_821())
		{
			return 0;
		}
		if (func_819(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_876(bool bParam0)//Position - 0x273D6
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_456())
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2647042.f_1317) || Global_2647042.f_1317 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2647042.f_1317 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			Global_2647042.f_1317 = -1;
		}
	}
}

void func_877(int iParam0)//Position - 0x2742F
{
	func_836();
	func_878();
	func_860();
	Global_1836941.f_4 = iParam0;
	Global_1836941.f_5 = iParam0;
	func_701(iParam0, -1);
	func_8(&(Global_1836941.f_18), 0, 0);
	Global_2738587.f_4694 = 0;
	Global_2697320[0] = func_5();
	Global_2697320[1] = func_5();
	Global_2697320[2] = func_5();
	Global_2697320[3] = func_5();
	Global_2697320[4] = func_5();
	func_835();
	if (!func_231(func_232()))
	{
		func_368();
	}
	if (func_251() && !func_246())
	{
		MISC::SET_BIT(&(Global_1836941.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836941.f_1), 17);
	}
}

void func_878()//Position - 0x274E5
{
	var uVar0;
	
	Global_1836966 = uVar0;
}

int func_879(int iParam0, int iParam1, bool bParam2)//Position - 0x274F3
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_824();
			}
			else
			{
				return 0;
			}
		}
		if (!func_170(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_824();
					}
					else
					{
						return 0;
					}
				}
				if (func_821())
				{
					if (!bParam2)
					{
						func_824();
					}
					else
					{
						return 0;
					}
				}
				if (func_819(157))
				{
					if (!bParam2)
					{
						func_824();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_824();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_824();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_824();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_880(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x27609
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_824();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_881(int iParam0)//Position - 0x27628
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 192:
			return 32;
		
		case 193:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 204:
			return 32;
		
		case 205:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 199:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 200:
			return 32;
		
		case 201:
			return 32;
		
		case 206:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 2;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 212:
			return 4;
		
		case 213:
			return 2;
		
		case 214:
			return 2;
		
		case 196:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
			return 0;
		
		case 238:
			return 1;
		
		case 223:
			return 4;
		
		case 226:
			return 4;
		
		case 227:
			return 1;
		
		case 228:
			return 1;
		
		case 234:
			return 1;
		
		case 230:
			return 2;
		
		case 235:
			return 1;
		
		case 231:
			return 1;
		
		case 229:
			return 2;
		
		case 232:
			return 8;
		
		case 233:
			return 8;
		
		case 236:
			return 1;
		
		case 237:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 224:
			return 16;
		
		case 225:
			return 32;
		
		default:
	}
	switch (func_141(func_882(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_882(int iParam0, bool bParam1)//Position - 0x27DB3
{
	switch (iParam0)
	{
		case 210:
			return 15;
		
		case 217:
			return 8;
		
		case 211:
			return 14;
		
		case 215:
			return 122;
		
		case 218:
			return 1;
		
		case 216:
			return 5;
		
		case 219:
			return 6;
		
		case 212:
			return 11;
		
		case 220:
			return 0;
		
		case 221:
			return 2;
		
		case 213:
			return 13;
		
		case 222:
			return 3;
		
		case 214:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 315;
		
		case 176:
			return 316;
		
		case 177:
			return 317;
		
		case 178:
			return 318;
		
		case 179:
			return 320;
		
		case 180:
			return 322;
		
		case 181:
			return 323;
		
		case 182:
			return 324;
		
		case 183:
			return 325;
		
		case 184:
			return 326;
		
		case 185:
			return 327;
		
		case 186:
			return 328;
		
		case 187:
			return 329;
		
		case 188:
			return 330;
		
		case 189:
			return 331;
		
		case 190:
			return 332;
		
		case 191:
			return 333;
		
		default:
	}
	if (bParam1)
	{
	}
	return 337;
}

int func_883(int iParam0, bool bParam1, bool bParam2)//Position - 0x286A0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

