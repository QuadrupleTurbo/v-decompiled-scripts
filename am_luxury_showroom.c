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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = -1;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 32;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	struct<1232> Local_164 = { 0, 0, 0, -1, -1, 0, 2, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 132, -1, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_165 = 12;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 12;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 12;
	var uLocal_192 = 4;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 4;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 4;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 4;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 4;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 4;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 4;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 4;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 4;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 4;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 4;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 4;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 12;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 12;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 12;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = -1;
	var uLocal_328 = 0;
	var uLocal_329 = 1;
	var uLocal_330 = 0;
	var uLocal_331 = 12;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_84 = -1;
	fLocal_95 = 3f;
	fLocal_96 = 0f;
	fLocal_97 = 2f;
	fLocal_98 = 100f;
	fLocal_108 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_816();
	}
	else
	{
		func_813();
	}
	while (true)
	{
		func_812();
		if (func_800())
		{
			func_813();
		}
		func_1();
	}
}

void func_1()//Position - 0xCA
{
	switch (Local_164.f_9)
	{
		case 0:
			func_792();
			break;
		
		case 1:
			func_777();
			break;
		
		case 2:
			func_758();
			break;
		
		case 3:
			func_737();
			break;
		
		case 4:
			func_56();
			break;
	}
	func_11(&(Local_164.f_1231), &(Local_164.f_1220), Local_164.f_9 > 1);
	func_2();
}

void func_2()//Position - 0x134
{
	if (Local_164.f_9 == 1 && !func_3(1))
	{
		Local_164.f_1 = (Local_164.f_1 + 1 % 3);
	}
}

int func_3(bool bParam0)//Position - 0x15C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	
	func_9(func_10(), &Var0, &Var1, &fVar2);
	if (func_8(Var0) || func_8(Var1))
	{
		return 0;
	}
	if (!func_7(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		iVar3 = func_6(func_10());
		if (iVar3 < 0 || iVar3 >= 2)
		{
			return 0;
		}
		if (!func_7(Local_164.f_6[iVar3]))
		{
			return 0;
		}
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_164.f_6[iVar3], true) };
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		fVar7 = func_5(Var5, Var4);
		if (func_4(fVar7, fVar6, 50f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 1))
		{
			return 1;
		}
	}
	else
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 1);
	}
	return 0;
}

int func_4(float fParam0, float fParam1, float fParam2)//Position - 0x266
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

float func_5(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x2EC
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_6(int iParam0)//Position - 0x306
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x336
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_8(struct<3> Param0)//Position - 0x357
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x381
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -796.5573f, -234.6412f, 35.94032f };
			*uParam2 = { -792.6026f, -241.4741f, 39.50642f };
			*uParam3 = 3f;
			break;
		
		case 1:
			*uParam1 = { -792.1209f, -242.4434f, 35.93293f };
			*uParam2 = { -789.0962f, -247.5213f, 39.44004f };
			*uParam3 = 3f;
			break;
		
		case 2:
			*uParam1 = { -786.5422f, -248.4348f, 35.99127f };
			*uParam2 = { -780.4202f, -245.9356f, 39.44004f };
			*uParam3 = 3f;
			break;
	}
}

int func_10()//Position - 0x429
{
	return Local_164.f_1;
}

void func_11(var uParam0, var uParam1, bool bParam2)//Position - 0x435
{
	func_12(uParam0, &(uParam0->f_1), &(uParam0->f_14), &(uParam0->f_27), &(uParam0->f_100), &(uParam0->f_137), &(uParam0->f_167), uParam1, bParam2);
}

void func_12(var uParam0, var* uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x45F
{
	struct<3> Var0;
	int iVar1;
	struct<4> Var2;
	struct<3> Var3;
	char cVar4[24];
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<2> Var8;
	int iVar9;
	
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (func_55() != 0 || uParam8)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD2", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD3", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD4", false);
		if ((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD4")) && uParam0->f_164 <= 0f)
		{
			uParam0->f_164 = (500f / 1000f);
			PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), uParam1);
			func_54(uParam2, uParam1);
			iVar1 = 0;
			while (iVar1 < 12)
			{
				if ((*uParam2)[iVar1] != (*uParam1)[iVar1])
				{
					uParam0->f_150[iVar1] = 1;
					(*uParam2)[iVar1] = (*uParam1)[iVar1];
				}
				if (func_7((*uParam1)[iVar1]))
				{
					if (func_53((*uParam1)[iVar1], 1))
					{
						iVar5 = func_51((*uParam1)[iVar1]);
						if (func_50(iVar5, 1, 0))
						{
							if (func_48(iVar5))
							{
							}
							else
							{
								iVar6 = ENTITY::GET_ENTITY_MODEL((*uParam1)[iVar1]);
								if (iVar6 == joaat("slamtruck") && !func_53((*uParam1)[iVar1], 1))
								{
								}
								else
								{
									Var0 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar1], true) };
									if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT((*uParam1)[iVar1], false) && SYSTEM::VDIST(func_47(PLAYER::PLAYER_ID()), Var0) <= 15f)
									{
										StringCopy(&Var7, "MP_CAR_STATS_", 16);
										if (iVar1 < 9)
										{
											StringConCat(&Var7, "0", 16);
										}
										StringIntConCat(&Var7, iVar1 + 1, 16);
										func_46(iVar6, &(Var0.f_2));
										if (func_45(uParam6[iVar1], &Var7) && uParam0->f_150[iVar1])
										{
											*(uParam4[iVar1 /*3*/]) = { Var0 };
											(*uParam5)[iVar1] = func_39(iVar6);
											StringCopy(&Var2, "", 32);
											StringCopy(&Var3, "", 24);
											StringCopy(&cVar4, "", 24);
											func_38((*uParam1)[iVar1], &Var3, &cVar4);
											StringCopy(&Var2, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar6), 32);
											func_35((*uParam1)[iVar1], uParam3[iVar1 /*6*/]);
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_VEHICLE_INFOR_AND_STATS");
											GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_TWO_STRINGS");
											HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_32(iVar6, 1));
											HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var2);
											GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
											if (!func_53((*uParam1)[iVar1], 1))
											{
												if (func_31(iVar6))
												{
													func_25(iVar6);
												}
												else
												{
													func_24("CMRC_COMINGSOON");
												}
											}
											else
											{
												func_24("");
											}
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(&cVar4);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(&Var3);
											func_24("FMMC_VEHST_0");
											func_24("FMMC_VEHST_1");
											func_24("FMMC_VEHST_2");
											func_24("FMMC_VEHST_3");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[0]));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[1]));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[2]));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[3]));
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											if (func_53((*uParam1)[iVar1], 1))
											{
												if (func_50(iVar5, 1, 0))
												{
													StringCopy(&Var8, "", 16);
													StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iVar5), 32);
													func_16(iVar5, &Var8);
													GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_PLAYER_NAME");
													func_15(&Var2);
													GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
													if (!func_14(&Var8))
													{
														GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_CREW_NAME");
														GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&Var8);
														GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
													}
												}
											}
											uParam0->f_150[iVar1] = 0;
										}
									}
									(*uParam2)[iVar1] = (*uParam1)[iVar1];
								}
							}
							iVar1++;
							iVar1 = 0;
							while (iVar1 < 12)
							{
								if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED((*uParam6)[iVar1]))
								{
									Var0 = { *(uParam4[iVar1 /*3*/]) };
									Var0.f_2 = (Var0.f_2 + ((*uParam5)[iVar1] + 1.3f));
									uParam7->f_6 = { func_13(Var0, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
									if (SYSTEM::VDIST(func_47(PLAYER::PLAYER_ID()), Var0) <= 15f)
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && SYSTEM::VDIST(func_47(PLAYER::PLAYER_ID()), Var0) < 3.5f)
										{
										}
										else
										{
											GRAPHICS::DRAW_SCALEFORM_MOVIE_3D_SOLID((*uParam6)[iVar1], Var0, uParam7->f_6, *uParam7, uParam7->f_3, uParam7->f_9);
										}
									}
								}
								iVar1++;
							}
							uParam0->f_164 = (uParam0->f_164 - MISC::GET_FRAME_TIME());
							Jump @1120; //curOff = 1051
							uParam0->f_164 = 0f;
							iVar9 = 0;
							while (iVar9 < 12)
							{
								uParam0->f_150[iVar9] = 1;
								if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED((*uParam6)[iVar9]))
								{
									GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam6[iVar9]);
								}
								iVar9++;
							}
							uParam0->f_166 = 0;
							uParam0->f_165 = 0;
						}

Vector3 func_13(struct<2> Param0, var uParam1, struct<3> Param2)//Position - 0x8C2
{
	struct<3> Var0;
	
	if (func_8(Param2))
	{
		return 0f, 0f, 0f;
	}
	Var0.f_2 = (180f - MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1)));
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	return Var0;
}

int func_14(char* sParam0)//Position - 0x903
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 0)
	{
		return 1;
	}
	return 0;
}

void func_15(char* sParam0)//Position - 0x927
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_16(int iParam0, char[4] cParam1)//Position - 0x935
{
	struct<13> Var0;
	struct<35> Var1;
	
	StringCopy(cParam1, "", 16);
	Var0 = { func_23(iParam0) };
	if (func_22())
	{
		if (func_21(Var0))
		{
			if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return;
			}
		}
	}
	else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
	{
		return;
	}
	if (func_20(&Var0))
	{
		Var1 = { func_18(iParam0) };
		func_17(&Var1, cParam1);
	}
}

void func_17(var* uParam0, char* sParam1)//Position - 0x99A
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_18(int iParam0)//Position - 0x9AC
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_19(iParam0))
	{
		return Global_1575090[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_23(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_19(int iParam0)//Position - 0x9E8
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_20(var* uParam0)//Position - 0x9FE
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

bool func_21(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xA24
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_22()//Position - 0xA34
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

struct<13> func_23(int iParam0)//Position - 0xA4A
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_24(char* sParam0)//Position - 0xA61
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_25(int iParam0)//Position - 0xA73
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("OMNISEGT"))
	{
		func_24("LEGEND_WEB");
		return;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		func_24("");
	}
	iVar0 = func_29(iParam0);
	iVar1 = func_26(iVar0);
	switch (iVar1)
	{
		case 10:
			func_24("LEGEND_WEB");
			break;
		
		case 16:
			func_24("SOUTHERN_WEB");
			break;
		
		case 12:
			func_24("WARSTOCK_WEB");
			break;
		
		default:
			func_24("");
			break;
	}
}

int func_26(int iParam0)//Position - 0xAF1
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return -1;
	}
	if ((((iParam0 == 8 || iParam0 == 9) || iParam0 == 23) || iParam0 == 26) || iParam0 == 28)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 184)
	{
		if (func_27(10, iVar0 + 3) == iParam0)
		{
			return 10;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 247)
	{
		if (func_27(16, iVar0 + 3) == iParam0)
		{
			return 16;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 157)
	{
		if (func_27(12, iVar0 + 3) == iParam0)
		{
			return 12;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 37)
	{
		if (func_27(11, iVar0 + 3) == iParam0)
		{
			return 11;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (func_27(13, iVar0 + 3) == iParam0)
		{
			return 13;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_27(15, iVar0 + 3) == iParam0)
		{
			return 15;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_27(26, iVar0 + 3 + 12) == iParam0)
		{
			return 26;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (func_27(29, iVar0 + 3 + 17) == iParam0)
		{
			return 29;
		}
		iVar0++;
	}
	return -1;
}

int func_27(int iParam0, int iParam1)//Position - 0xC78
{
	int iVar0;
	
	iVar0 = (iParam1 - 3);
	if (!func_28(iParam0, iVar0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 10:
			switch (iVar0)
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
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 46;
				
				case 14:
					return 70;
				
				case 15:
					return 71;
				
				case 16:
					return 72;
				
				case 17:
					return 56;
				
				case 18:
					return 50;
				
				case 19:
					return 44;
				
				case 20:
					return 47;
				
				case 21:
					return 73;
				
				case 22:
					return 74;
				
				case 23:
					return 75;
				
				case 24:
					return 76;
				
				case 25:
					return 55;
				
				case 26:
					return 95;
				
				case 27:
					return 96;
				
				case 28:
					return 97;
				
				case 29:
					return 98;
				
				case 30:
					return 77;
				
				case 32:
					return 45;
				
				case 33:
					return 49;
				
				case 34:
					return 48;
				
				case 35:
					return 109;
				
				case 36:
					return 111;
				
				case 37:
					return 114;
				
				case 38:
					return 112;
				
				case 39:
					return 115;
				
				case 40:
					return 116;
				
				case 41:
					return 110;
				
				case 42:
					return 117;
				
				case 43:
					return 118;
				
				case 44:
					return 119;
				
				case 45:
					return 120;
				
				case 46:
					return 121;
				
				case 47:
					return 165;
				
				case 48:
					return 166;
				
				case 49:
					return 169;
				
				case 50:
					return 172;
				
				case 51:
					return 182;
				
				case 52:
					return 220;
				
				case 53:
					return 221;
				
				case 55:
					return 222;
				
				case 57:
					return 216;
				
				case 58:
					return 214;
				
				case 59:
					return 223;
				
				case 60:
					return 225;
				
				case 61:
					return 218;
				
				case 62:
					return 219;
				
				case 63:
					return 235;
				
				case 64:
					return 236;
				
				case 65:
					return 238;
				
				case 66:
					return 239;
				
				case 67:
					return 242;
				
				case 68:
					return 233;
				
				case 69:
					return 234;
				
				case 70:
					return 240;
				
				case 71:
					return 241;
				
				case 72:
					return 248;
				
				case 73:
					return 261;
				
				case 74:
					return 262;
				
				case 75:
					return 263;
				
				case 76:
					return 259;
				
				case 77:
					return 260;
				
				case 78:
					return 264;
				
				case 79:
					return 265;
				
				case 80:
					return 266;
				
				case 81:
					return 267;
				
				case 82:
					return 279;
				
				case 83:
					return 280;
				
				case 84:
					return 281;
				
				case 85:
					return 292;
				
				case 86:
					return 293;
				
				case 87:
					return 294;
				
				case 88:
					return 312;
				
				case 89:
					return 313;
				
				case 90:
					return 319;
				
				case 91:
					return 320;
				
				case 92:
					return 321;
				
				case 93:
					return 322;
				
				case 94:
					return 325;
				
				case 95:
					return 326;
				
				case 96:
					return 327;
				
				case 97:
					return 328;
				
				case 98:
					return 352;
				
				case 99:
					return 355;
				
				case 100:
					return 353;
				
				case 101:
					return 367;
				
				case 102:
					return 368;
				
				case 103:
					return 372;
				
				case 104:
					return 373;
				
				case 105:
					return 374;
				
				case 106:
					return 375;
				
				case 107:
					return 376;
				
				case 108:
					return 377;
				
				case 109:
					return 378;
				
				case 110:
					return 379;
				
				case 111:
					return 383;
				
				case 112:
					return 382;
				
				case 113:
					return 384;
				
				case 114:
					return 386;
				
				case 115:
					return 391;
				
				case 116:
					return 393;
				
				case 117:
					return 394;
				
				case 118:
					return 397;
				
				case 119:
					return 396;
				
				case 120:
					return 398;
				
				case 121:
					return 405;
				
				case 122:
					return 411;
				
				case 123:
					return 412;
				
				case 124:
					return 443;
				
				case 125:
					return 444;
				
				case 126:
					return 445;
				
				case 127:
					return 446;
				
				case 128:
					if (!Global_262145.f_25822)
					{
						return 447;
					}
					return -1;
					break;
				
				case 129:
					return 448;
				
				case 130:
					if (Global_262145.f_25822)
					{
						return 447;
					}
					return -1;
					break;
				
				case 131:
					return 459;
				
				case 132:
					return 460;
				
				case 133:
					return 461;
				
				case 134:
					return 462;
				
				case 135:
					return 463;
				
				case 136:
					return 470;
				
				case 137:
					return 474;
				
				case 138:
					return 475;
				
				case 139:
					return 476;
				
				case 140:
					return 477;
				
				case 141:
					return 478;
				
				case 142:
					return 479;
				
				case 143:
					return 499;
				
				case 144:
					return 489;
				
				case 145:
					return 490;
				
				case 146:
					return 491;
				
				case 147:
					return 492;
				
				case 148:
					return 493;
				
				case 149:
					return 494;
				
				case 150:
					return 495;
				
				case 151:
					return 515;
				
				case 152:
					return 512;
				
				case 153:
					return 513;
				
				case 154:
					return 514;
				
				case 155:
					return 519;
				
				case 156:
					return 543;
				
				case 157:
					return 537;
				
				case 158:
					return 540;
				
				case 159:
					return 542;
				
				case 160:
					return 538;
				
				case 161:
					return 548;
				
				case 162:
					return 550;
				
				case 163:
					return 551;
				
				case 164:
					return -1;
				
				case 165:
					return -1;
				
				case 166:
					return -1;
				
				case 167:
					return 554;
				
				case 168:
					return 555;
				
				case 169:
					return 556;
				
				case 170:
					return 557;
				
				case 171:
					return 558;
				
				case 172:
					return 559;
				
				case 173:
					return 560;
				
				case 174:
					return 561;
				
				case 175:
					return 562;
				
				case 176:
					return 563;
				
				case 177:
					return 564;
				
				case 178:
					return 570;
				
				case 179:
					return 571;
				
				case 180:
					return 572;
				
				case 181:
					return 573;
				
				case 182:
					return 569;
				
				case 183:
					return 574;
				
				case 184:
					return -1;
			}
			break;
		
		case 11:
			switch (iVar0)
			{
				case 0:
					return 13;
				
				case 1:
					return 10;
				
				case 2:
					return 12;
				
				case 3:
					return 14;
				
				case 4:
					return 11;
				
				case 5:
					return 15;
				
				case 12:
					return 16;
				
				case 13:
					return 78;
				
				case 14:
					return 79;
				
				case 15:
					return 18;
				
				case 16:
					return 80;
				
				case 17:
					return 113;
				
				case 18:
					return 162;
				
				case 19:
					return 163;
				
				case 20:
					return 199;
				
				case 21:
					return 164;
				
				case 22:
					return 188;
				
				case 23:
					return 215;
				
				case 24:
					return 217;
				
				case 25:
					return 243;
				
				case 26:
					return 244;
				
				case 27:
					return 253;
				
				case 28:
					return 257;
				
				case 29:
					return 350;
				
				case 30:
					return 351;
				
				case 31:
					return 349;
				
				case 32:
					return 342;
				
				case 33:
					return 338;
				
				case 34:
					return 401;
				
				case 35:
					return 413;
				
				case 36:
					return 582;
				
				case 37:
					return -1;
				
				default:
			}
			break;
		
		case 12:
			switch (iVar0)
			{
				case 0:
					return 17;
				
				case 2:
					return 22;
				
				case 4:
					return 19;
				
				case 5:
					return 20;
				
				case 7:
					return 21;
				
				case 14:
					return 82;
				
				case 15:
					return 85;
				
				case 17:
					return 84;
				
				case 18:
					return 83;
				
				case 21:
					return 86;
				
				case 24:
					return 87;
				
				case 25:
					return 81;
				
				case 26:
					return 148;
				
				case 27:
					return 160;
				
				case 28:
					return 171;
				
				case 29:
					return 187;
				
				case 30:
					return 177;
				
				case 31:
					return 178;
				
				case 32:
					return 179;
				
				case 33:
					return 183;
				
				case 34:
					return 185;
				
				case 35:
					return 186;
				
				case 36:
					return 192;
				
				case 37:
					return 184;
				
				case 38:
					return 200;
				
				case 39:
					return 205;
				
				case 40:
					return 237;
				
				case 41:
					return 254;
				
				case 42:
					return 256;
				
				case 43:
					return 304;
				
				case 44:
					return 305;
				
				case 45:
					return 306;
				
				case 46:
					return 307;
				
				case 47:
					return 308;
				
				case 48:
					return 309;
				
				case 49:
					return 310;
				
				case 50:
					return 311;
				
				case 51:
					return 323;
				
				case 52:
					return 323;
				
				case 53:
					return 323;
				
				case 54:
					return 323;
				
				case 55:
					return 323;
				
				case 56:
					return 323;
				
				case 57:
					return 323;
				
				case 58:
					return 323;
				
				case 59:
					return 323;
				
				case 60:
					return 324;
				
				case 61:
					return 329;
				
				case 62:
					return 330;
				
				case 63:
					return 331;
				
				case 64:
					return 332;
				
				case 65:
					return 333;
				
				case 66:
					return 334;
				
				case 67:
					return 335;
				
				case 68:
					return 336;
				
				case 69:
					return 337;
				
				case 70:
					return 339;
				
				case 71:
					return 340;
				
				case 72:
					return 341;
				
				case 73:
					return 343;
				
				case 74:
					return 344;
				
				case 75:
					return 345;
				
				case 76:
					return 346;
				
				case 77:
					return 347;
				
				case 78:
					return 348;
				
				case 79:
					return 356;
				
				case 80:
					return 357;
				
				case 81:
					return 357;
				
				case 82:
					return 357;
				
				case 83:
					return 357;
				
				case 84:
					return 357;
				
				case 85:
					return 357;
				
				case 86:
					return 357;
				
				case 87:
					return 357;
				
				case 88:
					return 358;
				
				case 89:
					return 359;
				
				case 90:
					return 360;
				
				case 91:
					return 361;
				
				case 92:
					return 362;
				
				case 93:
					return 363;
				
				case 94:
					return 364;
				
				case 95:
					return 365;
				
				case 96:
					return 366;
				
				case 97:
					return 400;
				
				case 98:
					return 402;
				
				case 99:
					return 402;
				
				case 100:
					return 402;
				
				case 101:
					return 402;
				
				case 102:
					return 402;
				
				case 103:
					return 402;
				
				case 104:
					return 402;
				
				case 105:
					return 402;
				
				case 106:
					return 402;
				
				case 107:
					return 402;
				
				case 108:
					return 403;
				
				case 109:
					return 404;
				
				case 110:
					return 406;
				
				case 111:
					return 407;
				
				case 112:
					return 408;
				
				case 113:
					return 409;
				
				case 114:
					return 480;
				
				case 115:
					return 481;
				
				case 116:
					return 482;
				
				case 117:
					return 483;
				
				case 118:
					return 484;
				
				case 119:
					return 485;
				
				case 120:
					return 486;
				
				case 121:
					return 487;
				
				case 122:
					return 488;
				
				case 135:
					return 518;
				
				case 136:
					return 518;
				
				case 137:
					return 518;
				
				case 138:
					return 518;
				
				case 139:
					return 518;
				
				case 140:
					return 518;
				
				case 141:
					return 518;
				
				case 142:
					return 518;
				
				case 143:
					return 518;
				
				case 144:
					return 518;
				
				case 145:
					return 523;
				
				case 146:
					return 524;
				
				case 148:
					return 525;
				
				case 149:
					return 526;
				
				case 150:
					return 527;
				
				case 152:
					return 528;
				
				case 153:
					return 529;
				
				case 154:
					return 530;
				
				case 155:
					return 531;
				
				case 156:
					return 532;
				
				case 157:
					return -1;
				
				default:
			}
			break;
		
		case 13:
			switch (iVar0)
			{
				case 0:
					return 24;
				
				case 1:
					return 25;
				
				case 2:
					return 102;
				
				case 3:
					return 27;
				
				case 4:
					return 32;
				
				case 5:
					return 29;
				
				case 6:
					return 30;
				
				case 8:
					return 173;
				
				case 11:
					return 224;
				
				case 14:
					return 201;
				
				case 16:
					return 245;
				
				case 17:
					return 245;
				
				case 18:
					return 245;
				
				case 19:
					return 245;
				
				case 20:
					return 245;
				
				case 21:
					return 245;
				
				case 22:
					return 245;
				
				case 23:
					return 245;
				
				case 24:
					return 245;
				
				case 25:
					return 245;
				
				case 26:
					return 258;
				
				case 27:
					return 533;
				
				case 28:
					return -1;
				
				default:
			}
			break;
		
		case 15:
			switch (iVar0)
			{
				case 0:
					return 33;
				
				case 1:
					return 34;
				
				case 2:
					return 35;
				
				case 3:
					return 36;
				
				case 4:
					return 37;
				
				case 5:
					return 38;
				
				case 9:
					return -1;
				
				default:
			}
			break;
		
		case 16:
			switch (iVar0)
			{
				case 0:
					return 39;
				
				case 1:
					return 40;
				
				case 2:
					return 41;
				
				case 3:
					return 42;
				
				case 4:
					return 43;
				
				case 5:
					return 44;
				
				case 6:
					return 45;
				
				case 7:
					return 46;
				
				case 8:
					return 47;
				
				case 9:
					return 48;
				
				case 10:
					return 49;
				
				case 11:
					return 50;
				
				case 12:
					return 51;
				
				case 13:
					return 52;
				
				case 14:
					return 53;
				
				case 15:
					return 54;
				
				case 16:
					return 55;
				
				case 17:
					return 56;
				
				case 18:
					return 57;
				
				case 19:
					return 58;
				
				case 20:
					return 59;
				
				case 21:
					return 60;
				
				case 22:
					return 61;
				
				case 23:
					return 62;
				
				case 24:
					return 63;
				
				case 25:
					return 64;
				
				case 26:
					return 65;
				
				case 27:
					return 66;
				
				case 28:
					return 67;
				
				case 29:
					return 68;
				
				case 30:
					return 69;
				
				case 35:
					return 89;
				
				case 36:
					return 90;
				
				case 37:
					return 91;
				
				case 38:
					return 92;
				
				case 39:
					return 93;
				
				case 40:
					return 94;
				
				case 41:
					return 88;
				
				case 42:
					return 99;
				
				case 43:
					return 100;
				
				case 44:
					return 101;
				
				case 45:
					return 103;
				
				case 46:
					return 104;
				
				case 47:
					return 105;
				
				case 48:
					return 106;
				
				case 49:
					return 108;
				
				case 50:
					return 107;
				
				case 51:
					return 139;
				
				case 52:
					return 128;
				
				case 53:
					return 129;
				
				case 54:
					return 130;
				
				case 55:
					return 131;
				
				case 56:
					return 132;
				
				case 57:
					return 133;
				
				case 58:
					return 134;
				
				case 59:
					return 135;
				
				case 60:
					return 136;
				
				case 61:
					return 137;
				
				case 62:
					return 138;
				
				case 63:
					return 140;
				
				case 64:
					return 141;
				
				case 65:
					return 142;
				
				case 66:
					return 122;
				
				case 67:
					return 123;
				
				case 68:
					return 124;
				
				case 69:
					return 125;
				
				case 70:
					return 126;
				
				case 71:
					return 127;
				
				case 72:
					return 143;
				
				case 73:
					return 144;
				
				case 74:
					return 145;
				
				case 75:
					return 146;
				
				case 76:
					return 147;
				
				case 77:
					return 149;
				
				case 78:
					return 150;
				
				case 79:
					return 151;
				
				case 80:
					return 152;
				
				case 81:
					return 153;
				
				case 82:
					return 154;
				
				case 83:
					return 155;
				
				case 84:
					return 156;
				
				case 85:
					return 157;
				
				case 86:
					return 158;
				
				case 87:
					return 159;
				
				case 88:
					return 161;
				
				case 89:
					return 168;
				
				case 90:
					return 167;
				
				case 91:
					return 170;
				
				case 92:
					return 189;
				
				case 93:
					return 190;
				
				case 94:
					return 191;
				
				case 95:
					return 193;
				
				case 96:
					return 194;
				
				case 97:
					return 195;
				
				case 98:
					return 196;
				
				case 99:
					return 197;
				
				case 100:
					return 198;
				
				case 101:
					return 174;
				
				case 102:
					return 175;
				
				case 103:
					return 176;
				
				case 104:
					return 180;
				
				case 105:
					return 181;
				
				case 106:
					return 204;
				
				case 107:
					return 202;
				
				case 108:
					return 203;
				
				case 109:
					return 206;
				
				case 110:
					return 207;
				
				case 111:
					return 208;
				
				case 112:
					return 209;
				
				case 113:
					return 211;
				
				case 114:
					return 210;
				
				case 115:
					return 213;
				
				case 116:
					return 212;
				
				case 117:
					return 231;
				
				case 118:
					return 232;
				
				case 119:
					return 246;
				
				case 120:
					return 255;
				
				case 121:
					return 268;
				
				case 122:
					return 269;
				
				case 123:
					return 270;
				
				case 124:
					return 271;
				
				case 125:
					return 272;
				
				case 126:
					return 273;
				
				case 127:
					return 274;
				
				case 128:
					return 275;
				
				case 129:
					return 276;
				
				case 130:
					return 277;
				
				case 131:
					return 278;
				
				case 132:
					return 282;
				
				case 134:
					return 283;
				
				case 135:
					return 284;
				
				case 136:
					return 285;
				
				case 137:
					return 286;
				
				case 138:
					return 287;
				
				case 139:
					return 288;
				
				case 140:
					return 289;
				
				case 141:
					return 290;
				
				case 142:
					return 291;
				
				case 143:
					return 295;
				
				case 144:
					return 296;
				
				case 145:
					return 297;
				
				case 146:
					return 298;
				
				case 147:
					return 299;
				
				case 148:
					return 300;
				
				case 149:
					return 301;
				
				case 150:
					return 302;
				
				case 151:
					return 303;
				
				case 152:
					return 354;
				
				case 153:
					return 370;
				
				case 154:
					return 371;
				
				case 155:
					return 380;
				
				case 156:
					return 381;
				
				case 157:
					return 369;
				
				case 158:
					return 385;
				
				case 159:
					return 387;
				
				case 160:
					return 388;
				
				case 161:
					return 389;
				
				case 162:
					return 390;
				
				case 163:
					return 392;
				
				case 164:
					return 399;
				
				case 165:
					return 395;
				
				case 166:
					return 415;
				
				case 167:
					return 416;
				
				case 168:
					return 417;
				
				case 169:
					return 418;
				
				case 170:
					return 424;
				
				case 171:
					return 419;
				
				case 172:
					return 420;
				
				case 173:
					return 421;
				
				case 174:
					return 423;
				
				case 175:
					return 422;
				
				case 176:
					return 414;
				
				case 177:
					return 410;
				
				case 178:
					return 458;
				
				case 184:
					return 441;
				
				case 185:
					return 442;
				
				case 186:
					return 449;
				
				default:
			}
			switch (iVar0)
			{
				case 187:
					return 464;
				
				case 188:
					return 465;
				
				case 189:
					return 466;
				
				case 190:
					return 467;
				
				case 191:
					return 468;
				
				case 192:
					return 440;
				
				case 193:
					return 469;
				
				case 194:
					return 471;
				
				case 195:
					return 472;
				
				case 196:
					return 473;
				
				case 197:
					return 503;
				
				case 198:
					return 504;
				
				case 199:
					return 502;
				
				case 200:
					return 497;
				
				case 201:
					return 498;
				
				case 202:
					return 501;
				
				case 203:
					return 500;
				
				case 204:
					return 505;
				
				case 205:
					return 496;
				
				case 207:
					return 507;
				
				case 213:
					return 506;
				
				case 214:
					return 509;
				
				case 218:
					return 511;
				
				case 219:
					return 510;
				
				case 220:
					return 520;
				
				case 221:
					return 521;
				
				case 222:
					return 522;
				
				case 223:
					return 534;
				
				case 224:
					return 535;
				
				case 225:
					return 536;
				
				case 226:
					return 541;
				
				case 227:
					return 539;
				
				case 228:
					return 546;
				
				case 229:
					return 545;
				
				case 230:
					return 544;
				
				case 231:
					return 547;
				
				case 232:
					return 549;
				
				case 233:
					return 552;
				
				case 234:
					return -1;
				
				case 235:
					return -1;
				
				case 236:
					return 565;
				
				case 237:
					return 566;
				
				case 238:
					return 567;
				
				case 239:
					return 568;
				
				case 240:
					return 575;
				
				case 241:
					return 576;
				
				case 242:
					return 577;
				
				case 243:
					return 578;
				
				case 244:
					return 579;
				
				case 245:
					return 580;
				
				case 246:
					return 581;
				
				case 247:
					return -1;
				
				default:
			}
			break;
		
		case 26:
			switch ((iVar0 - 12))
			{
				case 0:
					return 221;
				
				case 1:
					return 229;
				
				case 2:
					return 228;
				
				case 4:
					if (!Global_262145.f_14734)
					{
						return 227;
					}
					else
					{
						return 227;
					}
					break;
				
				case 5:
					return 226;
				
				case 6:
					return 230;
				
				case 3:
					return 135;
				
				case 7:
					return 251;
				
				case 8:
					return 250;
				
				case 9:
					return 249;
				
				case 13:
					return 210;
				
				case 14:
					return 252;
					break;
				
				case 11:
					return 247;
				
				case 12:
					return 49;
				
				case 15:
					return 314;
				
				case 16:
					return 315;
				
				case 17:
					return 316;
				
				case 18:
					return 317;
				
				case 19:
					return 95;
				
				case 20:
					if (!Global_262145.f_19185)
					{
						return -1;
					}
					else
					{
						return 48;
					}
					break;
				
				case 21:
					return 318;
				
				case 22:
					return 516;
				
				case 23:
					return 300;
				
				case 24:
					return 145;
				
				case 25:
					return 464;
				
				case 26:
					return 371;
				
				case 27:
					return 517;
				
				case 28:
					if (!Global_262145.f_33044)
					{
						return -1;
					}
					else
					{
						return 522;
					}
					break;
				
				case 29:
					if (!Global_262145.f_33046)
					{
						return -1;
					}
					else
					{
						return 370;
					}
					break;
				
				case 30:
					if (!Global_262145.f_33037)
					{
						return -1;
					}
					else
					{
						return 521;
					}
					break;
				
				case 31:
					if (!Global_262145.f_33045)
					{
						return -1;
					}
					else
					{
						return 569;
					}
					break;
				
				case 32:
					return -1;
			}
			break;
		
		case 29:
			switch ((iVar0 - 18))
			{
				case 0:
					return 425;
				
				case 1:
					return 426;
				
				case 2:
					return 427;
				
				case 3:
					return 428;
				
				case 4:
					return 429;
				
				case 5:
					return 430;
				
				case 6:
					return 431;
				
				case 7:
					return 432;
				
				case 8:
					return 433;
				
				case 9:
					return 434;
				
				case 10:
					return 435;
				
				case 11:
					return 436;
				
				case 12:
					return 437;
				
				case 13:
					return 438;
				
				case 14:
					return 439;
				
				case 15:
					return 211;
				
				case 16:
					return 145;
				
				case 17:
					return 210;
				
				case 18:
					return 122;
				
				case 19:
					return 440;
				
				case 20:
					return 389;
				
				case 21:
					return 278;
				
				case 22:
					return -1;
				
				default:
			}
			break;
	}
	return -1;
}

int func_28(int iParam0, int iParam1)//Position - 0x2B3F
{
	if (iParam0 == 10)
	{
		if (iParam1 >= 0 && iParam1 <= 8)
		{
			return 1;
		}
		else if (Global_78319)
		{
			if (iParam1 >= 14 && iParam1 < 184)
			{
				return 1;
			}
		}
		else if (!Global_78319)
		{
			if (iParam1 >= 14 && iParam1 < 184)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (iParam1 >= 0 && iParam1 <= 30)
		{
			return 1;
		}
		else if ((Global_78319 && iParam1 >= 35) && iParam1 < 247)
		{
			return 1;
		}
		else if ((!Global_78319 && iParam1 >= 35) && iParam1 < 247)
		{
			return 1;
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam1 >= 0 && iParam1 <= 5)
		{
			return 1;
		}
		else if (iParam1 >= 12 && iParam1 < 37)
		{
			return 1;
		}
	}
	else if (iParam0 == 12)
	{
		if ((((iParam1 == 0 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 7)
		{
			return 1;
		}
		else if (Global_78319)
		{
			if ((((iParam1 == 14 || iParam1 == 15) || iParam1 == 17) || iParam1 == 18) || (iParam1 >= 21 && iParam1 < 157))
			{
				if ((iParam1 == 57 || iParam1 == 58) || iParam1 == 59)
				{
					return 0;
				}
				if ((iParam1 == 85 || iParam1 == 86) || iParam1 == 87)
				{
					return 0;
				}
				if ((iParam1 == 105 || iParam1 == 106) || iParam1 == 107)
				{
					return 0;
				}
				if ((iParam1 == 142 || iParam1 == 143) || iParam1 == 144)
				{
					return 0;
				}
				return 1;
			}
		}
		else if (!Global_78319)
		{
			if ((((iParam1 == 14 || iParam1 == 15) || iParam1 == 17) || iParam1 == 18) || (iParam1 >= 21 && iParam1 < 157))
			{
				if ((iParam1 == 57 || iParam1 == 58) || iParam1 == 59)
				{
					return 0;
				}
				if ((iParam1 == 85 || iParam1 == 86) || iParam1 == 87)
				{
					return 0;
				}
				if ((iParam1 == 105 || iParam1 == 106) || iParam1 == 107)
				{
					return 0;
				}
				if ((iParam1 == 142 || iParam1 == 143) || iParam1 == 144)
				{
					return 0;
				}
				return 1;
			}
		}
	}
	else if (iParam0 == 13)
	{
		if ((((iParam1 >= 0 && iParam1 <= 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 14)
		{
			return 1;
		}
		else if (iParam1 >= 16 && iParam1 < 28)
		{
			if ((iParam1 == 23 || iParam1 == 24) || iParam1 == 25)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == 15)
	{
		if (iParam1 >= 0 && iParam1 <= 5)
		{
			return 1;
		}
	}
	else if (iParam0 == 26)
	{
		if (iParam1 == 10)
		{
			return 0;
		}
		if (iParam1 >= 0 && iParam1 < 32)
		{
			return 1;
		}
		if (iParam1 >= 12 && iParam1 <= 44)
		{
			return 1;
		}
	}
	else if (iParam0 == 29)
	{
		if (Global_78319)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x2F13
{
	switch (iParam0)
	{
		case joaat("ztype"):
			return 0;
		
		case joaat("stinger"):
			return 1;
		
		case joaat("jb700"):
			return 2;
		
		case joaat("cheetah"):
			return 3;
		
		case joaat("entityxf"):
			return 4;
		
		case joaat("adder"):
			return 5;
		
		case joaat("monroe"):
			return 6;
		
		case joaat("cogcabrio"):
			return 7;
		
		case joaat("shamal"):
			return 10;
		
		case joaat("stunt"):
			return 11;
		
		case joaat("cuban800"):
			return 12;
		
		case joaat("duster"):
			return 13;
		
		case joaat("luxor"):
			return 14;
		
		case joaat("frogger"):
			return 15;
		
		case joaat("maverick"):
			return 16;
		
		case joaat("rhino"):
			return 17;
		
		case joaat("titan"):
			return 18;
		
		case joaat("cargobob"):
			return 19;
		
		case joaat("buzzard"):
			return 20;
		
		case joaat("crusader"):
			return 21;
		
		case joaat("barracks"):
			return 22;
		
		case joaat("marquis"):
			return 24;
		
		case joaat("jetmax"):
			return 25;
		
		case joaat("squalo"):
			return 27;
		
		case joaat("tropic"):
			return 29;
		
		case joaat("seashark"):
			return 30;
		
		case joaat("submersible"):
			return 31;
		
		case joaat("suntrap"):
			return 32;
		
		case joaat("tug"):
			return 258;
		
		case joaat("bmx"):
			return 33;
		
		case joaat("scorcher"):
			return 34;
		
		case joaat("tribike"):
			return 35;
		
		case joaat("tribike2"):
			return 36;
		
		case joaat("tribike3"):
			return 37;
		
		case joaat("cruiser"):
			return 38;
		
		case joaat("schwarzer"):
			return 39;
		
		case joaat("zion"):
			return 40;
		
		case joaat("gauntlet"):
			return 41;
		
		case joaat("vigero"):
			return 42;
		
		case joaat("issi2"):
			return 43;
		
		case joaat("infernus"):
			return 44;
		
		case joaat("surano"):
			return 45;
		
		case joaat("vacca"):
			return 46;
		
		case joaat("ninef"):
			return 47;
		
		case joaat("comet2"):
			return 48;
		
		case joaat("banshee"):
			return 49;
		
		case joaat("feltzer2"):
			return 50;
		
		case joaat("bfinjection"):
			return 51;
		
		case joaat("sandking"):
			return 52;
		
		case joaat("fugitive"):
			return 53;
		
		case joaat("dilettante"):
			return 54;
		
		case joaat("superd"):
			return 55;
		
		case joaat("exemplar"):
			return 56;
		
		case joaat("baller2"):
			return 57;
		
		case joaat("cavalcade"):
			return 58;
		
		case joaat("rocoto"):
			return 59;
		
		case joaat("felon"):
			return 60;
		
		case joaat("oracle2"):
			return 61;
		
		case joaat("bati"):
			return 62;
		
		case joaat("akuma"):
			return 63;
		
		case joaat("ruffian"):
			return 64;
		
		case joaat("vader"):
			return 65;
		
		case joaat("blazer"):
			return 66;
		
		case joaat("pcj"):
			return 67;
		
		case joaat("sanchez"):
			return 68;
		
		case joaat("faggio2"):
			return 69;
		
		case joaat("airbus"):
			return 82;
		
		case joaat("annihilator"):
			return 78;
		
		case joaat("bati2"):
			return 94;
		
		case joaat("bison"):
			return 89;
		
		case joaat("bullet"):
			return 70;
		
		case joaat("bus"):
			return 83;
		
		case joaat("carbonizzare"):
			return 71;
		
		case joaat("coach"):
			return 84;
		
		case joaat("coquette"):
			return 72;
		
		case joaat("double"):
			return 90;
		
		case joaat("dump"):
			return 81;
		
		case joaat("felon2"):
			return 91;
		
		case joaat("hexer"):
			return 92;
		
		case joaat("journey"):
			return 85;
		
		case joaat("mammatus"):
			return 79;
		
		case joaat("mule"):
			return 86;
		
		case joaat("ninef2"):
			return 73;
		
		case joaat("rapidgt"):
			return 74;
		
		case joaat("rapidgt2"):
			return 75;
		
		case joaat("rentalbus"):
			return 87;
		
		case joaat("stingergt"):
			return 76;
		
		case joaat("stretch"):
			return 88;
		
		case joaat("velum"):
			return 80;
		
		case joaat("voltic"):
			return 77;
		
		case joaat("zion2"):
			return 93;
		
		case joaat("elegy2"):
			return 95;
		
		case joaat("khamelion"):
			return 96;
		
		case joaat("hotknife"):
			return 97;
		
		case joaat("carbonrs"):
			return 98;
		
		case joaat("bodhi2"):
			return 103;
		
		case joaat("dune"):
			return 104;
		
		case joaat("rebel"):
			return 105;
		
		case joaat("sadler"):
			return 106;
		
		case joaat("sanchez2"):
			return 107;
		
		case joaat("sandking2"):
			return 108;
		
		case joaat("asea"):
			return 128;
		
		case joaat("asterope"):
			return 129;
		
		case joaat("bobcatxl"):
			return 130;
		
		case joaat("cavalcade2"):
			return 131;
		
		case joaat("granger"):
			return 132;
		
		case joaat("ingot"):
			return 133;
		
		case joaat("intruder"):
			return 134;
		
		case joaat("minivan"):
			return 135;
		
		case joaat("premier"):
			return 136;
		
		case joaat("radi"):
			return 137;
		
		case joaat("rancherxl"):
			return 138;
		
		case joaat("ratloader"):
			return 139;
		
		case joaat("stanier"):
			return 140;
		
		case joaat("stratum"):
			return 141;
		
		case joaat("washington"):
			return 142;
		
		case joaat("dominator"):
			return 122;
		
		case joaat("f620"):
			return 123;
		
		case joaat("fusilade"):
			return 124;
		
		case joaat("penumbra"):
			return 125;
		
		case joaat("sentinel"):
			return 126;
		
		case joaat("sentinel2"):
			return 127;
		
		case joaat("picador"):
			return 150;
		
		case joaat("regina"):
			return 151;
		
		case joaat("surfer"):
			return 152;
		
		case joaat("youga"):
			return 153;
		
		case joaat("blazer3"):
			return 154;
		
		case joaat("rebel2"):
			return 155;
		
		case joaat("primo"):
			return 156;
		
		case joaat("buffalo"):
			return 157;
		
		case joaat("buffalo2"):
			return 158;
		
		case joaat("tailgater"):
			return 159;
		
		default:
	}
	if (iParam0 == joaat("bifta"))
	{
		return 99;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 100;
	}
	else if (iParam0 == joaat("paradise"))
	{
		return 101;
	}
	else if (iParam0 == joaat("speeder"))
	{
		return 102;
	}
	else if (iParam0 == joaat("ROOSEVELT") || iParam0 == joaat("btype"))
	{
		return 109;
	}
	else if (iParam0 == joaat("jester"))
	{
		return 111;
	}
	else if (iParam0 == joaat("massacro"))
	{
		return 114;
	}
	else if (iParam0 == joaat("turismor"))
	{
		return 112;
	}
	else if (iParam0 == joaat("zentorno"))
	{
		return 115;
	}
	else if (iParam0 == joaat("huntley"))
	{
		return 116;
	}
	else if (iParam0 == joaat("alpha"))
	{
		return 110;
	}
	else if (iParam0 == joaat("vestra"))
	{
		return 113;
	}
	else if (iParam0 == joaat("coquette"))
	{
		return 117;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 118;
	}
	else if (iParam0 == joaat("stinger"))
	{
		return 119;
	}
	else if (iParam0 == joaat("voltic"))
	{
		return 120;
	}
	else if (iParam0 == joaat("thrust"))
	{
		return 121;
	}
	else if (iParam0 == joaat("blade"))
	{
		return 143;
	}
	else if (iParam0 == joaat("warrener"))
	{
		return 144;
	}
	else if (iParam0 == joaat("glendale"))
	{
		return 145;
	}
	else if (iParam0 == joaat("rhapsody"))
	{
		return 146;
	}
	else if (iParam0 == joaat("panto"))
	{
		return 147;
	}
	else if (iParam0 == joaat("dubsta3"))
	{
		return 148;
	}
	else if (iParam0 == joaat("pigalle"))
	{
		return 149;
	}
	else if (iParam0 == joaat("monster"))
	{
		return 160;
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return 161;
	}
	else if (iParam0 == joaat("miljet"))
	{
		return 162;
	}
	else if (iParam0 == joaat("besra"))
	{
		return 163;
	}
	else if (iParam0 == joaat("swift"))
	{
		return 164;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 165;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 166;
	}
	else if (iParam0 == joaat("innovation"))
	{
		return 167;
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		return 168;
	}
	else if (iParam0 == joaat("furoregt"))
	{
		return 169;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 170;
	}
	else if (iParam0 == joaat("valkyrie"))
	{
		return 187;
	}
	else if (iParam0 == joaat("hydra"))
	{
		return 177;
	}
	else if (iParam0 == joaat("savage"))
	{
		return 185;
	}
	else if (iParam0 == joaat("enduro"))
	{
		return 174;
	}
	else if (iParam0 == joaat("boxville4"))
	{
		return 171;
	}
	else if (iParam0 == joaat("casco"))
	{
		return 172;
	}
	else if (iParam0 == joaat("dinghy3"))
	{
		return 173;
	}
	else if (iParam0 == joaat("gburrito2"))
	{
		return 175;
	}
	else if (iParam0 == joaat("guardian"))
	{
		return 176;
	}
	else if (iParam0 == joaat("insurgent"))
	{
		return 178;
	}
	else if (iParam0 == joaat("mule3"))
	{
		return 183;
	}
	else if (iParam0 == joaat("insurgent2"))
	{
		return 179;
	}
	else if (iParam0 == joaat("lectro"))
	{
		return 182;
	}
	else if (iParam0 == joaat("pbus"))
	{
		return 184;
	}
	else if (iParam0 == joaat("technical"))
	{
		return 186;
	}
	else if (iParam0 == joaat("velum2"))
	{
		return 188;
	}
	else if (iParam0 == joaat("gresley"))
	{
		return 189;
	}
	else if (iParam0 == joaat("jackal"))
	{
		return 190;
	}
	else if (iParam0 == joaat("kuruma"))
	{
		return 180;
	}
	else if (iParam0 == joaat("kuruma2"))
	{
		return 181;
	}
	else if (iParam0 == joaat("landstalker"))
	{
		return 191;
	}
	else if (iParam0 == joaat("mesa3"))
	{
		return 192;
	}
	else if (iParam0 == joaat("nemesis"))
	{
		return 193;
	}
	else if (iParam0 == joaat("oracle"))
	{
		return 194;
	}
	else if (iParam0 == joaat("rumpo"))
	{
		return 195;
	}
	else if (iParam0 == joaat("schafter2"))
	{
		return 196;
	}
	else if (iParam0 == joaat("seminole"))
	{
		return 197;
	}
	else if (iParam0 == joaat("surge"))
	{
		return 198;
	}
	else if (iParam0 == joaat("dodo"))
	{
		return 199;
	}
	else if (iParam0 == joaat("marshall"))
	{
		return 200;
	}
	else if (iParam0 == joaat("submersible2"))
	{
		return 201;
	}
	else if (iParam0 == joaat("blista2"))
	{
		return 202;
	}
	else if (iParam0 == joaat("stalion"))
	{
		return 203;
	}
	else if (iParam0 == joaat("dukes"))
	{
		return 204;
	}
	else if (iParam0 == joaat("dukes2"))
	{
		return 205;
	}
	else if (iParam0 == joaat("stalion2"))
	{
		return 206;
	}
	else if (iParam0 == joaat("dominator2"))
	{
		return 207;
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		return 208;
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		return 209;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("ratloader2"))
	{
		return 211;
	}
	else if (iParam0 == joaat("jester2"))
	{
		return 212;
	}
	else if (iParam0 == joaat("massacro2"))
	{
		return 213;
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		return 214;
	}
	else if (iParam0 == joaat("luxor2"))
	{
		return 215;
	}
	else if (iParam0 == joaat("osiris"))
	{
		return 216;
	}
	else if (iParam0 == joaat("swift2"))
	{
		return 217;
	}
	else if (iParam0 == joaat("virgo"))
	{
		return 218;
	}
	else if (iParam0 == joaat("windsor"))
	{
		return 219;
	}
	else if (iParam0 == joaat("brawler"))
	{
		return 220;
	}
	else if (iParam0 == joaat("chino"))
	{
		return 221;
	}
	else if (iParam0 == joaat("coquette3"))
	{
		return 222;
	}
	else if (iParam0 == joaat("t20"))
	{
		return 223;
	}
	else if (iParam0 == joaat("toro"))
	{
		return 224;
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return 225;
	}
	else if (iParam0 == joaat("primo"))
	{
		return 229;
	}
	else if (iParam0 == joaat("moonbeam"))
	{
		return 228;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 227;
	}
	else if (iParam0 == joaat("buccaneer"))
	{
		return 226;
	}
	else if (iParam0 == joaat("voodoo2"))
	{
		return 230;
	}
	else if (iParam0 == joaat("btype2"))
	{
		return 231;
	}
	else if (iParam0 == joaat("lurcher"))
	{
		return 232;
	}
	else if (iParam0 == joaat("minivan"))
	{
		return 135;
	}
	else if (iParam0 == joaat("virgo3"))
	{
		return 251;
	}
	else if (iParam0 == joaat("tornado"))
	{
		return 250;
	}
	else if (iParam0 == joaat("sabregt"))
	{
		return 249;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 252;
	}
	else if (iParam0 == joaat("baller3") || iParam0 == joaat("baller5"))
	{
		return 233;
	}
	else if (iParam0 == joaat("baller4") || iParam0 == joaat("baller6"))
	{
		return 234;
	}
	else if (iParam0 == joaat("cog55"))
	{
		return 235;
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		return 236;
	}
	else if (iParam0 == joaat("limo2"))
	{
		return 237;
	}
	else if (iParam0 == joaat("mamba"))
	{
		return 238;
	}
	else if (iParam0 == joaat("nightshade"))
	{
		return 239;
	}
	else if (iParam0 == joaat("schafter3") || iParam0 == joaat("schafter5"))
	{
		return 240;
	}
	else if (iParam0 == joaat("schafter4") || iParam0 == joaat("schafter6"))
	{
		return 241;
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		return 242;
	}
	else if (iParam0 == joaat("supervolito"))
	{
		return 243;
	}
	else if (iParam0 == joaat("supervolito2"))
	{
		return 244;
	}
	else if (iParam0 == Global_75446)
	{
		return 245;
	}
	else if (iParam0 == joaat("tampa"))
	{
		return 246;
	}
	else if (iParam0 == joaat("sultan"))
	{
		return 247;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 49;
	}
	else if (iParam0 == joaat("ROOSEVELT2") || iParam0 == joaat("btype3"))
	{
		return 248;
	}
	else if (iParam0 == joaat("volatus"))
	{
		return 253;
	}
	else if (iParam0 == joaat("cargobob2"))
	{
		return 254;
	}
	else if (iParam0 == joaat("rumpo3"))
	{
		return 255;
	}
	else if (iParam0 == joaat("brickade"))
	{
		return 256;
	}
	else if (iParam0 == joaat("nimbus"))
	{
		return 257;
	}
	else if (iParam0 == joaat("windsor2"))
	{
		return 259;
	}
	else if (iParam0 == joaat("prototipo"))
	{
		return 260;
	}
	else if (iParam0 == joaat("fmj"))
	{
		return 261;
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		return 262;
	}
	else if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		return 263;
	}
	else if (iParam0 == joaat("seven70"))
	{
		return 264;
	}
	else if (iParam0 == joaat("pfister811"))
	{
		return 265;
	}
	else if (iParam0 == joaat("reaper"))
	{
		return 266;
	}
	else if (iParam0 == joaat("le7b"))
	{
		return 267;
	}
	else if (iParam0 == joaat("omnis"))
	{
		return 268;
	}
	else if (iParam0 == joaat("tropos"))
	{
		return 269;
	}
	else if (iParam0 == joaat("brioso"))
	{
		return 270;
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		return 271;
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		return 272;
	}
	else if (iParam0 == joaat("contender"))
	{
		return 273;
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		return 274;
	}
	else if (iParam0 == joaat("bf400"))
	{
		return 275;
	}
	else if (iParam0 == joaat("tyrus"))
	{
		return 279;
	}
	else if (iParam0 == joaat("lynx"))
	{
		return 280;
	}
	else if (iParam0 == joaat("sheava"))
	{
		return 281;
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		return 276;
	}
	else if (iParam0 == joaat("tampa2"))
	{
		return 277;
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		return 278;
	}
	else if (iParam0 == joaat("bagger"))
	{
		return 282;
	}
	else if (iParam0 == joaat("esskey"))
	{
		return 283;
	}
	else if (iParam0 == joaat("nightblade"))
	{
		return 284;
	}
	else if (iParam0 == joaat("defiler"))
	{
		return 285;
	}
	else if (iParam0 == joaat("avarus"))
	{
		return 286;
	}
	else if (iParam0 == joaat("zombiea"))
	{
		return 287;
	}
	else if (iParam0 == joaat("zombieb"))
	{
		return 288;
	}
	else if (iParam0 == joaat("chimera"))
	{
		return 289;
	}
	else if (iParam0 == joaat("daemon2"))
	{
		return 290;
	}
	else if (iParam0 == joaat("ratbike"))
	{
		return 291;
	}
	else if (iParam0 == joaat("shotaro"))
	{
		return 292;
	}
	else if (iParam0 == joaat("raptor"))
	{
		return 293;
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		return 294;
	}
	else if (iParam0 == joaat("blazer4"))
	{
		return 296;
	}
	else if (iParam0 == joaat("sanctus"))
	{
		return 297;
	}
	else if (iParam0 == joaat("vortex"))
	{
		return 295;
	}
	else if (iParam0 == joaat("manchez"))
	{
		return 298;
	}
	else if (iParam0 == joaat("tornado6"))
	{
		return 299;
	}
	else if (iParam0 == joaat("youga2"))
	{
		return 300;
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		return 301;
	}
	else if (iParam0 == joaat("faggio3"))
	{
		return 302;
	}
	else if (iParam0 == joaat("faggio"))
	{
		return 303;
	}
	else if (iParam0 == joaat("dune5"))
	{
		return 304;
	}
	else if (iParam0 == joaat("phantom2"))
	{
		return 305;
	}
	else if (iParam0 == joaat("technical2"))
	{
		return 306;
	}
	else if (iParam0 == joaat("blazer5"))
	{
		return 307;
	}
	else if (iParam0 == joaat("boxville5"))
	{
		return 308;
	}
	else if (iParam0 == joaat("wastelander"))
	{
		return 309;
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		return 310;
	}
	else if (iParam0 == joaat("voltic2"))
	{
		return 311;
	}
	else if (iParam0 == joaat("penetrator"))
	{
		return 312;
	}
	else if (iParam0 == joaat("tempesta"))
	{
		return 313;
	}
	else if (iParam0 == joaat("italigtb"))
	{
		return 314;
	}
	else if (iParam0 == joaat("nero"))
	{
		return 315;
	}
	else if (iParam0 == joaat("diablous"))
	{
		return 316;
	}
	else if (iParam0 == joaat("fcr"))
	{
		return 317;
	}
	else if (iParam0 == joaat("specter"))
	{
		return 318;
	}
	else if (iParam0 == joaat("gp1"))
	{
		return 319;
	}
	else if (iParam0 == joaat("infernus2"))
	{
		return 320;
	}
	else if (iParam0 == joaat("ruston"))
	{
		return 321;
	}
	else if (iParam0 == joaat("turismo2"))
	{
		return 322;
	}
	else if (iParam0 == Global_75446)
	{
		return 245;
	}
	else if (iParam0 == Global_75448)
	{
		return 324;
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		return 325;
	}
	else if (iParam0 == joaat("torero"))
	{
		return 326;
	}
	else if (iParam0 == joaat("vagner"))
	{
		return 327;
	}
	else if (iParam0 == joaat("xa21"))
	{
		return 328;
	}
	else if (iParam0 == joaat("apc"))
	{
		return 329;
	}
	else if (iParam0 == joaat("dune3"))
	{
		return 330;
	}
	else if (iParam0 == joaat("halftrack"))
	{
		return 331;
	}
	else if (iParam0 == joaat("oppressor"))
	{
		return 332;
	}
	else if (iParam0 == joaat("tampa3"))
	{
		return 333;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 334;
	}
	else if (iParam0 == joaat("ardent"))
	{
		return 335;
	}
	else if (iParam0 == joaat("nightshark"))
	{
		return 336;
	}
	else if (iParam0 == joaat("lazer"))
	{
		return 337;
	}
	else if (iParam0 == joaat("microlight"))
	{
		return 338;
	}
	else if (iParam0 == joaat("mogul"))
	{
		return 339;
	}
	else if (iParam0 == joaat("rogue"))
	{
		return 340;
	}
	else if (iParam0 == joaat("starling"))
	{
		return 341;
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		return 342;
	}
	else if (iParam0 == joaat("tula"))
	{
		return 343;
	}
	else if (iParam0 == joaat("pyro"))
	{
		return 344;
	}
	else if (iParam0 == joaat("molotok"))
	{
		return 345;
	}
	else if (iParam0 == joaat("nokota"))
	{
		return 346;
	}
	else if (iParam0 == joaat("bombushka"))
	{
		return 347;
	}
	else if (iParam0 == joaat("hunter"))
	{
		return 348;
	}
	else if (iParam0 == joaat("havok"))
	{
		return 349;
	}
	else if (iParam0 == joaat("howard"))
	{
		return 350;
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		return 351;
	}
	else if (iParam0 == joaat("cyclone"))
	{
		return 352;
	}
	else if (iParam0 == joaat("visione"))
	{
		return 353;
	}
	else if (iParam0 == joaat("retinue"))
	{
		return 354;
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		return 355;
	}
	else if (iParam0 == joaat("vigilante"))
	{
		return 356;
	}
	else if (iParam0 == joaat("deluxo"))
	{
		return 358;
	}
	else if (iParam0 == joaat("stromberg"))
	{
		return 359;
	}
	else if (iParam0 == joaat("riot2"))
	{
		return 360;
	}
	else if (iParam0 == joaat("chernobog"))
	{
		return 361;
	}
	else if (iParam0 == joaat("khanjali"))
	{
		return 362;
	}
	else if (iParam0 == joaat("akula"))
	{
		return 363;
	}
	else if (iParam0 == joaat("thruster"))
	{
		return 364;
	}
	else if (iParam0 == joaat("barrage"))
	{
		return 365;
	}
	else if (iParam0 == joaat("volatol"))
	{
		return 366;
	}
	else if (iParam0 == joaat("comet4"))
	{
		return 367;
	}
	else if (iParam0 == joaat("neon"))
	{
		return 368;
	}
	else if (iParam0 == joaat("streiter"))
	{
		return 369;
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		return 370;
	}
	else if (iParam0 == joaat("yosemite"))
	{
		return 371;
	}
	else if (iParam0 == joaat("sc1"))
	{
		return 372;
	}
	else if (iParam0 == joaat("autarch"))
	{
		return 373;
	}
	else if (iParam0 == joaat("gt500"))
	{
		return 374;
	}
	else if (iParam0 == joaat("hustler"))
	{
		return 375;
	}
	else if (iParam0 == joaat("revolter"))
	{
		return 376;
	}
	else if (iParam0 == joaat("pariah"))
	{
		return 377;
	}
	else if (iParam0 == joaat("raiden"))
	{
		return 378;
	}
	else if (iParam0 == joaat("savestra"))
	{
		return 379;
	}
	else if (iParam0 == joaat("riata"))
	{
		return 380;
	}
	else if (iParam0 == joaat("hermes"))
	{
		return 381;
	}
	else if (iParam0 == joaat("comet5"))
	{
		return 382;
	}
	else if (iParam0 == joaat("z190"))
	{
		return 383;
	}
	else if (iParam0 == joaat("viseris"))
	{
		return 384;
	}
	else if (iParam0 == joaat("kamacho"))
	{
		return 385;
	}
	else if (iParam0 == joaat("gb200"))
	{
		return 386;
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		return 387;
	}
	else if (iParam0 == joaat("ellie"))
	{
		return 388;
	}
	else if (iParam0 == joaat("issi3"))
	{
		return 389;
	}
	else if (iParam0 == joaat("michelli"))
	{
		return 390;
	}
	else if (iParam0 == joaat("flashgt"))
	{
		return 391;
	}
	else if (iParam0 == joaat("hotring"))
	{
		return 392;
	}
	else if (iParam0 == joaat("tezeract"))
	{
		return 393;
	}
	else if (iParam0 == joaat("tyrant"))
	{
		return 394;
	}
	else if (iParam0 == joaat("dominator3"))
	{
		return 395;
	}
	else if (iParam0 == joaat("taipan"))
	{
		return 396;
	}
	else if (iParam0 == joaat("entity2"))
	{
		return 397;
	}
	else if (iParam0 == joaat("jester3"))
	{
		return 398;
	}
	else if (iParam0 == joaat("cheburek"))
	{
		return 399;
	}
	else if (iParam0 == joaat("caracara"))
	{
		return 400;
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		return 401;
	}
	else if (iParam0 == joaat("mule4"))
	{
		return 403;
	}
	else if (iParam0 == joaat("pounder2"))
	{
		return 404;
	}
	else if (iParam0 == joaat("swinger"))
	{
		return 405;
	}
	else if (iParam0 == joaat("menacer"))
	{
		return 406;
	}
	else if (iParam0 == joaat("scramjet"))
	{
		return 407;
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		return 408;
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		return 409;
	}
	else if (iParam0 == joaat("patriot2"))
	{
		return 410;
	}
	else if (iParam0 == joaat("stafford"))
	{
		return 411;
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		return 412;
	}
	else if (iParam0 == joaat("futo"))
	{
		return 415;
	}
	else if (iParam0 == joaat("ruiner"))
	{
		return 416;
	}
	else if (iParam0 == joaat("romero"))
	{
		return 417;
	}
	else if (iParam0 == joaat("prairie"))
	{
		return 418;
	}
	else if (iParam0 == joaat("baller"))
	{
		return 419;
	}
	else if (iParam0 == joaat("serrano"))
	{
		return 420;
	}
	else if (iParam0 == joaat("bjxl"))
	{
		return 421;
	}
	else if (iParam0 == joaat("habanero"))
	{
		return 422;
	}
	else if (iParam0 == joaat("fq2"))
	{
		return 423;
	}
	else if (iParam0 == joaat("patriot"))
	{
		return 424;
	}
	else if (iParam0 == joaat("blimp3"))
	{
		return 413;
	}
	else if (iParam0 == joaat("pbus2"))
	{
		return 414;
	}
	else if (iParam0 == joaat("cerberus"))
	{
		return 425;
	}
	else if (iParam0 == joaat("cerberus2"))
	{
		return 426;
	}
	else if (iParam0 == joaat("cerberus3"))
	{
		return 427;
	}
	else if (iParam0 == joaat("brutus"))
	{
		return 428;
	}
	else if (iParam0 == joaat("brutus2"))
	{
		return 429;
	}
	else if (iParam0 == joaat("brutus3"))
	{
		return 430;
	}
	else if (iParam0 == joaat("scarab"))
	{
		return 431;
	}
	else if (iParam0 == joaat("scarab2"))
	{
		return 432;
	}
	else if (iParam0 == joaat("scarab3"))
	{
		return 433;
	}
	else if (iParam0 == joaat("imperator"))
	{
		return 434;
	}
	else if (iParam0 == joaat("imperator2"))
	{
		return 435;
	}
	else if (iParam0 == joaat("imperator3"))
	{
		return 436;
	}
	else if (iParam0 == joaat("zr380"))
	{
		return 437;
	}
	else if (iParam0 == joaat("zr3802"))
	{
		return 438;
	}
	else if (iParam0 == joaat("zr3803"))
	{
		return 439;
	}
	else if (iParam0 == joaat("impaler"))
	{
		return 440;
	}
	else if (iParam0 == joaat("taxi"))
	{
		return 450;
	}
	else if (iParam0 == joaat("bulldozer"))
	{
		return 451;
	}
	else if (iParam0 == joaat("speedo2"))
	{
		return 452;
	}
	else if (iParam0 == joaat("trash2"))
	{
		return 453;
	}
	else if (iParam0 == joaat("barracks2"))
	{
		return 454;
	}
	else if (iParam0 == joaat("mixer"))
	{
		return 455;
	}
	else if (iParam0 == joaat("dune2"))
	{
		return 456;
	}
	else if (iParam0 == joaat("tractor"))
	{
		return 457;
	}
	else if (iParam0 == joaat("blista3"))
	{
		return 458;
	}
	else if (iParam0 == joaat("vamos"))
	{
		return 441;
	}
	else if (iParam0 == joaat("tulip"))
	{
		return 442;
	}
	else if (iParam0 == joaat("deveste"))
	{
		return 443;
	}
	else if (iParam0 == joaat("schlagen"))
	{
		return 444;
	}
	else if (iParam0 == joaat("toros"))
	{
		return 445;
	}
	else if (iParam0 == joaat("deviant"))
	{
		return 446;
	}
	else if (iParam0 == joaat("clique"))
	{
		return 447;
	}
	else if (iParam0 == joaat("italigto"))
	{
		return 448;
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		return 449;
	}
	else if (iParam0 == joaat("thrax"))
	{
		return 459;
	}
	else if (iParam0 == joaat("drafter"))
	{
		return 460;
	}
	else if (iParam0 == joaat("locust"))
	{
		return 461;
	}
	else if (iParam0 == joaat("novak"))
	{
		return 462;
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		return 463;
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		return 464;
	}
	else if (iParam0 == joaat("issi7"))
	{
		return 465;
	}
	else if (iParam0 == joaat("zion3"))
	{
		return 466;
	}
	else if (iParam0 == joaat("nebula"))
	{
		return 467;
	}
	else if (iParam0 == joaat("hellion"))
	{
		return 468;
	}
	else if (iParam0 == joaat("dynasty"))
	{
		return 469;
	}
	else if (iParam0 == joaat("rrocket"))
	{
		return 470;
	}
	else if (iParam0 == joaat("peyote2"))
	{
		return 471;
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		return 472;
	}
	else if (iParam0 == joaat("caracara2"))
	{
		return 473;
	}
	else if (iParam0 == joaat("jugular"))
	{
		return 474;
	}
	else if (iParam0 == joaat("s80"))
	{
		return 475;
	}
	else if (iParam0 == joaat("krieger"))
	{
		return 476;
	}
	else if (iParam0 == joaat("emerus"))
	{
		return 477;
	}
	else if (iParam0 == joaat("neo"))
	{
		return 478;
	}
	else if (iParam0 == joaat("paragon"))
	{
		return 479;
	}
	else if (iParam0 == joaat("firetruk"))
	{
		return 480;
	}
	else if (iParam0 == joaat("burrito2"))
	{
		return 481;
	}
	else if (iParam0 == joaat("boxville"))
	{
		return 482;
	}
	else if (iParam0 == joaat("stockade"))
	{
		return 483;
	}
	else if (iParam0 == joaat("lguard"))
	{
		return 484;
	}
	else if (iParam0 == joaat("blazer2"))
	{
		return 485;
	}
	else if (iParam0 == joaat("jb7002"))
	{
		return 488;
	}
	else if (iParam0 == joaat("zhaba"))
	{
		return 486;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 487;
	}
	else if (iParam0 == joaat("stryder"))
	{
		return 489;
	}
	else if (iParam0 == joaat("vstr"))
	{
		return 490;
	}
	else if (iParam0 == joaat("formula"))
	{
		return 491;
	}
	else if (iParam0 == joaat("imorgon"))
	{
		return 492;
	}
	else if (iParam0 == joaat("formula2"))
	{
		return 493;
	}
	else if (iParam0 == joaat("furia"))
	{
		return 494;
	}
	else if (iParam0 == joaat("rebla"))
	{
		return 495;
	}
	else if (iParam0 == joaat("vagrant"))
	{
		return 496;
	}
	else if (iParam0 == joaat("retinue2"))
	{
		return 497;
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		return 498;
	}
	else if (iParam0 == joaat("komoda"))
	{
		return 499;
	}
	else if (iParam0 == joaat("sultan2"))
	{
		return 500;
	}
	else if (iParam0 == joaat("sugoi"))
	{
		return 501;
	}
	else if (iParam0 == joaat("everon"))
	{
		return 502;
	}
	else if (iParam0 == joaat("asbo"))
	{
		return 503;
	}
	else if (iParam0 == joaat("kanjo"))
	{
		return 504;
	}
	else if (iParam0 == joaat("outlaw"))
	{
		return 505;
	}
	else if (iParam0 == joaat("club"))
	{
		return 506;
	}
	else if (iParam0 == joaat("dukes3"))
	{
		return 507;
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		return 508;
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		return 509;
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		return 510;
	}
	else if (iParam0 == joaat("seminole2"))
	{
		return 511;
	}
	else if (iParam0 == joaat("tigon"))
	{
		return 512;
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		return 513;
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		return 514;
	}
	else if (iParam0 == joaat("coquette4"))
	{
		return 515;
	}
	else if (iParam0 == joaat("peyote"))
	{
		return 517;
	}
	else if (iParam0 == joaat("manana"))
	{
		return 516;
	}
	else if (iParam0 == func_30())
	{
		return 518;
	}
	else if (iParam0 == joaat("italirsx"))
	{
		return 519;
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		return 520;
	}
	else if (iParam0 == joaat("brioso2"))
	{
		return 521;
	}
	else if (iParam0 == joaat("weevil"))
	{
		return 522;
	}
	else if (iParam0 == joaat("alkonost"))
	{
		return 523;
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		return 524;
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		return 525;
	}
	else if (iParam0 == joaat("manchez2"))
	{
		return 526;
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		return 527;
	}
	else if (iParam0 == joaat("squaddie"))
	{
		return 528;
	}
	else if (iParam0 == joaat("toreador"))
	{
		return 529;
	}
	else if (iParam0 == joaat("verus"))
	{
		return 530;
	}
	else if (iParam0 == joaat("vetir"))
	{
		return 531;
	}
	else if (iParam0 == joaat("winky"))
	{
		return 532;
	}
	else if (iParam0 == joaat("longfin"))
	{
		return 533;
	}
	else if (iParam0 == joaat("veto"))
	{
		return 534;
	}
	else if (iParam0 == joaat("veto2"))
	{
		return 535;
	}
	else if (iParam0 == joaat("calico"))
	{
		return 536;
	}
	else if (iParam0 == joaat("comet6"))
	{
		return 537;
	}
	else if (iParam0 == joaat("cypher"))
	{
		return 538;
	}
	else if (iParam0 == joaat("dominator7"))
	{
		return 539;
	}
	else if (iParam0 == joaat("jester4"))
	{
		return 540;
	}
	else if (iParam0 == joaat("remus"))
	{
		return 541;
	}
	else if (iParam0 == joaat("vectre"))
	{
		return 542;
	}
	else if (iParam0 == joaat("zr350"))
	{
		return 543;
	}
	else if (iParam0 == joaat("warrener2"))
	{
		return 544;
	}
	else if (iParam0 == joaat("rt3000"))
	{
		return 545;
	}
	else if (iParam0 == joaat("futo2"))
	{
		return 546;
	}
	else if (iParam0 == joaat("sultan3"))
	{
		return 547;
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		return 548;
	}
	else if (iParam0 == joaat("dominator8"))
	{
		return 549;
	}
	else if (iParam0 == joaat("euros"))
	{
		return 550;
	}
	else if (iParam0 == joaat("growler"))
	{
		return 551;
	}
	else if (iParam0 == joaat("previon"))
	{
		return 552;
	}
	else if (iParam0 == joaat("comet7"))
	{
		return 554;
	}
	else if (iParam0 == joaat("shinobi"))
	{
		return 555;
	}
	else if (iParam0 == joaat("reever"))
	{
		return 556;
	}
	else if (iParam0 == joaat("baller7"))
	{
		return 557;
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		return 558;
	}
	else if (iParam0 == joaat("jubilee"))
	{
		return 559;
	}
	else if (iParam0 == joaat("astron"))
	{
		return 560;
	}
	else if (iParam0 == joaat("deity"))
	{
		return 561;
	}
	else if (iParam0 == joaat("zeno"))
	{
		return 562;
	}
	else if (iParam0 == joaat("champion"))
	{
		return 563;
	}
	else if (iParam0 == joaat("ignus"))
	{
		return 564;
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		return 565;
	}
	else if (iParam0 == joaat("granger2"))
	{
		return 566;
	}
	else if (iParam0 == joaat("iwagen"))
	{
		return 567;
	}
	else if (iParam0 == joaat("patriot3"))
	{
		return 568;
	}
	else if (iParam0 == joaat("TENF"))
	{
		return 569;
	}
	return -1;
}

int func_30()//Position - 0x54CF
{
	return joaat("kosatka");
}

int func_31(int iParam0)//Position - 0x54DC
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO3"))
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CORSITA"))
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DRAUGUR"))
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GREENWOOD"))
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KANJOSJ"))
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LM87"))
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POSTLUDE"))
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RHINEHART"))
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SM722"))
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF"))
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TENF2"))
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO2"))
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGERO2"))
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WEEVIL2"))
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER4"))
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL4"))
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONADA"))
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNISEGT"))
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

char* func_32(int iParam0, bool bParam1)//Position - 0x87B0
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0))
	{
		return func_34(iParam0, bParam1);
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0))
	{
		return func_33(iParam0, bParam1);
	}
	switch (iParam0)
	{
		case joaat("khamelion"):
			return "HIJAK";
			break;
		
		case joaat("issi2"):
		case joaat("issi7"):
			return "WEENY";
			break;
		
		case joaat("elegy2"):
		case joaat("hellion"):
			return "ANNIS";
			break;
		
		case joaat("romero"):
			return "CHARIOT";
			break;
		
		case joaat("baller"):
		case joaat("baller2"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
			if (bParam1)
			{
				return "GALLIVAN";
			}
			else
			{
				return "GALIVANTER";
			}
			break;
		
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("dune"):
		case joaat("bfinjection"):
			return "BF";
			break;
		
		case joaat("feltzer2"):
		case joaat("dubsta"):
		case joaat("surano"):
		case joaat("schwarzer"):
		case joaat("schafter2"):
		case joaat("serrano"):
		case joaat("dubsta2"):
		case joaat("feltzer3"):
			if (bParam1)
			{
				return "BENEFAC";
			}
			else
			{
				return "BENEFACTOR";
			}
			break;
		
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
		case joaat("zion3"):
		case joaat("oracle"):
		case joaat("oracle2"):
			if (bParam1)
			{
				return "UBERMACH";
			}
			else
			{
				return "UBERMACHT";
			}
			break;
		
		case joaat("ztype"):
		case joaat("adder"):
		case joaat("thrax"):
			return "TRUFFADE";
			break;
		
		case joaat("jb700"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("exemplar"):
		case joaat("massacro"):
		case joaat("massacro2"):
			if (bParam1)
			{
				return "DEWBAUCH";
			}
			else
			{
				return "DEWBAUCHEE";
			}
			break;
		
		case joaat("tailgater"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rocoto"):
		case joaat("drafter"):
			return "OBEY";
			break;
		
		case joaat("picador"):
		case joaat("surge"):
		case joaat("fugitive"):
		case joaat("marshall"):
			return "CHEVAL";
			break;
		
		case joaat("mower"):
			if (bParam1)
			{
				return "JACKSHP";
			}
			else
			{
				return "JACKSHEEPE";
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
		case joaat("burrito"):
		case joaat("burrito2"):
		case joaat("premier"):
		case joaat("voodoo2"):
		case joaat("sabregt"):
		case joaat("rancherxl"):
		case joaat("vigero"):
		case joaat("asea"):
		case joaat("asea2"):
		case joaat("granger"):
		case joaat("pranger"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("gburrito"):
		case joaat("gburrito2"):
		case joaat("stalion"):
			return "DECLASSE";
			break;
		
		case joaat("buccaneer"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("emperor"):
		case joaat("emperor2"):
		case joaat("manana"):
		case joaat("primo"):
		case joaat("washington"):
		case joaat("virgo"):
			return "ALBANY";
			break;
		
		case joaat("banshee"):
		case joaat("bison"):
		case joaat("gresley"):
		case joaat("youga"):
		case joaat("gauntlet"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
		case joaat("ratloader"):
		case joaat("dloader"):
		case joaat("ratloader2"):
		case joaat("rumpo"):
		case joaat("banshee2"):
		case joaat("gauntlet3"):
			return "BRAVADO";
			break;
		
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("cheetah"):
		case joaat("carbonizzare"):
			if (bParam1)
			{
				return "GROTTI";
			}
			else
			{
				return "Grotti_2";
			}
			break;
		
		case joaat("coquette"):
		case joaat("coquette3"):
			if (bParam1)
			{
				return "INVERTO";
			}
			else
			{
				return "Invetero";
			}
			break;
		
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("dominator"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("police"):
		case joaat("police3"):
		case joaat("policet"):
		case joaat("benson"):
		case joaat("bullet"):
		case joaat("minivan"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("peyote"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("bobcatxl"):
		case joaat("stanier"):
		case joaat("hotknife"):
		case joaat("slamvan"):
		case joaat("guardian"):
		case joaat("chino"):
		case joaat("caracara2"):
			return "VAPID";
			break;
		
		case joaat("tiptruck"):
		case joaat("taco"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("camper"):
		case joaat("riot"):
		case joaat("tourbus"):
		case joaat("ambulance"):
		case joaat("stockade"):
		case joaat("boxville"):
		case joaat("pony"):
			return "BRUTE";
			break;
		
		case joaat("prairie"):
			return "BOLLOKAN";
			break;
		
		case joaat("jackal"):
		case joaat("f620"):
		case joaat("locust"):
			return "OCELOT";
			break;
		
		case joaat("mesa"):
		case joaat("mesa3"):
		case joaat("bodhi2"):
		case joaat("seminole"):
		case joaat("crusader"):
			return "CANIS";
			break;
		
		case joaat("entityxf"):
			return "OVERFLOD";
			break;
		
		case joaat("monroe"):
		case joaat("infernus"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("vacca"):
		case joaat("ruffian"):
		case joaat("faggio2"):
		case joaat("osiris"):
		case joaat("zorrusso"):
			return "PEGASSI";
			break;
		
		case joaat("phoenix"):
		case joaat("ruiner"):
		case joaat("dukes"):
		case joaat("dukes2"):
			return "IMPONTE";
			break;
		
		case joaat("bjxl"):
		case joaat("rebel"):
		case joaat("rebel2"):
		case joaat("asterope"):
		case joaat("intruder"):
		case joaat("futo"):
		case joaat("sultan"):
		case joaat("dilettante"):
		case joaat("dilettante2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("sultanrs"):
			return "KARIN";
			break;
		
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("mule"):
			return "MAIBATSU";
			break;
		
		case joaat("blista"):
		case joaat("blista2"):
		case joaat("blista3"):
		case joaat("double"):
		case joaat("jester"):
		case joaat("jester2"):
		case joaat("enduro"):
		case joaat("vindicator"):
		case joaat("akuma"):
			return "DINKA";
			break;
		
		case joaat("fq2"):
			return "FATHOM";
			break;
		
		case joaat("voltic"):
		case joaat("brawler"):
			return "COIL";
			break;
	}
	switch (iParam0)
	{
		case joaat("felon"):
		case joaat("felon2"):
		case joaat("casco"):
		case joaat("novak"):
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
		
		case joaat("comet2"):
			return "PFISTER";
			break;
		
		case joaat("fusilade"):
			return "SCHYSTER";
			break;
		
		case joaat("stretch"):
		case joaat("regina"):
		case joaat("landstalker"):
			if (bParam1)
			{
				return "DUNDREAR";
			}
			else
			{
				return "DUNDREARY";
			}
			break;
		
		case joaat("handler"):
		case joaat("bulldozer"):
		case joaat("docktug"):
		case joaat("cutter"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("forklift"):
		case joaat("ripley"):
		case joaat("airtug"):
		case joaat("dump"):
		case joaat("insurgent2"):
		case joaat("insurgent"):
			return "HVY";
			break;
		
		case joaat("packer"):
		case joaat("flatbed"):
		case joaat("tiptruck2"):
		case joaat("pounder"):
		case joaat("firetruk"):
			return "MTL";
			break;
		
		case joaat("tractor"):
		case joaat("tractor2"):
			return "STANLEY";
			break;
		
		case joaat("hauler"):
		case joaat("phantom"):
		case joaat("trash"):
			return "JOBUILT";
			break;
		
		case joaat("patriot"):
			return "MAMMOTH";
			break;
		
		case joaat("journey"):
		case joaat("stratum"):
			if (bParam1)
			{
				return "ZIRCONIU";
			}
			else
			{
				return "ZIRCONIUM";
			}
			break;
		
		case joaat("vader"):
		case joaat("pcj"):
			return "SHITZU";
			break;
		
		case joaat("bagger"):
		case joaat("daemon"):
		case joaat("sovereign"):
			if (bParam1)
			{
				return "WESTERN";
			}
			else
			{
				return "WESTERNMOTORCYCLE";
			}
			break;
		
		case joaat("blazer"):
		case joaat("caddy"):
		case joaat("carbonrs"):
		case joaat("blazer3"):
		case joaat("blazer2"):
			return "NAGASAKI";
			break;
		
		case joaat("nemesis"):
		case joaat("lectro"):
			if (bParam1)
			{
				return "PRINCIPL";
			}
			else
			{
				return "PRINCIPE";
			}
			break;
		
		case joaat("hexer"):
			return "LCC";
			break;
		
		case joaat("bmx"):
		case joaat("cruiser"):
		case joaat("scorcher"):
			if (!bParam1)
			{
				return "Ped";
			}
			break;
		
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
			if (!bParam1)
			{
				return "TriCycles";
			}
			break;
		
		case joaat("cogcabrio"):
		case joaat("superd"):
		case joaat("windsor"):
			return "ENUS";
			break;
		
		case joaat("habanero"):
			if (bParam1)
			{
				return "EMPEROR";
			}
			else
			{
				return "EMPORER";
			}
			break;
		
		case joaat("ingot"):
		case joaat("nebula"):
			return "VULCAR";
			break;
		
		case joaat("t20"):
			return "PROGEN";
			break;
	}
	if (iParam0 == joaat("bifta"))
	{
		return "BF";
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return "CANIS";
	}
	else if (iParam0 == joaat("paradise"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("btype"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("zentorno"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("jester"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("massacro"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	else if (iParam0 == joaat("turismor"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	else if (iParam0 == joaat("huntley"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("alpha"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("thrust"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("thrust"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("blade") || iParam0 == joaat("monster"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("warrener"))
	{
		return "VULCAR";
	}
	if ((iParam0 == joaat("glendale") || iParam0 == joaat("panto")) || iParam0 == joaat("dubsta3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("rhapsody"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("pigalle"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("coquette2"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	if (iParam0 == joaat("innovation"))
	{
		return "LCC";
	}
	if (iParam0 == joaat("hakuchou"))
	{
		return "SHITZU";
	}
	if (iParam0 == joaat("furoregt"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("ratloader2"))
	{
		return "BRAVADO";
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("jester2"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("massacro2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("windsor"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("chino") || iParam0 == joaat("chino2"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("virgo"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("swift2") || iParam0 == joaat("luxor2"))
	{
		return "BUCKING";
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	else if (iParam0 == joaat("t20"))
	{
		return "PROGEN";
	}
	else if (iParam0 == joaat("osiris"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("coquette3"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	else if (iParam0 == joaat("toro"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	else if (iParam0 == joaat("brawler"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("primo2") || iParam0 == joaat("buccaneer2"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("faction") || iParam0 == joaat("faction2"))
	{
		return "WILLARD";
	}
	else if ((iParam0 == joaat("moonbeam2") || iParam0 == joaat("voodoo")) || iParam0 == joaat("moonbeam"))
	{
		return "DECLASSE";
	}
	else if (iParam0 == joaat("chino2") || iParam0 == joaat("dukes2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("faction3"))
	{
		return "WILLARD";
	}
	if ((iParam0 == joaat("sabregt2") || iParam0 == joaat("tornado5")) || iParam0 == joaat("virgo"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("virgo2") || iParam0 == joaat("virgo3"))
	{
		if (bParam1)
		{
			return "DUNDREAR";
		}
		else
		{
			return "DUNDREARY";
		}
	}
	if (iParam0 == joaat("slamvan3") || iParam0 == joaat("minivan2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("lurcher") || iParam0 == joaat("btype2"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("mamba") || iParam0 == joaat("tampa"))
	{
		return "DECLASSE";
	}
	if (((iParam0 == joaat("cognoscenti") || iParam0 == joaat("cog55")) || iParam0 == joaat("cog552")) || iParam0 == joaat("cognoscenti2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("verlierer2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("schafter4") || iParam0 == joaat("schafter3")) || iParam0 == joaat("schafter5")) || iParam0 == joaat("schafter6"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (((iParam0 == joaat("baller3") || iParam0 == joaat("baller4")) || iParam0 == joaat("baller5")) || iParam0 == joaat("baller6"))
	{
		if (bParam1)
		{
			return "GALLIVAN";
		}
		else
		{
			return "GALIVANTER";
		}
	}
	if (iParam0 == joaat("nightshade"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("btype3"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("pfister811"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("seven70"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("rumpo3"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("bestiagts"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("fmj"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("windsor2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("reaper"))
	{
		return "PEGASSI";
	}
	if (((iParam0 == joaat("contender") || iParam0 == joaat("trophytruck")) || iParam0 == joaat("trophytruck2")) || iParam0 == joaat("dominator2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("bf400"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("cliffhanger") || iParam0 == joaat("gargoyle"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("buffalo3") || iParam0 == joaat("gauntlet2"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("omnis"))
	{
		return "OBEY";
	}
	if (iParam0 == joaat("le7b"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("tropos"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("tampa2") || iParam0 == joaat("stalion2"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("brioso"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("tyrus"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("lynx"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("sheava"))
	{
		if (bParam1)
		{
			return "EMPEROR";
		}
		else
		{
			return "EMPORER";
		}
	}
	if (iParam0 == joaat("rallytruck"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("tornado6"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("avarus") || iParam0 == joaat("sanctus"))
	{
		return "LCC";
	}
	if ((iParam0 == joaat("chimera") || iParam0 == joaat("shotaro")) || iParam0 == joaat("blazer4"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("defiler") || iParam0 == joaat("hakuchou2"))
	{
		return "SHITZU";
	}
	if (((((iParam0 == joaat("nightblade") || iParam0 == joaat("zombiea")) || iParam0 == joaat("zombieb")) || iParam0 == joaat("daemon2")) || iParam0 == joaat("ratbike")) || iParam0 == joaat("wolfsbane"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("youga2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("esskey") || iParam0 == joaat("vortex")) || iParam0 == joaat("faggio3")) || iParam0 == joaat("faggio"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("raptor"))
	{
		return "BF";
	}
	if (iParam0 == joaat("manchez"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("blazer5"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("comet3"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("diablous") || iParam0 == joaat("diablous2"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((iParam0 == joaat("fcr") || iParam0 == joaat("fcr2")) || iParam0 == joaat("tempesta"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("nero") || iParam0 == joaat("nero2"))
	{
		return "TRUFFADE";
	}
	if (iParam0 == joaat("penetrator"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("ruiner2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("technical2"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("phantom2"))
	{
		return "JOBUILT";
	}
	if (iParam0 == joaat("voltic2"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("wastelander"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("italigtb") || iParam0 == joaat("italigtb2"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("dune5") || iParam0 == joaat("dune4"))
	{
		return "BF";
	}
	if (iParam0 == joaat("elegy") || iParam0 == joaat("elegy2"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("specter") || iParam0 == joaat("specter2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("infernus2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("ruston"))
	{
		return "HIJAK";
	}
	if (iParam0 == joaat("turismo2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("dukes2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("ardent") || iParam0 == joaat("xa21"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("cheetah2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("insurgent3") || iParam0 == joaat("nightshark")) || iParam0 == joaat("apc"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("technical3"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("halftrack") || iParam0 == joaat("bison3"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("torero") || iParam0 == joaat("oppressor"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("dune3"))
	{
		return "BF";
	}
	if (iParam0 == joaat("tampa3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("vagner") || iParam0 == joaat("rapidgt3"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("cyclone"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("retinue") || iParam0 == joaat("hustler")) || iParam0 == joaat("riata"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("visione") || iParam0 == joaat("vigilante"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("z190"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("avenger") || iParam0 == joaat("thruster"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("deluxo"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("stromberg") || iParam0 == joaat("pariah"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("hermes"))
	{
		return "ALBANY";
	}
	if ((iParam0 == joaat("sentinel3") || iParam0 == joaat("sc1")) || iParam0 == joaat("revolter"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("savestra"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("yosemite"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("raiden"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("neon") || iParam0 == joaat("comet4")) || iParam0 == joaat("comet5"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("streiter"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("kamacho"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("gt500"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("viseris"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("barrage"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("autarch") || iParam0 == joaat("tyrant")) || iParam0 == joaat("entity2"))
	{
		return "OVERFLOD";
	}
	if (iParam0 == joaat("issi3"))
	{
		return "WEENY";
	}
	if ((((iParam0 == joaat("gb200") || iParam0 == joaat("ellie")) || iParam0 == joaat("flashgt")) || iParam0 == joaat("caracara")) || iParam0 == joaat("dominator3"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("fagaloa"))
	{
		return "VULCAR";
	}
	if (iParam0 == joaat("michelli"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("hotring"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("tezeract"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("jester3"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("taipan"))
	{
		return "CHEVAL";
	}
	if (iParam0 == joaat("cheburek"))
	{
		return "RUNE";
	}
	if (iParam0 == joaat("swinger"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("freecrawler"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("mule4"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("pounder2"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("speedo4"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("patriot2"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("oppressor2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("stafford"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("menacer"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("scramjet"))
	{
		return "DECLASSE";
	}
	if ((iParam0 == joaat("monster3") || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		return "BRAVADO";
	}
	if ((iParam0 == joaat("scarab") || iParam0 == joaat("scarab2")) || iParam0 == joaat("scarab3"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("issi4") || iParam0 == joaat("issi5")) || iParam0 == joaat("issi6"))
	{
		return "WEENY";
	}
	if (iParam0 == joaat("toros"))
	{
		return "PEGASSI";
	}
	if ((((((((((iParam0 == joaat("clique") || iParam0 == joaat("imperator")) || iParam0 == joaat("imperator2")) || iParam0 == joaat("imperator3")) || iParam0 == joaat("dominator4")) || iParam0 == joaat("dominator5")) || iParam0 == joaat("dominator6")) || iParam0 == joaat("slamvan4")) || iParam0 == joaat("slamvan5")) || iParam0 == joaat("slamvan6")) || iParam0 == joaat("slamvan2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("deveste"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((((((((iParam0 == joaat("impaler") || iParam0 == joaat("impaler2")) || iParam0 == joaat("impaler3")) || iParam0 == joaat("impaler4")) || iParam0 == joaat("vamos")) || iParam0 == joaat("tulip")) || iParam0 == joaat("brutus")) || iParam0 == joaat("brutus2")) || iParam0 == joaat("brutus3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("deviant"))
	{
		return "SCHYSTER";
	}
	if (iParam0 == joaat("schlagen"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("italigto"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		return "MTL";
	}
	if ((iParam0 == joaat("deathbike") || iParam0 == joaat("deathbike2")) || iParam0 == joaat("deathbike3"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if ((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if ((iParam0 == joaat("zr380") || iParam0 == joaat("zr3802")) || iParam0 == joaat("zr3803"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("caracara2") || iParam0 == joaat("peyote2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("drafter"))
	{
		return "OBEY";
	}
	if (iParam0 == joaat("dynasty") || iParam0 == joaat("issi7"))
	{
		return "WEENY";
	}
	if (iParam0 == joaat("gauntlet3") || iParam0 == joaat("gauntlet4"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("hellion") || iParam0 == joaat("s80"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("krieger"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("locust") || iParam0 == joaat("jugular"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("nebula"))
	{
		return "VULCAR";
	}
	if (iParam0 == joaat("novak"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("paragon") || iParam0 == joaat("paragon2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("thrax"))
	{
		return "TRUFFADE";
	}
	if (iParam0 == joaat("zion3"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("emerus"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("neo"))
	{
		return "VYSSER";
	}
	if (iParam0 == joaat("rrocket"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("burrito") || iParam0 == joaat("burrito2"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("formula"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("everon"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("imorgon"))
	{
		return "OVERFLOD";
	}
	if (iParam0 == joaat("kanjo"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("komoda"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("rebla"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("sugoi"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("sultan2"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("vstr"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("zhaba"))
	{
		return "RUNE";
	}
	if (!bParam1)
	{
		if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "GALLIVAN"))
		{
			return "GALIVANTER";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "BENEFAC"))
		{
			return "BENEFACTOR";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "UBERMACH"))
		{
			return "UBERMACHT";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "DEWBAUCH"))
		{
			return "DEWBAUCHEE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "JACKSHP"))
		{
			return "JACKSHEEPE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "GROTTI"))
		{
			return "Grotti_2";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "INVERTO"))
		{
			return "Invetero";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "LAMPADA"))
		{
			return "LAMPADATI";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "DUNDREAR"))
		{
			return "DUNDREARY";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "ZIRCONIU"))
		{
			return "ZIRCONIUM";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "WESTERN"))
		{
			return "WESTERNMOTORCYCLE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "PRINCIPL"))
		{
			return "PRINCIPE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "EMPEROR"))
		{
			return "EMPORER";
		}
		else
		{
			return VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0);
		}
	}
	else
	{
		return VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0);
	}
	return "";
}

char* func_33(int iParam0, bool bParam1)//Position - 0xA7EF
{
	switch (iParam0)
	{
		case joaat("frogger"):
		case joaat("frogger2"):
			return "MAIBATSU";
		
		case joaat("maverick"):
		case joaat("polmav"):
		case joaat("luxor"):
		case joaat("shamal"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case joaat("cargobob"):
		case joaat("annihilator"):
		case joaat("cuban800"):
		case joaat("duster"):
		case joaat("stunt"):
			return "WESTERN";
			break;
		
		case joaat("buzzard"):
		case joaat("buzzard2"):
			return "NAGASAKI";
			break;
		
		case joaat("mammatus"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("lazer"):
			return "JOBUILT";
			break;
	}
	if (iParam0 == joaat("vestra"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (((((iParam0 == joaat("miljet") || iParam0 == joaat("swift")) || iParam0 == joaat("swift2")) || iParam0 == joaat("luxor2")) || iParam0 == joaat("supervolito")) || iParam0 == joaat("supervolito2"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (iParam0 == joaat("besra"))
	{
		return "WESTERN";
	}
	if (iParam0 == joaat("hydra") || iParam0 == joaat("thruster"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("volatus") || iParam0 == joaat("nimbus"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	return "";
}

char* func_34(int iParam0, bool bParam1)//Position - 0xA98C
{
	switch (iParam0)
	{
		case joaat("squalo"):
		case joaat("tropic"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case joaat("jetmax"):
		case joaat("suntrap"):
			return "OCELOT";
			break;
		
		case joaat("dinghy"):
			if (!bParam1)
			{
				return "OCELOT";
			}
			break;
		
		case joaat("seashark2"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("seashark3"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("seashark"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("toro"):
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
	}
	if (iParam0 == joaat("speeder") || iParam0 == joaat("speeder2"))
	{
		if (bParam1)
		{
			return "PEGASSI";
		}
		else
		{
			return "PEGASSI";
		}
	}
	return "";
}

void func_35(int iParam0, var uParam1)//Position - 0xAA9A
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar1 = 1f;
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (func_37(iVar2))
		{
			fVar1 = 0.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		(*uParam1)[0] = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0);
		(*uParam1)[2] = (VEHICLE::GET_VEHICLE_MAX_BRAKING(iParam0) * fVar1);
		(*uParam1)[1] = (VEHICLE::GET_VEHICLE_ACCELERATION(iParam0) * fVar1);
		if (iVar2 == joaat("voltic"))
		{
			(*uParam1)[1] = (VEHICLE::GET_VEHICLE_ACCELERATION(iParam0) * 2f);
		}
		if (iVar2 == joaat("tezeract"))
		{
			(*uParam1)[1] = (VEHICLE::GET_VEHICLE_ACCELERATION(iParam0) * 2.6753f);
		}
		if (iVar2 == joaat("jester3"))
		{
			(*uParam1)[0] = (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9890084f);
		}
		if (iVar2 == joaat("freecrawler"))
		{
			(*uParam1)[0] = (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9788762f);
		}
		if (iVar2 == joaat("swinger"))
		{
			(*uParam1)[0] = (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9650553f);
		}
		if (iVar2 == joaat("menacer"))
		{
			(*uParam1)[0] = (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9730466f);
		}
		if (iVar2 == joaat("speedo4"))
		{
			(*uParam1)[0] = (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9426523f);
		}
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar2) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar2))
		{
			fVar3 = (VEHICLE::GET_FLYING_VEHICLE_MODEL_AGILITY(iVar2) * fVar1);
		}
		else if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar2))
		{
			fVar3 = (VEHICLE::GET_BOAT_VEHICLE_MODEL_AGILITY(iVar2) * fVar1);
		}
		else
		{
			fVar3 = (VEHICLE::GET_VEHICLE_MAX_TRACTION(iParam0) * fVar1);
		}
		(*uParam1)[3] = fVar3;
		if (iVar2 == joaat("t20"))
		{
			(*uParam1)[1] = ((*uParam1)[1] - 0.05f);
		}
		else if (iVar2 == joaat("vindicator"))
		{
			(*uParam1)[1] = ((*uParam1)[1] - 0.02f);
		}
		iVar4 = func_36(VEHICLE::GET_VEHICLE_CLASS(iParam0));
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			(*uParam1)[iVar0] = (((*uParam1)[iVar0] / Global_1585359[iVar4 /*5*/][iVar0]) * 100f);
			if ((*uParam1)[iVar0] > 100f)
			{
				(*uParam1)[iVar0] = 100f;
			}
			iVar0++;
		}
	}
}

int func_36(int iParam0)//Position - 0xAC8B
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
		case 17:
		case 18:
		case 19:
		case 20:
		case 22:
			return 0;
			break;
		
		case 14:
			return 3;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 2;
			break;
	}
	return -1;
}

int func_37(int iParam0)//Position - 0xAD3B
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

void func_38(int iParam0, char* sParam1, char* sParam2)//Position - 0xADA7
{
	StringCopy(sParam1, func_32(ENTITY::GET_ENTITY_MODEL(iParam0), 0), 24);
	StringCopy(sParam2, "MPCarHUD", 24);
	if (MISC::ARE_STRINGS_EQUAL(sParam1, "LCC"))
	{
		StringCopy(sParam2, "MPCarHUD2", 24);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam1, "Grotti_2"))
	{
		StringCopy(sParam2, "MPCarHUD2", 24);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam1, "PROGEN"))
	{
		StringCopy(sParam2, "MPCarHUD2", 24);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam1, "RUNE"))
	{
		StringCopy(sParam2, "MPCarHUD2", 24);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam1, "VYSSER"))
	{
		StringCopy(sParam2, "MPCarHUD3", 24);
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam1, "maxwell"))
	{
		StringCopy(sParam2, "MPCarHUD4", 24);
	}
}

float func_39(int iParam0)//Position - 0xAE3C
{
	struct<3> Var0;
	struct<3> Var1;
	
	func_40(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_2 - Var1.f_2));
}

void func_40(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xAE6A
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_43(iParam0);
		if (iVar0 != 0)
		{
			func_41(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_41(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xAF69
{
	int iVar0;
	
	func_42(iParam0, &Global_1577992);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1577992[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1577992[iVar0], &(Global_1577996[iVar0 /*3*/]), &(Global_1578003[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1577996[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1578003[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577996[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578003[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578010[iVar0] = (Global_1578003[iVar0 /*3*/] - Global_1577996[iVar0 /*3*/]);
		Global_1578013[iVar0] = (Global_1578003[iVar0 /*3*/].f_1 - Global_1577996[iVar0 /*3*/].f_1);
		Global_1578016[iVar0] = (Global_1578003[iVar0 /*3*/].f_2 - Global_1577996[iVar0 /*3*/].f_2);
		if (Global_1578010[iVar0] > Global_1578019)
		{
			Global_1578019 = Global_1578010[iVar0];
		}
		if (Global_1578016[iVar0] > Global_1578020)
		{
			Global_1578020 = Global_1578016[iVar0];
		}
		iVar0++;
	}
	Global_1578021 = (Global_1578019 * -0.5f);
	Global_1578024 = (Global_1578019 * 0.5f);
	Global_1578021.f_1 = ((((0.5f * Global_1578013[0]) + Global_1578013[1]) + Global_1577992.f_3) * -1f);
	Global_1578024.f_1 = (0.5f * Global_1578013[0]);
	Global_1578021.f_2 = (Global_1578016[0] * -0.5f);
	Global_1578024.f_2 = (Global_1578016[0] * 0.5f);
	*uParam1 = { Global_1578021 };
	*uParam2 = { Global_1578024 };
}

void func_42(int iParam0, var uParam1)//Position - 0xB175
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_43(int iParam0)//Position - 0xB1F6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_44(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0xB225
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

bool func_45(var uParam0, char* sParam1)//Position - 0xB237
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sParam1);
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0);
}

void func_46(int iParam0, var uParam1)//Position - 0xB256
{
	switch (iParam0)
	{
		case joaat("buccaneer2"):
			*uParam1 = (*uParam1 + 0.35f);
			break;
		
		case joaat("warrener2"):
			*uParam1 = (*uParam1 + 0.3f);
			break;
		
		case joaat("jester"):
			*uParam1 = (*uParam1 + 0.095f);
			break;
		
		case joaat("italigto"):
			*uParam1 = (*uParam1 - 0.1f);
			break;
		
		case joaat("novak"):
			*uParam1 = (*uParam1 - 0.45f);
			break;
		
		case joaat("casco"):
			*uParam1 = (*uParam1 + 0.25f);
			break;
		
		case joaat("baller"):
			*uParam1 = (*uParam1 - 0.6f);
			break;
		
		case joaat("banshee"):
			*uParam1 = (*uParam1 - 0.2f);
			break;
		
		case joaat("brioso2"):
			*uParam1 = (*uParam1 - 0.2f);
			break;
		
		case joaat("buffalo4"):
			*uParam1 = (*uParam1 - 0.1f);
			break;
		
		case joaat("cognoscenti"):
			*uParam1 = (*uParam1 - 0.2f);
			break;
		
		case joaat("cognoscenti2"):
			*uParam1 = (*uParam1 - 0.15f);
			break;
		
		case joaat("dubsta"):
			*uParam1 = (*uParam1 - 0.15f);
			break;
		
		case joaat("dubsta2"):
			*uParam1 = (*uParam1 - 0.1f);
			break;
		
		case joaat("dukes3"):
			*uParam1 = (*uParam1 - 0.1f);
			break;
		
		case joaat("dynasty"):
			*uParam1 = (*uParam1 - 0.3f);
			break;
		
		case joaat("fagaloa"):
			*uParam1 = (*uParam1 - 0.1f);
			break;
		
		case joaat("feltzer3"):
			*uParam1 = (*uParam1 + 0.25f);
			break;
		
		case joaat("GREENWOOD"):
			*uParam1 = (*uParam1 - 0.15f);
			break;
		
		case joaat("hellion"):
			*uParam1 = (*uParam1 - 0.35f);
			break;
		
		case joaat("hermes"):
			*uParam1 = (*uParam1 + 0.15f);
			break;
		
		case joaat("impaler"):
			*uParam1 = (*uParam1 + 0.1f);
			break;
		
		case joaat("kanjo"):
			*uParam1 = (*uParam1 - 0.45f);
			break;
		
		case joaat("landstalker2"):
			*uParam1 = (*uParam1 - 0.55f);
			break;
		
		case joaat("mesa"):
			*uParam1 = (*uParam1 - 0.05f);
			break;
		
		case joaat("michelli"):
			*uParam1 = (*uParam1 - 0.3f);
			break;
		
		case joaat("nebula"):
			*uParam1 = (*uParam1 - 0.2f);
			break;
		
		case joaat("omnis"):
			*uParam1 = (*uParam1 - 0.45f);
			break;
		
		case joaat("penumbra2"):
			*uParam1 = (*uParam1 - 0.35f);
			break;
		
		case joaat("peyote2"):
			*uParam1 = (*uParam1 - 0.1f);
			break;
		
		case joaat("picador"):
			*uParam1 = (*uParam1 - 0.25f);
			break;
		
		case joaat("remus"):
			*uParam1 = (*uParam1 - 0.35f);
			break;
		
		case joaat("schwarzer"):
			*uParam1 = (*uParam1 + 0.2f);
			break;
		
		case joaat("seminole2"):
			*uParam1 = (*uParam1 - 0.15f);
			break;
		
		case joaat("sentinel"):
			*uParam1 = (*uParam1 + 0.1f);
			break;
		
		case joaat("speedo"):
			*uParam1 = (*uParam1 - 0.45f);
			break;
		
		case joaat("sultan2"):
			*uParam1 = (*uParam1 - 0.15f);
			break;
		
		case joaat("tornado2"):
			*uParam1 = (*uParam1 - 0.25f);
			break;
		
		case joaat("veto2"):
			*uParam1 = (*uParam1 + 0.15f);
			break;
		
		case joaat("CORSITA"):
			*uParam1 = (*uParam1 - 0.3f);
			break;
		
		case joaat("imorgon"):
			*uParam1 = (*uParam1 - 0.3f);
			break;
		
		case joaat("jester4"):
			*uParam1 = (*uParam1 + 0.15f);
			break;
		
		case joaat("LM87"):
			*uParam1 = (*uParam1 + 0.15f);
			break;
		
		case joaat("nero"):
			*uParam1 = (*uParam1 - 0.1f);
			break;
		
		case joaat("OMNISEGT"):
			*uParam1 = (*uParam1 - 0.3f);
			break;
		
		case joaat("openwheel1"):
			*uParam1 = (*uParam1 + 0.25f);
			break;
		
		case joaat("pariah"):
			*uParam1 = (*uParam1 - 0.05f);
			break;
		
		case joaat("pfister811"):
			*uParam1 = (*uParam1 + 0.15f);
			break;
		
		case joaat("s80"):
			*uParam1 = (*uParam1 + 0.25f);
			break;
		
		case joaat("tezeract"):
			*uParam1 = (*uParam1 + 0.1f);
			break;
		
		case joaat("turismor"):
			*uParam1 = (*uParam1 + 0.25f);
			break;
		
		case joaat("zentorno"):
			*uParam1 = (*uParam1 - 0.15f);
			break;
		
		case joaat("gauntlet4"):
			*uParam1 = (*uParam1 + 0.1f);
			break;
		
		case joaat("turismo2"):
			*uParam1 = (*uParam1 - 0.2f);
			break;
		
		case joaat("comet2"):
			*uParam1 = (*uParam1 - 0.1f);
			break;
		
		case joaat("tailgater2"):
			*uParam1 = (*uParam1 + 0.1f);
			break;
	}
}

Vector3 func_47(int iParam0)//Position - 0xB6FD
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_48(int iParam0)//Position - 0xB710
{
	if (iParam0 != func_49())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_197, 9);
	}
	return 0;
}

int func_49()//Position - 0xB733
{
	return -1;
}

int func_50(int iParam0, bool bParam1, bool bParam2)//Position - 0xB73C
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
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_51(int iParam0)//Position - 0xB79C
{
	int iVar0;
	
	if (!func_53(iParam0, 1))
	{
		return func_49();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_52(iVar0, 0, 1, 0);
}

int func_52(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xB7CB
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_50(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_50(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_49();
}

int func_53(int iParam0, bool bParam1)//Position - 0xB856
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54(var uParam0, var* uParam1)//Position - 0xB895
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if ((*uParam0)[iVar0] == (*uParam1)[iVar0])
		{
		}
		else
		{
			iVar1 = iVar0 + 1;
			while (iVar1 <= 11)
			{
				if ((*uParam0)[iVar1] == (*uParam1)[iVar0])
				{
					uVar2 = (*uParam1)[iVar1];
					(*uParam1)[iVar1] = (*uParam1)[iVar0];
					(*uParam1)[iVar0] = uVar2;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_55()//Position - 0xB903
{
	return Global_1648034.f_68;
}

void func_56()//Position - 0xB911
{
	bool bVar0;
	
	if (!func_732() || !func_3(0))
	{
		if (BitTest(Local_164.f_0, 0))
		{
			func_731();
			func_730();
			if (func_729("LUX_SRM_H_SOON"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		func_718();
		func_717(&(Local_164.f_10), 0);
		func_716(1);
		return;
	}
	bVar0 = BitTest(Local_164.f_0, 0);
	func_713(bVar0);
	func_709();
	if (BitTest(Local_164.f_0, 0))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		func_706();
		func_690(func_705());
	}
	func_61(&(Local_164.f_10));
	if (func_59(&(Local_164.f_10)))
	{
		func_57();
		func_717(&(Local_164.f_10), 0);
	}
}

void func_57()//Position - 0xB9A8
{
	if (BitTest(Local_164.f_0, 0))
	{
		MISC::CLEAR_BIT(&Local_164, 0);
		func_58();
		func_716(3);
	}
	else
	{
		func_718();
		func_716(1);
	}
}

void func_58()//Position - 0xB9D3
{
	if (Local_164.f_2 == 0)
	{
		if (!BitTest(Local_164.f_0, 6))
		{
			MISC::SET_BIT(&Local_164, 6);
		}
	}
	else if (BitTest(Local_164.f_0, 6))
	{
		MISC::CLEAR_BIT(&Local_164, 6);
	}
}

int func_59(int* iParam0)//Position - 0xBA03
{
	if (iParam0->f_491 == 6)
	{
		return 1;
	}
	if (iParam0->f_491 == 5 && func_60(iParam0) != 1)
	{
		return 1;
	}
	return 0;
}

int func_60(int* iParam0)//Position - 0xBA34
{
	return iParam0->f_492;
}

void func_61(int* iParam0)//Position - 0xBA41
{
	func_62(iParam0, 1);
}

void func_62(int* iParam0, bool bParam1)//Position - 0xBA50
{
	if (func_689(iParam0, bParam1))
	{
		func_688(iParam0, 5);
	}
	switch (iParam0->f_491)
	{
		case 0:
			func_661(iParam0, bParam1);
			break;
		
		case 1:
			func_659(iParam0);
			break;
		
		case 2:
			func_605(iParam0);
			break;
		
		case 3:
			func_485(iParam0);
			break;
		
		case 4:
			func_79(iParam0);
			break;
		
		case 5:
			if (func_60(iParam0) == 1)
			{
				func_68(iParam0);
				return;
			}
			func_65(iParam0);
			func_63(iParam0, 1);
			break;
		
		case 6:
			func_65(iParam0);
			func_63(iParam0, 1);
			break;
	}
}

void func_63(int* iParam0, int iParam1)//Position - 0xBB00
{
	if (func_64(iParam0, iParam1))
	{
		MISC::CLEAR_BIT(iParam0, iParam1);
	}
}

bool func_64(var uParam0, int iParam1)//Position - 0xBB1B
{
	return BitTest(*uParam0, iParam1);
}

void func_65(int* iParam0)//Position - 0xBB29
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_4));
	}
	if (iParam0->f_388.f_66 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_388.f_66);
	}
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
	iParam0->f_3 = 0;
	func_66(&(iParam0->f_388));
}

void func_66(var uParam0)//Position - 0xBB72
{
	func_67(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_67(var uParam0)//Position - 0xBC02
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_68(int* iParam0)//Position - 0xBCB2
{
	HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "BRDISTEX", 18, "BRSHETEX", false, -1, 0, 0, true, 0);
	if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || func_78())
	{
		func_77(iParam0, 0);
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		NETWORK::OPEN_COMMERCE_STORE("", "", 3);
		func_69(0);
		func_77(iParam0, 0);
	}
}

void func_69(bool bParam0)//Position - 0xBD1C
{
	if (bParam0)
	{
		func_76();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_75(0))
		{
			func_70(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_70(int iParam0)//Position - 0xBD7F
{
	if (func_74())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_73())
		{
			func_72(1, 1);
		}
		else
		{
			func_72(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8137, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 30);
	}
	if (!func_71())
	{
		Global_20266.f_1 = 3;
	}
}

int func_71()//Position - 0xBE09
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_72(bool bParam0, bool bParam1)//Position - 0xBE30
{
	if (bParam0)
	{
		if (func_75(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
}

bool func_73()//Position - 0xBEA4
{
	return BitTest(Global_1958711, 5);
}

bool func_74()//Position - 0xBEB2
{
	return BitTest(Global_1958711, 19);
}

int func_75(int iParam0)//Position - 0xBEC1
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				return 1;
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_76()//Position - 0xBF18
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_77(var uParam0, int iParam1)//Position - 0xBF41
{
	if (uParam0->f_492 != iParam1)
	{
		uParam0->f_492 = iParam1;
	}
}

int func_78()//Position - 0xBF5A
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_79(int* iParam0)//Position - 0xBF79
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	int iVar15;
	bool bVar16;
	char* sVar17;
	char* sVar18;
	
	bVar0 = func_484(iParam0->f_388.f_66);
	iVar1 = 0;
	iVar2 = func_483(iParam0->f_388.f_66, bVar0, -1, 0);
	iVar3 = func_482(iParam0->f_1);
	bVar5 = true;
	bVar6 = false;
	bVar7 = false;
	iVar8 = func_312(iParam0, iParam0->f_4, 0);
	if (iVar8 == 0)
	{
		bVar7 = true;
	}
	uVar4 = func_312(iParam0, iParam0->f_4, 1);
	while (func_255(iParam0, &iVar1, iVar8, Global_75657.f_66, iVar2, iVar3, iParam0->f_4) && func_252())
	{
		return;
	}
	if (iVar1 == 2)
	{
		if (func_251())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_249(func_250()));
		}
		iVar9 = iParam0->f_388.f_66;
		if (iParam0->f_388.f_66 == joaat("landstalker2"))
		{
			iVar9 = MISC::GET_HASH_KEY(func_247(func_29(iParam0->f_388.f_66)));
		}
		bVar10 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= false;
		bVar11 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < iVar8;
		MONEY::NETWORK_BUY_ITEM(iVar8, iVar9, 7, 1, bVar10, func_247(func_29(iParam0->f_388.f_66)), func_241(iParam0), 0, 0, bVar11);
		if (func_251())
		{
			func_237(func_250());
		}
		func_235(iParam0->f_388.f_66);
		iVar12 = func_234(2060, -1, 0);
		iVar13 = ((iVar12 / 1000000) + 1 * 1000000);
		if ((iVar12 + iVar8) >= iVar13)
		{
			func_232((iVar13 / 1000000) + 1);
		}
		if (!func_209(iParam0->f_388.f_66, -1))
		{
			func_204(1, 0, 0, 0, 0, 0, 0);
			bVar5 = false;
			bVar6 = true;
		}
		func_169(iParam0->f_4, iParam0->f_1, 1, bVar5, bVar6, 1, 1, 0, bVar7, -1, 0);
		func_165(iParam0->f_2, iParam0->f_1, -1);
		if (iParam0->f_1 != -1)
		{
			Global_1585857[iParam0->f_1 /*142*/].f_140 = uVar4;
		}
		func_164(iParam0->f_1);
		if (iParam0->f_2 >= 227 && iParam0->f_2 <= 256)
		{
			func_163((iParam0->f_2 - 227));
		}
		func_140(iParam0->f_4, iParam0->f_1);
		sVar14 = func_139(iParam0->f_388.f_66);
		iVar15 = func_138(iParam0);
		bVar16 = false;
		if (func_136(iParam0))
		{
			bVar16 = true;
		}
		if (bVar16)
		{
			sVar17 = func_135(iVar15, 0);
			sVar18 = func_135(iVar15, 1);
		}
		else
		{
			sVar17 = func_114(iParam0->f_388.f_66, sVar14, iParam0->f_2, 0);
			sVar18 = func_114(iParam0->f_388.f_66, sVar14, iParam0->f_2, 1);
		}
		func_89(iVar15, sVar17, 1, HUD::_GET_LABEL_TEXT(sVar14), -99, "", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0);
		func_86(iVar15, sVar18, sVar14, "", Global_2815059.f_6778.f_1, -1, iParam0->f_1);
		func_83(2060, (iVar12 + iVar8), -1, 1, 0);
		func_80(-35837372, 0, 0);
		func_688(iParam0, 6);
	}
	else if (iVar1 == 3)
	{
		func_688(iParam0, 5);
	}
	else
	{
		iVar1 = 1;
	}
}

void func_80(int iParam0, int iParam1, int iParam2)//Position - 0xC237
{
	int iVar0;
	
	if (func_82(iParam1, iParam2))
	{
		iVar0 = func_81();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_81()//Position - 0xC264
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_82(int iParam0, var uParam1)//Position - 0xC299
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xC31F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_84(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_84(int iParam0)//Position - 0xC34F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_85();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_85()//Position - 0xC383
{
	return Global_1574918;
}

void func_86(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6)//Position - 0xC38F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_88(&(Global_2815059.f_2309[iVar0 /*44*/].f_41)))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2815059.f_2309[iVar0 /*44*/]), sParam1))
			{
				if (iParam6 != -1)
				{
					if (iParam6 == Global_2815059.f_2309[iVar0 /*44*/].f_40)
					{
						iVar1 = iVar0;
						bVar4 = true;
					}
				}
			}
		}
		if (!func_88(&(Global_2815059.f_2309[iVar0 /*44*/].f_41)))
		{
			if (iVar2 == -1)
			{
				iVar2 = iVar0;
			}
		}
		if (bVar4)
		{
			iVar0 = 39;
		}
		iVar0++;
	}
	iVar3 = iVar1;
	if (iVar3 == -1)
	{
		iVar3 = iVar2;
	}
	if (iVar3 >= 0)
	{
		Global_2815059.f_2309[iVar3 /*44*/].f_6 = iParam0;
		StringCopy(&(Global_2815059.f_2309[iVar3 /*44*/]), sParam1, 24);
		StringCopy(&(Global_2815059.f_2309[iVar3 /*44*/].f_7), sParam2, 64);
		StringCopy(&(Global_2815059.f_2309[iVar3 /*44*/].f_23), sParam3, 64);
		Global_2815059.f_2309[iVar3 /*44*/].f_39 = iParam5;
		Global_2815059.f_2309[iVar3 /*44*/].f_40 = iParam6;
		func_87(&(Global_2815059.f_2309[iVar3 /*44*/].f_41), 1, 0);
		Global_2815059.f_2309[iVar3 /*44*/].f_43 = uParam4;
	}
}

void func_87(var uParam0, bool bParam1, bool bParam2)//Position - 0xC4B6
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

bool func_88(var uParam0)//Position - 0xC4FB
{
	return uParam0->f_1;
}

int func_89(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xC507
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 3;
	if (func_91(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { func_90(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_90(int iParam0)//Position - 0xC5B3
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_91(int iParam0, char* sParam1, int iParam2, var uParam3, char* sParam4, char* sParam5, var uParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xC5C6
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_107();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_106() == 0)
	{
		func_104();
		return 0;
	}
	func_103(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = uParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = uParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		func_102(0);
		func_102(2);
		func_102(1);
	}
	else
	{
		func_107();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					func_102(0);
					Global_8842 = 0;
					break;
				
				case 1:
					func_102(1);
					Global_8842 = 1;
					break;
				
				case 2:
					func_102(2);
					Global_8842 = 2;
					break;
				
				case 3:
					func_102(3);
					Global_8842 = 3;
					break;
				
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		func_107();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_101())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_100(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_97(1);
			func_100(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_92(iParam0, sParam1, bVar1, func_96(PLAYER::PLAYER_ID()));
	return 1;
}

void func_92(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0xCAA1
{
	if (!func_93())
	{
		return;
	}
	MONEY::_NETWORK_SPENT_NIGHTCLUB_BATHROOM_ATTENDANT(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_93()//Position - 0xCAD4
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_49())
	{
		return 0;
	}
	if (func_94(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_94(int iParam0)//Position - 0xCB37
{
	return func_95(iParam0, 20);
}

var func_95(int iParam0, int iParam1)//Position - 0xCB47
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_96(int iParam0)//Position - 0xCB5F
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

void func_97(int iParam0)//Position - 0xCB74
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_99(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_98(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_98(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_98(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_98(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_98(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8142);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_24(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_98(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_98(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_98(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xD10E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_24(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_24(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_24(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_24(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_24(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_99(int iParam0)//Position - 0xD1C1
{
	return Global_43052 == iParam0;
}

void func_100(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xD1CF
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_101()//Position - 0xD232
{
	return Global_1575058;
}

void func_102(int iParam0)//Position - 0xD23E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113386.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_103(int iParam0)//Position - 0xD25D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_113386.f_14141[iParam0 /*104*/].f_18 = iVar0;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_104()//Position - 0xD2EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_105(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
		{
			Global_22672 = iVar2;
		}
		iVar2++;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_24 = 1;
}

int func_105(struct<6> Param0, struct<6> Param1)//Position - 0xD3BA
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_106()//Position - 0xD4A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_105(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

void func_107()//Position - 0xD60D
{
	if (func_99(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_108();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

var func_108()//Position - 0xD6AF
{
	func_109();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_109()//Position - 0xD6C8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_112(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_111(PLAYER::PLAYER_PED_ID());
			if (func_110(iVar0) && (!func_99(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_110(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_110(int iParam0)//Position - 0xD7C5
{
	return iParam0 < 3;
}

int func_111(int iParam0)//Position - 0xD7D1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_112(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_112(int iParam0)//Position - 0xD80E
{
	if (func_110(iParam0))
	{
		return func_113(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_113(int iParam0)//Position - 0xD833
{
	return Global_1998[iParam0 /*29*/];
}

var func_114(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xD842
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_209(iParam0, -1))
	{
		if (bParam3)
		{
			return "TXT_CAR_YOUC";
		}
		else
		{
			return "TXT_CAR_YOUD";
		}
	}
	bVar1 = func_118(iParam2, func_131(14, -1), 14);
	if (!bVar1)
	{
		if ((func_118(iParam2, func_131(15, -1), 15) || func_118(iParam2, func_131(16, -1), 16)) || func_118(iParam2, func_131(17, -1), 17))
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if ((iParam2 == 224 || iParam2 == 225) || iParam2 == 226)
		{
			bVar1 = true;
		}
	}
	if ((func_118(iParam2, func_131(18, -1), 18) || func_118(iParam2, func_131(19, -1), 19)) || func_118(iParam2, func_131(20, -1), 20))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (((iParam2 == 236 || iParam2 == 246) || iParam2 == 256) || iParam2 == 257)
		{
			bVar2 = true;
		}
	}
	if (bParam3)
	{
		uVar0 = func_117(iParam0, sParam1, iParam2, bVar1, bVar2);
	}
	else
	{
		uVar0 = func_115(iParam0, sParam1, iParam2, bVar1, bVar2);
	}
	return uVar0;
}

char* func_115(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xD985
{
	char* sVar0;
	
	if (func_116(iParam0) != -1)
	{
		sVar0 = "DELVIRL";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELVIRLG";
		}
	}
	else if (iParam2 == 156)
	{
		sVar0 = "DELMIRL";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELMIRLG";
		}
	}
	else if (func_118(iParam2, func_131(12, -1), 12))
	{
		sVar0 = "DELHARL";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELHARLG";
		}
	}
	else if (func_118(iParam2, func_131(13, -1), 13))
	{
		sVar0 = "DELFIRL";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELFIRLG";
		}
	}
	else if (bParam3)
	{
		sVar0 = "DELNCRL";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELNCRLG";
		}
	}
	else if (iParam2 == 223)
	{
		sVar0 = "DELMIRL";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELMIRLG";
		}
	}
	else if (bParam4)
	{
		sVar0 = "DELARRL";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELARRLG";
		}
	}
	else if (func_118(iParam2, func_131(21, -1), 21))
	{
		sVar0 = "DELCARL";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELCARLG";
		}
	}
	else if (iParam2 == 278)
	{
		sVar0 = "DELSUB";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELSUBG";
		}
	}
	else if (func_118(iParam2, func_131(25, -1), 25))
	{
		sVar0 = "DEL_AS";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DEL_ASG";
		}
	}
	else
	{
		sVar0 = "DELVIRL";
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sVar0 = "DELVIRLG";
		}
	}
	return sVar0;
}

int func_116(int iParam0)//Position - 0xDB06
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

char* func_117(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xDB8F
{
	char* sVar0;
	
	if (func_116(iParam0) != -1)
	{
		sVar0 = "DELSIRL";
	}
	else if (iParam2 == 156)
	{
		sVar0 = "TXT_TRUCK_GAR";
	}
	else if (func_118(iParam2, func_131(12, -1), 12))
	{
		sVar0 = "TXT_HANGAR_FLOR";
	}
	else if (func_118(iParam2, func_131(13, -1), 13))
	{
		sVar0 = "TXT_DBASE_STOR";
	}
	else if (bParam3)
	{
		sVar0 = "DELNCRL";
	}
	else if (iParam2 == 223)
	{
		sVar0 = "TXT_MOC2_GAR";
	}
	else if (bParam4)
	{
		sVar0 = "TXT_ARENA_STOR";
	}
	else if (func_118(iParam2, func_131(21, -1), 21))
	{
		sVar0 = "TXT_CASINO_STOR";
	}
	else if (iParam2 == 278)
	{
		sVar0 = "TXT_SUB_GAR";
	}
	else if (func_118(iParam2, func_131(25, -1), 25))
	{
		sVar0 = "TXT_AUTS_STOR";
	}
	else if (func_118(iParam2, func_131(26, -1), 26))
	{
		sVar0 = "TXT_FIXER_STOR";
	}
	else
	{
		sVar0 = "TXT_CAR_STOR";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sVar0 = "TXT_CAR_STOB";
	}
	return sVar0;
}

int func_118(int iParam0, int iParam1, int iParam2)//Position - 0xDC95
{
	if ((iParam1 > 0 && iParam1 <= 128) && func_130(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_128(iParam2)) >= 0 && (iParam0 - func_128(iParam2)) < Global_1312193[iParam1 /*1951*/].f_33) && iParam0 < 363)
			{
				return 1;
			}
			if (Global_1312193[iParam1 /*1951*/].f_33 == 2 && iParam0 == (10 + func_128(iParam2)))
			{
				return 1;
			}
			if ((Global_1312193[iParam1 /*1951*/].f_33 == 6 && iParam0 >= (10 + func_128(iParam2))) && iParam0 <= (11 + func_128(iParam2)))
			{
				return 1;
			}
			if (Global_1312193[iParam1 /*1951*/].f_33 == 10)
			{
				if (func_127(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_128(iParam2)) && iParam0 <= (12 + func_128(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_128(iParam2)) && iParam0 < func_119(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 12 && iParam0 >= func_128(iParam2)) && iParam0 < func_119(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 13 && iParam0 >= func_128(iParam2)) && iParam0 < func_119(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 14 && iParam0 >= func_128(iParam2)) && iParam0 < func_119(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 15 && iParam0 >= func_128(iParam2)) && iParam0 < func_119(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 16 && iParam0 >= func_128(iParam2)) && iParam0 < func_119(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 17 && iParam0 >= func_128(iParam2)) && iParam0 < func_119(iParam2))
			{
				return 1;
			}
			if (iParam2 == 18)
			{
				if ((iParam0 >= func_128(iParam2) && iParam0 < func_119(iParam2)) || iParam0 == 236)
				{
					return 1;
				}
			}
			if (iParam2 == 19)
			{
				if ((iParam0 >= func_128(iParam2) && iParam0 < func_119(iParam2)) || iParam0 == 246)
				{
					return 1;
				}
			}
			if (iParam2 == 20)
			{
				if ((iParam0 >= func_128(iParam2) && iParam0 < func_119(iParam2)) || iParam0 == 256)
				{
					return 1;
				}
			}
			if (iParam2 == 21)
			{
				if (iParam0 >= func_128(iParam2) && iParam0 < func_119(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 22)
			{
				if (iParam0 >= func_128(iParam2) && iParam0 < func_119(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 25)
			{
				if (iParam0 >= func_128(iParam2) && iParam0 < func_119(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 26)
			{
				if (iParam0 >= func_128(iParam2) && iParam0 < func_119(iParam2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_119(int iParam0)//Position - 0xDFD0
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
		
		case 26:
			return 337;
			break;
		
		case 27:
			return 350;
			break;
		
		case 28:
			return 363;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_126(iParam0);
		return func_125(iVar0);
	}
	return (func_120(iParam0, -1, 1) * iParam0 + 1);
}

int func_120(int iParam0, int iParam1, bool bParam2)//Position - 0xE15D
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_122(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_121(iParam1))
			{
				return 0;
			}
			else if (func_127(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 == 128)
			{
				return 20;
			}
			else if (iParam1 <= 128 && iParam1 > 0)
			{
				if (Global_1312193[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1312193[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1312193[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
		
		case 26:
			return 20;
			break;
	}
	return 0;
}

int func_121(int iParam0)//Position - 0xE407
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

int func_122(int iParam0, bool bParam1, bool bParam2)//Position - 0xE436
{
	if (bParam2)
	{
		return func_123(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_123(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_123(int iParam0, bool bParam1)//Position - 0xE511
{
	if (Global_1853184 != func_49())
	{
		if (!func_124(Global_1853184))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1853184)
			{
				if (BitTest(Global_2689235[Global_1853184 /*453*/].f_197, 24) || func_48(Global_1853184))
				{
					return 1;
				}
			}
		}
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_197, 24);
}

int func_124(int iParam0)//Position - 0xE577
{
	if (iParam0 != func_49())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_366, 2);
	}
	return 0;
}

int func_125(int iParam0)//Position - 0xE5A0
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_126(int iParam0)//Position - 0xE5DD
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_127(int iParam0, int iParam1)//Position - 0xE603
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_128(int iParam0)//Position - 0xE6E0
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
		
		case 25:
			return 307;
			break;
		
		case 26:
			return 317;
			break;
		
		case 27:
			return 337;
			break;
		
		case 28:
			return 350;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_126(iParam0);
		return func_129(iVar0);
	}
	return (func_120(iParam0, -1, 1) * iParam0);
}

int func_129(int iParam0)//Position - 0xE86A
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

int func_130(int iParam0)//Position - 0xE8A7
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

int func_131(int iParam0, int iParam1)//Position - 0xE8DC
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_85();
	}
	if (iParam0 == 7 && !Global_262145.f_17499)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_126(iParam0);
		if (iVar1 == 0 && func_234(5396, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_134(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_133(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_132(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1659765[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2869950[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 29)
		{
			return 0;
		}
		return Global_2869777[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_132(int iParam0)//Position - 0xE9CE
{
	return func_234(9517, iParam0, 0) != 0;
}

int func_133(int iParam0)//Position - 0xE9E2
{
	if (iParam0 != func_49())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336 != 0;
	}
	return 0;
}

bool func_134(int iParam0)//Position - 0xEA08
{
	if (!Global_262145.f_24199)
	{
		return 0;
	}
	return func_234(7210, iParam0, 0) != 0;
}

char* func_135(int iParam0, bool bParam1)//Position - 0xEA2B
{
	switch (iParam0)
	{
		case 174:
			if (bParam1)
			{
				return "DELVIRLG";
			}
			else
			{
				return "TXT_CAR_STOB";
			}
			break;
	}
	return "NULL";
}

int func_136(var uParam0)//Position - 0xEA5B
{
	int iVar0;
	
	iVar0 = func_137(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Call_Loc(iVar0);
	return StackVal;
}

var func_137(var uParam0)//Position - 0xEA78
{
	return uParam0->f_11;
}

var func_138(var uParam0)//Position - 0xEA84
{
	return uParam0->f_495;
}

char* func_139(int iParam0)//Position - 0xEA91
{
	char* sVar0;
	
	if (STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		sVar0 = func_247(func_29(iParam0));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			sVar0 = VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
		}
		return sVar0;
	}
	return "";
}

void func_140(int iParam0, int iParam1)//Position - 0xEAC7
{
	func_162(iParam0);
	func_141(iParam1);
}

void func_141(int iParam0)//Position - 0xEADB
{
	if (iParam0 >= 0 && iParam0 <= 363)
	{
		MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 2);
		func_160(101, 1, -1, 1);
		func_148(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
		if (!Global_1577982)
		{
			func_142(91, 3, 1);
			Global_1577982 = 1;
		}
		else
		{
			func_142(91, 3, 0);
		}
	}
}

void func_142(int iParam0, int iParam1, bool bParam2)//Position - 0xEB40
{
	int iVar0;
	
	Global_8822 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		func_107();
		if (iParam1 == 4)
		{
			func_147(iParam0, 0, 1);
			func_147(iParam0, 1, 1);
			func_147(iParam0, 2, 1);
			func_146(iParam0, 0, 1);
			func_146(iParam0, 1, 1);
			func_146(iParam0, 2, 1);
		}
		else
		{
			if (func_145(iParam0, iParam1) == 1 && func_144(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_147(iParam0, iVar0, 1);
			func_146(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { func_90(iParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { func_90(iParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						func_143();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { func_90(iParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					func_143();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { func_90(iParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				func_143();
			}
		}
	}
}

void func_143()//Position - 0xECB8
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
	if (Global_8841 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_8746[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8746[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8136, 0);
}

int func_144(int iParam0, int iParam1)//Position - 0xED33
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_145(int iParam0, int iParam1)//Position - 0xED5D
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

void func_146(int iParam0, int iParam1, int iParam2)//Position - 0xED87
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_147(int iParam0, int iParam1, int iParam2)//Position - 0xEDCC
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_148(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xEE11
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[func_159() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_158(1411, iParam0);
	func_157(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_158(1412, iParam0);
	func_157(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (func_156(iParam0))
	{
	}
	else
	{
		iVar1 = func_158(1413, iParam0);
		func_157(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_158(1414, iParam0) + iVar0);
				func_157(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (func_155(iParam0) + (iVar0 - 25));
				func_157(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_158(1439, iParam0) + iVar0);
			func_157(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = func_158(1441, iParam0);
	func_157(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_158(1442, iParam0);
	func_157(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_158(1443, iParam0);
	func_157(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (func_156(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_158(1444, iParam0);
		func_157(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = func_158(1445, iParam0);
	func_157(iVar1, uParam1->f_67, iParam3);
	if (func_156(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_158(1446, iParam0);
		func_157(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = func_158(1447, iParam0);
	func_157(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_158(1448, iParam0);
	func_157(iVar1, uParam1->f_70, -1);
	iVar1 = func_158(1449, iParam0);
	func_157(iVar1, uParam1->f_71, iParam3);
	iVar1 = func_158(1450, iParam0);
	func_157(iVar1, uParam1->f_72, iParam3);
	iVar1 = func_158(1451, iParam0);
	func_157(iVar1, uParam1->f_73, iParam3);
	iVar1 = func_158(1452, iParam0);
	func_157(iVar1, uParam1->f_5, iParam3);
	iVar1 = func_158(1453, iParam0);
	func_157(iVar1, uParam1->f_6, iParam3);
	iVar1 = func_158(1454, iParam0);
	func_157(iVar1, uParam1->f_7, iParam3);
	iVar1 = func_158(1455, iParam0);
	func_157(iVar1, uParam1->f_8, iParam3);
	if (func_156(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_158(3880, iParam0);
		func_157(iVar1, uParam1->f_74, iParam3);
		iVar1 = func_158(3881, iParam0);
		func_157(iVar1, uParam1->f_75, iParam3);
		iVar1 = func_158(3882, iParam0);
		func_157(iVar1, uParam1->f_76, iParam3);
		iVar1 = func_154(iParam0);
		func_157(iVar1, uParam1->f_97, iParam3);
		iVar1 = func_153(iParam0);
		func_157(iVar1, uParam1->f_99, iParam3);
		iVar1 = func_152(iParam0);
		func_157(iVar1, uParam1->f_98, iParam3);
		iVar1 = func_151(iParam0, 0);
		func_157(iVar1, uParam1->f_102, iParam3);
	}
	iVar2 = Global_2359296[func_159() /*5567*/].f_681.f_1275;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	func_83(1629, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_83(func_150(1, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_83(func_150(2, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_83(func_150(3, iParam0), uParam1->f_105, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_83(func_150(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_83(func_150(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_83(func_150(7, iParam0), uParam1->f_140, iParam3, 1, 0);
	if (!func_156(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_149(func_150(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_149(int iParam0, char* sParam1, int iParam2)//Position - 0xF267
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_84(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
	}
}

int func_150(int iParam0, int iParam1)//Position - 0xF290
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				case 307:
					return 9637;
				
				case 308:
					return 9644;
				
				case 309:
					return 9651;
				
				case 310:
					return 9658;
				
				case 311:
					return 9665;
				
				case 312:
					return 9672;
				
				case 313:
					return 9679;
				
				case 314:
					return 9686;
				
				case 315:
					return 9693;
				
				case 316:
					return 9700;
				
				case 317:
					return 9921;
				
				case 318:
					return 9928;
				
				case 319:
					return 9935;
				
				case 320:
					return 9942;
				
				case 321:
					return 9949;
				
				case 322:
					return 9956;
				
				case 323:
					return 9963;
				
				case 324:
					return 9970;
				
				case 325:
					return 9977;
				
				case 326:
					return 9984;
				
				case 327:
					return 9991;
				
				case 328:
					return 9998;
				
				case 329:
					return 10005;
				
				case 330:
					return 10012;
				
				case 331:
					return 10019;
				
				case 332:
					return 10026;
				
				case 333:
					return 10033;
				
				case 334:
					return 10040;
				
				case 335:
					return 10047;
				
				case 336:
					return 10054;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10447;
				
				case 338:
					return 10454;
				
				case 339:
					return 10461;
				
				case 340:
					return 10468;
				
				case 341:
					return 10475;
				
				case 342:
					return 10482;
				
				case 343:
					return 10489;
				
				case 344:
					return 10496;
				
				case 345:
					return 10503;
				
				case 346:
					return 10510;
				
				case 347:
					return 10517;
				
				case 348:
					return 10523;
				
				case 349:
					return 10529;
				
				case 350:
					return 10535;
				
				case 351:
					return 10542;
				
				case 352:
					return 10549;
				
				case 353:
					return 10556;
				
				case 354:
					return 10563;
				
				case 355:
					return 10570;
				
				case 356:
					return 10577;
				
				case 357:
					return 10584;
				
				case 358:
					return 10591;
				
				case 359:
					return 10598;
				
				case 360:
					return 10605;
				
				case 361:
					return 10611;
				
				case 362:
					return 10617;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 291:
					return 9057;
				
				case 292:
					return 9063;
				
				case 293:
					return 9069;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				case 304:
					return 9145;
				
				case 305:
					return 9151;
				
				case 306:
					return 9157;
				
				case 307:
					return 9638;
				
				case 308:
					return 9645;
				
				case 309:
					return 9652;
				
				case 310:
					return 9659;
				
				case 311:
					return 9666;
				
				case 312:
					return 9673;
				
				case 313:
					return 9680;
				
				case 314:
					return 9687;
				
				case 315:
					return 9694;
				
				case 316:
					return 9701;
				
				case 317:
					return 9922;
				
				case 318:
					return 9929;
				
				case 319:
					return 9936;
				
				case 320:
					return 9943;
				
				case 321:
					return 9950;
				
				case 322:
					return 9957;
				
				case 323:
					return 9964;
				
				case 324:
					return 9971;
				
				case 325:
					return 9978;
				
				case 326:
					return 9985;
				
				case 327:
					return 9992;
				
				case 328:
					return 9999;
				
				case 329:
					return 10006;
				
				case 330:
					return 10013;
				
				case 331:
					return 10020;
				
				case 332:
					return 10027;
				
				case 333:
					return 10034;
				
				case 334:
					return 10041;
				
				case 335:
					return 10048;
				
				case 336:
					return 10055;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10448;
				
				case 338:
					return 10455;
				
				case 339:
					return 10462;
				
				case 340:
					return 10469;
				
				case 341:
					return 10476;
				
				case 342:
					return 10483;
				
				case 343:
					return 10490;
				
				case 344:
					return 10497;
				
				case 345:
					return 10504;
				
				case 346:
					return 10511;
				
				case 347:
					return 10518;
				
				case 348:
					return 10524;
				
				case 349:
					return 10530;
				
				case 350:
					return 10536;
				
				case 351:
					return 10543;
				
				case 352:
					return 10550;
				
				case 353:
					return 10557;
				
				case 354:
					return 10564;
				
				case 355:
					return 10571;
				
				case 356:
					return 10578;
				
				case 357:
					return 10585;
				
				case 358:
					return 10592;
				
				case 359:
					return 10599;
				
				case 360:
					return 10606;
				
				case 361:
					return 10612;
				
				case 362:
					return 10618;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3336;
				
				case 78:
					return 3344;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4132;
				
				case 101:
					return 4140;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4292;
				
				case 121:
					return 4300;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4452;
				
				case 141:
					return 4460;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8988;
				
				case 282:
					return 8995;
				
				case 283:
					return 9002;
				
				case 284:
					return 9009;
				
				case 285:
					return 9016;
				
				case 286:
					return 9023;
				
				case 287:
					return 9030;
				
				case 288:
					return 9037;
				
				case 289:
					return 9044;
				
				case 290:
					return 9051;
				
				case 291:
					return 9058;
				
				case 292:
					return 9064;
				
				case 293:
					return 9070;
				
				case 294:
					return 9076;
				
				case 295:
					return 9083;
				
				case 296:
					return 9090;
				
				case 297:
					return 9097;
				
				case 298:
					return 9104;
				
				case 299:
					return 9111;
				
				case 300:
					return 9118;
				
				case 301:
					return 9125;
				
				case 302:
					return 9132;
				
				case 303:
					return 9139;
				
				case 304:
					return 9146;
				
				case 305:
					return 9152;
				
				case 306:
					return 9158;
				
				case 307:
					return 9639;
				
				case 308:
					return 9646;
				
				case 309:
					return 9653;
				
				case 310:
					return 9660;
				
				case 311:
					return 9667;
				
				case 312:
					return 9674;
				
				case 313:
					return 9681;
				
				case 314:
					return 9688;
				
				case 315:
					return 9695;
				
				case 316:
					return 9702;
				
				case 317:
					return 9923;
				
				case 318:
					return 9930;
				
				case 319:
					return 9937;
				
				case 320:
					return 9944;
				
				case 321:
					return 9951;
				
				case 322:
					return 9958;
				
				case 323:
					return 9965;
				
				case 324:
					return 9972;
				
				case 325:
					return 9979;
				
				case 326:
					return 9986;
				
				case 327:
					return 9993;
				
				case 328:
					return 10000;
				
				case 329:
					return 10007;
				
				case 330:
					return 10014;
				
				case 331:
					return 10021;
				
				case 332:
					return 10028;
				
				case 333:
					return 10035;
				
				case 334:
					return 10042;
				
				case 335:
					return 10049;
				
				case 336:
					return 10056;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10449;
				
				case 338:
					return 10456;
				
				case 339:
					return 10463;
				
				case 340:
					return 10470;
				
				case 341:
					return 10477;
				
				case 342:
					return 10484;
				
				case 343:
					return 10491;
				
				case 344:
					return 10498;
				
				case 345:
					return 10505;
				
				case 346:
					return 10512;
				
				case 347:
					return 10519;
				
				case 348:
					return 10525;
				
				case 349:
					return 10531;
				
				case 350:
					return 10537;
				
				case 351:
					return 10544;
				
				case 352:
					return 10551;
				
				case 353:
					return 10558;
				
				case 354:
					return 10565;
				
				case 355:
					return 10572;
				
				case 356:
					return 10579;
				
				case 357:
					return 10586;
				
				case 358:
					return 10593;
				
				case 359:
					return 10600;
				
				case 360:
					return 10607;
				
				case 361:
					return 10613;
				
				case 362:
					return 10619;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 49:
					return 2904;
				
				case 50:
					return 2910;
				
				case 51:
					return 2916;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 62:
					return 3028;
				
				case 63:
					return 3034;
				
				case 64:
					return 3040;
				
				case 65:
					return 3241;
				
				case 66:
					return 3249;
				
				case 67:
					return 3257;
				
				case 68:
					return 3265;
				
				case 69:
					return 3273;
				
				case 70:
					return 3281;
				
				case 71:
					return 3289;
				
				case 72:
					return 3297;
				
				case 73:
					return 3305;
				
				case 74:
					return 3313;
				
				case 75:
					return 3321;
				
				case 76:
					return 3329;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3353;
				
				case 80:
					return 3361;
				
				case 81:
					return 3369;
				
				case 82:
					return 3377;
				
				case 83:
					return 3385;
				
				case 84:
					return 3393;
				
				case 85:
					return 3401;
				
				case 86:
					return 3408;
				
				case 87:
					return 3415;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				
				case 89:
					return 4045;
				
				case 90:
					return 4053;
				
				case 91:
					return 4061;
				
				case 92:
					return 4069;
				
				case 93:
					return 4077;
				
				case 94:
					return 4085;
				
				case 95:
					return 4093;
				
				case 96:
					return 4101;
				
				case 97:
					return 4109;
				
				case 98:
					return 4117;
				
				case 99:
					return 4125;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4149;
				
				case 103:
					return 4157;
				
				case 104:
					return 4165;
				
				case 105:
					return 4173;
				
				case 106:
					return 4181;
				
				case 107:
					return 4189;
				
				case 108:
					return 4197;
				
				case 109:
					return 4205;
				
				case 110:
					return 4213;
				
				case 111:
					return 4221;
				
				case 112:
					return 4229;
				
				case 113:
					return 4237;
				
				case 114:
					return 4245;
				
				case 115:
					return 4253;
				
				case 116:
					return 4261;
				
				case 117:
					return 4269;
				
				case 118:
					return 4277;
				
				case 119:
					return 4285;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4309;
				
				case 123:
					return 4317;
				
				case 124:
					return 4325;
				
				case 125:
					return 4333;
				
				case 126:
					return 4341;
				
				case 127:
					return 4349;
				
				case 128:
					return 4357;
				
				case 129:
					return 4365;
				
				case 130:
					return 4373;
				
				case 131:
					return 4381;
				
				case 132:
					return 4389;
				
				case 133:
					return 4397;
				
				case 134:
					return 4405;
				
				case 135:
					return 4413;
				
				case 136:
					return 4421;
				
				case 137:
					return 4429;
				
				case 138:
					return 4437;
				
				case 139:
					return 4445;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4469;
				
				case 143:
					return 4477;
				
				case 144:
					return 4485;
				
				case 145:
					return 4493;
				
				case 146:
					return 4501;
				
				case 147:
					return 4509;
				
				case 148:
					return 4517;
				
				case 149:
					return 4525;
				
				case 150:
					return 4533;
				
				case 151:
					return 4541;
				
				case 152:
					return 4549;
				
				case 153:
					return 4557;
				
				case 154:
					return 4565;
				
				case 155:
					return 4573;
				
				case 156:
					return 4581;
				
				case 157:
					return 4589;
				
				case 158:
					return 5482;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8989;
				
				case 282:
					return 8996;
				
				case 283:
					return 9003;
				
				case 284:
					return 9010;
				
				case 285:
					return 9017;
				
				case 286:
					return 9024;
				
				case 287:
					return 9031;
				
				case 288:
					return 9038;
				
				case 289:
					return 9045;
				
				case 290:
					return 9052;
				
				case 291:
					return 9059;
				
				case 292:
					return 9065;
				
				case 293:
					return 9071;
				
				case 294:
					return 9077;
				
				case 295:
					return 9084;
				
				case 296:
					return 9091;
				
				case 297:
					return 9098;
				
				case 298:
					return 9105;
				
				case 299:
					return 9112;
				
				case 300:
					return 9119;
				
				case 301:
					return 9126;
				
				case 302:
					return 9133;
				
				case 303:
					return 9140;
				
				case 304:
					return 9147;
				
				case 305:
					return 9153;
				
				case 306:
					return 9159;
				
				case 307:
					return 9640;
				
				case 308:
					return 9647;
				
				case 309:
					return 9654;
				
				case 310:
					return 9661;
				
				case 311:
					return 9668;
				
				case 312:
					return 9675;
				
				case 313:
					return 9682;
				
				case 314:
					return 9689;
				
				case 315:
					return 9696;
				
				case 316:
					return 9703;
				
				case 317:
					return 9924;
				
				case 318:
					return 9931;
				
				case 319:
					return 9938;
				
				case 320:
					return 9945;
				
				case 321:
					return 9952;
				
				case 322:
					return 9959;
				
				case 323:
					return 9966;
				
				case 324:
					return 9973;
				
				case 325:
					return 9980;
				
				case 326:
					return 9987;
				
				case 327:
					return 9994;
				
				case 328:
					return 10001;
				
				case 329:
					return 10008;
				
				case 330:
					return 10015;
				
				case 331:
					return 10022;
				
				case 332:
					return 10029;
				
				case 333:
					return 10036;
				
				case 334:
					return 10043;
				
				case 335:
					return 10050;
				
				case 336:
					return 10057;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10450;
				
				case 338:
					return 10457;
				
				case 339:
					return 10464;
				
				case 340:
					return 10471;
				
				case 341:
					return 10478;
				
				case 342:
					return 10485;
				
				case 343:
					return 10492;
				
				case 344:
					return 10499;
				
				case 345:
					return 10506;
				
				case 346:
					return 10513;
				
				case 347:
					return 10520;
				
				case 348:
					return 10526;
				
				case 349:
					return 10532;
				
				case 350:
					return 10538;
				
				case 351:
					return 10545;
				
				case 352:
					return 10552;
				
				case 353:
					return 10559;
				
				case 354:
					return 10566;
				
				case 355:
					return 10573;
				
				case 356:
					return 10580;
				
				case 357:
					return 10587;
				
				case 358:
					return 10594;
				
				case 359:
					return 10601;
				
				case 360:
					return 10608;
				
				case 361:
					return 10614;
				
				case 362:
					return 10620;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 23:
					return 1864;
				
				case 24:
					return 1870;
				
				case 25:
					return 1876;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 36:
					return 2241;
				
				case 37:
					return 2247;
				
				case 38:
					return 2253;
				
				case 39:
					return 2835;
				
				case 40:
					return 2842;
				
				case 41:
					return 2849;
				
				case 42:
					return 2856;
				
				case 43:
					return 2863;
				
				case 44:
					return 2870;
				
				case 45:
					return 2877;
				
				case 46:
					return 2884;
				
				case 47:
					return 2891;
				
				case 48:
					return 2898;
				
				case 49:
					return 2905;
				
				case 50:
					return 2911;
				
				case 51:
					return 2917;
				
				case 52:
					return 2959;
				
				case 53:
					return 2966;
				
				case 54:
					return 2973;
				
				case 55:
					return 2980;
				
				case 56:
					return 2987;
				
				case 57:
					return 2994;
				
				case 58:
					return 3001;
				
				case 59:
					return 3008;
				
				case 60:
					return 3015;
				
				case 61:
					return 3022;
				
				case 62:
					return 3029;
				
				case 63:
					return 3035;
				
				case 64:
					return 3041;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				case 85:
					return 3402;
				
				case 86:
					return 3409;
				
				case 87:
					return 3416;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				
				case 160:
					return 5939;
				
				case 161:
					return 5946;
				
				case 162:
					return 5953;
				
				case 163:
					return 5960;
				
				case 164:
					return 5967;
				
				case 165:
					return 5974;
				
				case 166:
					return 5981;
				
				case 167:
					return 5988;
				
				case 168:
					return 5995;
				
				case 169:
					return 6002;
				
				case 170:
					return 6009;
				
				case 171:
					return 6016;
				
				case 172:
					return 6023;
				
				case 173:
					return 6030;
				
				case 174:
					return 6037;
				
				case 175:
					return 6044;
				
				case 176:
					return 6051;
				
				case 177:
					return 6058;
				
				case 178:
					return 6065;
				
				case 179:
					return 6072;
				
				case 180:
					return 6079;
				
				case 181:
					return 6086;
				
				case 182:
					return 6093;
				
				case 183:
					return 6100;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				
				case 185:
					return 6184;
				
				case 186:
					return 6191;
				
				case 187:
					return 6198;
				
				case 188:
					return 6205;
				
				case 189:
					return 6212;
				
				case 190:
					return 6219;
				
				case 191:
					return 6226;
				
				case 192:
					return 6233;
				
				case 193:
					return 6240;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				
				case 195:
					return 6581;
				
				case 196:
					return 6588;
				
				case 197:
					return 6595;
				
				case 198:
					return 6602;
				
				case 199:
					return 6609;
				
				case 200:
					return 6616;
				
				case 201:
					return 6623;
				
				case 202:
					return 6630;
				
				case 203:
					return 6637;
				
				case 204:
					return 6644;
				
				case 205:
					return 6651;
				
				case 206:
					return 6658;
				
				case 207:
					return 6665;
				
				case 208:
					return 6672;
				
				case 209:
					return 6679;
				
				case 210:
					return 6686;
				
				case 211:
					return 6693;
				
				case 212:
					return 6700;
				
				case 213:
					return 6707;
				
				case 214:
					return 6714;
				
				case 215:
					return 6721;
				
				case 216:
					return 6728;
				
				case 217:
					return 6735;
				
				case 218:
					return 6742;
				
				case 219:
					return 6749;
				
				case 220:
					return 6756;
				
				case 221:
					return 6763;
				
				case 222:
					return 6770;
				
				case 223:
					return 6777;
				
				case 224:
					return 6784;
				
				case 225:
					return 6791;
				
				case 226:
					return 6798;
				
				case 227:
					return 6805;
				
				case 228:
					return 6812;
				
				case 229:
					return 6819;
				
				case 230:
					return 6826;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				
				case 232:
					return 7303;
				
				case 233:
					return 7310;
				
				case 234:
					return 7317;
				
				case 235:
					return 7324;
				
				case 236:
					return 7331;
				
				case 237:
					return 7338;
				
				case 238:
					return 7345;
				
				case 239:
					return 7352;
				
				case 240:
					return 7359;
				
				case 241:
					return 7366;
				
				case 242:
					return 7373;
				
				case 243:
					return 7380;
				
				case 244:
					return 7387;
				
				case 245:
					return 7394;
				
				case 246:
					return 7401;
				
				case 247:
					return 7408;
				
				case 248:
					return 7415;
				
				case 249:
					return 7422;
				
				case 250:
					return 7429;
				
				case 251:
					return 7436;
				
				case 252:
					return 7443;
				
				case 253:
					return 7450;
				
				case 254:
					return 7457;
				
				case 255:
					return 7464;
				
				case 256:
					return 7471;
				
				case 257:
					return 7478;
				
				case 258:
					return 7485;
				
				case 259:
					return 7492;
				
				case 260:
					return 7499;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				
				case 262:
					return 8026;
				
				case 263:
					return 8033;
				
				case 264:
					return 8040;
				
				case 265:
					return 8047;
				
				case 266:
					return 8054;
				
				case 267:
					return 8061;
				
				case 268:
					return 8068;
				
				case 269:
					return 8075;
				
				case 270:
					return 8082;
				
				case 271:
					return 8543;
				
				case 272:
					return 8550;
				
				case 273:
					return 8557;
				
				case 274:
					return 8564;
				
				case 275:
					return 8571;
				
				case 276:
					return 8578;
				
				case 277:
					return 8585;
				
				case 278:
					return 8592;
				
				case 279:
					return 8599;
				
				case 280:
					return 8606;
				
				case 281:
					return 8990;
				
				case 282:
					return 8997;
				
				case 283:
					return 9004;
				
				case 284:
					return 9011;
				
				case 285:
					return 9018;
				
				case 286:
					return 9025;
				
				case 287:
					return 9032;
				
				case 288:
					return 9039;
				
				case 289:
					return 9046;
				
				case 290:
					return 9053;
				
				case 291:
					return 9060;
				
				case 292:
					return 9066;
				
				case 293:
					return 9072;
				
				case 294:
					return 9078;
				
				case 295:
					return 9085;
				
				case 296:
					return 9092;
				
				case 297:
					return 9099;
				
				case 298:
					return 9106;
				
				case 299:
					return 9113;
				
				case 300:
					return 9120;
				
				case 301:
					return 9127;
				
				case 302:
					return 9134;
				
				case 303:
					return 9141;
				
				case 304:
					return 9148;
				
				case 305:
					return 9154;
				
				case 306:
					return 9160;
				
				case 307:
					return 9641;
				
				case 308:
					return 9648;
				
				case 309:
					return 9655;
				
				case 310:
					return 9662;
				
				case 311:
					return 9669;
				
				case 312:
					return 9676;
				
				case 313:
					return 9683;
				
				case 314:
					return 9690;
				
				case 315:
					return 9697;
				
				case 316:
					return 9704;
				
				case 317:
					return 9925;
				
				case 318:
					return 9932;
				
				case 319:
					return 9939;
				
				case 320:
					return 9946;
				
				case 321:
					return 9953;
				
				case 322:
					return 9960;
				
				case 323:
					return 9967;
				
				case 324:
					return 9974;
				
				case 325:
					return 9981;
				
				case 326:
					return 9988;
				
				case 327:
					return 9995;
				
				case 328:
					return 10002;
				
				case 329:
					return 10009;
				
				case 330:
					return 10016;
				
				case 331:
					return 10023;
				
				case 332:
					return 10030;
				
				case 333:
					return 10037;
				
				case 334:
					return 10044;
				
				case 335:
					return 10051;
				
				case 336:
					return 10058;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10451;
				
				case 338:
					return 10458;
				
				case 339:
					return 10465;
				
				case 340:
					return 10472;
				
				case 341:
					return 10479;
				
				case 342:
					return 10486;
				
				case 343:
					return 10493;
				
				case 344:
					return 10500;
				
				case 345:
					return 10507;
				
				case 346:
					return 10514;
				
				case 347:
					return 10521;
				
				case 348:
					return 10527;
				
				case 349:
					return 10533;
				
				case 350:
					return 10539;
				
				case 351:
					return 10546;
				
				case 352:
					return 10553;
				
				case 353:
					return 10560;
				
				case 354:
					return 10567;
				
				case 355:
					return 10574;
				
				case 356:
					return 10581;
				
				case 357:
					return 10588;
				
				case 358:
					return 10595;
				
				case 359:
					return 10602;
				
				case 360:
					return 10609;
				
				case 361:
					return 10615;
				
				case 362:
					return 10621;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1636;
				
				case 1:
					return 1643;
				
				case 2:
					return 1650;
				
				case 3:
					return 1657;
				
				case 4:
					return 1664;
				
				case 5:
					return 1671;
				
				case 6:
					return 1678;
				
				case 7:
					return 1685;
				
				case 8:
					return 1692;
				
				case 9:
					return 1699;
				
				case 13:
					return 1724;
				
				case 14:
					return 1803;
				
				case 15:
					return 1810;
				
				case 16:
					return 1817;
				
				case 17:
					return 1824;
				
				case 18:
					return 1831;
				
				case 19:
					return 1838;
				
				case 20:
					return 1845;
				
				case 21:
					return 1852;
				
				case 22:
					return 1859;
				
				case 26:
					return 2173;
				
				case 27:
					return 2180;
				
				case 28:
					return 2187;
				
				case 29:
					return 2194;
				
				case 30:
					return 2201;
				
				case 31:
					return 2208;
				
				case 32:
					return 2215;
				
				case 33:
					return 2222;
				
				case 34:
					return 2229;
				
				case 35:
					return 2236;
				
				case 39:
					return 2837;
				
				case 40:
					return 2844;
				
				case 41:
					return 2851;
				
				case 42:
					return 2858;
				
				case 43:
					return 2865;
				
				case 44:
					return 2872;
				
				case 45:
					return 2879;
				
				case 46:
					return 2886;
				
				case 47:
					return 2893;
				
				case 48:
					return 2900;
				
				case 52:
					return 2961;
				
				case 53:
					return 2968;
				
				case 54:
					return 2975;
				
				case 55:
					return 2982;
				
				case 56:
					return 2989;
				
				case 57:
					return 2996;
				
				case 58:
					return 3003;
				
				case 59:
					return 3010;
				
				case 60:
					return 3017;
				
				case 61:
					return 3024;
				
				case 65:
					return 3245;
				
				case 66:
					return 3253;
				
				case 67:
					return 3261;
				
				case 68:
					return 3269;
				
				case 69:
					return 3277;
				
				case 70:
					return 3285;
				
				case 71:
					return 3293;
				
				case 72:
					return 3301;
				
				case 73:
					return 3309;
				
				case 74:
					return 3317;
				
				case 75:
					return 3325;
				
				case 76:
					return 3333;
				
				case 77:
					return 3341;
				
				case 78:
					return 3349;
				
				case 79:
					return 3357;
				
				case 80:
					return 3365;
				
				case 81:
					return 3373;
				
				case 82:
					return 3381;
				
				case 83:
					return 3389;
				
				case 84:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4041;
				
				case 89:
					return 4049;
				
				case 90:
					return 4057;
				
				case 91:
					return 4065;
				
				case 92:
					return 4073;
				
				case 93:
					return 4081;
				
				case 94:
					return 4089;
				
				case 95:
					return 4097;
				
				case 96:
					return 4105;
				
				case 97:
					return 4113;
				
				case 98:
					return 4121;
				
				case 99:
					return 4129;
				
				case 100:
					return 4137;
				
				case 101:
					return 4145;
				
				case 102:
					return 4153;
				
				case 103:
					return 4161;
				
				case 104:
					return 4169;
				
				case 105:
					return 4177;
				
				case 106:
					return 4185;
				
				case 107:
					return 4193;
				
				case 108:
					return 4201;
				
				case 109:
					return 4209;
				
				case 110:
					return 4217;
				
				case 111:
					return 4225;
				
				case 112:
					return 4233;
				
				case 113:
					return 4241;
				
				case 114:
					return 4249;
				
				case 115:
					return 4257;
				
				case 116:
					return 4265;
				
				case 117:
					return 4273;
				
				case 118:
					return 4281;
				
				case 119:
					return 4289;
				
				case 120:
					return 4297;
				
				case 121:
					return 4305;
				
				case 122:
					return 4313;
				
				case 123:
					return 4321;
				
				case 124:
					return 4329;
				
				case 125:
					return 4337;
				
				case 126:
					return 4345;
				
				case 127:
					return 4353;
				
				case 128:
					return 4361;
				
				case 129:
					return 4369;
				
				case 130:
					return 4377;
				
				case 131:
					return 4385;
				
				case 132:
					return 4393;
				
				case 133:
					return 4401;
				
				case 134:
					return 4409;
				
				case 135:
					return 4417;
				
				case 136:
					return 4425;
				
				case 137:
					return 4433;
				
				case 138:
					return 4441;
				
				case 139:
					return 4449;
				
				case 140:
					return 4457;
				
				case 141:
					return 4465;
				
				case 142:
					return 4473;
				
				case 143:
					return 4481;
				
				case 144:
					return 4489;
				
				case 145:
					return 4497;
				
				case 146:
					return 4505;
				
				case 147:
					return 4513;
				
				case 148:
					return 4521;
				
				case 149:
					return 4529;
				
				case 150:
					return 4537;
				
				case 151:
					return 4545;
				
				case 152:
					return 4553;
				
				case 153:
					return 4561;
				
				case 154:
					return 4569;
				
				case 155:
					return 4577;
				
				case 156:
					return 4585;
				
				case 157:
					return 4593;
				
				case 158:
					return 5486;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5934;
				
				case 160:
					return 5941;
				
				case 161:
					return 5948;
				
				case 162:
					return 5955;
				
				case 163:
					return 5962;
				
				case 164:
					return 5969;
				
				case 165:
					return 5976;
				
				case 166:
					return 5983;
				
				case 167:
					return 5990;
				
				case 168:
					return 5997;
				
				case 169:
					return 6004;
				
				case 170:
					return 6011;
				
				case 171:
					return 6018;
				
				case 172:
					return 6025;
				
				case 173:
					return 6032;
				
				case 174:
					return 6039;
				
				case 175:
					return 6046;
				
				case 176:
					return 6053;
				
				case 177:
					return 6060;
				
				case 178:
					return 6067;
				
				case 179:
					return 6074;
				
				case 180:
					return 6081;
				
				case 181:
					return 6088;
				
				case 182:
					return 6095;
				
				case 183:
					return 6102;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6179;
				
				case 185:
					return 6186;
				
				case 186:
					return 6193;
				
				case 187:
					return 6200;
				
				case 188:
					return 6207;
				
				case 189:
					return 6214;
				
				case 190:
					return 6221;
				
				case 191:
					return 6228;
				
				case 192:
					return 6235;
				
				case 193:
					return 6242;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6576;
				
				case 195:
					return 6583;
				
				case 196:
					return 6590;
				
				case 197:
					return 6597;
				
				case 198:
					return 6604;
				
				case 199:
					return 6611;
				
				case 200:
					return 6618;
				
				case 201:
					return 6625;
				
				case 202:
					return 6632;
				
				case 203:
					return 6639;
				
				case 204:
					return 6646;
				
				case 205:
					return 6653;
				
				case 206:
					return 6660;
				
				case 207:
					return 6667;
				
				case 208:
					return 6674;
				
				case 209:
					return 6681;
				
				case 210:
					return 6688;
				
				case 211:
					return 6695;
				
				case 212:
					return 6702;
				
				case 213:
					return 6709;
				
				case 214:
					return 6716;
				
				case 215:
					return 6723;
				
				case 216:
					return 6730;
				
				case 217:
					return 6737;
				
				case 218:
					return 6744;
				
				case 219:
					return 6751;
				
				case 220:
					return 6758;
				
				case 221:
					return 6765;
				
				case 222:
					return 6772;
				
				case 223:
					return 6779;
				
				case 224:
					return 6786;
				
				case 225:
					return 6793;
				
				case 226:
					return 6800;
				
				case 227:
					return 6807;
				
				case 228:
					return 6814;
				
				case 229:
					return 6821;
				
				case 230:
					return 6828;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7298;
				
				case 232:
					return 7305;
				
				case 233:
					return 7312;
				
				case 234:
					return 7319;
				
				case 235:
					return 7326;
				
				case 236:
					return 7333;
				
				case 237:
					return 7340;
				
				case 238:
					return 7347;
				
				case 239:
					return 7354;
				
				case 240:
					return 7361;
				
				case 241:
					return 7368;
				
				case 242:
					return 7375;
				
				case 243:
					return 7382;
				
				case 244:
					return 7389;
				
				case 245:
					return 7396;
				
				case 246:
					return 7403;
				
				case 247:
					return 7410;
				
				case 248:
					return 7417;
				
				case 249:
					return 7424;
				
				case 250:
					return 7431;
				
				case 251:
					return 7438;
				
				case 252:
					return 7445;
				
				case 253:
					return 7452;
				
				case 254:
					return 7459;
				
				case 255:
					return 7466;
				
				case 256:
					return 7473;
				
				case 257:
					return 7480;
				
				case 258:
					return 7487;
				
				case 259:
					return 7494;
				
				case 260:
					return 7501;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8021;
				
				case 262:
					return 8028;
				
				case 263:
					return 8035;
				
				case 264:
					return 8042;
				
				case 265:
					return 8049;
				
				case 266:
					return 8056;
				
				case 267:
					return 8063;
				
				case 268:
					return 8070;
				
				case 269:
					return 8077;
				
				case 270:
					return 8084;
				
				case 271:
					return 8545;
				
				case 272:
					return 8552;
				
				case 273:
					return 8559;
				
				case 274:
					return 8566;
				
				case 275:
					return 8573;
				
				case 276:
					return 8580;
				
				case 277:
					return 8587;
				
				case 278:
					return 8594;
				
				case 279:
					return 8601;
				
				case 280:
					return 8608;
				
				case 281:
					return 8992;
				
				case 282:
					return 8999;
				
				case 283:
					return 9006;
				
				case 284:
					return 9013;
				
				case 285:
					return 9020;
				
				case 286:
					return 9027;
				
				case 287:
					return 9034;
				
				case 288:
					return 9041;
				
				case 289:
					return 9048;
				
				case 290:
					return 9055;
				
				case 294:
					return 9080;
				
				case 295:
					return 9087;
				
				case 296:
					return 9094;
				
				case 297:
					return 9101;
				
				case 298:
					return 9108;
				
				case 299:
					return 9115;
				
				case 300:
					return 9122;
				
				case 301:
					return 9129;
				
				case 302:
					return 9136;
				
				case 303:
					return 9143;
				
				case 307:
					return 9643;
				
				case 308:
					return 9650;
				
				case 309:
					return 9657;
				
				case 310:
					return 9664;
				
				case 311:
					return 9671;
				
				case 312:
					return 9678;
				
				case 313:
					return 9685;
				
				case 314:
					return 9692;
				
				case 315:
					return 9699;
				
				case 316:
					return 9706;
				
				case 317:
					return 9927;
				
				case 318:
					return 9934;
				
				case 319:
					return 9941;
				
				case 320:
					return 9948;
				
				case 321:
					return 9955;
				
				case 322:
					return 9962;
				
				case 323:
					return 9969;
				
				case 324:
					return 9976;
				
				case 325:
					return 9983;
				
				case 326:
					return 9990;
				
				case 327:
					return 9997;
				
				case 328:
					return 10004;
				
				case 329:
					return 10011;
				
				case 330:
					return 10018;
				
				case 331:
					return 10025;
				
				case 332:
					return 10032;
				
				case 333:
					return 10039;
				
				case 334:
					return 10046;
				
				case 335:
					return 10053;
				
				case 336:
					return 10060;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10453;
				
				case 338:
					return 10460;
				
				case 339:
					return 10467;
				
				case 340:
					return 10474;
				
				case 341:
					return 10481;
				
				case 342:
					return 10488;
				
				case 343:
					return 10495;
				
				case 344:
					return 10502;
				
				case 345:
					return 10509;
				
				case 346:
					return 10516;
				
				case 350:
					return 10541;
				
				case 351:
					return 10548;
				
				case 352:
					return 10555;
				
				case 353:
					return 10562;
				
				case 354:
					return 10569;
				
				case 355:
					return 10576;
				
				case 356:
					return 10583;
				
				case 357:
					return 10590;
				
				case 358:
					return 10597;
				
				case 359:
					return 10604;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 10:
					return 1705;
				
				case 11:
					return 1711;
				
				case 12:
					return 1717;
				
				case 13:
					return 1723;
				
				case 14:
					return 1802;
				
				case 15:
					return 1809;
				
				case 16:
					return 1816;
				
				case 17:
					return 1823;
				
				case 18:
					return 1830;
				
				case 19:
					return 1837;
				
				case 20:
					return 1844;
				
				case 21:
					return 1851;
				
				case 22:
					return 1858;
				
				case 23:
					return 1865;
				
				case 24:
					return 1871;
				
				case 25:
					return 1877;
				
				case 26:
					return 2172;
				
				case 27:
					return 2179;
				
				case 28:
					return 2186;
				
				case 29:
					return 2193;
				
				case 30:
					return 2200;
				
				case 31:
					return 2207;
				
				case 32:
					return 2214;
				
				case 33:
					return 2221;
				
				case 34:
					return 2228;
				
				case 35:
					return 2235;
				
				case 36:
					return 2242;
				
				case 37:
					return 2248;
				
				case 38:
					return 2254;
				
				case 39:
					return 2836;
				
				case 40:
					return 2843;
				
				case 41:
					return 2850;
				
				case 42:
					return 2857;
				
				case 43:
					return 2864;
				
				case 44:
					return 2871;
				
				case 45:
					return 2878;
				
				case 46:
					return 2885;
				
				case 47:
					return 2892;
				
				case 48:
					return 2899;
				
				case 49:
					return 2906;
				
				case 50:
					return 2912;
				
				case 51:
					return 2918;
				
				case 52:
					return 2960;
				
				case 53:
					return 2967;
				
				case 54:
					return 2974;
				
				case 55:
					return 2981;
				
				case 56:
					return 2988;
				
				case 57:
					return 2995;
				
				case 58:
					return 3002;
				
				case 59:
					return 3009;
				
				case 60:
					return 3016;
				
				case 61:
					return 3023;
				
				case 62:
					return 3030;
				
				case 63:
					return 3036;
				
				case 64:
					return 3042;
				
				case 65:
					return 3243;
				
				case 66:
					return 3251;
				
				case 67:
					return 3259;
				
				case 68:
					return 3267;
				
				case 69:
					return 3275;
				
				case 70:
					return 3283;
				
				case 71:
					return 3291;
				
				case 72:
					return 3299;
				
				case 73:
					return 3307;
				
				case 74:
					return 3315;
				
				case 75:
					return 3323;
				
				case 76:
					return 3331;
				
				case 77:
					return 3340;
				
				case 78:
					return 3348;
				
				case 79:
					return 3355;
				
				case 80:
					return 3363;
				
				case 81:
					return 3371;
				
				case 82:
					return 3379;
				
				case 83:
					return 3387;
				
				case 84:
					return 3395;
				
				case 85:
					return 3403;
				
				case 86:
					return 3410;
				
				case 87:
					return 3417;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4039;
				
				case 89:
					return 4047;
				
				case 90:
					return 4055;
				
				case 91:
					return 4063;
				
				case 92:
					return 4071;
				
				case 93:
					return 4079;
				
				case 94:
					return 4087;
				
				case 95:
					return 4095;
				
				case 96:
					return 4103;
				
				case 97:
					return 4111;
				
				case 98:
					return 4119;
				
				case 99:
					return 4127;
				
				case 100:
					return 4136;
				
				case 101:
					return 4144;
				
				case 102:
					return 4151;
				
				case 103:
					return 4159;
				
				case 104:
					return 4167;
				
				case 105:
					return 4175;
				
				case 106:
					return 4183;
				
				case 107:
					return 4191;
				
				case 108:
					return 4199;
				
				case 109:
					return 4207;
				
				case 110:
					return 4215;
				
				case 111:
					return 4223;
				
				case 112:
					return 4231;
				
				case 113:
					return 4239;
				
				case 114:
					return 4247;
				
				case 115:
					return 4255;
				
				case 116:
					return 4263;
				
				case 117:
					return 4271;
				
				case 118:
					return 4279;
				
				case 119:
					return 4287;
				
				case 120:
					return 4296;
				
				case 121:
					return 4304;
				
				case 122:
					return 4311;
				
				case 123:
					return 4319;
				
				case 124:
					return 4327;
				
				case 125:
					return 4335;
				
				case 126:
					return 4343;
				
				case 127:
					return 4351;
				
				case 128:
					return 4359;
				
				case 129:
					return 4367;
				
				case 130:
					return 4375;
				
				case 131:
					return 4383;
				
				case 132:
					return 4391;
				
				case 133:
					return 4399;
				
				case 134:
					return 4407;
				
				case 135:
					return 4415;
				
				case 136:
					return 4423;
				
				case 137:
					return 4431;
				
				case 138:
					return 4439;
				
				case 139:
					return 4447;
				
				case 140:
					return 4456;
				
				case 141:
					return 4464;
				
				case 142:
					return 4471;
				
				case 143:
					return 4479;
				
				case 144:
					return 4487;
				
				case 145:
					return 4495;
				
				case 146:
					return 4503;
				
				case 147:
					return 4511;
				
				case 148:
					return 4519;
				
				case 149:
					return 4527;
				
				case 150:
					return 4535;
				
				case 151:
					return 4543;
				
				case 152:
					return 4551;
				
				case 153:
					return 4559;
				
				case 154:
					return 4567;
				
				case 155:
					return 4575;
				
				case 156:
					return 4583;
				
				case 157:
					return 4591;
				
				case 158:
					return 5484;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5933;
				
				case 160:
					return 5940;
				
				case 161:
					return 5947;
				
				case 162:
					return 5954;
				
				case 163:
					return 5961;
				
				case 164:
					return 5968;
				
				case 165:
					return 5975;
				
				case 166:
					return 5982;
				
				case 167:
					return 5989;
				
				case 168:
					return 5996;
				
				case 169:
					return 6003;
				
				case 170:
					return 6010;
				
				case 171:
					return 6017;
				
				case 172:
					return 6024;
				
				case 173:
					return 6031;
				
				case 174:
					return 6038;
				
				case 175:
					return 6045;
				
				case 176:
					return 6052;
				
				case 177:
					return 6059;
				
				case 178:
					return 6066;
				
				case 179:
					return 6073;
				
				case 180:
					return 6080;
				
				case 181:
					return 6087;
				
				case 182:
					return 6094;
				
				case 183:
					return 6101;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6178;
				
				case 185:
					return 6185;
				
				case 186:
					return 6192;
				
				case 187:
					return 6199;
				
				case 188:
					return 6206;
				
				case 189:
					return 6213;
				
				case 190:
					return 6220;
				
				case 191:
					return 6227;
				
				case 192:
					return 6234;
				
				case 193:
					return 6241;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6575;
				
				case 195:
					return 6582;
				
				case 196:
					return 6589;
				
				case 197:
					return 6596;
				
				case 198:
					return 6603;
				
				case 199:
					return 6610;
				
				case 200:
					return 6617;
				
				case 201:
					return 6624;
				
				case 202:
					return 6631;
				
				case 203:
					return 6638;
				
				case 204:
					return 6645;
				
				case 205:
					return 6652;
				
				case 206:
					return 6659;
				
				case 207:
					return 6666;
				
				case 208:
					return 6673;
				
				case 209:
					return 6680;
				
				case 210:
					return 6687;
				
				case 211:
					return 6694;
				
				case 212:
					return 6701;
				
				case 213:
					return 6708;
				
				case 214:
					return 6715;
				
				case 215:
					return 6722;
				
				case 216:
					return 6729;
				
				case 217:
					return 6736;
				
				case 218:
					return 6743;
				
				case 219:
					return 6750;
				
				case 220:
					return 6757;
				
				case 221:
					return 6764;
				
				case 222:
					return 6771;
				
				case 223:
					return 6778;
				
				case 224:
					return 6785;
				
				case 225:
					return 6792;
				
				case 226:
					return 6799;
				
				case 227:
					return 6806;
				
				case 228:
					return 6813;
				
				case 229:
					return 6820;
				
				case 230:
					return 6827;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7297;
				
				case 232:
					return 7304;
				
				case 233:
					return 7311;
				
				case 234:
					return 7318;
				
				case 235:
					return 7325;
				
				case 236:
					return 7332;
				
				case 237:
					return 7339;
				
				case 238:
					return 7346;
				
				case 239:
					return 7353;
				
				case 240:
					return 7360;
				
				case 241:
					return 7367;
				
				case 242:
					return 7374;
				
				case 243:
					return 7381;
				
				case 244:
					return 7388;
				
				case 245:
					return 7395;
				
				case 246:
					return 7402;
				
				case 247:
					return 7409;
				
				case 248:
					return 7416;
				
				case 249:
					return 7423;
				
				case 250:
					return 7430;
				
				case 251:
					return 7437;
				
				case 252:
					return 7444;
				
				case 253:
					return 7451;
				
				case 254:
					return 7458;
				
				case 255:
					return 7465;
				
				case 256:
					return 7472;
				
				case 257:
					return 7479;
				
				case 258:
					return 7486;
				
				case 259:
					return 7493;
				
				case 260:
					return 7500;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8020;
				
				case 262:
					return 8027;
				
				case 263:
					return 8034;
				
				case 264:
					return 8041;
				
				case 265:
					return 8048;
				
				case 266:
					return 8055;
				
				case 267:
					return 8062;
				
				case 268:
					return 8069;
				
				case 269:
					return 8076;
				
				case 270:
					return 8083;
				
				case 271:
					return 8544;
				
				case 272:
					return 8551;
				
				case 273:
					return 8558;
				
				case 274:
					return 8565;
				
				case 275:
					return 8572;
				
				case 276:
					return 8579;
				
				case 277:
					return 8586;
				
				case 278:
					return 8593;
				
				case 279:
					return 8600;
				
				case 280:
					return 8607;
				
				case 281:
					return 8991;
				
				case 282:
					return 8998;
				
				case 283:
					return 9005;
				
				case 284:
					return 9012;
				
				case 285:
					return 9019;
				
				case 286:
					return 9026;
				
				case 287:
					return 9033;
				
				case 288:
					return 9040;
				
				case 289:
					return 9047;
				
				case 290:
					return 9054;
				
				case 291:
					return 9061;
				
				case 292:
					return 9067;
				
				case 293:
					return 9073;
				
				case 294:
					return 9079;
				
				case 295:
					return 9086;
				
				case 296:
					return 9093;
				
				case 297:
					return 9100;
				
				case 298:
					return 9107;
				
				case 299:
					return 9114;
				
				case 300:
					return 9121;
				
				case 301:
					return 9128;
				
				case 302:
					return 9135;
				
				case 303:
					return 9142;
				
				case 304:
					return 9149;
				
				case 305:
					return 9155;
				
				case 306:
					return 9161;
				
				case 307:
					return 9642;
				
				case 308:
					return 9649;
				
				case 309:
					return 9656;
				
				case 310:
					return 9663;
				
				case 311:
					return 9670;
				
				case 312:
					return 9677;
				
				case 313:
					return 9684;
				
				case 314:
					return 9691;
				
				case 315:
					return 9698;
				
				case 316:
					return 9705;
				
				case 317:
					return 9926;
				
				case 318:
					return 9933;
				
				case 319:
					return 9940;
				
				case 320:
					return 9947;
				
				case 321:
					return 9954;
				
				case 322:
					return 9961;
				
				case 323:
					return 9968;
				
				case 324:
					return 9975;
				
				case 325:
					return 9982;
				
				case 326:
					return 9989;
				
				case 327:
					return 9996;
				
				case 328:
					return 10003;
				
				case 329:
					return 10010;
				
				case 330:
					return 10017;
				
				case 331:
					return 10024;
				
				case 332:
					return 10031;
				
				case 333:
					return 10038;
				
				case 334:
					return 10045;
				
				case 335:
					return 10052;
				
				case 336:
					return 10059;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10452;
				
				case 338:
					return 10459;
				
				case 339:
					return 10466;
				
				case 340:
					return 10473;
				
				case 341:
					return 10480;
				
				case 342:
					return 10487;
				
				case 343:
					return 10494;
				
				case 344:
					return 10501;
				
				case 345:
					return 10508;
				
				case 346:
					return 10515;
				
				case 347:
					return 10522;
				
				case 348:
					return 10528;
				
				case 349:
					return 10534;
				
				case 350:
					return 10540;
				
				case 351:
					return 10547;
				
				case 352:
					return 10554;
				
				case 353:
					return 10561;
				
				case 354:
					return 10568;
				
				case 355:
					return 10575;
				
				case 356:
					return 10582;
				
				case 357:
					return 10589;
				
				case 358:
					return 10596;
				
				case 359:
					return 10603;
				
				case 360:
					return 10610;
				
				case 361:
					return 10616;
				
				case 362:
					return 10622;
				
				default:
			}
			break;
	}
	return 1630;
}

int func_151(int iParam0, bool bParam1)//Position - 0x16AF1
{
	if (iParam0 <= 38)
	{
		if (iParam0 < 10)
		{
			if (bParam1)
			{
				return (4212 + iParam0);
			}
			else
			{
				return (31488 + iParam0);
			}
		}
		else if (iParam0 > 12 && iParam0 < 23)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 3);
			}
			else
			{
				return ((31488 + iParam0) - 3);
			}
		}
		else if (iParam0 > 25 && iParam0 < 36)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 6);
			}
			else
			{
				return ((31488 + iParam0) - 6);
			}
		}
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30134 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30134 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_119(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	else if (iParam0 < 184)
	{
		return ((18036 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18953 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21942 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24535 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26319 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28039 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31488 + 30 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34036 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36528 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36528 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x16D95
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_119(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31528 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34056 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36548 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36548 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_153(int iParam0)//Position - 0x16FF9
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_119(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31478 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34016 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36508 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36508 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x1725D
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_119(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31468 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((33996 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36488 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36488 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x174C1
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_119(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return (31188 + ((iParam0 - 307) * iVar0));
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return (33436 + ((iParam0 - 317) * iVar0));
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return (35928 + ((iParam0 - 337) * iVar0));
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36168 + ((iParam0 - 350) * iVar0));
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x17768
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2)//Position - 0x17833
{
	if (iParam2 == -1)
	{
		iParam2 = func_85();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::_SET_PACKED_STAT_INT(iParam0, iParam1, iParam2);
}

int func_158(int iParam0, int iParam1)//Position - 0x1785B
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_119(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
		else if (iParam1 > 306 && iParam1 < 317)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (31158 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (31159 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (31160 + (iParam1 - 307) * 3);
			}
		}
		else if (iParam1 >= 317 && iParam1 < 337)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (33376 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (33377 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (33378 + (iParam1 - 317) * 3);
			}
		}
		else if (iParam1 >= 337 && iParam1 < 347)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35868 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35869 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35870 + (iParam1 - 337) * 3);
			}
		}
		else if (iParam1 >= 350 && iParam1 < 360)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35898 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35899 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35900 + (iParam1 - 350) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_119(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_119(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_119(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		iVar0 = (30708 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 307) * (1456 - 1411)));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		iVar0 = (32476 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 317) * (1456 - 1411)));
	}
	else if (iParam1 < 347)
	{
		iVar0 = (34878 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 337) * (1456 - 1411)));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		iVar0 = ((iParam1 - 347) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35328);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35329);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35330);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35331);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35332);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35333);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35334);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35335);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35336);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35337);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35338);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35339);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35340);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35341);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35342);
		}
	}
	else if (iParam1 < 360)
	{
		iVar0 = (35373 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 350) * (1456 - 1411)));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		iVar0 = ((iParam1 - 360) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35823);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35824);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35825);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35826);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35827);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35828);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35829);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35830);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35831);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35832);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35833);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35834);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35835);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35836);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35837);
		}
	}
	return iVar0;
}

int func_159()//Position - 0x18ED4
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_160(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x18EE1
{
	int iVar0;
	
	if (func_161())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][func_84(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_161()//Position - 0x18F13
{
	return 1;
	return 0;
}

void func_162(int iParam0)//Position - 0x18F20
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar0, 3);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_163(int iParam0)//Position - 0x18F74
{
	if (iParam0 != -1 && iParam0 < 30)
	{
		StringCopy(&(Global_2359296[func_159() /*5567*/].f_7.f_105[iParam0 /*16*/]), "", 64);
	}
}

void func_164(int iParam0)//Position - 0x18FA8
{
	MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 10);
	MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 12);
	func_148(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
}

void func_165(int iParam0, int iParam1, int iParam2)//Position - 0x18FE3
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_166(iParam0, iParam1, iParam2);
	if (iParam0 >= 363)
	{
		return;
	}
	if (iParam2 == func_85() || iParam2 == -1)
	{
		Global_1940666[iParam0] = iParam1;
	}
}

void func_166(int iParam0, int iParam1, int iParam2)//Position - 0x1902D
{
	if (iParam1 <= 255)
	{
		func_157(func_168(iParam0), iParam1, iParam2);
		func_157(func_167(iParam0), 0, iParam2);
	}
	else
	{
		func_157(func_168(iParam0), 255, iParam2);
		func_157(func_167(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_167(int iParam0)//Position - 0x19079
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31548 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34096 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36594 + iParam0) - 337);
	}
	return (24625 + iParam0);
}

int func_168(int iParam0)//Position - 0x1912A
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36568 + iParam0) - 337);
	}
	return (4036 + iParam0);
}

void func_169(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x192B1
{
	int iVar0;
	var uVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_202();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 12);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 8);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 9);
			func_200();
			func_198(iParam1, 1);
			Global_1952156 = 1;
		}
		func_173(iParam0, &(Global_1585857[iParam1 /*142*/]), bParam5);
		Global_1585857[iParam1 /*142*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 1);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 6);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		if (bParam4)
		{
			func_172(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
		}
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 27);
					break;
				
				case 1:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 28);
					break;
				}
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 13);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (BitTest(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			func_171(&iParam0, &(Global_1585857[iParam1 /*142*/].f_9), &(Global_1585857[iParam1 /*142*/].f_59));
			if (func_170(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2359296[func_159() /*5567*/].f_593.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 26);
			}
		}
		Global_2359296[func_159() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_148(iParam1, &(Global_1585857[iParam1 /*142*/]), 0, iParam9, 0, 0);
	}
}

bool func_170(int iParam0, var uParam1)//Position - 0x1950B
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return 0;
	}
	return *uParam1 != -1;
}

int func_171(int iParam0, var uParam1, var uParam2)//Position - 0x1977E
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_172(int iParam0)//Position - 0x19971
{
	Global_2359296[func_159() /*5567*/].f_681.f_2 = iParam0;
}

void func_173(int iParam0, var uParam1, bool bParam2)//Position - 0x1998B
{
	int iVar0;
	
	func_66(uParam1);
	if (bParam2)
	{
		uParam1->f_103 = 0;
		uParam1->f_105 = 0;
		StringCopy(&(uParam1->f_106), "", 64);
		StringCopy(&(uParam1->f_122), "", 64);
		uParam1->f_140 = 0;
		uParam1->f_138 = -1;
		uParam1->f_139 = -1;
		uParam1->f_141 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (Global_262145.f_11088)
		{
			MISC::SET_BIT(&(uParam1->f_103), 22);
		}
	}
	if (func_197(iParam0, 0))
	{
		func_196();
		MISC::SET_BIT(&(uParam1->f_103), 3);
	}
	func_176(iParam0, uParam1);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 3))
			{
				MISC::SET_BIT(&(uParam1->f_103), 2);
			}
		}
	}
	if (BitTest(uParam1->f_103, 8))
	{
		if (!func_174(iParam0))
		{
		}
	}
	else if (func_174(iParam0))
	{
		MISC::SET_BIT(&(uParam1->f_103), 8);
		MISC::SET_BIT(&(uParam1->f_103), 9);
	}
}

int func_174(int iParam0)//Position - 0x19A6D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_175(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0)//Position - 0x19AA5
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return BitTest(iVar0, 16);
			}
		}
	}
	return 0;
}

void func_176(int iParam0, var uParam1)//Position - 0x19AF0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_193(iParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), 0);
		if (BitTest(uParam1->f_77, 11))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_174(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_191(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !VEHICLE::_GET_DRIFT_TYRES_ENABLED(iParam0))
		{
			uParam1->f_102 = 2;
		}
		else if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			uParam1->f_102 = 1;
		}
		else if (VEHICLE::_GET_DRIFT_TYRES_ENABLED(iParam0))
		{
			uParam1->f_102 = 3;
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
		uParam1->f_79 = AUDIO::_GET_VEHICLE_DEFAULT_HORN_VARIATION(iParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
		VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam0, &(uParam1->f_97));
		VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam0);
		iVar0 = func_184(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
		if (!iVar0 == func_49())
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 1);
		}
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_183(iParam0))
				{
					MISC::SET_BIT(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("deathbike2")))
		{
			uParam1->f_99 = func_177(func_180(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

var func_177(int iParam0)//Position - 0x19C81
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_179(iParam0);
	func_178(iVar1, &uVar0);
	return uVar0;
}

bool func_178(int iParam0, int iParam1)//Position - 0x19C9C
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_179(int iParam0)//Position - 0x19F5E
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_180(int iParam0, int iParam1, int iParam2)//Position - 0x19FFC
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_181()) && Global_1576214)
	{
		if ((iParam0 == Global_1576215 && iParam1 == Global_1576216) && iParam2 == Global_1576217)
		{
			return 13;
		}
	}
	return 0;
}

int func_181()//Position - 0x1A1DE
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_182() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_182()//Position - 0x1A226
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_183(int iParam0)//Position - 0x1A23B
{
	if (Global_2815059.f_298 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0, var uParam1, var uParam2)//Position - 0x1A254
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (func_53(iParam0, 1))
		{
			*uParam1 = 1;
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot"))
				{
					*uParam2 = DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
				}
			}
			return func_51(iParam0);
		}
		else if (func_190(iParam0, 1))
		{
			return func_189(iParam0, 1, 0);
		}
		else if (func_188(iParam0, 1))
		{
			return func_187(iParam0, 1, 0);
		}
		else if (func_186(iParam0, 1))
		{
			*uParam1 = 2;
			return func_185(iParam0);
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					*uParam1 = 3;
					return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return PLAYER::PLAYER_ID();
}

int func_185(int iParam0)//Position - 0x1A338
{
	int iVar0;
	
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return func_52(iVar0, 0, 1, 0);
}

int func_186(int iParam0, bool bParam1)//Position - 0x1A355
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_187(int iParam0, bool bParam1, int iParam2)//Position - 0x1A394
{
	int iVar0;
	
	if (!func_188(iParam0, 1))
	{
		return func_49();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
		return func_52(iVar0, 0, bParam1, iParam2);
	}
	return func_49();
}

int func_188(int iParam0, bool bParam1)//Position - 0x1A3D5
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_189(int iParam0, bool bParam1, int iParam2)//Position - 0x1A414
{
	int iVar0;
	
	if (!func_190(iParam0, 1))
	{
		return func_49();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return func_52(iVar0, 0, bParam1, iParam2);
	}
	return func_49();
}

int func_190(int iParam0, bool bParam1)//Position - 0x1A455
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_191(int iParam0)//Position - 0x1A494
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577911));
			iVar3 = 20000;
			if (Global_1836584)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::_0x82ACC484FFA3B05F(iParam0);
				func_192(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_192(int iParam0)//Position - 0x1A521
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!BitTest(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_193(int iParam0, var uParam1)//Position - 0x1A581
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_67(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_195(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_171(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_194(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_194(int iParam0)//Position - 0x1A82C
{
	switch (iParam0)
	{
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
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_195(int iParam0)//Position - 0x1A8DC
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_196()//Position - 0x1A8FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 363)
	{
		if (BitTest(Global_1585857[iVar0 /*142*/].f_103, 3))
		{
			MISC::CLEAR_BIT(&(Global_1585857[iVar0 /*142*/].f_103), 3);
		}
		iVar0++;
	}
}

int func_197(int iParam0, int iParam1)//Position - 0x1A936
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (iParam1 == 0)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_198(int iParam0, bool bParam1)//Position - 0x1A999
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2815059.f_2309[iVar0 /*44*/].f_40 == iParam0)
			{
				func_198(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/]), "", 24);
		Global_2815059.f_2309[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_23), "", 64);
		Global_2815059.f_2309[iParam0 /*44*/].f_39 = -1;
		Global_2815059.f_2309[iParam0 /*44*/].f_40 = -1;
		func_199(&(Global_2815059.f_2309[iParam0 /*44*/].f_41));
		Global_2815059.f_2309[iParam0 /*44*/].f_43 = 0;
	}
}

void func_199(var uParam0)//Position - 0x1AA53
{
	uParam0->f_1 = 0;
}

void func_200()//Position - 0x1AA60
{
	func_201(10);
}

void func_201(int iParam0)//Position - 0x1AA6E
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1836751.f_4[iVar0]), iVar1);
}

void func_202()//Position - 0x1AA94
{
	Global_2703735.f_61.f_65 = 0;
	func_203(25);
	func_203(24);
}

void func_203(bool bParam0)//Position - 0x1AAB1
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

void func_204(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1AB01
{
	if (func_208() < 0 && Global_1958535)
	{
		return;
	}
	if (func_207(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_52, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_56, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (BitTest(Global_2703735.f_61.f_60, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (bParam0)
	{
		func_206(2);
	}
	else
	{
		func_206(1);
	}
	if (bParam1)
	{
		func_206(11);
	}
	if (bParam2)
	{
		func_206(32);
		if (bParam3)
		{
			if (func_208() >= 0 && BitTest(Global_1585857[func_208() /*142*/].f_103, 0))
			{
				func_206(33);
			}
		}
		else
		{
			func_203(33);
		}
		if (func_208() >= 0)
		{
			if (func_205(Global_1585857[func_208() /*142*/].f_66))
			{
				func_206(40);
			}
		}
	}
	else if (bParam5)
	{
		func_206(37);
	}
	if (bParam4)
	{
		func_206(36);
	}
	if (func_207(36))
	{
		if (func_207(2))
		{
			func_203(36);
		}
	}
	if (bParam6)
	{
		func_206(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2815059.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_205(int iParam0)//Position - 0x1AC29
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_206(bool bParam0)//Position - 0x1AC40
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

bool func_207(int iParam0)//Position - 0x1AC92
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_1, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_2, (iParam0 - 32));
}

int func_208()//Position - 0x1ACC0
{
	if (Global_2359296[func_159() /*5567*/].f_681.f_2 >= 363)
	{
		Global_2359296[func_159() /*5567*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_159() /*5567*/].f_681.f_2;
}

int func_209(int iParam0, int iParam1)//Position - 0x1AD03
{
	if (func_131(0, iParam1) != 0 && func_230(iParam0, 0))
	{
		return 1;
	}
	else if (func_131(6, iParam1) != 0 && func_230(iParam0, 6))
	{
		return 1;
	}
	else if (func_131(8, iParam1) != 0 && func_230(iParam0, 8))
	{
		return 1;
	}
	else if (func_131(11, iParam1) != 0 && func_230(iParam0, 11))
	{
		return 1;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 1;
	}
	else if (((func_234(5396, iParam1, 0) != 0 && func_229(15270, iParam1) == 7) && !Global_262145.f_21126) && func_217(iParam0, 156))
	{
		return 1;
	}
	else if (func_131(12, iParam1) != 0 && func_230(iParam0, 12))
	{
		return 1;
	}
	else if (func_131(13, -1) != 0 && func_230(iParam0, 13))
	{
		return 1;
	}
	else if (func_131(15, iParam1) != 0 && func_230(iParam0, 15))
	{
		return 1;
	}
	else if (func_134(iParam1) && func_217(iParam0, 223))
	{
		return 1;
	}
	else if (func_131(14, -1) != 0 && func_230(iParam0, 14))
	{
		return 1;
	}
	else if (func_131(18, iParam1) != 0 && func_230(iParam0, 18))
	{
		return 1;
	}
	else if (func_131(21, iParam1) != 0 && func_230(iParam0, 21))
	{
		return 1;
	}
	else if ((func_131(22, iParam1) != 0 && func_230(iParam0, 22)) && func_212())
	{
		return 1;
	}
	else if (func_132(iParam1) && func_217(iParam0, 278))
	{
		return 1;
	}
	else if ((func_131(25, iParam1) != 0 && func_230(iParam0, 25)) && func_210(1))
	{
		return 1;
	}
	else if (func_131(26, iParam1) != 0 && func_230(iParam0, 26))
	{
		return 1;
	}
	return 0;
}

bool func_210(bool bParam0)//Position - 0x1AF60
{
	if (bParam0)
	{
		return BitTest(func_234(9618, -1, 0), 0);
	}
	return func_211(PLAYER::PLAYER_ID());
}

int func_211(int iParam0)//Position - 0x1AF83
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_234(9618, -1, 0), 0);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_1, 0);
	}
	return 0;
}

bool func_212()//Position - 0x1AFB8
{
	return (func_215(0) && func_213(0));
}

int func_213(bool bParam0)//Position - 0x1AFCF
{
	if (bParam0)
	{
		return BitTest(func_234(8726, -1, 0), 4);
	}
	return func_214(PLAYER::PLAYER_ID());
}

int func_214(int iParam0)//Position - 0x1AFF2
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_234(8726, -1, 0), 4);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_40, 4);
	}
	return 0;
}

int func_215(bool bParam0)//Position - 0x1B027
{
	if (bParam0)
	{
		return func_216(27227, -1);
	}
	if (PLAYER::PLAYER_ID() != func_49())
	{
		return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_1, 2);
	}
	return 0;
}

bool func_216(int iParam0, int iParam1)//Position - 0x1B063
{
	if (iParam1 == -1)
	{
		iParam1 = func_85();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_217(int iParam0, int iParam1)//Position - 0x1B07F
{
	if (!func_228(iParam1) && !func_227(iParam0))
	{
		if (func_226(iParam0, 0))
		{
			if (iParam1 == func_225(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (func_224(iParam1))
		{
			return 0;
		}
	}
	if (func_37(iParam0))
	{
		if (!func_223(iParam1))
		{
			return 0;
		}
	}
	else if (func_223(iParam1))
	{
		return 0;
	}
	if (func_222(iParam1))
	{
		if (!(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)))
		{
			return 0;
		}
	}
	if (func_228(iParam1))
	{
		if (!func_227(iParam0))
		{
			return 0;
		}
		else if ((func_116(iParam0) + func_128(11)) != iParam1)
		{
			return 0;
		}
	}
	if (func_221(iParam1))
	{
		if (!func_220(iParam0))
		{
			return 0;
		}
	}
	else if (func_220(iParam0))
	{
		return 0;
	}
	if (!func_219(iParam1, 1))
	{
		if (func_218(iParam0))
		{
			return 0;
		}
	}
	if (iParam1 == 223 && iParam0 != joaat("oppressor2"))
	{
		return 0;
	}
	if ((iParam1 == 278 && iParam0 != joaat("toreador")) && iParam0 != joaat("stromberg"))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0)//Position - 0x1B235
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 1;
			break;
	}
	return 0;
}

int func_219(int iParam0, bool bParam1)//Position - 0x1B282
{
	if (iParam0 >= func_128(18) && iParam0 < func_119(20))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((iParam0 == 236 || iParam0 == 246) || iParam0 == 256)
		{
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x1B2D1
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("CONADA"):
			return 1;
		
		default:
	}
	return 0;
}

int func_221(int iParam0)//Position - 0x1B417
{
	if (iParam0 >= func_128(12) && iParam0 < func_119(12))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x1B43E
{
	if (iParam0 >= func_128(6) && iParam0 < func_119(6))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x1B463
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

int func_224(int iParam0)//Position - 0x1B52E
{
	switch (iParam0)
	{
		case 157:
		case 158:
		case 190:
		case 188:
		case 187:
		case 186:
		case 189:
		case 222:
		case 224:
		case 225:
		case 226:
		case 257:
		case 279:
			return 1;
			break;
	}
	if (iParam0 >= func_128(11) && iParam0 < func_119(11))
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x1B5B1
{
	if (func_227(iParam0))
	{
		return (func_116(iParam0) + func_128(11));
	}
	else
	{
		switch (iParam0)
		{
			case joaat("trailersmall2"):
				return 157;
				break;
			
			case joaat("hauler2"):
			case joaat("phantom3"):
				return 158;
				break;
			
			case joaat("avenger"):
				return 190;
				break;
			
			case joaat("khanjali"):
				return 188;
				break;
			
			case joaat("chernobog"):
				return 187;
				break;
			
			case joaat("riot2"):
				return 186;
				break;
			
			case joaat("thruster"):
				return 189;
				break;
		}
		if (iParam0 == joaat("terbyte"))
		{
			return 222;
		}
		else if (iParam0 == joaat("speedo4"))
		{
			return 224;
		}
		else if (iParam0 == joaat("mule4"))
		{
			return 225;
		}
		else if (iParam0 == joaat("pounder2"))
		{
			return 226;
		}
		if (iParam0 == joaat("rcbandito"))
		{
			return 257;
		}
		if (iParam0 == joaat("minitank"))
		{
			return 279;
		}
	}
	return -1;
}

int func_226(int iParam0, bool bParam1)//Position - 0x1B6AA
{
	if (func_227(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("trailersmall2"):
		case joaat("hauler2"):
		case joaat("phantom3"):
			if (!bParam1)
			{
				return 1;
			}
			break;
		
		case joaat("avenger"):
		case joaat("khanjali"):
		case joaat("chernobog"):
		case joaat("riot2"):
		case joaat("thruster"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("minitank"):
			return 1;
			break;
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x1B72F
{
	switch (iParam0)
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x1B776
{
	if (iParam0 >= func_128(11) && iParam0 < func_119(11))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0, int iParam1)//Position - 0x1B79D
{
	if (iParam1 == -1)
	{
		iParam1 = func_85();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

int func_230(int iParam0, int iParam1)//Position - 0x1B7B9
{
	int iVar0;
	
	if (iParam0 == joaat("minitank"))
	{
		return 0;
	}
	if ((((iParam0 == joaat("thruster") || iParam0 == joaat("khanjali")) || iParam0 == joaat("riot2")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("avenger"))
	{
		if (iParam1 == 13)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 != 11)
	{
		if (func_227(iParam0))
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (((((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3")) || iParam0 == joaat("monster3")) || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2"))
	{
		if (((iParam1 == 14 || iParam1 == 15) || iParam1 == 16) || iParam1 == 17)
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_220(iParam0))
	{
		if (iParam1 == 12)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 12)
	{
		return 0;
	}
	if (iParam0 == func_231())
	{
		if (iParam1 == 15)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == 6)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
		else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 5)
	{
		return 0;
	}
	else if ((((((((((((((iParam1 == 8 || iParam1 == 9) || iParam1 == 10) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16) || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22) || iParam1 == 25) || iParam1 == 26)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
	}
	else if (iParam1 == 11)
	{
		iVar0 = func_116(iParam0);
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_231()//Position - 0x1BAAF
{
	return joaat("terbyte");
}

void func_232(var uParam0)//Position - 0x1BABC
{
	int iVar0;
	
	iVar0 = func_233(85);
	Global_2676732[iVar0 /*83*/] = 85;
	Global_2676732[iVar0 /*83*/].f_17 = uParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_233(int iParam0)//Position - 0x1BAF4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676732[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676732[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_234(int iParam0, int iParam1, int iParam2)//Position - 0x1BB41
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_84(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_235(int iParam0)//Position - 0x1BB7E
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case joaat("monster"):
			func_236(3604, 1, -1);
			break;
		
		case joaat("sovereign"):
			func_236(3605, 1, -1);
			break;
		
		case joaat("btype2"):
			func_236(4326, 1, -1);
			break;
		
		case joaat("lurcher"):
			func_236(4327, 1, -1);
			break;
		
		case joaat("tampa"):
			func_236(109, 1, -1);
			break;
		
		case joaat("btype3"):
			func_236(115, 1, -1);
			break;
		
		case joaat("sanctus"):
			func_236(124, 1, -1);
			break;
	}
	iVar0 = func_116(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = func_234(5372, -1, 0);
		MISC::SET_BIT(&iVar1, iVar0);
		func_83(5372, iVar1, -1, 1, 0);
	}
}

void func_236(int iParam0, bool bParam1, int iParam2)//Position - 0x1BC35
{
	if (iParam2 == -1)
	{
		iParam2 = func_85();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_237(int iParam0)//Position - 0x1BC53
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_240(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_238(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_238(var uParam0)//Position - 0x1BCA7
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_239(&(uParam0->f_14));
	func_239(&(uParam0->f_14.f_13));
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

void func_239(var uParam0)//Position - 0x1BDB3
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

int func_240(int iParam0)//Position - 0x1BDFB
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_241(var uParam0)//Position - 0x1BE26
{
	if (func_245(PLAYER::PLAYER_ID()))
	{
		return 825583449;
	}
	else if (func_244(PLAYER::PLAYER_ID()))
	{
		return 1021990419;
	}
	else if (func_243())
	{
		return -922984872;
	}
	else if (func_242(PLAYER::PLAYER_ID()))
	{
		return 728601621;
	}
	return 1098797251;
}

int func_242(int iParam0)//Position - 0x1BE84
{
	if (func_127(Global_1853348[iParam0 /*834*/].f_267.f_32, -1))
	{
		return 1;
	}
	return 0;
}

bool func_243()//Position - 0x1BEA7
{
	return SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_luxury_showroom")) > 0;
}

int func_244(int iParam0)//Position - 0x1BEBA
{
	if (iParam0 != func_49())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 25);
	}
	return 0;
}

int func_245(int iParam0)//Position - 0x1BEE0
{
	if (iParam0 != func_49())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_246(Global_2689235[iParam0 /*453*/].f_318.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_246(int iParam0)//Position - 0x1BF27
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
	}
	return -1;
}

char* func_247(int iParam0)//Position - 0x1C480
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_248(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		case 510:
			return "LANDSTLKR2";
		
		default:
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

int func_248(int iParam0, int iParam1)//Position - 0x1C63C
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case 79:
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_75446;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return joaat("gp1");
		
		case 320:
			return joaat("infernus2");
		
		case 321:
			return joaat("ruston");
		
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_75447;
		
		case 324:
			return Global_75448;
		
		case 325:
			return joaat("cheetah2");
		
		case 326:
			return joaat("torero");
		
		case 327:
			return joaat("vagner");
		
		case 328:
			return joaat("xa21");
		
		case 329:
			return joaat("apc");
		
		case 330:
			return joaat("dune3");
		
		case 331:
			return joaat("halftrack");
		
		case 332:
			return joaat("oppressor");
		
		case 333:
			return joaat("tampa3");
		
		case 334:
			return joaat("trailersmall2");
		
		case 335:
			return joaat("ardent");
		
		case 336:
			return joaat("nightshark");
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return joaat("microlight");
		
		case 339:
			return joaat("mogul");
		
		case 340:
			return joaat("rogue");
		
		case 341:
			return joaat("starling");
		
		case 342:
			return joaat("seabreeze");
		
		case 343:
			return joaat("tula");
		
		case 344:
			return joaat("pyro");
		
		case 345:
			return joaat("molotok");
		
		case 346:
			return joaat("nokota");
		
		case 347:
			return joaat("bombushka");
		
		case 348:
			return joaat("hunter");
		
		case 349:
			return joaat("havok");
		
		case 350:
			return joaat("howard");
		
		case 351:
			return joaat("alphaz1");
		
		case 352:
			return joaat("cyclone");
		
		case 353:
			return joaat("visione");
		
		case 354:
			return joaat("retinue");
		
		case 355:
			return joaat("rapidgt3");
		
		case 356:
			return joaat("vigilante");
		
		case 357:
			return Global_75449;
		
		case 358:
			return joaat("deluxo");
		
		case 359:
			return joaat("stromberg");
		
		case 360:
			return joaat("riot2");
		
		case 361:
			return joaat("chernobog");
		
		case 362:
			return joaat("khanjali");
		
		case 363:
			return joaat("akula");
		
		case 364:
			return joaat("thruster");
		
		case 365:
			return joaat("barrage");
		
		case 366:
			return joaat("volatol");
		
		case 367:
			return joaat("comet4");
		
		case 368:
			return joaat("neon");
		
		case 369:
			return joaat("streiter");
		
		case 370:
			return joaat("sentinel3");
		
		case 371:
			return joaat("yosemite");
		
		case 372:
			return joaat("sc1");
		
		case 373:
			return joaat("autarch");
		
		case 374:
			return joaat("gt500");
		
		case 375:
			return joaat("hustler");
		
		case 376:
			return joaat("revolter");
		
		case 377:
			return joaat("pariah");
		
		case 378:
			return joaat("raiden");
		
		case 379:
			return joaat("savestra");
		
		case 380:
			return joaat("riata");
		
		case 381:
			return joaat("hermes");
		
		case 382:
			return joaat("comet5");
		
		case 383:
			return joaat("z190");
		
		case 384:
			return joaat("viseris");
		
		case 385:
			return joaat("kamacho");
		
		case 386:
			return joaat("gb200");
		
		case 387:
			return joaat("fagaloa");
		
		case 388:
			return joaat("ellie");
		
		case 389:
			return joaat("issi3");
		
		case 390:
			return joaat("michelli");
		
		case 391:
			return joaat("flashgt");
		
		case 392:
			return joaat("hotring");
		
		case 393:
			return joaat("tezeract");
		
		case 394:
			return joaat("tyrant");
		
		case 395:
			return joaat("dominator3");
		
		case 396:
			return joaat("taipan");
		
		case 397:
			return joaat("entity2");
		
		case 398:
			return joaat("jester3");
		
		case 399:
			return joaat("cheburek");
		
		case 400:
			return joaat("caracara");
		
		case 401:
			return joaat("seasparrow");
		
		case 402:
			return Global_75450;
		
		case 403:
			return joaat("mule4");
		
		case 404:
			return joaat("pounder2");
		
		case 405:
			return joaat("swinger");
		
		case 406:
			return joaat("menacer");
		
		case 407:
			return joaat("scramjet");
		
		case 408:
			return joaat("strikeforce");
		
		case 409:
			return joaat("oppressor2");
		
		case 410:
			return joaat("patriot2");
		
		case 411:
			return joaat("stafford");
		
		case 412:
			return joaat("freecrawler");
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return joaat("blimp3");
		
		case 414:
			return joaat("pbus2");
		
		case 425:
			return joaat("cerberus");
		
		case 426:
			return joaat("cerberus2");
		
		case 427:
			return joaat("cerberus3");
		
		case 428:
			return joaat("brutus");
		
		case 429:
			return joaat("brutus2");
		
		case 430:
			return joaat("brutus3");
		
		case 431:
			return joaat("scarab");
		
		case 432:
			return joaat("scarab2");
		
		case 433:
			return joaat("scarab3");
		
		case 434:
			return joaat("imperator");
		
		case 435:
			return joaat("imperator2");
		
		case 436:
			return joaat("imperator3");
		
		case 437:
			return joaat("zr380");
		
		case 438:
			return joaat("zr3802");
		
		case 439:
			return joaat("zr3803");
		
		case 440:
			return joaat("impaler");
		
		case 450:
			return joaat("taxi");
		
		case 451:
			return joaat("bulldozer");
		
		case 452:
			return joaat("speedo2");
		
		case 453:
			return joaat("trash2");
		
		case 454:
			return joaat("barracks2");
		
		case 455:
			return joaat("mixer");
		
		case 456:
			return joaat("dune2");
		
		case 457:
			return joaat("tractor");
		
		case 458:
			return joaat("blista3");
		
		case 441:
			return joaat("vamos");
		
		case 442:
			return joaat("tulip");
		
		case 443:
			return joaat("deveste");
		
		case 444:
			return joaat("schlagen");
		
		case 445:
			return joaat("toros");
		
		case 446:
			return joaat("deviant");
		
		case 447:
			return joaat("clique");
		
		case 448:
			return joaat("italigto");
		
		case 449:
			return joaat("rcbandito");
		
		case 459:
			return joaat("thrax");
		
		case 460:
			return joaat("drafter");
		
		case 461:
			return joaat("locust");
		
		case 462:
			return joaat("novak");
		
		case 463:
			return joaat("zorrusso");
		
		case 464:
			return joaat("gauntlet3");
		
		case 465:
			return joaat("issi7");
		
		case 466:
			return joaat("zion3");
		
		case 467:
			return joaat("nebula");
		
		case 468:
			return joaat("hellion");
		
		case 469:
			return joaat("dynasty");
		
		case 470:
			return joaat("rrocket");
		
		case 471:
			return joaat("peyote2");
		
		case 472:
			return joaat("gauntlet4");
		
		case 473:
			return joaat("caracara2");
		
		case 474:
			return joaat("jugular");
		
		case 475:
			return joaat("s80");
		
		case 476:
			return joaat("krieger");
		
		case 477:
			return joaat("emerus");
		
		case 478:
			return joaat("neo");
		
		case 479:
			return joaat("paragon");
		
		case 480:
			return joaat("firetruk");
		
		case 481:
			return joaat("burrito2");
		
		case 482:
			return joaat("boxville");
		
		case 483:
			return joaat("stockade");
		
		case 484:
			return joaat("lguard");
		
		case 485:
			return joaat("blazer2");
		
		case 486:
			return joaat("zhaba");
		
		case 487:
			return joaat("minitank");
		
		case 488:
			return joaat("jb7002");
		
		case 489:
			return joaat("stryder");
		
		case 490:
			return joaat("vstr");
		
		case 491:
			return joaat("formula");
		
		case 492:
			return joaat("imorgon");
		
		case 493:
			return joaat("formula2");
		
		case 494:
			return joaat("furia");
		
		case 495:
			return joaat("rebla");
		
		case 496:
			return joaat("vagrant");
		
		case 497:
			return joaat("retinue2");
		
		case 498:
			return joaat("yosemite2");
		
		case 499:
			return joaat("komoda");
		
		case 500:
			return joaat("sultan2");
		
		case 501:
			return joaat("sugoi");
		
		case 502:
			return joaat("everon");
		
		case 503:
			return joaat("asbo");
		
		case 504:
			return joaat("kanjo");
		
		case 505:
			return joaat("outlaw");
		
		default:
	}
	switch (iParam0)
	{
		case 506:
			return joaat("club");
		
		case 507:
			return joaat("dukes3");
		
		case 508:
			return joaat("yosemite3");
		
		case 509:
			return joaat("penumbra2");
		
		case 510:
			return joaat("landstalker2");
		
		case 511:
			return joaat("seminole2");
		
		case 512:
			return joaat("tigon");
		
		case 513:
			return joaat("openwheel1");
		
		case 514:
			return joaat("openwheel2");
		
		case 515:
			return joaat("coquette4");
		
		case 516:
			return joaat("manana");
		
		case 517:
			return joaat("peyote");
		
		case 518:
			return func_30();
		
		case 519:
			return joaat("italirsx");
		
		case 520:
			return joaat("slamtruck");
		
		case 521:
			return joaat("brioso2");
		
		case 522:
			return joaat("weevil");
		
		case 523:
			return joaat("alkonost");
		
		case 524:
			return joaat("annihilator2");
		
		case 525:
			return joaat("dinghy5");
		
		case 526:
			return joaat("manchez2");
		
		case 527:
			return joaat("patrolboat");
		
		case 528:
			return joaat("squaddie");
		
		case 529:
			return joaat("toreador");
		
		case 530:
			return joaat("verus");
		
		case 531:
			return joaat("vetir");
		
		case 532:
			return joaat("winky");
		
		case 533:
			return joaat("longfin");
		
		case 534:
			return joaat("veto");
		
		case 535:
			return joaat("veto2");
		
		case 543:
			return joaat("zr350");
		
		case 537:
			return joaat("comet6");
		
		case 540:
			return joaat("jester4");
		
		case 542:
			return joaat("vectre");
		
		case 538:
			return joaat("cypher");
		
		case 548:
			return joaat("tailgater2");
		
		case 550:
			return joaat("euros");
		
		case 551:
			return joaat("growler");
		
		case 536:
			return joaat("calico");
		
		case 541:
			return joaat("remus");
		
		case 539:
			return joaat("dominator7");
		
		case 546:
			return joaat("futo2");
		
		case 545:
			return joaat("rt3000");
		
		case 544:
			return joaat("warrener2");
		
		case 547:
			return joaat("sultan3");
		
		case 549:
			return joaat("dominator8");
		
		case 552:
			return joaat("previon");
		
		case 554:
			return joaat("comet7");
		
		case 555:
			return joaat("shinobi");
		
		case 556:
			return joaat("reever");
		
		case 557:
			return joaat("baller7");
		
		case 558:
			return joaat("cinquemila");
		
		case 559:
			return joaat("jubilee");
		
		case 560:
			return joaat("astron");
		
		case 561:
			return joaat("deity");
		
		case 562:
			return joaat("zeno");
		
		case 563:
			return joaat("champion");
		
		case 564:
			return joaat("ignus");
		
		case 565:
			return joaat("buffalo4");
		
		case 566:
			return joaat("granger2");
		
		case 567:
			return joaat("iwagen");
		
		case 568:
			return joaat("patriot3");
		
		case 553:
			return joaat("supervolito2");
		
		case 569:
			return joaat("TENF");
		
		case 570:
			return joaat("SM722");
		
		case 571:
			return joaat("TORERO2");
		
		case 572:
			return joaat("CORSITA");
		
		case 573:
			return joaat("LM87");
		
		case 574:
			return joaat("OMNISEGT");
		
		case 575:
			return joaat("RHINEHART");
		
		case 576:
			return joaat("POSTLUDE");
		
		case 577:
			return joaat("KANJOSJ");
		
		case 578:
			return joaat("VIGERO2");
		
		case 579:
			return joaat("RUINER4");
		
		case 580:
			return joaat("DRAUGUR");
		
		case 581:
			return joaat("GREENWOOD");
		
		case 582:
			return joaat("CONADA");
		
		default:
	}
	return 0;
}

int func_249(int iParam0)//Position - 0x1E70B
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_250()//Position - 0x1E732
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_249(iVar0) != 2147483647)
		{
			if (func_240(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_251()//Position - 0x1E76D
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_252()//Position - 0x1E784
{
	if (Global_78319 && func_254())
	{
		return 0;
	}
	if (!Global_78319 && func_253())
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}

var func_253()//Position - 0x1E7C1
{
	return Global_75486;
}

var func_254()//Position - 0x1E7CD
{
	return Global_1931939;
}

int func_255(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1E7D9
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	
	if (func_251())
	{
		if (!func_252())
		{
			uParam0->f_3 = 3;
		}
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_85()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			uParam0->f_3 = 3;
		}
		switch (uParam0->f_3)
		{
			case 0:
				uVar0 = iParam2;
				iVar2 = 0;
				iVar3 = 0;
				iVar4 = uVar0;
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar4)
					{
						iVar3 = iVar4;
					}
					else
					{
						iVar3 = (iVar4 - (iVar4 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar4 = (iVar4 - iVar3);
				}
				if (iVar4 > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar4)
						{
							iVar2 = iVar4;
						}
						else
						{
							iVar2 = (iVar4 - (iVar4 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar4 = (iVar4 - iVar2);
					}
				}
				if (iVar4 > 0)
				{
					uParam0->f_3 = 3;
					func_77(uParam0, 1);
					return 0;
				}
				if (func_308(78225582, -1224924353, iParam4, -897111558, 1, iParam2, uParam3, 4, iParam5, 3))
				{
					if (func_306(uParam0))
					{
						if (func_308(78225582, -1224924353, iParam5, -897111558, 1, uVar0, uParam3, 4, 1479801209, 3))
						{
						}
						else
						{
							uParam0->f_3 = 3;
							return 1;
						}
					}
					if (func_263(uParam0->f_1, iParam6, 1, 0))
					{
						if (func_258())
						{
							if ((iVar2 != 0 || iVar3 != 0) || uVar1)
							{
								HUD::USE_FAKE_MP_CASH(true);
								HUD::CHANGE_FAKE_MP_CASH(-iVar2, -iVar3);
							}
							uParam0->f_3 = 1;
						}
						else
						{
							uParam0->f_3 = 3;
						}
					}
					else
					{
						uParam0->f_3 = 3;
					}
				}
				else
				{
					uParam0->f_3 = 3;
				}
				break;
			
			case 1:
				iVar5 = func_250();
				if (iVar5 >= 0 && iVar5 < 15)
				{
					if (func_257(iVar5))
					{
						if (func_256(iVar5) == 2)
						{
							uParam0->f_3 = 2;
						}
						else
						{
							uParam0->f_3 = 3;
						}
					}
				}
				else
				{
					uParam0->f_3 = 3;
				}
				break;
			
			case 2:
				uParam0->f_3 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam1 = 2;
				return 0;
				break;
			
			case 3:
				func_237(func_250());
				uParam0->f_3 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam1 = 3;
				return 0;
				break;
		}
		if (uParam0->f_3 == 3)
		{
			func_237(func_250());
			uParam0->f_3 = 0;
			HUD::USE_FAKE_MP_CASH(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			*iParam1 = 3;
			return 0;
		}
		return 1;
	}
	else
	{
		bVar6 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= false;
		bVar7 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < iParam2;
		if ((bVar6 && MONEY::NETWORK_CAN_SPEND_MONEY(iParam2, true, false, false, -1, 0)) || (bVar7 && MONEY::NETWORK_CAN_SPEND_MONEY(iParam2, false, true, false, -1, 0)))
		{
			*iParam1 = 2;
			return 0;
		}
		else
		{
			*iParam1 = 3;
			func_77(uParam0, 1);
			return 0;
		}
	}
	uParam0->f_3 = 0;
	*iParam1 = 0;
	return 0;
}

int func_256(int iParam0)//Position - 0x1EA83
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0x1EAAC
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_258()//Position - 0x1EAD7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_250();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_85()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_262(Global_4534105[iVar2 /*85*/].f_66.f_6, Global_4534105[iVar2 /*85*/].f_66.f_4, Global_4534105[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4535607 = 1;
			}
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_249(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4534105[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4534105[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4534105[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4534105[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4534105[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_259(Global_4534105[iVar2 /*85*/], iVar2);
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	return 0;
}

void func_259(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x1EC37
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_261(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_260();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar1);
	}
}

void func_260()//Position - 0x1ECC9
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_261(int iParam0)//Position - 0x1ECD9
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_262(int iParam0, int iParam1, int iParam2)//Position - 0x1ECF1
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_263(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1F2D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<4> Var22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	
	iVar10 = func_305(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4539334 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && func_37(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			func_301(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
			if (!func_300(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!func_300(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!func_298(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_299(iVar0)))
			{
				return 0;
			}
			if (!func_300(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!func_298(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_299(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar12 = func_296(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar13 = func_294(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar14 = func_290(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar15 = func_289(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar16 = func_288(iParam1);
		if (bVar11)
		{
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_286(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_286(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = func_285(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!func_283(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_284(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!func_282(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!func_282(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!func_280(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 3:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
				
				case 1:
					iVar18 = 3;
					break;
				
				case 4:
					iVar18 = 4;
					break;
				
				case 5:
					iVar18 = 5;
					break;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				
				case 0:
					iVar19 = 1;
					break;
				
				case 4:
					iVar19 = 2;
					break;
				
				case 2:
					iVar19 = 3;
					break;
				
				case 1:
					iVar19 = 4;
					break;
			}
			if (!func_287(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!func_287(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_287(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!func_287(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_287(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		func_301(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
		iVar20 = func_279(iVar9);
		if (!func_287(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
		if (bParam3)
		{
			while (func_278(iVar21, &Var22, &uVar23, &iVar24, &iVar25))
			{
				if (iVar24 == iVar6 && iVar25 == iVar8)
				{
					Var5 = { Var22 };
				}
				iVar21++;
			}
		}
		if (!func_300(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!func_300(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!func_298(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_299(iVar0)))
		{
			return 0;
		}
		if (!func_300(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!func_298(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_299(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
		switch (func_275(iVar26, iVar27, iVar28))
		{
			case 1:
				iVar29 = 3;
				break;
			
			case 2:
				iVar29 = 4;
				break;
			
			case 3:
				iVar29 = 5;
				break;
			
			case 4:
				iVar29 = 6;
				break;
			
			case 5:
				iVar29 = 11;
				break;
			
			case 6:
				iVar29 = 7;
				break;
			
			case 7:
				iVar29 = 10;
				break;
			
			case 8:
				iVar29 = 8;
				break;
			
			case 9:
				iVar29 = 12;
				break;
			
			case 10:
				iVar29 = 13;
				break;
			
			case 11:
				iVar29 = -1;
				break;
			
			case 12:
				iVar29 = 9;
				break;
			
			case 0:
				if (func_220(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2")))
				{
					iVar29 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!func_274(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12))
			{
				return 0;
			}
		}
		iVar30 = func_273(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2), (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1)), VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3));
		if (bVar11)
		{
			if (!func_272(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1))
			{
				return 0;
			}
		}
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
		iVar31 = func_180(iVar26, iVar27, iVar28);
		if (bVar11)
		{
			if (!func_272(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_287(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, func_271(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_287(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam1), 39, iVar14, func_271(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!func_270(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_269(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_268(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (bVar32)
			{
				func_267(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
			}
			VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_178(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_266(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (!bVar32)
			{
				if (iVar35 == 0)
				{
					sVar36 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar32 = true;
				}
				else if (iVar35 == 132)
				{
					sVar36 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar32 = true;
				}
			}
			if (bVar32)
			{
				func_267(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
			}
		}
		if (iParam2 && bVar11)
		{
			if (!func_265(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!func_264(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_264(int iParam0, char* sParam1)//Position - 0x201E0
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_265(int iParam0, char* sParam1, int iParam2)//Position - 0x2023D
{
	char cVar0[64];
	char cVar1[16];
	char cVar2[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || MISC::GET_HASH_KEY(&cVar1) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar2, "VEM_INSURANCE_", 64);
	StringConCat(&cVar2, &cVar1, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
		case joaat("manana2"):
			StringConCat(&cVar2, "2", 64);
			break;
		
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
		case joaat("mule3"):
			StringConCat(&cVar2, "3", 64);
			break;
		
		case joaat("tornado4"):
			StringConCat(&cVar2, "4", 64);
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar2)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar2), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_266(int iParam0)//Position - 0x20333
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

int func_267(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x20655
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		StringCopy(&cVar1, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar1, iParam4, 64);
		StringConCat(&cVar1, "_", 64);
		StringConCat(&cVar1, sParam2, 64);
		StringConCat(&cVar1, "_t", 64);
		StringIntConCat(&cVar1, iParam3, 64);
		StringConCat(&cVar1, "_v", 64);
		StringIntConCat(&cVar1, iParam5, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_268(int iParam0)//Position - 0x206F6
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

bool func_269(int iParam0, var uParam1)//Position - 0x20B48
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_270(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x20F11
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_271(int iParam0)//Position - 0x20F88
{
	switch (iParam0)
	{
		case joaat("windsor"):
			return 1;
			break;
	}
	return -1;
}

int func_272(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x20FA5
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar1, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_273(bool bParam0, bool bParam1, bool bParam2)//Position - 0x21044
{
	if ((bParam2 && bParam1) && bParam0)
	{
		return 7;
	}
	else if ((bParam2 && bParam1) && !bParam0)
	{
		return 6;
	}
	else if ((!bParam2 && bParam1) && bParam0)
	{
		return 5;
	}
	else if ((bParam2 && !bParam1) && bParam0)
	{
		return 4;
	}
	else if ((!bParam2 && bParam1) && !bParam0)
	{
		return 3;
	}
	else if ((bParam2 && !bParam1) && !bParam0)
	{
		return 2;
	}
	else if ((!bParam2 && !bParam1) && bParam0)
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x21109
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar1, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_275(int iParam0, int iParam1, int iParam2)//Position - 0x2119F
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1576215 && iParam1 == Global_1576216) && iParam2 == Global_1576217)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_277())
	{
		HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_276())
	{
		HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_276()//Position - 0x213CD
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

bool func_277()//Position - 0x213DE
{
	return DLC::IS_DLC_PRESENT(42019760);
}

bool func_278(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x213EF
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_279(int iParam0)//Position - 0x228E1
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_280(int iParam0, char* sParam1, int iParam2)//Position - 0x22B02
{
	char cVar0[64];
	int iVar1;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar1 = func_281(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar1))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_281(int iParam0)//Position - 0x22B5B
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
		
		case 10:
			StringConCat(&cVar0, "MWT_SUPERMOD3", 32);
			break;
		
		case 11:
			StringConCat(&cVar0, "MWT_SUPERMOD4", 32);
			break;
		
		case 12:
			StringConCat(&cVar0, "MWT_SUPERMOD5", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_282(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x22C7C
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	iVar2 = VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
	if (iVar2 == -1 || (iParam3 == 24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))
		{
			StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar1, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar1, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar2), 64);
	}
	StringConCat(&cVar1, "_t19_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_283(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x22D44
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_284(var uParam0)//Position - 0x22DC3
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
		
		case 53:
			sVar0 = "CMOD_AIRHORN_01";
			break;
		
		case 54:
			sVar0 = "CMOD_AIRHORN_02";
			break;
		
		case 55:
			sVar0 = "CMOD_AIRHORN_03";
			break;
	}
	return sVar0;
}

int func_285(int iParam0)//Position - 0x2308F
{
	switch (iParam0)
	{
		case joaat("indep_horn_1"):
			return 1;
			break;
		
		case joaat("indep_horn_2"):
			return 2;
			break;
		
		case joaat("indep_horn_3"):
			return 3;
			break;
		
		case joaat("indep_horn_4"):
			return 4;
			break;
		
		case joaat("hipster_horn_1"):
			return 5;
			break;
		
		case joaat("hipster_horn_2"):
			return 6;
			break;
		
		case joaat("hipster_horn_3"):
			return 7;
			break;
		
		case joaat("hipster_horn_4"):
			return 8;
			break;
		
		case joaat("dlc_busi2_c_major_notes_c0"):
			return 9;
			break;
		
		case joaat("dlc_busi2_c_major_notes_d0"):
			return 10;
			break;
		
		case joaat("dlc_busi2_c_major_notes_e0"):
			return 11;
			break;
		
		case joaat("dlc_busi2_c_major_notes_f0"):
			return 12;
			break;
		
		case joaat("dlc_busi2_c_major_notes_g0"):
			return 13;
			break;
		
		case joaat("dlc_busi2_c_major_notes_a0"):
			return 14;
			break;
		
		case joaat("dlc_busi2_c_major_notes_b0"):
			return 15;
			break;
		
		case joaat("dlc_busi2_c_major_notes_c1"):
			return 16;
			break;
		
		case joaat("musical_horn_business_1"):
			return 17;
			break;
		
		case joaat("musical_horn_business_2"):
			return 18;
			break;
		
		case joaat("musical_horn_business_3"):
			return 19;
			break;
		
		case joaat("musical_horn_business_4"):
			return 20;
			break;
		
		case joaat("musical_horn_business_5"):
			return 21;
			break;
		
		case joaat("musical_horn_business_6"):
			return 22;
			break;
		
		case joaat("musical_horn_business_7"):
			return 23;
			break;
		
		case joaat("luxe_horn_2"):
			return 24;
			break;
		
		case joaat("luxe_horn_1"):
			return 25;
			break;
		
		case joaat("luxe_horn_3"):
			return 26;
			break;
		
		case joaat("luxury_horn_2"):
			return 27;
			break;
		
		case joaat("luxory_horn_1"):
			return 28;
			break;
		
		case joaat("luxury_horn_3"):
			return 29;
			break;
		
		case joaat("LOWRIDER_HORN_1"):
			return 30;
			break;
		
		case joaat("LOWRIDER_HORN_2"):
			return 31;
			break;
		
		case joaat("LOWRIDER_HORN_1_PREVIEW"):
			return 32;
			break;
		
		case joaat("LOWRIDER_HORN_2_PREVIEW"):
			return 33;
			break;
		
		case joaat("ORGAN_HORN_LOOP_01"):
			return 34;
			break;
		
		case joaat("ORGAN_HORN_LOOP_02"):
			return 35;
			break;
		
		case joaat("ORGAN_HORN_LOOP_01_PREVIEW"):
			return 36;
			break;
		
		case joaat("ORGAN_HORN_LOOP_02_PREVIEW"):
			return 37;
			break;
		
		case joaat("XM15_HORN_01"):
			return 38;
			break;
		
		case joaat("XM15_HORN_02"):
			return 39;
			break;
		
		case joaat("XM15_HORN_03"):
			return 40;
			break;
		
		case joaat("XM15_HORN_01_PREVIEW"):
			return 41;
			break;
		
		case joaat("XM15_HORN_02_PREVIEW"):
			return 42;
			break;
		
		case joaat("XM15_HORN_03_PREVIEW"):
			return 43;
			break;
		
		case joaat("HORN_CLOWN"):
			return 46;
			break;
		
		case joaat("HORN_COP"):
			return 45;
			break;
		
		case joaat("HORN_TRUCK"):
			return 44;
			break;
		
		case joaat("HORN_MUSICAL_1"):
			return 47;
			break;
		
		case joaat("HORN_MUSICAL_2"):
			return 48;
			break;
		
		case joaat("HORN_MUSICAL_3"):
			return 49;
			break;
		
		case joaat("HORN_MUSICAL_4"):
			return 50;
			break;
		
		case joaat("HORN_MUSICAL_5"):
			return 51;
			break;
		
		case joaat("HORN_SAD_TROMBONE"):
			return 52;
			break;
		
		case joaat("dlc_aw_airhorn_01"):
			return 53;
			break;
		
		case joaat("dlc_aw_airhorn_02"):
			return 54;
			break;
		
		case joaat("dlc_aw_airhorn_03"):
			return 55;
			break;
		
		case joaat("dlc_aw_airhorn_01_preview"):
			return 56;
			break;
		
		case joaat("dlc_aw_airhorn_02_preview"):
			return 57;
			break;
		
		case joaat("dlc_aw_airhorn_03_preview"):
			return 58;
			break;
	}
	return 0;
}

int func_286(bool bParam0)//Position - 0x233C4
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_287(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x233D6
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !BitTest(Global_4539663[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar1, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar1, "_n", 64);
		StringIntConCat(&cVar1, iParam6, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_288(int iParam0)//Position - 0x234C9
{
	int iVar0;
	
	iVar0 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("revolter"):
		case joaat("savestra"):
		case joaat("comet4"):
		case joaat("viseris"):
			iVar0 = 1;
			break;
		
		case joaat("avenger"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_289(int iParam0)//Position - 0x2350B
{
	switch (iParam0)
	{
		case joaat("faction3"):
			return 12;
			break;
		
		case joaat("diablous"):
			return 4;
			break;
		
		case joaat("fcr"):
			return 4;
			break;
	}
	return func_305(iParam0);
}

int func_290(int iParam0)//Position - 0x23548
{
	switch (iParam0)
	{
		case joaat("btype2"):
			return 9;
			break;
		
		case joaat("lurcher"):
			return 8;
			break;
		
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
		
		case joaat("btype3"):
			return 5;
			break;
		
		case joaat("omnis"):
			return 13;
			break;
		
		case joaat("bf400"):
			return 14;
			break;
		
		case joaat("tropos"):
			return 15;
			break;
		
		case joaat("brioso"):
			return 16;
			break;
		
		case joaat("trophytruck"):
			return 17;
			break;
		
		case joaat("trophytruck2"):
			return 18;
			break;
		
		case joaat("cliffhanger"):
			return 19;
			break;
		
		case joaat("tampa2"):
			return 20;
			break;
		
		case joaat("gargoyle"):
			return 21;
			break;
		
		case joaat("le7b"):
			return 22;
			break;
		
		case joaat("lynx"):
			return 24;
			break;
		
		case joaat("sheava"):
			return 25;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_293(iParam0))
	{
		return 33;
	}
	else if (func_292(iParam0))
	{
		return 34;
	}
	if (func_291(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_291(int iParam0)//Position - 0x2371A
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_292(int iParam0)//Position - 0x23806
{
	switch (iParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
			break;
	}
	return 0;
}

int func_293(int iParam0)//Position - 0x2384D
{
	switch (iParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
		case joaat("seasparrow2"):
			return 1;
			break;
	}
	return 0;
}

int func_294(int iParam0)//Position - 0x238DC
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 3;
			break;
		
		case joaat("sabregt2"):
			return 3;
			break;
		
		case joaat("slamvan3"):
			return 3;
			break;
		
		case joaat("tornado5"):
			return 3;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_291(iParam0))
	{
		return 38;
	}
	if (func_295(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_295(int iParam0)//Position - 0x23A51
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("GREENWOOD"):
		case joaat("OMNISEGT"):
			return 1;
			break;
	}
	return 0;
}

int func_296(int iParam0)//Position - 0x23A98
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("youga3"):
			return 27;
			break;
		
		case joaat("gauntlet5"):
			return 27;
			break;
		
		case joaat("manana2"):
			return 27;
			break;
		
		case joaat("peyote3"):
			return 27;
			break;
		
		case joaat("yosemite3"):
			return 27;
			break;
		
		case joaat("glendale2"):
			return 27;
			break;
	}
	switch (iParam0)
	{
		case joaat("apc"):
			return 29;
			break;
		
		case joaat("halftrack"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("deluxo"):
			return 29;
			break;
		
		case joaat("stromberg"):
			return 29;
			break;
		
		case joaat("caracara"):
			return 29;
			break;
		
		case joaat("dune3"):
			return 30;
			break;
		
		case joaat("insurgent3"):
			return 30;
			break;
		
		case joaat("tampa3"):
			return 30;
			break;
		
		case joaat("technical3"):
			return 30;
			break;
		
		case joaat("oppressor"):
			return 31;
			break;
		
		case joaat("oppressor2"):
			return 31;
			break;
		
		case joaat("phantom3"):
			return 32;
			break;
		
		case joaat("hauler2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("barrage"):
			return 35;
			break;
		
		case joaat("mule4"):
			return 37;
			break;
		
		case joaat("speedo4"):
			return 36;
			break;
		
		case joaat("pounder2"):
			return 36;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("minitank"):
			return 36;
			break;
		
		case joaat("jb7002"):
			return 36;
			break;
	}
	if (func_293(iParam0))
	{
		return 33;
	}
	else if (func_292(iParam0))
	{
		return 34;
	}
	else if (func_291(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case joaat("vigilante"):
			return 31;
			break;
	}
	if (func_295(iParam0))
	{
		return 38;
	}
	if (func_297(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("sentinel3"):
		case joaat("riata"):
			return 3;
			break;
		
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("comet7"):
		case joaat("ignus"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("mule5"):
		case joaat("iwagen"):
			return 3;
			break;
	}
	return 0;
}

int func_297(int iParam0)//Position - 0x24F7E
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return 1;
			break;
		
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("slamvan2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("dukes3"):
		case joaat("club"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("mule5"):
		case joaat("champion"):
		case joaat("iwagen"):
		case joaat("reever"):
		case joaat("shinobi"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("BRIOSO3"):
		case joaat("CORSITA"):
		case joaat("DRAUGUR"):
		case joaat("GREENWOOD"):
		case joaat("KANJOSJ"):
		case joaat("LM87"):
		case joaat("POSTLUDE"):
		case joaat("RHINEHART"):
		case joaat("SM722"):
		case joaat("TENF"):
		case joaat("TENF2"):
		case joaat("TORERO2"):
		case joaat("VIGERO2"):
		case joaat("WEEVIL2"):
		case joaat("RUINER4"):
		case joaat("SENTINEL4"):
		case joaat("CONADA"):
		case joaat("OMNISEGT"):
			return 1;
			break;
	}
	return 0;
}

int func_298(int iParam0, char* sParam1, int iParam2)//Position - 0x258E9
{
	char cVar0[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iParam2))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_299(int iParam0)//Position - 0x25936
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_300(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x259E4
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar1, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar1, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar1, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar1, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar1, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar1, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar1, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar1, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 7)
	{
		StringConCat(&cVar1, "MCT_NONE_", 64);
	}
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (iParam6 == 7)
	{
		StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar1, iParam7, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_308(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

void func_301(int iParam0, int* iParam1, char* sParam2, int* iParam3, int* iParam4, char* sParam5, int* iParam6, int iParam7, char* sParam8, int* iParam9, int* iParam10, bool bParam11)//Position - 0x25B1B
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, iParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &iVar2);
		VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			if (!func_302(iVar3))
			{
				iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
				iVar4 = 0;
				while (iVar4 < iVar5)
				{
					VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, iVar2);
					VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
					if (iVar6 == *iParam3)
					{
						*iParam1 = iVar3;
						StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
						iVar4 = iVar5 + 1;
					}
					iVar4++;
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*iParam1 = 7;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(0, true);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 7;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			if (!func_302(iVar3))
			{
				iVar4 = 0;
				iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
				iVar4 = 0;
				while (iVar4 < iVar5)
				{
					VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
					VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
					if (iVar7 == *iParam6)
					{
						*iParam4 = iVar3;
						StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
						iVar4 = iVar5 + 1;
					}
					iVar4++;
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*iParam4 = 7;
		IntToString(sParam5, *iParam6, 16);
	}
	VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *iParam10);
}

int func_302(int iParam0)//Position - 0x25D1B
{
	if (!func_304() && func_303(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0)//Position - 0x25D3B
{
	switch (iParam0)
	{
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_304()//Position - 0x25D58
{
	return 0;
}

int func_305(int iParam0)//Position - 0x25D61
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("btype3"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("diablous2"):
		case joaat("fcr2"):
		case joaat("italigtb2"):
		case joaat("specter2"):
		case joaat("nero2"):
		case joaat("comet3"):
		case joaat("elegy"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("trailersmall2"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("trailerlarge"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("microlight"):
		case joaat("rogue"):
		case joaat("tula"):
		case joaat("havok"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("cyclone"):
		case joaat("visione"):
		case joaat("vigilante"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("cuban800"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("chernobog"):
		case joaat("deluxo"):
		case joaat("khanjali"):
		case joaat("riot2"):
		case joaat("stromberg"):
		case joaat("thruster"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("rcbandito"):
		case joaat("jb7002"):
		case joaat("minitank"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("seasparrow2"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("sultan3"):
		case joaat("buffalo4"):
		case joaat("deity"):
		case joaat("jubilee"):
		case joaat("granger2"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("WEEVIL2"):
		case joaat("TENF2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			return 3;
			break;
	}
	if (func_291(iParam0))
	{
		return 3;
	}
	if (func_295(iParam0))
	{
		return 3;
	}
	return func_296(iParam0);
}

int func_306(var uParam0)//Position - 0x2604F
{
	int iVar0;
	
	iVar0 = func_307(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Call_Loc(iVar0);
	return StackVal;
}

var func_307(var uParam0)//Position - 0x2606C
{
	return uParam0->f_10;
}

int func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x26078
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_85()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_250();
	if (iVar1 == -1)
	{
		if (!func_310(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_309(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4534105[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4534105[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4534105[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_309(int iParam0)//Position - 0x2619A
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_310(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x26229
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_251())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_85()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4534105[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4534105[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE547E9114277098F())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_311(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_311(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0x26326
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_251())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = uParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_259(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_312(var uParam0, int iParam1, bool bParam2)//Position - 0x26463
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_7(iParam1))
	{
		bVar0 = func_484(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar2 = func_29(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar1 = func_402(-1, iVar2, bVar0);
		if (iVar1 <= -1)
		{
			func_400(&iVar3, ENTITY::GET_ENTITY_MODEL(iParam1), bVar0, -1);
			iVar1 = iVar3;
		}
		if (!bParam2)
		{
			if (func_306(uParam0))
			{
				Global_1585308 = iParam1;
				Global_1585307 = func_296(ENTITY::GET_ENTITY_MODEL(iParam1));
				if (func_398(iParam1))
				{
					iVar1 = (iVar1 + func_351(73, 0, 0, 0, 0, 0));
				}
				iVar1 = (iVar1 + func_315(iParam1, 39, 0, 0, 0, 1));
			}
			if (func_313(uParam0) != 0f)
			{
				iVar1 = SYSTEM::CEIL((IntToFloat(iVar1) * ((100f - MISC::ABSF(func_313(uParam0))) / 100f)));
			}
		}
		return iVar1;
	}
	return -1;
}

float func_313(var uParam0)//Position - 0x2652F
{
	int iVar0;
	
	iVar0 = func_314(uParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	Call_Loc(iVar0);
	return StackVal;
}

var func_314(var uParam0)//Position - 0x2654C
{
	return uParam0->f_9;
}

int func_315(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x26558
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_350(iParam0, iParam1, iParam2);
			iVar0 = 0;
			if (!bParam5)
			{
				if (func_220(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					fVar2 = Global_262145.f_4775;
				}
				else
				{
					fVar2 = Global_262145.f_4772;
				}
			}
			else
			{
				fVar2 = 1f;
			}
			if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
			{
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) != -1 && !func_347(iParam0, 0, VEHICLE::GET_VEHICLE_MOD(iParam0, 0), 0))
				{
					iVar1 = func_351(func_340(0, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 0) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 3) != -1)
				{
					iVar1 = func_351(func_340(3, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 3) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 4) != -1)
				{
					iVar1 = func_351(func_340(4, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 4) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1 && !func_347(iParam0, 5, VEHICLE::GET_VEHICLE_MOD(iParam0, 5), 0))
				{
					iVar1 = func_351(func_340(5, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 5) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) != -1 && !func_347(iParam0, 6, VEHICLE::GET_VEHICLE_MOD(iParam0, 6), 0))
				{
					iVar1 = func_351(func_340(6, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 6) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
				{
					iVar1 = func_351(func_340(7, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 7) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != -1)
				{
					iVar1 = func_351(func_340(10, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 10) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 11) != -1)
				{
					iVar1 = func_351(func_340(11, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 11) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 12) != -1)
				{
					iVar1 = func_351(func_340(12, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 12) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 13) != -1 && !func_347(iParam0, 13, VEHICLE::GET_VEHICLE_MOD(iParam0, 13), 0))
				{
					iVar1 = func_351(func_340(13, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 13) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 14) != -1)
				{
					iVar3 = func_285(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam0, 14, VEHICLE::GET_VEHICLE_MOD(iParam0, 14)));
					iVar1 = func_351(func_340(14, 0, 0), iVar3, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 15) != -1)
				{
					iVar1 = func_351(func_340(15, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 15) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 16) != -1 && !func_347(iParam0, 16, VEHICLE::GET_VEHICLE_MOD(iParam0, 16), 0))
				{
					iVar1 = func_351(func_340(16, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 16) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 23) != -1)
				{
					iVar1 = func_326(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 23, VEHICLE::GET_VEHICLE_MOD(iParam0, 23)), VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0), VEHICLE::GET_VEHICLE_MOD(iParam0, 23) + 1, VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)));
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 24) != -1 && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					iVar1 = func_326(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 24, VEHICLE::GET_VEHICLE_MOD(iParam0, 24)), VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0), VEHICLE::GET_VEHICLE_MOD(iParam0, 24) + 1, VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)));
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) != -1)
				{
					iVar1 = func_351(func_340(1, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 1) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 2) != -1)
				{
					iVar1 = func_351(func_340(2, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 2) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 8) != -1)
				{
					iVar1 = func_351(func_340(8, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 8) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) != -1 && !func_347(iParam0, 9, VEHICLE::GET_VEHICLE_MOD(iParam0, 9), 0))
				{
					iVar4 = VEHICLE::GET_VEHICLE_MOD(iParam0, 9);
					if (((((Global_1585307 == 29 || Global_1585307 == 30) || Global_1585307 == 34) || Global_1585307 == 33) || Global_1585307 == 38) || Global_1585307 == 39)
					{
						iVar4 += 21;
					}
					iVar1 = func_351(func_340(9, 0, 0), iVar4 + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 18) && !func_347(iParam0, 18, 1, 0))
				{
					iVar1 = func_351(func_340(18, 0, 0), 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 22))
				{
					switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(iParam0))
					{
						case 255:
							iVar5 = 1;
							break;
						
						case 0:
							iVar5 = 2;
							break;
						
						case 1:
							iVar5 = 3;
							break;
						
						case 2:
							iVar5 = 4;
							break;
						
						case 3:
							iVar5 = 5;
							break;
						
						case 4:
							iVar5 = 6;
							break;
						
						case 5:
							iVar5 = 7;
							break;
						
						case 6:
							iVar5 = 8;
							break;
						
						case 7:
							iVar5 = 9;
							break;
						
						case 8:
							iVar5 = 10;
							break;
						
						case 9:
							iVar5 = 11;
							break;
						
						case 10:
							iVar5 = 12;
							break;
						
						case 11:
							iVar5 = 13;
							break;
						
						case 12:
							iVar5 = 14;
							break;
						
						case 13:
							iVar5 = 15;
							break;
					}
					iVar1 = func_351(29, iVar5, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if ((!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !func_347(iParam0, -1, -1, 1)) && !func_325(iParam1, iParam2))
				{
					iVar1 = func_351(58, 2, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if ((VEHICLE::_GET_DRIFT_TYRES_ENABLED(iParam0) && !func_347(iParam0, -1, -1, 1)) && !func_325(iParam1, iParam2))
				{
					iVar1 = func_351(58, 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 25) != -1)
				{
					iVar1 = func_351(func_340(25, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 25) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 26) != -1)
				{
					iVar1 = func_351(func_340(26, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 26) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 27) != -1)
				{
					iVar1 = func_351(func_340(27, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 27) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 28) != -1)
				{
					iVar1 = func_351(func_340(28, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 28) + 1, 0, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 28, VEHICLE::GET_VEHICLE_MOD(iParam0, 28)), 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 29) != -1)
				{
					iVar1 = func_351(func_340(29, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 29) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 30) != -1)
				{
					iVar1 = func_351(func_340(30, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 30) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 31) != -1)
				{
					iVar1 = func_351(func_340(31, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 31) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 32) != -1)
				{
					iVar1 = func_351(func_340(32, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 32) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 33) != -1)
				{
					iVar1 = func_351(func_340(33, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 33) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 34) != -1 && !func_347(iParam0, 34, VEHICLE::GET_VEHICLE_MOD(iParam0, 34), 0))
				{
					iVar1 = func_351(func_340(34, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 34) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 35) != -1)
				{
					iVar1 = func_351(func_340(35, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 35) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 36) != -1)
				{
					iVar1 = func_351(func_340(36, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 36) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 37) != -1)
				{
					iVar1 = func_351(func_340(37, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 37) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 38) > 0)
				{
					iVar1 = func_351(func_340(38, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 38) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 39) != -1)
				{
					iVar1 = func_351(func_340(39, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 39) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 40) != -1)
				{
					iVar1 = func_351(func_340(40, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 40) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 41) != -1)
				{
					iVar1 = func_351(func_340(41, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 41) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 42) != -1 && !func_347(iParam0, 42, VEHICLE::GET_VEHICLE_MOD(iParam0, 42), 0))
				{
					iVar1 = func_351(func_340(42, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 42) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 43) != -1 && !func_347(iParam0, 43, VEHICLE::GET_VEHICLE_MOD(iParam0, 43), 0))
				{
					iVar1 = func_351(func_340(43, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 43) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 44) != -1)
				{
					iVar1 = func_351(func_340(44, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 44) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 45) != -1)
				{
					iVar1 = func_351(func_340(45, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 45) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 46) != -1)
				{
					iVar1 = func_351(func_340(46, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 46) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 47) != -1)
				{
					iVar1 = func_351(func_340(47, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 47) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 48) != -1 && !func_347(iParam0, 48, VEHICLE::GET_VEHICLE_MOD(iParam0, 48), 0))
				{
					iVar1 = func_351(func_340(48, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 48) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
			}
			if (func_324(iParam0))
			{
				if (func_320(iParam0, bParam4, iParam3))
				{
				}
				else
				{
					iVar1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(func_319(iParam0, VEHICLE::GET_VEHICLE_LIVERY(iParam0))));
					iVar0 = (iVar0 + iVar1);
				}
			}
			if (func_318(iParam0) && VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam0) != 0)
			{
				iVar1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(func_316(iParam0, VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam0))));
				iVar0 = (iVar0 + iVar1);
			}
			iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * fVar2));
		}
	}
	return iVar0;
}

int func_316(int iParam0, int iParam1)//Position - 0x27143
{
	int iVar0;
	
	iVar0 = 12345;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("tornado5"):
			iVar0 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)) * Global_262145.f_15060));
			break;
	}
	return iVar0;
}

float func_317(int iParam0, bool bParam1)//Position - 0x27187
{
	if ((Global_1585307 == 38 || Global_1585307 == 39) && !bParam1)
	{
		return 1f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1f;
				break;
			
			case 1:
				return Global_262145.f_12392;
				break;
			
			case 2:
				return Global_262145.f_12393;
				break;
			
			case 3:
				return Global_262145.f_12394;
				break;
			
			case 4:
				return Global_262145.f_12395;
				break;
			
			case 5:
				return Global_262145.f_12396;
				break;
			
			case 6:
				return Global_262145.f_12397;
				break;
			
			case 7:
				return Global_262145.f_12398;
				break;
			
			case 8:
				return Global_262145.f_12399;
				break;
			
			case 9:
				return Global_262145.f_12400;
				break;
			
			case 10:
				return Global_262145.f_12401;
				break;
			
			case 11:
				return Global_262145.f_12402;
				break;
			
			case 12:
				return Global_262145.f_12403;
				break;
			
			case 13:
				return Global_262145.f_12404;
				break;
			
			case 14:
				return Global_262145.f_12405;
				break;
			
			case 15:
				return Global_262145.f_12406;
				break;
			
			case 16:
				return Global_262145.f_12407;
				break;
			
			case 17:
				return Global_262145.f_12408;
				break;
			
			case 18:
				return Global_262145.f_12409;
				break;
			
			case 19:
				return Global_262145.f_12410;
				break;
			
			case 20:
				return Global_262145.f_12411;
				break;
			
			case 21:
				return Global_262145.f_12412;
				break;
			
			case 22:
				return Global_262145.f_12413;
				break;
			
			case 23:
				return Global_262145.f_12414;
				break;
			
			case 24:
				return Global_262145.f_12415;
				break;
			
			case 25:
				return Global_262145.f_12416;
				break;
			
			case 26:
				return Global_262145.f_12417;
				break;
			
			case 27:
				return Global_262145.f_12418;
				break;
			
			case 28:
				return Global_262145.f_12419;
				break;
			
			case 29:
				return Global_262145.f_12420;
				break;
			
			case 30:
				return Global_262145.f_12421;
				break;
			}
	}
	return 1f;
}

int func_318(int iParam0)//Position - 0x27404
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam0) > 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0, int iParam1)//Position - 0x27425
{
	int iVar0;
	
	iVar0 = (575 + (50 * iParam1));
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("bati2"):
			iVar0 = (575 + (50 * iParam1));
			break;
		
		case joaat("sanchez"):
			iVar0 = (575 + (50 * iParam1));
			break;
		
		case joaat("paradise"):
			iVar0 = (575 + (50 * iParam1));
			break;
		
		case joaat("windsor"):
			if (iParam1 == 0)
			{
				iVar0 = 100;
				if (Global_262145.f_11066 >= 0)
				{
					iVar0 = Global_262145.f_11066;
				}
			}
			else if (iParam1 == 1)
			{
				iVar0 = 100000;
				if (Global_262145.f_11067 >= 0)
				{
					iVar0 = Global_262145.f_11067;
				}
			}
			else if (iParam1 == 2)
			{
				iVar0 = 90000;
				if (Global_262145.f_11068 >= 0)
				{
					iVar0 = Global_262145.f_11068;
				}
			}
			else if (iParam1 == 3)
			{
				iVar0 = 80000;
				if (Global_262145.f_11069 >= 0)
				{
					iVar0 = Global_262145.f_11069;
				}
			}
			else if (iParam1 == 4)
			{
				iVar0 = 75000;
				if (Global_262145.f_11070 >= 0)
				{
					iVar0 = Global_262145.f_11070;
				}
			}
			else if (iParam1 == 5)
			{
				iVar0 = 70000;
				if (Global_262145.f_11034 >= 0)
				{
					iVar0 = Global_262145.f_11034;
				}
			}
			else if (iParam1 == 6)
			{
				iVar0 = 60000;
				if (Global_262145.f_11071 >= 0)
				{
					iVar0 = Global_262145.f_11071;
				}
			}
			else if (iParam1 == 7)
			{
				iVar0 = 55000;
				if (Global_262145.f_11072 >= 0)
				{
					iVar0 = Global_262145.f_11072;
				}
			}
			else if (iParam1 == 8)
			{
				iVar0 = 50000;
				if (Global_262145.f_11073 >= 0)
				{
					iVar0 = Global_262145.f_11073;
				}
			}
			break;
	}
	return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_295754.f_50));
}

int func_320(int iParam0, bool bParam1, var uParam2)//Position - 0x275D0
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("windsor") && (func_321() || uParam2))
	{
		return 1;
	}
	if (bParam1)
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("sanchez"):
			case joaat("bati"):
			case joaat("bati2"):
				return 1;
				break;
			}
	}
	return 0;
}

bool func_321()//Position - 0x27626
{
	return (func_323() || func_322());
}

int func_322()//Position - 0x2763C
{
	switch (NETWORK::_0x155467ACA0F55705())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_323()//Position - 0x2766A
{
	switch (NETWORK::_0x754615490A029508())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_324(int iParam0)//Position - 0x27698
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bati2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanchez"))
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_325(int iParam0, int iParam1)//Position - 0x276DE
{
	if (iParam0 == 45)
	{
		if (iParam1 == 12)
		{
			return 1;
		}
	}
	return 0;
}

int func_326(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x276F9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_339(Global_1585309, Global_1585310) || func_338()) || func_337())
		{
			return 0;
		}
		return func_328(sParam0, iParam1, iParam2, bParam3);
	}
	return func_327(sParam0, iParam1, iParam2, bParam3);
}

int func_327(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2774A
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	
	StringCopy(&cVar0, sParam0, 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		if (iParam2 <= 0 || iParam1 == -1)
		{
			if (bParam3)
			{
				StringCopy(&cVar0, "DEFAULT_C", 16);
			}
			else
			{
				StringCopy(&cVar0, "DEFAULT_B", 16);
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					StringCopy(&cVar0, "SPT_", 16);
					break;
				
				case 1:
					StringCopy(&cVar0, "MUSC_", 16);
					break;
				
				case 2:
					StringCopy(&cVar0, "LORIDE_", 16);
					break;
				
				case 3:
					StringCopy(&cVar0, "SUV_", 16);
					break;
				
				case 4:
					StringCopy(&cVar0, "OFFR_", 16);
					break;
				
				case 5:
					StringCopy(&cVar0, "DRFT_", 16);
					break;
				
				case 6:
					StringCopy(&cVar0, "BIKEW_", 16);
					break;
				
				case 7:
					StringCopy(&cVar0, "HIEND_", 16);
					break;
			}
			if (iParam2 < 10)
			{
				StringConCat(&cVar0, "0", 16);
			}
			StringIntConCat(&cVar0, iParam2, 16);
		}
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	switch (iVar1)
	{
		case joaat("HIEND_01"):
			return 3280;
			break;
		
		case joaat("HIEND_02"):
			return 2890;
			break;
		
		case joaat("HIEND_03"):
			return 2850;
			break;
		
		case joaat("HIEND_04"):
			return 3750;
			break;
		
		case joaat("HIEND_05"):
			return 3100;
			break;
		
		case joaat("HIEND_06"):
			return 3490;
			break;
		
		case joaat("HIEND_07"):
			return 2990;
			break;
		
		case joaat("HIEND_08"):
			return 3050;
			break;
		
		case joaat("HIEND_09"):
			return 3480;
			break;
		
		case joaat("HIEND_10"):
			return 2530;
			break;
		
		case joaat("HIEND_11"):
			return 2580;
			break;
		
		case joaat("HIEND_12"):
			return 3350;
			break;
		
		case joaat("HIEND_13"):
			return 2880;
			break;
		
		case joaat("HIEND_14"):
			return 2700;
			break;
		
		case joaat("HIEND_15"):
			return 3650;
			break;
		
		case joaat("HIEND_16"):
			return 4290;
			break;
		
		case joaat("HIEND_17"):
			return 4150;
			break;
		
		case joaat("HIEND_18"):
			return 3900;
			break;
		
		case joaat("HIEND_19"):
			return 4000;
			break;
		
		case joaat("HIEND_20"):
			return 4200;
			break;
		
		case joaat("SPT_01"):
			return 2100;
			break;
		
		case joaat("SPT_02"):
			return 2280;
			break;
		
		case joaat("SPT_03"):
			return 2450;
			break;
		
		case joaat("SPT_04"):
			return 2390;
			break;
		
		case joaat("SPT_05"):
			return 2300;
			break;
		
		case joaat("SPT_06"):
			return 2550;
			break;
		
		case joaat("SPT_07"):
			return 2080;
			break;
		
		case joaat("SPT_08"):
			return 2150;
			break;
		
		case joaat("SPT_09"):
			return 3260;
			break;
		
		case joaat("SPT_10"):
			return 2810;
			break;
		
		case joaat("SPT_11"):
			return 2200;
			break;
		
		case joaat("SPT_12"):
			return 3250;
			break;
		
		case joaat("SPT_13"):
			return 3000;
			break;
		
		case joaat("SPT_14"):
			return 3280;
			break;
		
		case joaat("SPT_15"):
			return 2900;
			break;
		
		case joaat("SPT_16"):
			return 3050;
			break;
		
		case joaat("SPT_17"):
			return 2490;
			break;
		
		case joaat("SPT_18"):
			return 2100;
			break;
		
		case joaat("SPT_19"):
			return 2660;
			break;
		
		case joaat("SPT_20"):
			return 3250;
			break;
		
		case joaat("SPT_21"):
			return 3550;
			break;
		
		case joaat("SPT_22"):
			return 3380;
			break;
		
		case joaat("SPT_23"):
			return 3280;
			break;
		
		case joaat("SPT_24"):
			return 3100;
			break;
		
		case joaat("SPT_25"):
			return 3400;
			break;
		
		case joaat("MUSC_01"):
			return 1290;
			break;
		
		case joaat("MUSC_02"):
			return 2450;
			break;
		
		case joaat("MUSC_03"):
			return 1500;
			break;
		
		case joaat("MUSC_04"):
			return 1620;
			break;
		
		case joaat("MUSC_05"):
			return 1555;
			break;
		
		case joaat("MUSC_06"):
			return 1700;
			break;
		
		case joaat("MUSC_07"):
			return 1780;
			break;
		
		case joaat("MUSC_08"):
			return 1800;
			break;
		
		case joaat("MUSC_09"):
			return 1590;
			break;
		
		case joaat("MUSC_10"):
			return 2380;
			break;
		
		case joaat("MUSC_11"):
			return 1540;
			break;
		
		case joaat("MUSC_12"):
			return 1580;
			break;
		
		case joaat("MUSC_13"):
			return 1600;
			break;
		
		case joaat("MUSC_14"):
			return 1590;
			break;
		
		case joaat("MUSC_15"):
			return 1775;
			break;
		
		case joaat("MUSC_16"):
			return 1540;
			break;
		
		case joaat("MUSC_17"):
			return 1510;
			break;
		
		case joaat("MUSC_18"):
			return 1820;
			break;
		
		case joaat("MUSC_19"):
			return 1550;
			break;
		
		case joaat("MUSC_20"):
			return 1875;
			break;
		
		case joaat("LORIDE_01"):
			return 1980;
			break;
		
		case joaat("LORIDE_02"):
			return 2150;
			break;
		
		case joaat("LORIDE_03"):
			return 2200;
			break;
		
		case joaat("LORIDE_04"):
			return 2050;
			break;
		
		case joaat("LORIDE_05"):
			return 2190;
			break;
		
		case joaat("LORIDE_06"):
			return 2220;
			break;
		
		case joaat("LORIDE_07"):
			return 2290;
			break;
		
		case joaat("LORIDE_08"):
			return 2600;
			break;
		
		case joaat("LORIDE_09"):
			return 2550;
			break;
		
		case joaat("LORIDE_10"):
			return 2330;
			break;
		
		case joaat("LORIDE_11"):
			return 2380;
			break;
		
		case joaat("LORIDE_12"):
			return 3000;
			break;
		
		case joaat("LORIDE_13"):
			return 2450;
			break;
		
		case joaat("LORIDE_14"):
			return 2500;
			break;
		
		case joaat("LORIDE_15"):
			return 2850;
			break;
		
		case joaat("SUV_01"):
			return 3180;
			break;
		
		case joaat("SUV_02"):
			return 3200;
			break;
		
		case joaat("SUV_03"):
			return 3050;
			break;
		
		case joaat("SUV_04"):
			return 3220;
			break;
		
		case joaat("SUV_05"):
			return 3000;
			break;
		
		case joaat("SUV_06"):
			return 3450;
			break;
		
		case joaat("SUV_07"):
			return 3490;
			break;
		
		case joaat("SUV_08"):
			return 3100;
			break;
		
		case joaat("SUV_09"):
			return 3150;
			break;
		
		case joaat("SUV_10"):
			return 3200;
			break;
		
		case joaat("SUV_11"):
			return 3090;
			break;
		
		case joaat("SUV_12"):
			return 3300;
			break;
		
		case joaat("SUV_13"):
			return 3100;
			break;
		
		case joaat("SUV_14"):
			return 3600;
			break;
		
		case joaat("SUV_15"):
			return 3250;
			break;
		
		case joaat("SUV_16"):
			return 3150;
			break;
		
		case joaat("SUV_17"):
			return 3380;
			break;
		
		case joaat("SUV_18"):
			return 3190;
			break;
		
		case joaat("SUV_19"):
			return 3375;
			break;
		
		case joaat("SUV_20"):
			return 3085;
			break;
		
		case joaat("OFFR_01"):
			return 1850;
			break;
		
		case joaat("OFFR_02"):
			return 2050;
			break;
		
		case joaat("OFFR_03"):
			return 1890;
			break;
		
		case joaat("OFFR_04"):
			return 2100;
			break;
		
		case joaat("OFFR_05"):
			return 2590;
			break;
		
		case joaat("OFFR_06"):
			return 2190;
			break;
		
		case joaat("OFFR_07"):
			return 2000;
			break;
		
		case joaat("OFFR_08"):
			return 2200;
			break;
		
		case joaat("OFFR_09"):
			return 1770;
			break;
		
		case joaat("OFFR_10"):
			return 1800;
			break;
		
		case joaat("DRFT_01"):
			return 2450;
			break;
		
		case joaat("DRFT_02"):
			return 2500;
			break;
		
		case joaat("DRFT_03"):
			return 2490;
			break;
		
		case joaat("DRFT_04"):
			return 2600;
			break;
		
		case joaat("DRFT_05"):
			return 2620;
			break;
		
		case joaat("DRFT_06"):
			return 2700;
			break;
		
		case joaat("DRFT_07"):
			return 2550;
			break;
		
		case joaat("DRFT_08"):
			return 2770;
			break;
		
		case joaat("DRFT_09"):
			return 2580;
			break;
		
		case joaat("DRFT_10"):
			return 2820;
			break;
		
		case joaat("DRFT_11"):
			return 2855;
			break;
		
		case joaat("DRFT_12"):
			return 2890;
			break;
		
		case joaat("DRFT_13"):
			return 2400;
			break;
		
		case joaat("DRFT_14"):
			return 2490;
			break;
		
		case joaat("DRFT_15"):
			return 2520;
			break;
		
		case joaat("DRFT_16"):
			return 2550;
			break;
		
		case joaat("DRFT_17"):
			return 2610;
			break;
		
		case joaat("DRFT_18"):
			return 2660;
			break;
		
		case joaat("DRFT_19"):
			return 2720;
			break;
		
		case joaat("DRFT_20"):
			return 2490;
			break;
		
		case joaat("DRFT_21"):
			return 2440;
			break;
		
		case joaat("DRFT_22"):
			return 2500;
			break;
		
		case joaat("DRFT_23"):
			return 2585;
			break;
		
		case joaat("DRFT_24"):
			return 2840;
			break;
		
		case joaat("BIKEW_01"):
			return 1780;
			break;
		
		case joaat("BIKEW_02"):
			return 1800;
			break;
		
		case joaat("BIKEW_03"):
			return 1820;
			break;
		
		case joaat("BIKEW_04"):
			return 1850;
			break;
		
		case joaat("BIKEW_05"):
			return 1750;
			break;
		
		case joaat("BIKEW_06"):
			return 1690;
			break;
		
		case joaat("BIKEW_07"):
			return 1890;
			break;
		
		case joaat("BIKEW_08"):
			return 2180;
			break;
		
		case joaat("BIKEW_09"):
			return 1890;
			break;
		
		case joaat("BIKEW_10"):
			return 1950;
			break;
		
		case joaat("BIKEW_11"):
			return 2500;
			break;
		
		case joaat("BIKEW_12"):
			return 2600;
			break;
		
		case joaat("BIKEW_13"):
			return 2550;
			break;
		
		case 905412411:
			return 1500;
			break;
		
		case 3216303:
			return 800;
			break;
		
		case joaat("SMOD_WHL1"):
			return Global_262145.f_12614;
			break;
		
		case joaat("SMOD_WHL2"):
			return Global_262145.f_12615;
			break;
		
		case joaat("SMOD_WHL3"):
			return Global_262145.f_12616;
			break;
		
		case joaat("SMOD_WHL4"):
			return Global_262145.f_12617;
			break;
		
		case joaat("SMOD_WHL5"):
			return Global_262145.f_12618;
			break;
		
		case joaat("SMOD_WHL6"):
			return Global_262145.f_12619;
			break;
		
		case joaat("SMOD_WHL7"):
			return Global_262145.f_12620;
			break;
		
		case joaat("SMOD_WHL8"):
			return Global_262145.f_12621;
			break;
		
		case joaat("SMOD_WHL9"):
			return Global_262145.f_12622;
			break;
		
		case joaat("SMOD_WHL10"):
			return Global_262145.f_12623;
			break;
		
		case joaat("SMOD_WHL11"):
			return Global_262145.f_12624;
			break;
		
		case joaat("SMOD_WHL12"):
			return Global_262145.f_12625;
			break;
		
		case joaat("SMOD_WHL13"):
			return Global_262145.f_12626;
			break;
		
		case joaat("SMOD_WHL14"):
			return Global_262145.f_12627;
			break;
		
		case joaat("SMOD_WHL15"):
			return Global_262145.f_12628;
			break;
		
		case joaat("SMOD_WHL16"):
			return Global_262145.f_12629;
			break;
		
		case joaat("SMOD_WHL17"):
			return Global_262145.f_12630;
			break;
		
		case joaat("SMOD_WHL18"):
			return Global_262145.f_12631;
			break;
		
		case joaat("SMOD_WHL19"):
			return Global_262145.f_12632;
			break;
		
		case joaat("SMOD_WHL20"):
			return Global_262145.f_12633;
			break;
		
		case joaat("SMOD_WHL21"):
			return Global_262145.f_12634;
			break;
		
		case joaat("SMOD_WHL22"):
			return Global_262145.f_12635;
			break;
		
		case joaat("SMOD_WHL23"):
			return Global_262145.f_12636;
			break;
		
		case joaat("SMOD_WHL24"):
			return Global_262145.f_12637;
			break;
		
		case joaat("SMOD_WHL25"):
			return Global_262145.f_12638;
			break;
		
		case joaat("SMOD_WHL26"):
			return Global_262145.f_12639;
			break;
		
		case joaat("SMOD_WHL27"):
			return Global_262145.f_12640;
			break;
		
		case joaat("SMOD_WHL28"):
			return Global_262145.f_12641;
			break;
		
		case joaat("SMOD_WHL29"):
			return Global_262145.f_12642;
			break;
		
		case joaat("SMOD_WHL30"):
			return Global_262145.f_12643;
			break;
		
		case joaat("SMOD_WHL31"):
			return Global_262145.f_12644;
			break;
	}
	iVar2 = MISC::GET_HASH_KEY(&cVar0);
	switch (iVar2)
	{
		case 1767168450:
			return Global_262145.f_15036;
			break;
		
		case 1529298279:
			return Global_262145.f_15037;
			break;
		
		case 82284777:
			return Global_262145.f_15038;
			break;
		
		case 1984033692:
			return Global_262145.f_15039;
			break;
		
		case 806086449:
			return Global_262145.f_15040;
			break;
		
		case 568445661:
			return Global_262145.f_15041;
			break;
		
		case -609304968:
			return Global_262145.f_15042;
			break;
		
		case -1117945386:
			return Global_262145.f_15043;
			break;
		
		case -693095305:
			return Global_262145.f_15044;
			break;
		
		case 1904880212:
			return Global_262145.f_15045;
			break;
		
		case -2142222368:
			return Global_262145.f_15046;
			break;
		
		case -1911037073:
			return Global_262145.f_15047;
			break;
		
		case 436992853:
			return Global_262145.f_15048;
			break;
		
		case -1496050457:
			return Global_262145.f_15049;
			break;
		
		case -1255296614:
			return Global_262145.f_15050;
			break;
		
		case -756159206:
			return Global_262145.f_15051;
			break;
		
		case joaat("FAM6_TATM_8"):
			return Global_262145.f_15052;
			break;
		
		case -589758224:
			return Global_262145.f_15053;
			break;
		
		case -64995458:
			return Global_262145.f_15054;
			break;
		
		case 1950559910:
			return Global_262145.f_15055;
			break;
		
		case -2123314943:
			return 12345;
			break;
		
		case -1892752259:
			return 12345;
			break;
		
		case 254436466:
			return 12345;
			break;
		
		case -1654914857:
			return 12345;
			break;
		
		case -896771273:
			return 12345;
			break;
		
		case -659130485:
			return 12345;
			break;
		
		case 1407806959:
			return 12345;
			break;
		
		case -509736614:
			return 12345;
			break;
		
		case -281860988:
			return 12345;
			break;
		
		case 1909548443:
			return 12345;
			break;
		
		case 1663518791:
			return 12345;
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		switch (iParam1)
		{
			case 0:
				StringCopy(&cVar0, "RWD_SPT_", 16);
				break;
			
			case 1:
				StringCopy(&cVar0, "RWD_MUSC_", 16);
				break;
			
			case 2:
				StringCopy(&cVar0, "RWD_LORIDE_", 16);
				break;
			
			case 3:
				StringCopy(&cVar0, "RWD_SUV_", 16);
				break;
			
			case 4:
				StringCopy(&cVar0, "RWD_OFFR_", 16);
				break;
			
			case 5:
				StringCopy(&cVar0, "RWD_DRFT_", 16);
				break;
			
			case 6:
				StringCopy(&cVar0, "RWD_BIKEW_", 16);
				break;
			
			case 7:
				StringCopy(&cVar0, "RWD_HIEND_", 16);
				break;
		}
		if (iParam1 == 0 && iParam2 > 25)
		{
			iParam2 = (iParam2 - 25);
		}
		else if (iParam1 == 1 && iParam2 > 18)
		{
			iParam2 = (iParam2 - 18);
		}
		else if (iParam1 == 2 && iParam2 > 15)
		{
			iParam2 = (iParam2 - 15);
		}
		else if (iParam1 == 3 && iParam2 > 19)
		{
			iParam2 = (iParam2 - 19);
		}
		else if (iParam1 == 4 && iParam2 > 10)
		{
			iParam2 = (iParam2 - 10);
		}
		else if (iParam1 == 5 && iParam2 > 24)
		{
			iParam2 = (iParam2 - 24);
		}
		else if (iParam1 == 6 && iParam2 > 13)
		{
			iParam2 = (iParam2 - 13);
		}
		else if (iParam1 == 7 && iParam2 > 20)
		{
			iParam2 = (iParam2 - 20);
		}
		if (iParam2 < 10)
		{
			StringConCat(&cVar0, "0", 16);
		}
		StringIntConCat(&cVar0, iParam2, 16);
		iVar1 = MISC::GET_HASH_KEY(&cVar0);
	}
	switch (iVar1)
	{
		case joaat("RWD_HIEND_01"):
			return 67860;
			break;
		
		case joaat("RWD_HIEND_02"):
			return 71150;
			break;
		
		case joaat("RWD_HIEND_03"):
			return 75850;
			break;
		
		case joaat("RWD_HIEND_04"):
			return 81725;
			break;
		
		case joaat("RWD_HIEND_05"):
			return 72325;
			break;
		
		case joaat("RWD_HIEND_06"):
			return 69975;
			break;
		
		case joaat("RWD_HIEND_07"):
			return 70210;
			break;
		
		case joaat("RWD_HIEND_08"):
			return 71855;
			break;
		
		case joaat("RWD_HIEND_09"):
			return 74205;
			break;
		
		case joaat("RWD_HIEND_10"):
			return 72090;
			break;
		
		case joaat("RWD_HIEND_11"):
			return 72560;
			break;
		
		case joaat("RWD_HIEND_12"):
			return 76320;
			break;
		
		case joaat("RWD_HIEND_13"):
			return 73500;
			break;
		
		case joaat("RWD_HIEND_14"):
			return 74910;
			break;
		
		case joaat("RWD_HIEND_15"):
			return 82665;
			break;
		
		case joaat("RWD_HIEND_16"):
			return 81020;
			break;
		
		case joaat("RWD_HIEND_17"):
			return 82900;
			break;
		
		case joaat("RWD_HIEND_18"):
			return 83135;
			break;
		
		case joaat("RWD_HIEND_19"):
			return 83370;
			break;
		
		case joaat("RWD_HIEND_20"):
			return 83605;
			break;
		
		case joaat("RWD_SPT_01"):
			return 56580;
			break;
		
		case joaat("RWD_SPT_02"):
			return 67155;
			break;
		
		case joaat("RWD_SPT_03"):
			return 67625;
			break;
		
		case joaat("RWD_SPT_04"):
			return 67390;
			break;
		
		case joaat("RWD_SPT_05"):
			return 57755;
			break;
		
		case joaat("RWD_SPT_06"):
			return 58460;
			break;
		
		case joaat("RWD_SPT_07"):
			return 56110;
			break;
		
		case joaat("RWD_SPT_08"):
			return 56815;
			break;
		
		case joaat("RWD_SPT_09"):
			return 69270;
			break;
		
		case joaat("RWD_SPT_10"):
			return 68330;
			break;
		
		case joaat("RWD_SPT_11"):
			return 57050;
			break;
		
		case joaat("RWD_SPT_12"):
			return 80315;
			break;
		
		case joaat("RWD_SPT_13"):
			return 80080;
			break;
		
		case joaat("RWD_SPT_14"):
			return 69505;
			break;
		
		case joaat("RWD_SPT_15"):
			return 69035;
			break;
		
		case joaat("RWD_SPT_16"):
			return 69740;
			break;
		
		case joaat("RWD_SPT_17"):
			return 78435;
			break;
		
		case joaat("RWD_SPT_18"):
			return 66215;
			break;
		
		case joaat("RWD_SPT_19"):
			return 68095;
			break;
		
		case joaat("RWD_SPT_20"):
			return 70445;
			break;
		
		case joaat("RWD_SPT_21"):
			return 82430;
			break;
		
		case joaat("RWD_SPT_22"):
			return 71385;
			break;
		
		case joaat("RWD_SPT_23"):
			return 80785;
			break;
		
		case joaat("RWD_SPT_24"):
			return 79610;
			break;
		
		case joaat("RWD_SPT_25"):
			return 81960;
			break;
		
		case joaat("RWD_MUSC_01"):
			return 50235;
			break;
		
		case joaat("RWD_MUSC_02"):
			return 66450;
			break;
		
		case joaat("RWD_MUSC_03"):
			return 58930;
			break;
		
		case joaat("RWD_MUSC_04"):
			return 50705;
			break;
		
		case joaat("RWD_MUSC_05"):
			return 62925;
			break;
		
		case joaat("RWD_MUSC_06"):
			return 64570;
			break;
		
		case joaat("RWD_MUSC_07"):
			return 77025;
			break;
		
		case joaat("RWD_MUSC_08"):
			return 53290;
			break;
		
		case joaat("RWD_MUSC_09"):
			return 62220;
			break;
		
		case joaat("RWD_MUSC_10"):
			return 77965;
			break;
		
		case joaat("RWD_MUSC_11"):
			return 51175;
			break;
		
		case joaat("RWD_MUSC_12"):
			return 52585;
			break;
		
		case joaat("RWD_MUSC_13"):
			return 63630;
			break;
		
		case joaat("RWD_MUSC_14"):
			return 63865;
			break;
		
		case joaat("RWD_MUSC_15"):
			return 75615;
			break;
		
		case joaat("RWD_MUSC_16"):
			return 52115;
			break;
		
		case joaat("RWD_MUSC_17"):
			return 59635;
			break;
		
		case joaat("RWD_MUSC_18"):
			return 62850;
			break;
		
		case joaat("RWD_MUSC_19"):
			return 65395;
			break;
		
		case joaat("RWD_MUSC_20"):
			return 73735;
			break;
		
		case joaat("RWD_LORIDE_01"):
			return 62455;
			break;
		
		case joaat("RWD_LORIDE_02"):
			return 51880;
			break;
		
		case joaat("RWD_LORIDE_03"):
			return 53055;
			break;
		
		case joaat("RWD_LORIDE_04"):
			return 52350;
			break;
		
		case joaat("RWD_LORIDE_05"):
			return 61280;
			break;
		
		case joaat("RWD_LORIDE_06"):
			return 63395;
			break;
		
		case joaat("RWD_LORIDE_07"):
			return 60105;
			break;
		
		case joaat("RWD_LORIDE_08"):
			return 77260;
			break;
		
		case joaat("RWD_LORIDE_09"):
			return 75380;
			break;
		
		case joaat("RWD_LORIDE_10"):
			return 74675;
			break;
		
		case joaat("RWD_LORIDE_11"):
			return 78200;
			break;
		
		case joaat("RWD_LORIDE_12"):
			return 79140;
			break;
		
		case joaat("RWD_LORIDE_13"):
			return 66685;
			break;
		
		case joaat("RWD_LORIDE_14"):
			return 73970;
			break;
		
		case joaat("RWD_LORIDE_15"):
			return 64100;
			break;
		
		case joaat("RWD_SUV_01"):
			return 79845;
			break;
		
		case joaat("RWD_SUV_02"):
			return 56345;
			break;
		
		case joaat("RWD_SUV_03"):
			return 65980;
			break;
		
		case joaat("RWD_SUV_04"):
			return 68800;
			break;
		
		case joaat("RWD_SUV_05"):
			return 57520;
			break;
		
		case joaat("RWD_SUV_06"):
			return 76790;
			break;
		
		case joaat("RWD_SUV_07"):
			return 65745;
			break;
		
		case joaat("RWD_SUV_08"):
			return 81490;
			break;
		
		case joaat("RWD_SUV_09"):
			return 68565;
			break;
		
		case joaat("RWD_SUV_10"):
			return 70915;
			break;
		
		case joaat("RWD_SUV_11"):
			return 76555;
			break;
		
		case joaat("RWD_SUV_12"):
			return 58225;
			break;
		
		case joaat("RWD_SUV_13"):
			return 77495;
			break;
		
		case joaat("RWD_SUV_14"):
			return 82195;
			break;
		
		case joaat("RWD_SUV_15"):
			return 79375;
			break;
		
		case joaat("RWD_SUV_16"):
			return 80550;
			break;
		
		case joaat("RWD_SUV_17"):
			return 81255;
			break;
		
		case joaat("RWD_SUV_18"):
			return 70680;
			break;
		
		case joaat("RWD_SUV_19"):
			return 66920;
			break;
		
		case joaat("RWD_SUV_20"):
			return 79375;
			break;
		
		case joaat("RWD_OFFR_01"):
			return 55640;
			break;
		
		case joaat("RWD_OFFR_02"):
			return 55405;
			break;
		
		case joaat("RWD_OFFR_03"):
			return 58695;
			break;
		
		case joaat("RWD_OFFR_04"):
			return 63160;
			break;
		
		case joaat("RWD_OFFR_05"):
			return 52820;
			break;
		
		case joaat("RWD_OFFR_06"):
			return 76085;
			break;
		
		case joaat("RWD_OFFR_07"):
			return 72795;
			break;
		
		case joaat("RWD_OFFR_08"):
			return 65040;
			break;
		
		case joaat("RWD_OFFR_09"):
			return 53525;
			break;
		
		case joaat("RWD_OFFR_10"):
			return 61750;
			break;
		
		case joaat("RWD_DRFT_01"):
			return 65510;
			break;
		
		case joaat("RWD_DRFT_02"):
			return 57990;
			break;
		
		case joaat("RWD_DRFT_03"):
			return 54700;
			break;
		
		case joaat("RWD_DRFT_04"):
			return 60340;
			break;
		
		case joaat("RWD_DRFT_05"):
			return 54230;
			break;
		
		case joaat("RWD_DRFT_06"):
			return 64335;
			break;
		
		case joaat("RWD_DRFT_07"):
			return 74440;
			break;
		
		case joaat("RWD_DRFT_08"):
			return 78905;
			break;
		
		case joaat("RWD_DRFT_09"):
			return 61515;
			break;
		
		case joaat("RWD_DRFT_10"):
			return 77730;
			break;
		
		case joaat("RWD_DRFT_11"):
			return 65275;
			break;
		
		case joaat("RWD_DRFT_12"):
			return 55170;
			break;
		
		case joaat("RWD_DRFT_13"):
			return 59165;
			break;
		
		case joaat("RWD_DRFT_14"):
			return 59870;
			break;
		
		case joaat("RWD_DRFT_15"):
			return 53760;
			break;
		
		case joaat("RWD_DRFT_16"):
			return 60810;
			break;
		
		case joaat("RWD_DRFT_17"):
			return 64805;
			break;
		
		case joaat("RWD_DRFT_18"):
			return 53995;
			break;
		
		case joaat("RWD_DRFT_19"):
			return 54935;
			break;
		
		case joaat("RWD_DRFT_20"):
			return 54465;
			break;
		
		case joaat("RWD_DRFT_21"):
			return 51645;
			break;
		
		case joaat("RWD_DRFT_22"):
			return 60575;
			break;
		
		case joaat("RWD_DRFT_23"):
			return 75145;
			break;
		
		case joaat("RWD_DRFT_24"):
			return 78670;
			break;
		
		case joaat("RWD_BIKEW_01"):
			return 16980;
			break;
		
		case joaat("RWD_BIKEW_02"):
			return 17137;
			break;
		
		case joaat("RWD_BIKEW_03"):
			return 18625;
			break;
		
		case joaat("RWD_BIKEW_04"):
			return 19095;
			break;
		
		case joaat("RWD_BIKEW_05"):
			return 16823;
			break;
		
		case joaat("RWD_BIKEW_06"):
			return 16667;
			break;
		
		case joaat("RWD_BIKEW_07"):
			return 19800;
			break;
		
		case joaat("RWD_BIKEW_08"):
			return 20897;
			break;
		
		case joaat("RWD_BIKEW_09"):
			return 20348;
			break;
		
		case joaat("RWD_BIKEW_10"):
			return 20662;
			break;
		
		case joaat("RWD_BIKEW_11"):
			return 23873;
			break;
		
		case joaat("RWD_BIKEW_12"):
			return 24422;
			break;
		
		case joaat("RWD_BIKEW_13"):
			return 24343;
			break;
		
		case joaat("BIKEW_14"):
			return Global_262145.f_17985;
			break;
		
		case joaat("BIKEW_15"):
			return Global_262145.f_17986;
			break;
		
		case joaat("BIKEW_16"):
			return Global_262145.f_17987;
			break;
		
		case joaat("BIKEW_17"):
			return Global_262145.f_17988;
			break;
		
		case joaat("BIKEW_18"):
			return Global_262145.f_17989;
			break;
		
		case joaat("BIKEW_19"):
			return Global_262145.f_17990;
			break;
		
		case joaat("BIKEW_20"):
			return Global_262145.f_17991;
			break;
		
		case joaat("BIKEW_21"):
			return Global_262145.f_17992;
			break;
		
		case joaat("BIKEW_22"):
			return Global_262145.f_17993;
			break;
		
		case joaat("BIKEW_23"):
			return Global_262145.f_17994;
			break;
		
		case joaat("BIKEW_24"):
			return Global_262145.f_17995;
			break;
		
		case joaat("BIKEW_25"):
			return Global_262145.f_17996;
			break;
		
		case joaat("BIKEW_26"):
			return Global_262145.f_17997;
			break;
		
		case joaat("BIKEW_27"):
			return Global_262145.f_17998;
			break;
		
		case joaat("BIKEW_28"):
			return Global_262145.f_17999;
			break;
		
		case joaat("BIKEW_29"):
			return Global_262145.f_18000;
			break;
		
		case joaat("BIKEW_30"):
			return Global_262145.f_18001;
			break;
		
		case joaat("BIKEW_31"):
			return Global_262145.f_18002;
			break;
		
		case joaat("BIKEW_32"):
			return Global_262145.f_18003;
			break;
		
		case joaat("BIKEW_33"):
			return Global_262145.f_18004;
			break;
		
		case joaat("BIKEW_34"):
			return Global_262145.f_18005;
			break;
		
		case joaat("BIKEW_35"):
			return Global_262145.f_18006;
			break;
		
		case joaat("BIKEW_36"):
			return Global_262145.f_18007;
			break;
	}
	return 1500;
}

int func_328(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x291E4
{
	float fVar0;
	bool bVar1;
	char cVar2[16];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	fVar0 = -2f;
	bVar1 = false;
	StringCopy(&cVar2, sParam0, 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
		if (iParam2 <= 0 || iParam1 == -1)
		{
			if (bParam3)
			{
				StringCopy(&cVar2, "DEFAULT_C", 16);
			}
			else
			{
				StringCopy(&cVar2, "DEFAULT_B", 16);
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					StringCopy(&cVar2, "SPT_", 16);
					break;
				
				case 1:
					StringCopy(&cVar2, "MUSC_", 16);
					break;
				
				case 2:
					StringCopy(&cVar2, "LORIDE_", 16);
					break;
				
				case 3:
					StringCopy(&cVar2, "SUV_", 16);
					break;
				
				case 4:
					StringCopy(&cVar2, "OFFR_", 16);
					break;
				
				case 5:
					StringCopy(&cVar2, "DRFT_", 16);
					break;
				
				case 6:
					StringCopy(&cVar2, "BIKEW_", 16);
					break;
				
				case 7:
					StringCopy(&cVar2, "HIEND_", 16);
					break;
				
				case 8:
					StringCopy(&cVar2, "SMOD_WHL", 16);
					break;
				
				case 9:
					StringCopy(&cVar2, "SMOD_WHL", 16);
					break;
				
				case 10:
					StringCopy(&cVar2, "SMOD_WHL", 16);
					break;
				
				case 11:
					StringCopy(&cVar2, "SMOD_WHL", 16);
					break;
				
				case 12:
					StringCopy(&cVar2, "SMOD_WHL", 16);
					break;
			}
			if (((((iParam2 < 10 && iParam1 != 8) && iParam1 != 9) && iParam1 != 10) && iParam1 != 11) && iParam1 != 12)
			{
				StringConCat(&cVar2, "0", 16);
			}
			StringIntConCat(&cVar2, iParam2, 16);
		}
	}
	if ((iParam1 == 6 && (iParam2 >= 27 && iParam2 <= 49)) && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_1585308)))
	{
		StringCopy(&cVar2, "BIKEW_", 16);
		iVar3 = (iParam2 - 13);
		StringIntConCat(&cVar2, iVar3, 16);
	}
	iVar4 = MISC::GET_HASH_KEY(&cVar2);
	switch (iVar4)
	{
		case joaat("HIEND_01"):
			fVar0 = (8780f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_02"):
			fVar0 = (9990f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_03"):
			fVar0 = (14890f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_04"):
			fVar0 = (19600f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_05"):
			fVar0 = (10870f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_06"):
			fVar0 = (9620f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_07"):
			fVar0 = (9790f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_08"):
			fVar0 = (10260f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_09"):
			fVar0 = (13390f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_10"):
			fVar0 = (10660f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_11"):
			fVar0 = (10990f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_12"):
			fVar0 = (15000f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_13"):
			fVar0 = (12250f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_14"):
			fVar0 = (13690f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_15"):
			fVar0 = (20130f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_16"):
			fVar0 = (19240f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_17"):
			fVar0 = (21380f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_18"):
			fVar0 = (22100f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_19"):
			fVar0 = (23680f * Global_262145.f_2990);
			break;
		
		case joaat("HIEND_20"):
			fVar0 = (25000f * Global_262145.f_2990);
			break;
		
		case joaat("SPT_01"):
			fVar0 = (5530f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_02"):
			fVar0 = (8120f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_03"):
			fVar0 = (8620f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_04"):
			fVar0 = (8430f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_05"):
			fVar0 = (5980f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_06"):
			fVar0 = (6000f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_07"):
			fVar0 = (5240f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_08"):
			fVar0 = (5750f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_09"):
			fVar0 = (9380f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_10"):
			fVar0 = (8990f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_11"):
			fVar0 = (5840f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_12"):
			fVar0 = (18690f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_13"):
			fVar0 = (18440f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_14"):
			fVar0 = (9430f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_15"):
			fVar0 = (9210f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_16"):
			fVar0 = (9570f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_17"):
			fVar0 = (16850f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_18"):
			fVar0 = (8000f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_19"):
			fVar0 = (8850f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_20"):
			fVar0 = (9860f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_21"):
			fVar0 = (20000f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_22"):
			fVar0 = (10000f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_23"):
			fVar0 = (19210f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_24"):
			fVar0 = (17600f * Global_262145.f_2991);
			break;
		
		case joaat("SPT_25"):
			fVar0 = (19850f * Global_262145.f_2991);
			break;
		
		case joaat("MUSC_01"):
			fVar0 = (3500f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_02"):
			fVar0 = (8000f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_03"):
			fVar0 = (6000f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_04"):
			fVar0 = (3740f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_05"):
			fVar0 = (7100f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_06"):
			fVar0 = (7900f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_07"):
			fVar0 = (15680f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_08"):
			fVar0 = (4800f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_09"):
			fVar0 = (6850f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_10"):
			fVar0 = (16580f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_11"):
			fVar0 = (3990f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_12"):
			fVar0 = (4510f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_13"):
			fVar0 = (7450f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_14"):
			fVar0 = (7650f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_15"):
			fVar0 = (14320f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_16"):
			fVar0 = (4350f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_17"):
			fVar0 = (6210f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_18"):
			fVar0 = (12580f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_19"):
			fVar0 = (15500f * Global_262145.f_2994);
			break;
		
		case joaat("MUSC_20"):
			fVar0 = (12580f * Global_262145.f_2994);
			break;
		
		case joaat("LORIDE_01"):
			fVar0 = (6900f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_02"):
			fVar0 = (4300f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_03"):
			fVar0 = (4750f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_04"):
			fVar0 = (4480f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_05"):
			fVar0 = (6690f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_06"):
			fVar0 = (7250f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_07"):
			fVar0 = (6230f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_08"):
			fVar0 = (15800f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_09"):
			fVar0 = (14210f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_10"):
			fVar0 = (13500f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_11"):
			fVar0 = (16580f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_12"):
			fVar0 = (17000f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_13"):
			fVar0 = (8000f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_14"):
			fVar0 = (12780f * Global_262145.f_2992);
			break;
		
		case joaat("LORIDE_15"):
			fVar0 = (7650f * Global_262145.f_2992);
			break;
		
		case joaat("SUV_01"):
			fVar0 = (18100f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_02"):
			fVar0 = (5360f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_03"):
			fVar0 = (8000f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_04"):
			fVar0 = (9150f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_05"):
			fVar0 = (5890f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_06"):
			fVar0 = (15400f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_07"):
			fVar0 = (8000f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_08"):
			fVar0 = (19600f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_09"):
			fVar0 = (9130f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_10"):
			fVar0 = (9980f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_11"):
			fVar0 = (15230f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_12"):
			fVar0 = (6000f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_13"):
			fVar0 = (15990f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_14"):
			fVar0 = (20000f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_15"):
			fVar0 = (17560f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_16"):
			fVar0 = (18750f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_17"):
			fVar0 = (19820f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_18"):
			fVar0 = (9890f * Global_262145.f_2993);
			break;
		
		case joaat("SUV_19"):
			fVar0 = (8100f * Global_262145.f_2993);
			break;
		
		case joaat("OFFR_01"):
			fVar0 = (5000f * Global_262145.f_2996);
			break;
		
		case joaat("OFFR_02"):
			fVar0 = (5000f * Global_262145.f_2996);
			break;
		
		case joaat("OFFR_03"):
			fVar0 = (6000f * Global_262145.f_2996);
			break;
		
		case joaat("OFFR_04"):
			fVar0 = (7240f * Global_262145.f_2996);
			break;
		
		case joaat("OFFR_05"):
			fVar0 = (4690f * Global_262145.f_2996);
			break;
		
		case joaat("OFFR_06"):
			fVar0 = (15000f * Global_262145.f_2996);
			break;
		
		case joaat("OFFR_07"):
			fVar0 = (11200f * Global_262145.f_2996);
			break;
		
		case joaat("OFFR_08"):
			fVar0 = (7930f * Global_262145.f_2996);
			break;
		
		case joaat("OFFR_09"):
			fVar0 = (4810f * Global_262145.f_2996);
			break;
		
		case joaat("OFFR_10"):
			fVar0 = (6810f * Global_262145.f_2996);
			break;
		
		case joaat("DRFT_01"):
			fVar0 = (8000f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_02"):
			fVar0 = (6000f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_03"):
			fVar0 = (4990f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_04"):
			fVar0 = (6300f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_05"):
			fVar0 = (4930f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_06"):
			fVar0 = (7850f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_07"):
			fVar0 = (13440f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_08"):
			fVar0 = (17000f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_09"):
			fVar0 = (6790f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_10"):
			fVar0 = (16480f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_11"):
			fVar0 = (8000f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_12"):
			fVar0 = (5000f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_13"):
			fVar0 = (6100f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_14"):
			fVar0 = (6230f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_15"):
			fVar0 = (4850f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_16"):
			fVar0 = (6350f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_17"):
			fVar0 = (7930f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_18"):
			fVar0 = (4920f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_19"):
			fVar0 = (5000f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_20"):
			fVar0 = (4980f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_21"):
			fVar0 = (4250f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_22"):
			fVar0 = (6330f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_23"):
			fVar0 = (14100f * Global_262145.f_2995);
			break;
		
		case joaat("DRFT_24"):
			fVar0 = (16890f * Global_262145.f_2995);
			break;
		
		case joaat("BIKEW_01"):
			fVar0 = (3780f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_02"):
			fVar0 = (4000f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_03"):
			fVar0 = (5120f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_04"):
			fVar0 = (5870f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_05"):
			fVar0 = (3500f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_06"):
			fVar0 = (3380f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_07"):
			fVar0 = (6120f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_08"):
			fVar0 = (7000f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_09"):
			fVar0 = (6550f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_10"):
			fVar0 = (6830f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_11"):
			fVar0 = (10250f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_12"):
			fVar0 = (12000f * Global_262145.f_2997);
			break;
		
		case joaat("BIKEW_13"):
			fVar0 = (11370f * Global_262145.f_2997);
			break;
		
		case joaat("SMOD_WHL1"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12614);
			break;
		
		case joaat("SMOD_WHL2"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12615);
			break;
		
		case joaat("SMOD_WHL3"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12616);
			break;
		
		case joaat("SMOD_WHL4"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12617);
			break;
		
		case joaat("SMOD_WHL5"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12618);
			break;
		
		case joaat("SMOD_WHL6"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12619);
			break;
		
		case joaat("SMOD_WHL7"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12620);
			break;
		
		case joaat("SMOD_WHL8"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12621);
			break;
		
		case joaat("SMOD_WHL9"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12622);
			break;
		
		case joaat("SMOD_WHL10"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12623);
			break;
		
		case joaat("SMOD_WHL11"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12624);
			break;
		
		case joaat("SMOD_WHL12"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12625);
			break;
		
		case joaat("SMOD_WHL13"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12626);
			break;
		
		case joaat("SMOD_WHL14"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12627);
			break;
		
		case joaat("SMOD_WHL15"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12628);
			break;
		
		case joaat("SMOD_WHL16"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12629);
			break;
		
		case joaat("SMOD_WHL17"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12630);
			break;
		
		case joaat("SMOD_WHL18"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12631);
			break;
		
		case joaat("SMOD_WHL19"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12632);
			break;
		
		case joaat("SMOD_WHL20"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12633);
			break;
		
		case joaat("SMOD_WHL21"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12634);
			break;
		
		case joaat("SMOD_WHL22"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12635);
			break;
		
		case joaat("SMOD_WHL23"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12636);
			break;
		
		case joaat("SMOD_WHL24"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12637);
			break;
		
		case joaat("SMOD_WHL25"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12638);
			break;
		
		case joaat("SMOD_WHL26"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12639);
			break;
		
		case joaat("SMOD_WHL27"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12640);
			break;
		
		case joaat("SMOD_WHL28"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12641);
			break;
		
		case joaat("SMOD_WHL29"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12642);
			break;
		
		case joaat("SMOD_WHL30"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12643);
			break;
		
		case joaat("SMOD_WHL31"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_12644);
			break;
		
		case 905412411:
			switch (iParam1)
			{
				case 0:
					fVar0 = (3000f * Global_262145.f_3312);
					break;
				
				case 1:
					fVar0 = (3000f * Global_262145.f_3449);
					break;
				
				case 2:
					fVar0 = (3000f * Global_262145.f_3449);
					break;
				
				case 3:
					fVar0 = (3000f * Global_262145.f_3175);
					break;
				
				case 4:
					fVar0 = (3000f * Global_262145.f_3038);
					break;
				
				case 5:
					fVar0 = (3000f * Global_262145.f_3038);
					break;
				
				case 6:
					fVar0 = (3000f * Global_262145.f_3586);
					break;
				
				case 7:
					fVar0 = (3000f * Global_262145.f_3449);
					break;
				
				case 8:
					fVar0 = (3000f * Global_262145.f_3449);
					break;
				
				case 9:
					fVar0 = (3000f * Global_262145.f_3449);
					break;
				
				case 10:
					fVar0 = (3000f * Global_262145.f_3449);
					break;
				
				case 11:
					fVar0 = (3000f * Global_262145.f_3449);
					break;
				
				case 12:
					fVar0 = (3000f * Global_262145.f_3449);
					break;
			}
			break;
		
		case 3216303:
			fVar0 = (3000f * Global_262145.f_3586);
			break;
	}
	iVar5 = MISC::GET_HASH_KEY(&cVar2);
	switch (iVar5)
	{
		case 1767168450:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15036);
			break;
		
		case 1529298279:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15037);
			break;
		
		case 82284777:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15038);
			break;
		
		case 1984033692:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15039);
			break;
		
		case 806086449:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15040);
			break;
		
		case 568445661:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15041);
			break;
		
		case -609304968:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15042);
			break;
		
		case -1117945386:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15043);
			break;
		
		case -693095305:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15044);
			break;
		
		case 1904880212:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15045);
			break;
		
		case -2142222368:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15046);
			break;
		
		case -1911037073:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15047);
			break;
		
		case 436992853:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15048);
			break;
		
		case -1496050457:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15049);
			break;
		
		case -1255296614:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15050);
			break;
		
		case -756159206:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15051);
			break;
		
		case joaat("FAM6_TATM_8"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15052);
			break;
		
		case -589758224:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15053);
			break;
		
		case -64995458:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15054);
			break;
		
		case 1950559910:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15055);
			break;
		
		case -2123314943:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15104);
			break;
		
		case -1892752259:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15105);
			break;
		
		case 254436466:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15106);
			break;
		
		case -1654914857:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15107);
			break;
		
		case -896771273:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15108);
			break;
		
		case -659130485:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15109);
			break;
		
		case 1407806959:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15110);
			break;
		
		case -509736614:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15111);
			break;
		
		case -281860988:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15112);
			break;
		
		case 1909548443:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15113);
			break;
		
		case 1663518791:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15114);
			break;
		
		case -1940801854:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15036);
			break;
		
		case 2144247228:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15037);
			break;
		
		case 1894055913:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15038);
			break;
		
		case 1134732645:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15039);
			break;
		
		case -1019272036:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15040);
			break;
		
		case -1258682350:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15041);
			break;
		
		case -1464045673:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15042);
			break;
		
		case -1721741089:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15043);
			break;
		
		case -706622987:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15044);
			break;
		
		case 473211097:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15045);
			break;
		
		case 260376442:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15046);
			break;
		
		case -1226320327:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15047);
			break;
		
		case -1594774963:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15048);
			break;
		
		case 1418858899:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15049);
			break;
		
		case -987532624:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15050);
			break;
		
		case -762278522:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15051);
			break;
		
		case 1120726529:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15052);
			break;
		
		case -163752737:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15053);
			break;
		
		case -531027689:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15054);
			break;
		
		case 12086017:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15055);
			break;
		
		case -150513761:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15104);
			break;
		
		case 858247143:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15105);
			break;
		
		case 540879378:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15106);
			break;
		
		case -837155383:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_15107);
			break;
		
		case 1080511143:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29267);
			break;
		
		case 841330212:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29268);
			break;
		
		case 619746234:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29269);
			break;
		
		case -362340704:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29270);
			break;
		
		case 1016644354:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29271);
			break;
		
		case 768124258:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29272);
			break;
		
		case 522094606:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29273);
			break;
		
		case -1530162314:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29274);
			break;
		
		case 380172067:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29275);
			break;
		
		case 490538355:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29276);
			break;
		
		case 782247993:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29277);
			break;
		
		case -1763215206:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29278);
			break;
		
		case -2061216492:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29279);
			break;
		
		case 1804313059:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29280);
			break;
		
		case 1770233299:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29281);
			break;
		
		case 293891914:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29282);
			break;
		
		case -1015819466:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29283);
			break;
		
		case -185027021:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29284);
			break;
		
		case -1493362103:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29285);
			break;
		
		case -691602980:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29286);
			break;
		
		case 108190051:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29287);
			break;
		
		case -618036527:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29288);
			break;
		
		case -252531101:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29289);
			break;
		
		case -1080177738:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29290);
			break;
		
		case 1074308091:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29291);
			break;
		
		case 1782052953:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29292);
			break;
		
		case 1486804263:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29293);
			break;
		
		case 1767536202:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29294);
			break;
		
		case 1394493906:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29295);
			break;
		
		case -2067190489:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29296);
			break;
		
		case 1854013593:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29297);
			break;
		
		case -1674355717:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29298);
			break;
		
		case -900056928:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29299);
			break;
		
		case -1196944068:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29300);
			break;
		
		case 2017988817:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29301);
			break;
		
		case -1925891413:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29302);
			break;
		
		case -1669932754:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29303);
			break;
		
		case -1854618826:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29304);
			break;
		
		case -1489572166:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29305);
			break;
		
		case -1277261823:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29306);
			break;
		
		case -878856321:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29307);
			break;
		
		case -663072456:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29308);
			break;
		
		case -290423388:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29309);
			break;
		
		case 51816048:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29310);
			break;
		
		case -1151887349:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_29311);
			break;
		
		case 767634574:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31310);
			break;
		
		case 454231858:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31311);
			break;
		
		case 173041065:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31312);
			break;
		
		case -142753788:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31313);
			break;
		
		case 1691523764:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31314);
			break;
		
		case 1381529024:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31315);
			break;
		
		case 1096143803:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31316);
			break;
		
		case 518295257:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31317);
			break;
		
		case -1691580573:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31318);
			break;
		
		case 1355144970:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31319);
			break;
		
		case 1594653591:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31320);
			break;
		
		case 550666016:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31321);
			break;
		
		case -283862107:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31322);
			break;
		
		case 1012413995:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31323);
			break;
		
		case 178344638:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31324);
			break;
		
		case -675484426:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31325);
			break;
		
		case -1510274701:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31326);
			break;
		
		case -15647842:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31327);
			break;
		
		case -1049247640:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31328);
			break;
		
		case 76892038:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31329);
			break;
		
		case -231169331:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31330);
			break;
		
		case 1059994807:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31331);
			break;
		
		case 752261128:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31332);
			break;
		
		case -984135413:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31333);
			break;
		
		case -1153485605:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31334);
			break;
		
		case -405500411:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31335);
			break;
		
		case -678236798:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31336);
			break;
		
		case 1804670324:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31337);
			break;
		
		case 1615724270:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31338);
			break;
		
		case 774249395:
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_31339);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && fVar0 == -2f)
	{
		switch (iParam1)
		{
			case 0:
				StringCopy(&cVar2, "RWD_SPT_", 16);
				break;
			
			case 1:
				StringCopy(&cVar2, "RWD_MUSC_", 16);
				break;
			
			case 2:
				StringCopy(&cVar2, "RWD_LORIDE_", 16);
				break;
			
			case 3:
				StringCopy(&cVar2, "RWD_SUV_", 16);
				break;
			
			case 4:
				StringCopy(&cVar2, "RWD_OFFR_", 16);
				break;
			
			case 5:
				StringCopy(&cVar2, "RWD_DRFT_", 16);
				break;
			
			case 6:
				StringCopy(&cVar2, "RWD_BIKEW_", 16);
				break;
			
			case 7:
				StringCopy(&cVar2, "RWD_HIEND_", 16);
				break;
		}
		if (iParam1 == 0 && iParam2 > 25)
		{
			iParam2 = (iParam2 - 25);
		}
		else if (iParam1 == 1 && iParam2 > 18)
		{
			iParam2 = (iParam2 - 18);
		}
		else if (iParam1 == 2 && iParam2 > 15)
		{
			iParam2 = (iParam2 - 15);
		}
		else if (iParam1 == 3 && iParam2 > 19)
		{
			iParam2 = (iParam2 - 19);
		}
		else if (iParam1 == 4 && iParam2 > 10)
		{
			iParam2 = (iParam2 - 10);
		}
		else if (iParam1 == 5 && iParam2 > 24)
		{
			iParam2 = (iParam2 - 24);
		}
		else if (iParam1 == 6 && iParam2 > 13)
		{
			iParam2 = (iParam2 - 13);
		}
		else if (iParam1 == 7 && iParam2 > 20)
		{
			iParam2 = (iParam2 - 20);
		}
		if (iParam2 < 10)
		{
			StringConCat(&cVar2, "0", 16);
		}
		StringIntConCat(&cVar2, iParam2, 16);
		if ((iParam1 == 6 && iParam2 > 49) && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_1585308)))
		{
			StringCopy(&cVar2, "RWD_BIKEW_", 16);
			iVar6 = (iParam2 - 36);
			StringIntConCat(&cVar2, iVar6, 16);
		}
		iVar4 = MISC::GET_HASH_KEY(&cVar2);
	}
	switch (iVar4)
	{
		case joaat("RWD_HIEND_01"):
			fVar0 = 67860f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_02"):
			fVar0 = 71150f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_03"):
			fVar0 = 75850f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_04"):
			fVar0 = 81725f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_05"):
			fVar0 = 72325f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_06"):
			fVar0 = 69975f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_07"):
			fVar0 = 70210f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_08"):
			fVar0 = 71855f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_09"):
			fVar0 = 74205f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_10"):
			fVar0 = 72090f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_11"):
			fVar0 = 72560f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_12"):
			fVar0 = 76320f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_13"):
			fVar0 = 73500f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_14"):
			fVar0 = 74910f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_15"):
			fVar0 = 82665f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_16"):
			fVar0 = 81020f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_17"):
			fVar0 = 82900f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_18"):
			fVar0 = 83135f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_19"):
			fVar0 = 83370f;
			bVar1 = true;
			break;
		
		case joaat("RWD_HIEND_20"):
			fVar0 = 83605f;
			bVar1 = true;
			break;
	}
	switch (iVar4)
	{
		case joaat("RWD_SPT_01"):
			fVar0 = 56580f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_02"):
			fVar0 = 67155f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_03"):
			fVar0 = 67625f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_04"):
			fVar0 = 67390f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_05"):
			fVar0 = 57755f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_06"):
			fVar0 = 58460f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_07"):
			fVar0 = 56110f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_08"):
			fVar0 = 56815f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_09"):
			fVar0 = 69270f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_10"):
			fVar0 = 68330f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_11"):
			fVar0 = 57050f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_12"):
			fVar0 = 80315f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_13"):
			fVar0 = 80080f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_14"):
			fVar0 = 69505f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_15"):
			fVar0 = 69035f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_16"):
			fVar0 = 69740f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_17"):
			fVar0 = 78435f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_18"):
			fVar0 = 66215f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_19"):
			fVar0 = 68095f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_20"):
			fVar0 = 70445f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_21"):
			fVar0 = 82430f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_22"):
			fVar0 = 71385f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_23"):
			fVar0 = 80785f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_24"):
			fVar0 = 79610f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SPT_25"):
			fVar0 = 81960f;
			bVar1 = true;
			break;
	}
	switch (iVar4)
	{
		case joaat("RWD_MUSC_01"):
			fVar0 = 50235f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_02"):
			fVar0 = 66450f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_03"):
			fVar0 = 58930f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_04"):
			fVar0 = 50705f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_05"):
			fVar0 = 62925f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_06"):
			fVar0 = 64570f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_07"):
			fVar0 = 77025f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_08"):
			fVar0 = 53290f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_09"):
			fVar0 = 62220f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_10"):
			fVar0 = 77965f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_11"):
			fVar0 = 51175f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_12"):
			fVar0 = 52585f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_13"):
			fVar0 = 63630f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_14"):
			fVar0 = 63865f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_15"):
			fVar0 = 75615f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_16"):
			fVar0 = 52115f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_17"):
			fVar0 = 59635f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_18"):
			fVar0 = 62850f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_19"):
			fVar0 = 65395f;
			bVar1 = true;
			break;
		
		case joaat("RWD_MUSC_20"):
			fVar0 = 73735f;
			bVar1 = true;
			break;
	}
	switch (iVar4)
	{
		case joaat("RWD_LORIDE_01"):
			fVar0 = 62455f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_02"):
			fVar0 = 51880f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_03"):
			fVar0 = 53055f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_04"):
			fVar0 = 52350f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_05"):
			fVar0 = 61280f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_06"):
			fVar0 = 63395f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_07"):
			fVar0 = 60105f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_08"):
			fVar0 = 77260f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_09"):
			fVar0 = 75380f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_10"):
			fVar0 = 74675f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_11"):
			fVar0 = 78200f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_12"):
			fVar0 = 79140f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_13"):
			fVar0 = 66685f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_14"):
			fVar0 = 73970f;
			bVar1 = true;
			break;
		
		case joaat("RWD_LORIDE_15"):
			fVar0 = 64100f;
			bVar1 = true;
			break;
	}
	switch (iVar4)
	{
		case joaat("RWD_SUV_01"):
			fVar0 = 79845f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_02"):
			fVar0 = 56345f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_03"):
			fVar0 = 65980f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_04"):
			fVar0 = 68800f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_05"):
			fVar0 = 57520f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_06"):
			fVar0 = 76790f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_07"):
			fVar0 = 65745f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_08"):
			fVar0 = 81490f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_09"):
			fVar0 = 68565f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_10"):
			fVar0 = 70915f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_11"):
			fVar0 = 76555f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_12"):
			fVar0 = 58225f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_13"):
			fVar0 = 77495f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_14"):
			fVar0 = 82195f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_15"):
			fVar0 = 79375f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_16"):
			fVar0 = 80550f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_17"):
			fVar0 = 81255f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_18"):
			fVar0 = 70680f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_19"):
			fVar0 = 66920f;
			bVar1 = true;
			break;
		
		case joaat("RWD_SUV_20"):
			fVar0 = 79375f;
			bVar1 = true;
			break;
	}
	switch (iVar4)
	{
		case joaat("RWD_OFFR_01"):
			fVar0 = 55640f;
			bVar1 = true;
			break;
		
		case joaat("RWD_OFFR_02"):
			fVar0 = 55405f;
			bVar1 = true;
			break;
		
		case joaat("RWD_OFFR_03"):
			fVar0 = 58695f;
			bVar1 = true;
			break;
		
		case joaat("RWD_OFFR_04"):
			fVar0 = 63160f;
			bVar1 = true;
			break;
		
		case joaat("RWD_OFFR_05"):
			fVar0 = 52820f;
			bVar1 = true;
			break;
		
		case joaat("RWD_OFFR_06"):
			fVar0 = 76085f;
			bVar1 = true;
			break;
		
		case joaat("RWD_OFFR_07"):
			fVar0 = 72795f;
			bVar1 = true;
			break;
		
		case joaat("RWD_OFFR_08"):
			fVar0 = 65040f;
			bVar1 = true;
			break;
		
		case joaat("RWD_OFFR_09"):
			fVar0 = 53525f;
			bVar1 = true;
			break;
		
		case joaat("RWD_OFFR_10"):
			fVar0 = 61750f;
			bVar1 = true;
			break;
	}
	switch (iVar4)
	{
		case joaat("RWD_DRFT_01"):
			fVar0 = 65510f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_02"):
			fVar0 = 57990f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_03"):
			fVar0 = 54700f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_04"):
			fVar0 = 60340f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_05"):
			fVar0 = 54230f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_06"):
			fVar0 = 64335f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_07"):
			fVar0 = 74440f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_08"):
			fVar0 = 78905f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_09"):
			fVar0 = 61515f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_10"):
			fVar0 = 77730f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_11"):
			fVar0 = 65275f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_12"):
			fVar0 = 55170f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_13"):
			fVar0 = 59165f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_14"):
			fVar0 = 59870f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_15"):
			fVar0 = 53760f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_16"):
			fVar0 = 60810f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_17"):
			fVar0 = 64805f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_18"):
			fVar0 = 53995f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_19"):
			fVar0 = 54935f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_20"):
			fVar0 = 54465f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_21"):
			fVar0 = 51645f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_22"):
			fVar0 = 60575f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_23"):
			fVar0 = 75145f;
			bVar1 = true;
			break;
		
		case joaat("RWD_DRFT_24"):
			fVar0 = 78670f;
			bVar1 = true;
			break;
	}
	switch (iVar4)
	{
		case joaat("RWD_BIKEW_01"):
			fVar0 = 16980f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_02"):
			fVar0 = 17137f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_03"):
			fVar0 = 18625f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_04"):
			fVar0 = 19095f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_05"):
			fVar0 = 16823f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_06"):
			fVar0 = 16667f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_07"):
			fVar0 = 19800f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_08"):
			fVar0 = 20897f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_09"):
			fVar0 = 20348f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_10"):
			fVar0 = 20662f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_11"):
			fVar0 = 23873f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_12"):
			fVar0 = 24422f;
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_13"):
			fVar0 = 24343f;
			bVar1 = true;
			break;
	}
	switch (iVar4)
	{
		case joaat("BIKEW_14"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17985);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_15"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17986);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_16"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17987);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_17"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17988);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_18"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17989);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_19"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17990);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_20"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17991);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_21"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17992);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_22"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17993);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_23"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17994);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_24"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17995);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_25"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17996);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_26"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17997);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_27"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17998);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_28"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_17999);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_29"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18000);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_30"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18001);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_31"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18002);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_32"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18003);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_33"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18004);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_34"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18005);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_35"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18006);
			bVar1 = false;
			break;
		
		case joaat("BIKEW_36"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18007);
			bVar1 = false;
			break;
	}
	switch (iVar4)
	{
		case joaat("RWD_BIKEW_14"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18008);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_15"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18009);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_16"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18010);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_17"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18011);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_18"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18012);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_19"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18013);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_20"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18014);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_21"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18015);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_22"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18016);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_23"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18017);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_24"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18018);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_25"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18019);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_26"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18020);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_27"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18021);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_28"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18022);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_29"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18023);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_30"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18024);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_31"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18025);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_32"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18026);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_33"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18027);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_34"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18028);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_35"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18029);
			bVar1 = true;
			break;
		
		case joaat("RWD_BIKEW_36"):
			fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18030);
			bVar1 = true;
			break;
	}
	if (bVar1)
	{
		if (func_329(iVar4))
		{
			fVar0 = 0f;
		}
		switch (iParam1)
		{
			case 0:
				fVar0 = (fVar0 * Global_262145.f_10536);
				break;
			
			case 1:
				fVar0 = (fVar0 * Global_262145.f_10534);
				break;
			
			case 2:
				fVar0 = (fVar0 * Global_262145.f_10533);
				break;
			
			case 3:
				fVar0 = (fVar0 * Global_262145.f_10537);
				break;
			
			case 4:
				fVar0 = (fVar0 * Global_262145.f_10535);
				break;
			
			case 5:
				fVar0 = (fVar0 * Global_262145.f_10538);
				break;
			
			case 6:
				fVar0 = (fVar0 * Global_262145.f_10545);
				break;
			
			case 7:
				fVar0 = (fVar0 * Global_262145.f_10532);
				break;
			
			case 8:
				fVar0 = (fVar0 * Global_262145.f_10539);
				break;
			
			case 9:
				fVar0 = (fVar0 * Global_262145.f_10540);
				break;
			
			case 10:
				fVar0 = (fVar0 * Global_262145.f_10541);
				break;
			
			case 11:
				fVar0 = (fVar0 * Global_262145.f_10542);
				break;
			
			case 12:
				fVar0 = (fVar0 * Global_262145.f_10543);
				break;
			}
	}
	if (iParam2 != 0)
	{
		if (func_289(ENTITY::GET_ENTITY_MODEL(Global_1585308)) == 12)
		{
			fVar0 = (fVar0 * Global_262145.f_15059);
		}
	}
	return SYSTEM::FLOOR((fVar0 * Global_295754.f_51));
}

int func_329(int iParam0)//Position - 0x2C3A0
{
	switch (iParam0)
	{
		case joaat("RWD_HIEND_01"):
		case joaat("RWD_HIEND_02"):
		case joaat("RWD_HIEND_03"):
		case joaat("RWD_HIEND_04"):
		case joaat("RWD_HIEND_05"):
		case joaat("RWD_HIEND_06"):
		case joaat("RWD_HIEND_07"):
		case joaat("RWD_HIEND_08"):
		case joaat("RWD_HIEND_09"):
		case joaat("RWD_HIEND_10"):
		case joaat("RWD_HIEND_11"):
		case joaat("RWD_HIEND_12"):
		case joaat("RWD_HIEND_13"):
		case joaat("RWD_HIEND_14"):
		case joaat("RWD_HIEND_15"):
		case joaat("RWD_HIEND_16"):
		case joaat("RWD_HIEND_17"):
		case joaat("RWD_HIEND_18"):
		case joaat("RWD_HIEND_19"):
		case joaat("RWD_HIEND_20"):
			if (func_336(120, -1) >= func_335(120, 5, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("RWD_SPT_01"):
		case joaat("RWD_SPT_02"):
		case joaat("RWD_SPT_03"):
		case joaat("RWD_SPT_04"):
		case joaat("RWD_SPT_05"):
		case joaat("RWD_SPT_06"):
		case joaat("RWD_SPT_07"):
		case joaat("RWD_SPT_08"):
		case joaat("RWD_SPT_09"):
		case joaat("RWD_SPT_10"):
		case joaat("RWD_SPT_11"):
		case joaat("RWD_SPT_12"):
		case joaat("RWD_SPT_13"):
		case joaat("RWD_SPT_14"):
		case joaat("RWD_SPT_15"):
		case joaat("RWD_SPT_16"):
		case joaat("RWD_SPT_17"):
		case joaat("RWD_SPT_18"):
		case joaat("RWD_SPT_19"):
		case joaat("RWD_SPT_20"):
		case joaat("RWD_SPT_21"):
		case joaat("RWD_SPT_22"):
		case joaat("RWD_SPT_23"):
		case joaat("RWD_SPT_24"):
		case joaat("RWD_SPT_25"):
			return func_330(126);
			if (func_336(136, -1) >= func_335(136, 5, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("RWD_MUSC_01"):
		case joaat("RWD_MUSC_02"):
		case joaat("RWD_MUSC_03"):
		case joaat("RWD_MUSC_04"):
		case joaat("RWD_MUSC_05"):
		case joaat("RWD_MUSC_06"):
		case joaat("RWD_MUSC_07"):
		case joaat("RWD_MUSC_08"):
		case joaat("RWD_MUSC_09"):
		case joaat("RWD_MUSC_10"):
		case joaat("RWD_MUSC_11"):
		case joaat("RWD_MUSC_12"):
		case joaat("RWD_MUSC_13"):
		case joaat("RWD_MUSC_14"):
		case joaat("RWD_MUSC_15"):
		case joaat("RWD_MUSC_16"):
		case joaat("RWD_MUSC_17"):
		case joaat("RWD_MUSC_18"):
		case joaat("RWD_MUSC_19"):
		case joaat("RWD_MUSC_20"):
			if (func_336(136, -1) >= func_335(136, 5, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("RWD_LORIDE_01"):
		case joaat("RWD_LORIDE_02"):
		case joaat("RWD_LORIDE_03"):
		case joaat("RWD_LORIDE_04"):
		case joaat("RWD_LORIDE_05"):
		case joaat("RWD_LORIDE_06"):
		case joaat("RWD_LORIDE_07"):
		case joaat("RWD_LORIDE_08"):
		case joaat("RWD_LORIDE_09"):
		case joaat("RWD_LORIDE_10"):
		case joaat("RWD_LORIDE_11"):
		case joaat("RWD_LORIDE_12"):
		case joaat("RWD_LORIDE_13"):
		case joaat("RWD_LORIDE_14"):
		case joaat("RWD_LORIDE_15"):
			return func_330(127);
			break;
	}
	switch (iParam0)
	{
		case joaat("RWD_SUV_01"):
		case joaat("RWD_SUV_02"):
		case joaat("RWD_SUV_03"):
		case joaat("RWD_SUV_04"):
		case joaat("RWD_SUV_05"):
		case joaat("RWD_SUV_06"):
		case joaat("RWD_SUV_07"):
		case joaat("RWD_SUV_08"):
		case joaat("RWD_SUV_09"):
		case joaat("RWD_SUV_10"):
		case joaat("RWD_SUV_11"):
		case joaat("RWD_SUV_12"):
		case joaat("RWD_SUV_13"):
		case joaat("RWD_SUV_14"):
		case joaat("RWD_SUV_15"):
		case joaat("RWD_SUV_16"):
		case joaat("RWD_SUV_17"):
		case joaat("RWD_SUV_18"):
		case joaat("RWD_SUV_19"):
		case joaat("RWD_SUV_20"):
			if (func_336(135, -1) >= func_335(135, 5, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("RWD_OFFR_01"):
		case joaat("RWD_OFFR_02"):
		case joaat("RWD_OFFR_03"):
		case joaat("RWD_OFFR_04"):
		case joaat("RWD_OFFR_05"):
		case joaat("RWD_OFFR_06"):
		case joaat("RWD_OFFR_07"):
		case joaat("RWD_OFFR_08"):
		case joaat("RWD_OFFR_09"):
		case joaat("RWD_OFFR_10"):
			if (func_336(129, -1) >= func_335(129, 5, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("RWD_DRFT_01"):
		case joaat("RWD_DRFT_02"):
		case joaat("RWD_DRFT_03"):
		case joaat("RWD_DRFT_04"):
		case joaat("RWD_DRFT_05"):
		case joaat("RWD_DRFT_06"):
		case joaat("RWD_DRFT_07"):
		case joaat("RWD_DRFT_08"):
		case joaat("RWD_DRFT_09"):
		case joaat("RWD_DRFT_10"):
		case joaat("RWD_DRFT_11"):
		case joaat("RWD_DRFT_12"):
		case joaat("RWD_DRFT_13"):
		case joaat("RWD_DRFT_14"):
		case joaat("RWD_DRFT_15"):
		case joaat("RWD_DRFT_16"):
		case joaat("RWD_DRFT_17"):
		case joaat("RWD_DRFT_18"):
		case joaat("RWD_DRFT_19"):
		case joaat("RWD_DRFT_20"):
		case joaat("RWD_DRFT_21"):
		case joaat("RWD_DRFT_22"):
		case joaat("RWD_DRFT_23"):
		case joaat("RWD_DRFT_24"):
			return func_330(121);
			break;
	}
	switch (iParam0)
	{
		case joaat("RWD_BIKEW_01"):
		case joaat("RWD_BIKEW_02"):
		case joaat("RWD_BIKEW_03"):
		case joaat("RWD_BIKEW_04"):
		case joaat("RWD_BIKEW_05"):
		case joaat("RWD_BIKEW_06"):
		case joaat("RWD_BIKEW_07"):
		case joaat("RWD_BIKEW_08"):
		case joaat("RWD_BIKEW_09"):
		case joaat("RWD_BIKEW_10"):
		case joaat("RWD_BIKEW_11"):
		case joaat("RWD_BIKEW_12"):
		case joaat("RWD_BIKEW_13"):
		case joaat("RWD_BIKEW_14"):
		case joaat("RWD_BIKEW_15"):
		case joaat("RWD_BIKEW_16"):
		case joaat("RWD_BIKEW_17"):
		case joaat("RWD_BIKEW_18"):
		case joaat("RWD_BIKEW_19"):
		case joaat("RWD_BIKEW_20"):
		case joaat("RWD_BIKEW_21"):
		case joaat("RWD_BIKEW_22"):
		case joaat("RWD_BIKEW_23"):
		case joaat("RWD_BIKEW_24"):
		case joaat("RWD_BIKEW_25"):
		case joaat("RWD_BIKEW_26"):
		case joaat("RWD_BIKEW_27"):
		case joaat("RWD_BIKEW_28"):
		case joaat("RWD_BIKEW_29"):
		case joaat("RWD_BIKEW_30"):
		case joaat("RWD_BIKEW_31"):
		case joaat("RWD_BIKEW_32"):
		case joaat("RWD_BIKEW_33"):
		case joaat("RWD_BIKEW_34"):
		case joaat("RWD_BIKEW_35"):
		case joaat("RWD_BIKEW_36"):
			return func_330(131);
			break;
	}
	return 0;
}

var func_330(int iParam0)//Position - 0x2C8AA
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_332(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_331(iVar1));
}

int func_331(int iParam0)//Position - 0x2C8C7
{
	return (iParam0 % 32);
}

int func_332(var uParam0)//Position - 0x2C8D4
{
	switch (func_333(uParam0))
	{
		case 758:
			return Global_1659717[func_84(-1)];
		
		case 759:
			return Global_1659723[func_84(-1)];
		
		case 760:
			return Global_1659729[func_84(-1)];
		
		case 761:
			return Global_1659735[func_84(-1)];
		
		case 8735:
			return Global_1659741[func_84(-1)];
		
		default:
	}
	return 0;
}

int func_333(var uParam0)//Position - 0x2C94C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_334(iVar0);
	switch (iVar1)
	{
		case 0:
			return 758;
			break;
		
		case 1:
			return 759;
			break;
		
		case 2:
			return 760;
			break;
		
		case 3:
			return 761;
			break;
		
		case 4:
			return 8735;
			break;
	}
	return 13122;
}

int func_334(int iParam0)//Position - 0x2C9B5
{
	return (iParam0 / 32);
}

int func_335(int iParam0, int iParam1, int iParam2)//Position - 0x2C9C2
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 30;
				
				case 4:
					return 60;
				
				case 5:
					return 120;
				
				default:
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 10000;
				
				case 4:
					return 25000;
				
				case 5:
					return 50000;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 3;
				
				case 3:
					return 5;
				
				case 4:
					return 7;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 250;
				
				case 4:
					return 500;
				
				case 5:
					return 1000;
				
				default:
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 126:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 127:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 130:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 125:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 131:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 132:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 135:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 136:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 137:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25335;
				
				case 3:
					return Global_262145.f_25336;
				
				case 4:
					return Global_262145.f_25337;
				
				case 5:
					return Global_262145.f_25338;
				
				default:
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25335;
				
				case 3:
					return Global_262145.f_25336;
				
				case 4:
					return Global_262145.f_25337;
				
				case 5:
					return Global_262145.f_25338;
				
				default:
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25335;
				
				case 3:
					return Global_262145.f_25336;
				
				case 4:
					return Global_262145.f_25337;
				
				case 5:
					return Global_262145.f_25338;
				
				default:
			}
			break;
		
		case 142:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25335;
				
				case 3:
					return Global_262145.f_25336;
				
				case 4:
					return Global_262145.f_25337;
				
				case 5:
					return Global_262145.f_25338;
				
				default:
			}
			break;
		
		case 143:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 100000;
				
				case 3:
					return 250000;
				
				case 4:
					return 500000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 3000;
				
				case 4:
					return 15000;
				
				case 5:
					return 55000;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 25000;
				
				case 3:
					return 50000;
				
				case 4:
					return 75000;
				
				case 5:
					return 100000;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28672;
				
				case 3:
					return Global_262145.f_28673;
				
				case 4:
					return Global_262145.f_28674;
				
				case 5:
					return Global_262145.f_28675;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28839;
				
				case 3:
					return Global_262145.f_28840;
				
				case 4:
					return Global_262145.f_28841;
				
				case 5:
					return Global_262145.f_28842;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28873;
				
				case 3:
					return Global_262145.f_28874;
				
				case 4:
					return Global_262145.f_28875;
				
				case 5:
					return Global_262145.f_28876;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28877;
				
				case 3:
					return Global_262145.f_28878;
				
				case 4:
					return Global_262145.f_28879;
				
				case 5:
					return Global_262145.f_28880;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28568;
				
				case 3:
					return Global_262145.f_28569;
				
				case 4:
					return Global_262145.f_28570;
				
				case 5:
					return Global_262145.f_28571;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28843;
				
				case 3:
					return Global_262145.f_28844;
				
				case 4:
					return Global_262145.f_28845;
				
				case 5:
					return Global_262145.f_28846;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 50000;
				
				case 3:
					return 250000;
				
				case 4:
					return 750000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000000;
				
				case 3:
					return 5000000;
				
				case 4:
					return 10000000;
				
				case 5:
					return 20000000;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 30;
				
				case 3:
					return 60;
				
				case 4:
					return 120;
				
				case 5:
					return 240;
				
				default:
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
	}
	return 999;
}

int func_336(int iParam0, int iParam1)//Position - 0x2F493
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_84(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_337()//Position - 0x2F4BF
{
	return BitTest(Global_103905, 10);
}

var func_338()//Position - 0x2F4CE
{
	return BitTest(Global_103905, 7);
}

int func_339(int iParam0, int iParam1)//Position - 0x2F4DC
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 1:
			case 2:
			case 3:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_340(int iParam0, bool bParam1, int iParam2)//Position - 0x2F509
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	
	iVar2 = ENTITY::GET_ENTITY_MODEL(Global_1585308);
	if (func_346(Global_1585308, iParam0) || iParam2)
	{
		if (bParam1)
		{
			StringCopy(&cVar0, VEHICLE::GET_MOD_SLOT_NAME(Global_1585308, iParam0), 16);
			iVar1 = MISC::GET_HASH_KEY(&cVar0);
			switch (iVar1)
			{
				case -1142996965:
					return 62;
				
				case -786267131:
					if (iVar2 == joaat("growler") || iVar2 == joaat("TORERO2"))
					{
						return 84;
					}
					else
					{
						return 63;
					}
					break;
				
				case 2047401971:
					return 23;
				
				case -583254460:
					return 24;
					break;
				
				case -1557868906:
					return 51;
					break;
				
				case joaat("TOP_BODY"):
					return 6;
					break;
				
				case joaat("TOP_BULL"):
					return 7;
					break;
				
				case 444045983:
					return 7;
					break;
				
				case joaat("TOP_CAGE"):
					return 39;
					break;
				
				case -887059552:
					return 11;
					break;
				
				case -38049987:
				case 1778225044:
					return 14;
					break;
				
				case -1378285605:
					return 17;
					break;
				
				case 2084263172:
					return 16;
					break;
				
				case joaat("TOP_BAGS"):
					return 41;
					break;
				
				case -1811848757:
					return 25;
					break;
				
				case joaat("TOP_MIR"):
					return 32;
					break;
				
				case 1089414336:
					return 65;
					break;
				
				case 324754559:
					if ((func_345(Global_1585309, Global_1585310) || Global_1585309 == 44) && func_344(Global_1585308))
					{
						return 18;
					}
					else
					{
						return 8;
					}
					break;
				
				case -364506077:
					return 24;
					break;
				
				case joaat("TOP_MUDF"):
					return 18;
					break;
				
				case -1328153013:
					if (iVar2 == joaat("barrage"))
					{
						return 23;
					}
					else if (iVar2 == joaat("caracara2") || iVar2 == joaat("zhaba"))
					{
						return 46;
					}
					else if (iVar2 == joaat("youga3"))
					{
						return 82;
					}
					else
					{
						return 36;
						break;
					}
					break;
				
				case 1711851867:
					if (iVar2 == joaat("reever"))
					{
						return 46;
					}
					else
					{
						return 36;
					}
					break;
				
				case joaat("TOP_OIL"):
					if (iVar2 == joaat("avarus"))
					{
						return 23;
					}
					else
					{
						return 36;
						break;
					}
					break;
				
				case 1021380400:
					return 18;
					break;
					break;
				
				case 1929454489:
					if (iVar2 == joaat("thrax"))
					{
						return 44;
					}
					else
					{
						return 36;
						break;
					}
					break;
				
				case joaat("TOP_LOUV"):
					return 36;
					break;
				
				case -515734021:
					return 95;
					break;
				
				case -847170429:
					return 15;
					break;
				
				case joaat("TOP_DOORS"):
					return 15;
					break;
				
				case -1319988377:
					return 44;
					break;
				
				case joaat("TOP_STORAGEBOX"):
					if (iVar2 == joaat("manchez2"))
					{
						return 46;
					}
					else
					{
						return 35;
					}
					break;
				
				case -633869763:
					if ((func_345(Global_1585309, Global_1585310) || Global_1585309 == 44) && func_344(Global_1585308))
					{
						return 36;
						break;
					}
					else if (iVar2 == joaat("futo2"))
					{
						return 63;
					}
					else
					{
						return 8;
					}
					break;
				
				case 1116843175:
					if (((iVar2 == joaat("previon") || iVar2 == joaat("dominator7")) || iVar2 == joaat("zr350")) || iVar2 == joaat("buffalo4"))
					{
						return 23;
					}
					else
					{
						return 82;
					}
					break;
				
				case -612083150:
					return 36;
					break;
				
				case 681935561:
					return 34;
					break;
				
				case 677414436:
					return 35;
					break;
				
				case -2015951947:
					return 19;
					break;
				
				case 627686920:
					return 37;
					break;
				
				case -1393169939:
					if (iVar2 == joaat("granger2"))
					{
						return 44;
					}
					return 43;
					break;
				
				case -24975778:
					return 45;
					break;
				
				case 371717010:
					return 20;
					break;
				
				case -1242319852:
					return 59;
					break;
				
				case -1595310795:
					return 48;
					break;
				
				case 1621664729:
				case joaat("TOP_TRUNK"):
					return 52;
					break;
				
				case -1359192937:
					return 93;
					break;
				
				case 420318180:
					return 94;
					break;
				
				case 1030821149:
					return 15;
					break;
				
				case -928664693:
				case 136492537:
					if (iVar2 == joaat("formula") || iVar2 == joaat("reever"))
					{
						return 23;
					}
					else
					{
						return 95;
					}
					break;
				
				case joaat("TOP_PANN"):
					if (iVar2 == joaat("manchez2"))
					{
						return 40;
						break;
					}
					else
					{
						return 80;
						break;
					}
					break;
				
				case joaat("TOP_ANTENNAR"):
					return 40;
					break;
				
				case joaat("TOP_ANTENNA"):
					return 46;
					break;
				
				case joaat("TOP_ARCHCOVER"):
					if (iVar2 == joaat("blazer4"))
					{
						return 40;
					}
					else if ((iVar2 == joaat("michelli") || iVar2 == joaat("issi3")) || iVar2 == joaat("s80"))
					{
						return 15;
					}
					else if (iVar2 == joaat("cypher"))
					{
						return 79;
					}
					else
					{
						return 44;
					}
					break;
				
				case 740606462:
					if (iVar2 == joaat("blazer4"))
					{
						return 23;
					}
					else if (((iVar2 == joaat("swinger") || iVar2 == joaat("neo")) || iVar2 == joaat("rrocket")) || iVar2 == joaat("tailgater2"))
					{
						return 9;
					}
					else if ((iVar2 == joaat("futo2") || iVar2 == joaat("rt3000")) || iVar2 == joaat("POSTLUDE"))
					{
						return 84;
					}
					else if (iVar2 == joaat("SENTINEL4"))
					{
						return 83;
					}
					else if (iVar2 == joaat("previon"))
					{
						return 79;
					}
					else if (iVar2 == joaat("remus"))
					{
						return 63;
					}
					else if (iVar2 == joaat("KANJOSJ"))
					{
						return 77;
					}
					else
					{
						return 44;
					}
					break;
				
				case joaat("TOP_ENGINE"):
					if ((iVar2 == joaat("infernus2") || iVar2 == joaat("turismo2")) || iVar2 == joaat("cheetah2"))
					{
						return 15;
					}
					else if ((iVar2 == joaat("xa21") || iVar2 == joaat("veto")) || iVar2 == joaat("veto2"))
					{
						return 46;
					}
					else if ((iVar2 == joaat("impaler2") || iVar2 == joaat("impaler3")) || iVar2 == joaat("impaler4"))
					{
						return 95;
					}
					else
					{
						return 9;
					}
					break;
				
				case joaat("TOP_SHIELD"):
					return 8;
					break;
				
				case joaat("TOP_GRIP"):
					return 9;
					break;
				
				case joaat("TOP_MUD"):
					if (iVar2 == joaat("nebula") || iVar2 == joaat("zhaba"))
					{
						return 44;
					}
					else if (iVar2 == joaat("dominator7") || iVar2 == joaat("tailgater2"))
					{
						return 79;
					}
					else if (iVar2 == joaat("calico"))
					{
						return 82;
					}
					else
					{
						return 95;
					}
					break;
				
				case -1898453461:
					return 95;
					break;
				
				case -548296914:
					return 9;
					break;
				
				case -367413683:
					return 9;
					break;
				
				case 1606301347:
					return 8;
					break;
				
				case 1504062927:
					return 8;
					break;
				
				case 1036090795:
					if (iVar2 == joaat("xa21"))
					{
						return 95;
					}
					else if (iVar2 == joaat("viseris"))
					{
						return 23;
					}
					else if (iVar2 == joaat("KANJOSJ"))
					{
						return 76;
					}
					else if (iVar2 == joaat("SENTINEL4"))
					{
						return 77;
					}
					else
					{
						return 40;
					}
					break;
				
				case 2112821116:
					if (((iVar2 == joaat("neo") || iVar2 == joaat("vstr")) || iVar2 == joaat("gauntlet5")) || iVar2 == joaat("jester4"))
					{
						return 95;
					}
					else if ((((((((((((((((iVar2 == joaat("zr350") || iVar2 == joaat("comet6")) || iVar2 == joaat("warrener2")) || iVar2 == joaat("remus")) || iVar2 == joaat("vectre")) || iVar2 == joaat("cypher")) || iVar2 == joaat("previon")) || iVar2 == joaat("dominator8")) || iVar2 == joaat("euros")) || iVar2 == joaat("growler")) || iVar2 == joaat("dominator7")) || iVar2 == joaat("calico")) || iVar2 == joaat("tailgater2")) || iVar2 == joaat("sultan3")) || iVar2 == joaat("KANJOSJ")) || iVar2 == joaat("TENF2")) || iVar2 == joaat("SENTINEL4"))
					{
						return 80;
					}
					else
					{
						return 23;
					}
					break;
				
				case -1701477683:
					if (iVar2 == joaat("gauntlet5") || iVar2 == joaat("youga3"))
					{
						return 76;
					}
					else if ((((((((((((iVar2 == joaat("jester4") || iVar2 == joaat("vectre")) || iVar2 == joaat("zr350")) || iVar2 == joaat("warrener2")) || iVar2 == joaat("rt3000")) || iVar2 == joaat("previon")) || iVar2 == joaat("dominator8")) || iVar2 == joaat("euros")) || iVar2 == joaat("growler")) || iVar2 == joaat("comet6")) || iVar2 == joaat("CORSITA")) || iVar2 == joaat("LM87")) || iVar2 == joaat("POSTLUDE"))
					{
						return 63;
					}
					else
					{
						return 23;
					}
					break;
				
				case 240782238:
					return 23;
				
				case joaat("TOP_HL_CV"):
					if (((((((((((((((((((((((iVar2 == joaat("comet4") || iVar2 == joaat("jester3")) || iVar2 == joaat("asbo")) || iVar2 == joaat("gauntlet5")) || iVar2 == joaat("club")) || iVar2 == joaat("youga3")) || iVar2 == joaat("manana2")) || iVar2 == joaat("winky")) || iVar2 == joaat("calico")) || iVar2 == joaat("comet6")) || iVar2 == joaat("warrener2")) || iVar2 == joaat("remus")) || iVar2 == joaat("sultan3")) || iVar2 == joaat("rt3000")) || iVar2 == joaat("vectre")) || iVar2 == joaat("dominator8")) || iVar2 == joaat("euros")) || iVar2 == joaat("WEEVIL2")) || iVar2 == joaat("GREENWOOD")) || iVar2 == joaat("TENF2")) || iVar2 == joaat("POSTLUDE")) || iVar2 == joaat("picador")) || iVar2 == joaat("BRIOSO3")) || iVar2 == joaat("SENTINEL4"))
					{
						return 14;
					}
					else
					{
						return 15;
					}
					break;
				
				case -76109610:
					return 81;
				
				case 2125735303:
					return 77;
				
				case 1034757907:
					return 83;
				
				case joaat("TOP_SUNST"):
				case -139298993:
					if ((((((((iVar2 == joaat("schlagen") || iVar2 == joaat("issi7")) || iVar2 == joaat("paragon")) || iVar2 == joaat("paragon2")) || iVar2 == joaat("imorgon")) || iVar2 == joaat("yosemite2")) || iVar2 == joaat("penumbra2")) || iVar2 == joaat("brioso2")) || iVar2 == joaat("baller7"))
					{
						return 95;
					}
					else if (((iVar2 == joaat("gauntlet5") || iVar2 == joaat("club")) || iVar2 == joaat("coquette4")) || iVar2 == joaat("cinquemila"))
					{
						return 54;
					}
					else if (iVar2 == joaat("yosemite3"))
					{
						return 68;
					}
					else if ((((((((((((((((((((((((((((iVar2 == joaat("zr350") || iVar2 == joaat("previon")) || iVar2 == joaat("dominator7")) || iVar2 == joaat("tailgater2")) || iVar2 == joaat("warrener2")) || iVar2 == joaat("comet6")) || iVar2 == joaat("vectre")) || iVar2 == joaat("remus")) || iVar2 == joaat("jester4")) || iVar2 == joaat("rt3000")) || iVar2 == joaat("cypher")) || iVar2 == joaat("dominator8")) || iVar2 == joaat("futo2")) || iVar2 == joaat("euros")) || iVar2 == joaat("growler")) || iVar2 == joaat("sultan3")) || iVar2 == joaat("astron")) || iVar2 == joaat("RHINEHART")) || iVar2 == joaat("CORSITA")) || iVar2 == joaat("zentorno")) || iVar2 == joaat("sentinel")) || iVar2 == joaat("TENF2")) || iVar2 == joaat("KANJOSJ")) || iVar2 == joaat("WEEVIL2")) || iVar2 == joaat("POSTLUDE")) || iVar2 == joaat("RUINER4")) || iVar2 == joaat("picador")) || iVar2 == joaat("SENTINEL4")) || iVar2 == joaat("BRIOSO3"))
					{
						return 45;
					}
					else if (iVar2 == joaat("VIGERO2"))
					{
						return 9;
					}
					else
					{
						return 40;
					}
					break;
				
				case joaat("TOP_SEC_LIGHT"):
				case -378624469:
					if ((iVar2 == joaat("patriot") || iVar2 == joaat("winky")) || iVar2 == joaat("granger2"))
					{
						return 40;
					}
					else if (iVar2 == joaat("yosemite3"))
					{
						return 81;
					}
					else
					{
						return 95;
					}
					break;
				
				case -394901172:
					if (iVar2 == joaat("warrener2") || iVar2 == joaat("euros"))
					{
						return 81;
					}
					else
					{
						return 26;
					}
					break;
				
				case joaat("TOP_WEAPONS"):
					return 40;
					break;
				
				case -1815104796:
				case 1061114913:
					return 9;
					break;
				
				case joaat("TOP_RPNL"):
					if ((VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("dominator3")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("freecrawler"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("gauntlet4")))
					{
						return 36;
						break;
					}
					else
					{
						return 23;
					}
					break;
				
				case joaat("TOP_DPLT"):
					return 15;
					break;
				
				case joaat("TOP_HDLP"):
					return 18;
					break;
				
				case joaat("TOP_RLP"):
					if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("dominator4")))
					{
						return 66;
					}
					else
					{
						return 36;
						break;
					}
					break;
				
				case -1256307233:
					if (iVar2 == joaat("seminole2"))
					{
						return 46;
					}
					else
					{
						return 23;
					}
					break;
				
				case -1066132610:
					if ((iVar2 == joaat("jester4") || iVar2 == joaat("tailgater2")) || iVar2 == joaat("TENF2"))
					{
						return 63;
					}
					return 23;
					break;
				
				case joaat("TOP_WINP"):
					if (iVar2 == joaat("hellion"))
					{
						return 46;
					}
					else if (iVar2 == joaat("gauntlet5"))
					{
						return 63;
					}
					else
					{
						return 9;
					}
					break;
				
				case 1761027891:
					return 46;
					break;
				
				case -1570793392:
					return 80;
					break;
				
				case joaat("TOP_MINE"):
					return 15;
					break;
				
				case joaat("TOP_SEAT"):
					return 26;
					break;
				
				case 767048940:
				case joaat("TOP_PWEAPON"):
					if (((((((((((((((((((((((((((((((((iVar2 == joaat("imperator") || iVar2 == joaat("impaler2")) || iVar2 == joaat("scarab")) || iVar2 == joaat("slamvan4")) || iVar2 == joaat("deathbike")) || iVar2 == joaat("bruiser")) || iVar2 == joaat("monster3")) || iVar2 == joaat("dominator4")) || iVar2 == joaat("issi4")) || iVar2 == joaat("imperator2")) || iVar2 == joaat("impaler3")) || iVar2 == joaat("scarab2")) || iVar2 == joaat("slamvan5")) || iVar2 == joaat("deathbike2")) || iVar2 == joaat("bruiser2")) || iVar2 == joaat("monster4")) || iVar2 == joaat("dominator5")) || iVar2 == joaat("issi5")) || iVar2 == joaat("imperator3")) || iVar2 == joaat("impaler4")) || iVar2 == joaat("scarab3")) || iVar2 == joaat("slamvan6")) || iVar2 == joaat("deathbike3")) || iVar2 == joaat("bruiser3")) || iVar2 == joaat("monster5")) || iVar2 == joaat("dominator6")) || iVar2 == joaat("issi6")) || iVar2 == joaat("zr380")) || iVar2 == joaat("zr3802")) || iVar2 == joaat("zr3803")) || iVar2 == joaat("brutus")) || iVar2 == joaat("brutus2")) || iVar2 == joaat("brutus3")) || func_295(iVar2))
					{
						return 82;
					}
					else if (iVar2 == joaat("yosemite3"))
					{
						return 84;
					}
					else
					{
						return 40;
					}
					break;
				
				case joaat("TOP_COUNTERM"):
					if (iVar2 == joaat("oppressor2"))
					{
						return 23;
					}
					else
					{
						return 18;
						break;
					}
					break;
				
				case joaat("TOP_PBOMBS"):
					return 15;
					break;
				
				case joaat("TOP_THRUST"):
				case 210427144:
					return 12;
					break;
				
				case joaat("TOP_SWEAPON"):
					if ((iVar2 == joaat("barrage") || iVar2 == joaat("mule4")) || iVar2 == joaat("speedo4"))
					{
						return 46;
					}
					else if (iVar2 == joaat("pounder2"))
					{
						return 8;
					}
					else if (((((((((((iVar2 == joaat("imperator") || iVar2 == joaat("cerberus")) || iVar2 == joaat("zr380")) || iVar2 == joaat("issi4")) || iVar2 == joaat("imperator2")) || iVar2 == joaat("cerberus2")) || iVar2 == joaat("zr3802")) || iVar2 == joaat("issi5")) || iVar2 == joaat("imperator3")) || iVar2 == joaat("cerberus3")) || iVar2 == joaat("zr3803")) || iVar2 == joaat("issi6"))
					{
						return 40;
					}
					else if (iVar2 == joaat("jb7002"))
					{
						return 15;
					}
					else
					{
						return 9;
					}
					break;
				
				case joaat("TOP_VISORS"):
				case 926594805:
					if (iVar2 == joaat("swinger"))
					{
						return 44;
					}
					else if ((iVar2 == joaat("dynasty") || iVar2 == joaat("youga3")) || iVar2 == joaat("slamtruck"))
					{
						return 95;
					}
					else if (iVar2 == joaat("yosemite3"))
					{
						return 68;
					}
					else if (iVar2 == joaat("POSTLUDE") || iVar2 == joaat("SENTINEL4"))
					{
						return 76;
					}
					else
					{
						return 46;
					}
					break;
				
				case -1752116744:
				case -721496762:
					if (iVar2 == joaat("calico") || iVar2 == joaat("comet6"))
					{
						return 79;
					}
					else
					{
						return 14;
					}
					break;
				
				case 1721211011:
					return 78;
					break;
				
				case 1332960557:
					return 18;
					break;
				
				case -2121845261:
					return 36;
					break;
				
				case 1066936971:
					if (iVar2 == joaat("comet6"))
					{
						return 83;
					}
					else
					{
						return 95;
					}
					break;
				
				case 671246855:
					return 9;
					break;
				
				case 324816886:
					if (((((iVar2 == joaat("youga3") || iVar2 == joaat("comet6")) || iVar2 == joaat("remus")) || iVar2 == joaat("vectre")) || iVar2 == joaat("sultan3")) || iVar2 == joaat("tailgater2"))
					{
						return 81;
					}
					else if (iVar2 == joaat("seminole2") || iVar2 == joaat("growler"))
					{
						return 40;
					}
					else if (iVar2 == joaat("granger2"))
					{
						return 46;
					}
					else
					{
						return 9;
					}
					break;
				
				case -325145171:
					if (iVar2 == joaat("WEEVIL2"))
					{
						return 23;
					}
					return 80;
					break;
				
				case joaat("TOP_TAILFIN"):
					return 9;
					break;
				
				case -593785970:
					return 9;
					break;
				
				case 1823107432:
					return 95;
					break;
				
				case -94310683:
					return 9;
					break;
				
				case 84542568:
					if (iVar2 == joaat("warrener2") || iVar2 == joaat("remus"))
					{
						return 82;
					}
					return 23;
					break;
				
				case -609392205:
					if (iVar2 == joaat("jester4"))
					{
						return 79;
					}
					else if ((iVar2 == joaat("cypher") || iVar2 == joaat("KANJOSJ")) || iVar2 == joaat("TENF2"))
					{
						return 81;
					}
					else if (iVar2 == joaat("TENF") || iVar2 == joaat("schwarzer"))
					{
						return 9;
					}
					return 40;
					break;
				
				case 1860205273:
					if ((iVar2 == joaat("KANJOSJ") || iVar2 == joaat("POSTLUDE")) || iVar2 == joaat("SENTINEL4"))
					{
						return 78;
					}
					break;
				}
		}
		if (iParam0 == 0)
		{
			return 46;
		}
		else if (iParam0 == 1)
		{
			if (iVar2 == joaat("tampa3"))
			{
				return 18;
			}
			else
			{
				return 8;
			}
		}
		else if (iParam0 == 2)
		{
			if (func_343(Global_1585308))
			{
				return 95;
			}
			else if ((iVar2 == joaat("tampa3") || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("dominator3"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("seminole2")))
			{
				return 36;
			}
			else
			{
				return 8;
			}
		}
		else if (iParam0 == 3)
		{
			return 44;
		}
		else if (iParam0 == 4)
		{
			return 12;
		}
		else if (iParam0 == 5)
		{
			return 9;
		}
		else if (iParam0 == 6)
		{
			return 23;
		}
		else if (iParam0 == 7)
		{
			return 26;
		}
		else if (iParam0 == 8)
		{
			if (iVar2 == joaat("xa21") || func_342(Global_1585308))
			{
				return 95;
			}
			if (func_341(Global_1585308) || iVar2 == joaat("rcbandito"))
			{
				return 95;
			}
			else
			{
				return 15;
			}
		}
		else if (iParam0 == 9)
		{
			if (((((iVar2 == joaat("cheetah2") || iVar2 == joaat("z190")) || iVar2 == joaat("comet4")) || iVar2 == joaat("pounder2")) || iVar2 == joaat("dynasty")) || iVar2 == joaat("gauntlet3"))
			{
				return 95;
			}
			else
			{
				return 15;
			}
		}
		else if (iParam0 == 10)
		{
			return 40;
		}
		else if (iParam0 == 11)
		{
			return 10;
		}
		else if (iParam0 == 12)
		{
			return 5;
		}
		else if (iParam0 == 13)
		{
			return 50;
		}
		else if (iParam0 == 14)
		{
			return 27;
		}
		else if (iParam0 == 15)
		{
			return 47;
		}
		else if (iParam0 == 16)
		{
			return 4;
		}
		else if (iParam0 == 18)
		{
			return 53;
		}
		else if (iParam0 == 20)
		{
			return 58;
		}
		else if (iParam0 == 22)
		{
			return 28;
		}
		else if (iParam0 == 23)
		{
			return 56;
		}
		else if (iParam0 == 24)
		{
			return 56;
		}
		else if (iParam0 == 25)
		{
			return 62;
		}
		else if (iParam0 == 26)
		{
			return 63;
		}
		else if (iParam0 == 27)
		{
			if (iVar2 == joaat("kanjo"))
			{
				return 95;
			}
			else
			{
				return 91;
			}
		}
		else if (iParam0 == 28)
		{
			return 65;
		}
		else if (iParam0 == 29)
		{
			return 66;
		}
		else if (iParam0 == 30)
		{
			return 90;
		}
		else if (iParam0 == 31)
		{
			return 68;
		}
		else if (iParam0 == 32)
		{
			return 69;
		}
		else if (iParam0 == 33)
		{
			return 70;
		}
		else if (iParam0 == 34)
		{
			return 71;
		}
		else if (iParam0 == 35)
		{
			return 72;
		}
		else if (iParam0 == 36)
		{
			return 73;
		}
		else if (iParam0 == 37)
		{
			return 74;
		}
		else if (iParam0 == 38)
		{
			return 75;
		}
		else if (iParam0 == 39)
		{
			return 76;
		}
		else if (iParam0 == 40)
		{
			return 77;
		}
		else if (iParam0 == 41)
		{
			return 78;
		}
		else if (iParam0 == 42)
		{
			return 79;
		}
		else if (iParam0 == 43)
		{
			return 80;
		}
		else if (iParam0 == 44)
		{
			return 81;
		}
		else if (iParam0 == 45)
		{
			return 82;
		}
		else if (iParam0 == 46)
		{
			return 83;
		}
		else if (iParam0 == 47)
		{
			return 84;
		}
		else if (iParam0 == 48)
		{
			return 85;
		}
	}
	return 2;
}

int func_341(int iParam0)//Position - 0x30EE3
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((((((((((((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("avarus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("chimera")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("daemon2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("defiler")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("esskey")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("nightblade")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ratbike")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombiea")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombieb")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanctus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("manchez")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("vortex")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("wolfsbane")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("faggio3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hakuchou2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer4")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("fcr2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("diablous2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_342(int iParam0)//Position - 0x3103A
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("slamvan4"):
		case joaat("bruiser"):
		case joaat("brutus"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("issi5"):
		case joaat("slamvan5"):
		case joaat("bruiser2"):
		case joaat("brutus2"):
		case joaat("issi6"):
		case joaat("slamvan6"):
		case joaat("bruiser3"):
		case joaat("brutus3"):
		case joaat("OMNISEGT"):
			return 1;
			break;
	}
	return 0;
}

int func_343(int iParam0)//Position - 0x310B5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ratbike") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombiea")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("daemon2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("zombieb")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer4")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("faggio3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("wolfsbane"))
		{
			return 1;
		}
	}
	return 0;
}

int func_344(int iParam0)//Position - 0x31147
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("nero2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("elegy"))
		{
			return 1;
		}
	}
	return 0;
}

int func_345(int iParam0, int iParam1)//Position - 0x3117F
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 6:
			case 7:
			case 8:
			case 9:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_346(int iParam0, int iParam1)//Position - 0x311B2
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_347(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x31214
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_349(iVar0))
	{
		if (iParam1 == 16)
		{
			return 1;
		}
	}
	switch (iVar0)
	{
		case joaat("insurgent3"):
			switch (iParam1)
			{
				case 16:
					return 1;
					break;
				
				case 5:
					if (iParam2 == 0)
					{
						return 1;
					}
					break;
				
				case 48:
					if (iParam2 == 0 || iParam2 >= 21)
					{
						return 1;
					}
					break;
			}
			if (bParam3)
			{
				return 1;
			}
			break;
		
		case joaat("technical3"):
			switch (iParam1)
			{
				case 5:
					if (iParam2 == 0)
					{
						return 1;
					}
					break;
				
				case 48:
					if (iParam2 == 0 || iParam2 >= 21)
					{
						return 1;
					}
					break;
			}
			if (bParam3)
			{
				return 1;
			}
			break;
		
		case joaat("vagner"):
			switch (iParam1)
			{
				case 0:
					if (iParam2 == 0)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("starling"):
			switch (iParam1)
			{
				case 13:
					return 1;
					break;
			}
			break;
		
		case joaat("omnis"):
			switch (iParam1)
			{
				case 48:
					if (func_321())
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("nightshark"):
		case joaat("riot2"):
		case joaat("thruster"):
		case joaat("khanjali"):
			switch (iParam1)
			{
				case 48:
					if (iParam2 >= 21)
					{
						return 1;
					}
					break;
			}
			if (bParam3)
			{
				return 1;
			}
			break;
		
		case joaat("molotok"):
		case joaat("streiter"):
		case joaat("comet4"):
		case joaat("chernobog"):
		case joaat("barrage"):
		case joaat("avenger"):
		case joaat("trailersmall2"):
		case joaat("tampa3"):
		case joaat("oppressor"):
		case joaat("dune3"):
		case joaat("ardent"):
		case joaat("akula"):
		case joaat("trailerlarge"):
		case joaat("speedo4"):
		case joaat("patriot"):
		case joaat("patriot2"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("oppressor2"):
		case joaat("menacer"):
		case joaat("revolter"):
			switch (iParam1)
			{
				case 48:
					if (iParam2 >= 21)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("swinger"):
			switch (iParam1)
			{
				case 48:
					if (iParam2 >= 9)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("stafford"):
			switch (iParam1)
			{
				case 48:
					if (iParam2 == 7)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("clique"):
			switch (iParam1)
			{
				case 48:
					if (iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			switch (iParam1)
			{
				case 42:
					if (iParam2 == 3)
					{
						return 1;
					}
					break;
				
				case 48:
					if (iParam2 == 0)
					{
						return 1;
					}
					break;
			}
			if (bParam3)
			{
				return 1;
			}
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			switch (iParam1)
			{
				case 42:
					if (iParam2 == 3)
					{
						return 1;
					}
					break;
				
				case 48:
					if (iParam2 == 0)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			switch (iParam1)
			{
				case 42:
					if (iParam2 == 3)
					{
						return 1;
					}
					break;
				
				case 48:
					if (iParam2 == 0)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			switch (iParam1)
			{
				case 42:
				case 48:
					if (iParam2 == 0)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			switch (iParam1)
			{
				case 43:
				case 48:
					if (iParam2 == 0)
					{
						return 1;
					}
					break;
			}
			if (bParam3)
			{
				return 1;
			}
			break;
		
		case joaat("dukes2"):
		case joaat("veto"):
		case joaat("veto2"):
			if (bParam3)
			{
				return 1;
			}
			break;
		
		case joaat("paragon2"):
			switch (iParam1)
			{
				case 16:
					return 1;
					break;
			}
			if (bParam3)
			{
				return 1;
			}
			break;
		
		case joaat("alkonost"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 == 3)
					{
						return 1;
					}
					break;
			}
			break;
		
		default:
			break;
	}
	if (iParam1 == 48)
	{
		if (func_348(iParam0, MISC::GET_HASH_KEY(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iParam1, iParam2)), 85, iParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x316E9
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iParam2)
	{
		case 85:
			switch (iParam1)
			{
				case 577477981:
				case 749122003:
				case 1222502977:
				case -617246990:
				case -387700145:
				case -81735992:
				case 90628948:
				case -1608542009:
				case -1309590422:
				case -801604532:
					switch (iVar0)
					{
						case joaat("thruster"):
						case joaat("molotok"):
						case joaat("khanjali"):
						case joaat("streiter"):
						case joaat("riot2"):
						case joaat("comet4"):
						case joaat("chernobog"):
						case joaat("barrage"):
						case joaat("avenger"):
						case joaat("trailersmall2"):
						case joaat("technical3"):
						case joaat("tampa3"):
						case joaat("oppressor"):
						case joaat("nightshark"):
						case joaat("insurgent3"):
						case joaat("halftrack"):
						case joaat("dune3"):
						case joaat("ardent"):
						case joaat("apc"):
						case joaat("akula"):
						case joaat("trailerlarge"):
							return 1;
							break;
					}
					break;
				
				case -83343524:
				case 54941648:
				case -586740910:
				case 533434586:
				case 293991503:
				case 965854310:
				case 877574624:
				case 1579126157:
				case 1222337273:
				case -782235132:
					switch (iVar0)
					{
						case joaat("thruster"):
						case joaat("molotok"):
						case joaat("khanjali"):
						case joaat("streiter"):
						case joaat("riot2"):
						case joaat("comet4"):
						case joaat("chernobog"):
						case joaat("barrage"):
						case joaat("avenger"):
						case joaat("trailersmall2"):
						case joaat("technical3"):
						case joaat("tampa3"):
						case joaat("oppressor"):
						case joaat("nightshark"):
						case joaat("insurgent3"):
						case joaat("halftrack"):
						case joaat("dune3"):
						case joaat("ardent"):
						case joaat("apc"):
						case joaat("akula"):
						case joaat("trailerlarge"):
						case joaat("speedo4"):
						case joaat("patriot"):
						case joaat("patriot2"):
						case joaat("mule4"):
						case joaat("pounder2"):
						case joaat("oppressor2"):
						case joaat("menacer"):
						case joaat("revolter"):
							return 1;
							break;
					}
					break;
				
				case 1249495339:
					switch (iVar0)
					{
						case joaat("swinger"):
						case joaat("stafford"):
							return 1;
							break;
					}
					break;
				
				case 1555525030:
					switch (iVar0)
					{
						case joaat("swinger"):
							return 1;
							break;
					}
					break;
				
				case joaat("cliq_liv11"):
					switch (iVar0)
					{
						case joaat("clique"):
							return 1;
							break;
					}
					break;
				
				case -1474902239:
					switch (iVar0)
					{
						case joaat("thrax"):
							return 1;
							break;
					}
					break;
				
				case 2017168223:
					switch (iVar0)
					{
						case joaat("paragon2"):
						case joaat("paragon"):
							return 1;
							break;
					}
					break;
				
				case -1846421212:
					switch (iVar0)
					{
						case joaat("s80"):
							return 1;
							break;
					}
					break;
				
				case -1960533885:
					switch (iVar0)
					{
						case joaat("landstalker2"):
							return 1;
							break;
					}
					break;
				
				case joaat("sem2_livery9"):
					switch (iVar0)
					{
						case joaat("seminole2"):
							return 1;
							break;
					}
					break;
				
				case joaat("rsx_livery11"):
					switch (iVar0)
					{
						case joaat("italirsx"):
							return 1;
							break;
					}
					break;
				
				case joaat("tord_liv11"):
					switch (iVar0)
					{
						case joaat("toreador"):
							return 1;
							break;
					}
					break;
				
				case joaat("WEEVIL_LIV13"):
					switch (iVar0)
					{
						case joaat("weevil"):
							return 1;
							break;
					}
					break;
				
				case -1555506789:
				case -1332808665:
				case 2126319748:
				case -1521918572:
				case -1289946821:
					switch (iVar0)
					{
						case joaat("banshee"):
							return 1;
							break;
					}
					break;
				
				case 1390307858:
				case 1214240021:
				case -216651133:
				case -454914532:
				case 261153656:
					switch (iVar0)
					{
						case joaat("kuruma"):
							return 1;
							break;
					}
					break;
				
				case -1586507921:
					switch (iVar0)
					{
						case joaat("hotring"):
							return 1;
							break;
					}
					break;
				
				case -455802500:
					switch (iVar0)
					{
						case joaat("kanjo"):
							return 1;
							break;
					}
					break;
				
				case 1321427924:
					switch (iVar0)
					{
						case joaat("hermes"):
							return 1;
							break;
					}
					break;
				
				case 1911869336:
					switch (iVar0)
					{
						case joaat("toreador"):
							return 1;
							break;
					}
					break;
				
				case -1009460454:
				case -703365225:
				case 866433728:
				case 99540821:
				case 254407115:
					switch (iVar0)
					{
						case joaat("comet6"):
							return 1;
							break;
					}
					break;
				
				case joaat("cyph_livery11"):
				case joaat("cyph_livery12"):
				case joaat("cyph_livery13"):
				case joaat("cyph_livery14"):
				case joaat("cyph_livery15"):
					switch (iVar0)
					{
						case joaat("cypher"):
							return 1;
							break;
					}
					break;
				
				case joaat("dom7_livery11"):
				case joaat("dom7_livery12"):
				case joaat("dom7_livery13"):
				case joaat("dom7_livery14"):
				case joaat("dom7_livery15"):
					switch (iVar0)
					{
						case joaat("dominator7"):
							return 1;
							break;
					}
					break;
				
				case joaat("vtc_liv11"):
				case joaat("vtc_liv12"):
				case joaat("vtc_liv13"):
				case joaat("vtc_liv14"):
				case joaat("vtc_liv15"):
					switch (iVar0)
					{
						case joaat("vectre"):
							return 1;
							break;
					}
					break;
				
				case joaat("growler_liv11"):
				case joaat("growler_liv12"):
				case joaat("growler_liv13"):
				case joaat("growler_liv14"):
				case joaat("growler_liv15"):
					switch (iVar0)
					{
						case joaat("growler"):
							return 1;
							break;
					}
					break;
				
				case joaat("prev_liv11"):
				case joaat("prev_liv12"):
				case joaat("prev_liv13"):
				case joaat("prev_liv14"):
				case joaat("prev_liv15"):
					switch (iVar0)
					{
						case joaat("previon"):
							return 1;
							break;
					}
					break;
				
				case joaat("sultan3_liv11"):
				case joaat("sultan3_liv12"):
				case joaat("sultan3_liv13"):
				case joaat("sultan3_liv14"):
				case joaat("sultan3_liv15"):
					switch (iVar0)
					{
						case joaat("sultan3"):
							return 1;
							break;
					}
					break;
				
				case -2082088836:
				case -70301615:
				case -1663639595:
				case 2113880575:
					if (func_304())
					{
						return 1;
					}
					break;
				
				case 1734393781:
				case joaat("deity_livery12"):
				case 829510980:
					return 1;
					break;
				
				case 1997494044:
				case -302934347:
				case -1742687912:
				case -704951532:
				case -61098194:
				case -1142858784:
				case -1509143254:
				case -782324795:
				case 410035738:
				case -628177972:
				case -697115680:
				case 79467689:
				case -1236614045:
				case 1359328429:
				case 1509413193:
				case 1929149600:
				case 1103929411:
				case -779567620:
				case 49459550:
				case -137585902:
				case -71803846:
				case 819514021:
				case -1594565792:
				case 1809857405:
				case 536627832:
				case -1486021920:
				case 1875050784:
				case 832806325:
				case -1986706248:
				case 1127615859:
				case -188005150:
				case 1037839754:
				case 1908480299:
					if (Global_262145.f_32555)
					{
						return 1;
					}
					break;
				
				case -595936762:
				case -1395498327:
				case 336960868:
				case 280244246:
				case 1967609307:
				case 591086547:
				case 620848813:
				case -850492530:
				case -2022095717:
				case 199240637:
				case -1189691853:
					if (Global_262145.f_32556)
					{
						return 1;
					}
					break;
				
				case -1674766432:
					if (iVar0 == joaat("CORSITA"))
					{
						return 1;
					}
					break;
				
				case 1777042989:
					if (iVar0 == joaat("VIGERO2"))
					{
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 2090658975:
					if (iVar0 == joaat("stunt") && iParam3 == 2)
					{
						if (Global_262145.f_32555)
						{
							return 1;
						}
					}
					break;
				
				case -309276274:
				case -931586380:
					if (Global_262145.f_32555)
					{
						return 1;
					}
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 591086547:
					if (Global_262145.f_32556)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_349(int iParam0)//Position - 0x31E95
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_350(int iParam0, var uParam1, var uParam2)//Position - 0x31F96
{
	Global_1585308 = iParam0;
	Global_1585309 = uParam1;
	Global_1585310 = uParam2;
}

int func_351(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x31FB0
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_354(iParam0, iParam1, iParam2, sParam3, bParam4, iParam5);
		if ((func_353() && !bParam4) && iVar0 > 0)
		{
			iVar0 = SYSTEM::CEIL((IntToFloat(iVar0) * Global_262145.f_30979));
		}
		return iVar0;
	}
	return func_352(iParam0, iParam1, iParam2);
}

int func_352(int iParam0, int iParam1, int iParam2)//Position - 0x32009
{
	int iVar0;
	
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 500;
					break;
				
				case 2:
					return 1250;
					break;
				
				case 3:
					return 2000;
					break;
				
				case 4:
					return 3500;
					break;
				
				case 5:
					return 5000;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 2000;
					break;
				
				case 2:
					return 2700;
					break;
				
				case 3:
					return 3500;
					break;
				
				case 4:
					return 5000;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 5000;
					break;
				
				case 2:
					return 6000;
					break;
				
				case 3:
					return 7000;
					break;
				
				case 4:
					return 8000;
					break;
				
				case 5:
					return 9000;
					break;
				
				case 6:
					return 1000;
					break;
				
				case 7:
					return 1100;
					break;
				
				case 8:
					return 1200;
					break;
				
				case 9:
					return 1300;
					break;
				
				case 10:
					return 1400;
					break;
				
				case 11:
					return 1500;
					break;
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 50;
					break;
				
				case 1:
					return 3500;
					break;
				
				case 2:
					return 3975;
					break;
				
				case 3:
					return 4250;
					break;
				
				case 4:
					return 5000;
					break;
				
				case 5:
					return 5500;
					break;
				
				case 6:
					return 5975;
					break;
				
				case 7:
					return 6750;
					break;
				
				case 8:
					return 7000;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return 500;
					break;
				
				case 1:
					return 500;
					break;
			}
			break;
		
		case 26:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 800;
						break;
					
					case 1:
						return 1500;
						break;
					
					case 2:
						return 2500;
						break;
					
					case 3:
						return 4000;
						break;
					
					case 4:
						return 4800;
						break;
					
					case 5:
						return 5500;
						break;
					
					case 6:
						return 5800;
						break;
					
					case 7:
						return 6000;
						break;
					
					case 8:
						return 6200;
						break;
					
					case 9:
						return 6200;
						break;
					
					case 10:
						return 6250;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 450;
						break;
					
					case 1:
						return 850;
						break;
					
					case 2:
						return 1200;
						break;
					
					case 3:
						return 1450;
						break;
					
					case 4:
						return 2225;
						break;
					
					case 5:
						return 2500;
						break;
					
					case 6:
						return 2800;
						break;
					
					case 7:
						return 3000;
						break;
					
					case 8:
						return 3250;
						break;
					
					case 9:
						return 3500;
						break;
					
					case 10:
						return 3600;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 150;
						break;
					
					case 1:
						return 325;
						break;
					
					case 2:
						return 750;
						break;
					
					case 3:
						return 875;
						break;
					
					case 4:
						return 1000;
						break;
					
					case 5:
						return 1200;
						break;
					
					case 6:
						return 1450;
						break;
					
					case 7:
						return 2225;
						break;
					
					case 8:
						return 2500;
						break;
					
					case 9:
						return 2800;
						break;
					
					case 10:
						return 3000;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					
					case 1:
						return 200;
						break;
					
					case 2:
						return 350;
						break;
					
					case 3:
						return 449;
						break;
					
					case 4:
						return 625;
						break;
					
					case 5:
						return 875;
						break;
					
					case 6:
						return 1000;
						break;
					
					case 7:
						return 1200;
						break;
					
					case 8:
						return 1450;
						break;
					
					case 9:
						return 2225;
						break;
					
					case 10:
						return 2500;
						break;
					}
			}
			break;
		
		case 8:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 1100;
						break;
					
					case 1:
						return 2300;
						break;
					
					case 2:
						return 3700;
						break;
					
					case 3:
						return 5850;
						break;
					
					case 4:
						return 7250;
						break;
					
					case 5:
						return 7350;
						break;
					
					case 6:
						return 7450;
						break;
					
					case 7:
						return 7550;
						break;
					
					case 8:
						return 7650;
						break;
					
					case 20:
						return 1100;
						break;
					
					case 21:
						return 2300;
						break;
					
					case 22:
						return 3700;
						break;
					
					case 23:
						return 5850;
						break;
					
					case 24:
						return 7250;
						break;
					
					case 25:
						return 7350;
						break;
					
					case 26:
						return 7450;
						break;
					
					case 27:
						return 7550;
						break;
					
					case 28:
						return 7650;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 750;
						break;
					
					case 1:
						return 1250;
						break;
					
					case 2:
						return 1650;
						break;
					
					case 3:
						return 1950;
						break;
					
					case 4:
						return 2350;
						break;
					
					case 5:
						return 2450;
						break;
					
					case 6:
						return 2550;
						break;
					
					case 7:
						return 2650;
						break;
					
					case 8:
						return 2750;
						break;
					
					case 20:
						return 750;
						break;
					
					case 21:
						return 1250;
						break;
					
					case 22:
						return 1650;
						break;
					
					case 23:
						return 1950;
						break;
					
					case 24:
						return 2350;
						break;
					
					case 25:
						return 2450;
						break;
					
					case 26:
						return 2550;
						break;
					
					case 27:
						return 2650;
						break;
					
					case 28:
						return 2750;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 250;
						break;
					
					case 1:
						return 500;
						break;
					
					case 2:
						return 750;
						break;
					
					case 3:
						return 1000;
						break;
					
					case 4:
						return 1300;
						break;
					
					case 5:
						return 1400;
						break;
					
					case 6:
						return 1500;
						break;
					
					case 7:
						return 1600;
						break;
					
					case 8:
						return 1700;
						break;
					
					case 20:
						return 250;
						break;
					
					case 21:
						return 500;
						break;
					
					case 22:
						return 750;
						break;
					
					case 23:
						return 1000;
						break;
					
					case 24:
						return 1300;
						break;
					
					case 25:
						return 1400;
						break;
					
					case 26:
						return 1500;
						break;
					
					case 27:
						return 1600;
						break;
					
					case 28:
						return 1700;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 149;
						break;
					
					case 1:
						return 195;
						break;
					
					case 2:
						return 250;
						break;
					
					case 3:
						return 375;
						break;
					
					case 4:
						return 500;
						break;
					
					case 5:
						return 600;
						break;
					
					case 6:
						return 700;
						break;
					
					case 7:
						return 800;
						break;
					
					case 8:
						return 900;
						break;
					
					case 20:
						return 149;
						break;
					
					case 21:
						return 195;
						break;
					
					case 22:
						return 250;
						break;
					
					case 23:
						return 375;
						break;
					
					case 24:
						return 500;
						break;
					
					case 25:
						return 600;
						break;
					
					case 26:
						return 700;
						break;
					
					case 27:
						return 800;
						break;
					
					case 28:
						return 900;
						break;
					}
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 350;
					break;
				
				case 1:
					return 550;
					break;
				
				case 2:
					return 675;
					break;
				
				case 3:
					return 750;
					break;
				
				case 4:
					return 1375;
					break;
				
				case 5:
					return 2300;
					break;
				
				case 6:
					return 2450;
					break;
				
				case 7:
					return 2900;
					break;
				
				case 8:
					return 3500;
					break;
				
				case 9:
					return 4000;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 500;
					break;
				
				case 1:
					return 900;
					break;
				
				case 2:
					return 1250;
					break;
				
				case 3:
					return 1800;
					break;
				
				case 4:
					return 3350;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 130;
					break;
				
				case 1:
					return 375;
					break;
				
				case 2:
					return 899;
					break;
				
				case 3:
					return 1499;
					break;
				
				case 4:
					return 4770;
					break;
				
				case 5:
					return 4870;
					break;
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 2950;
					break;
				
				case 2:
					return 3250;
					break;
				
				case 3:
					return 4000;
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 375;
					break;
				
				case 2:
					return 670;
					break;
				
				case 3:
					return 825;
					break;
				
				case 4:
					return 1500;
					break;
				
				case 5:
					return 1600;
					break;
			}
			break;
		
		case 27:
			iVar0 = iParam1;
			switch (iVar0)
			{
				case 0:
					return 50;
					break;
				
				case 1:
					return 1500;
					break;
				
				case 2:
					return 1500;
					break;
				
				case 3:
					return 1500;
					break;
				
				case 4:
					return 1500;
					break;
				
				case 5:
					return 1500;
					break;
				
				case 6:
					return 1500;
					break;
				
				case 7:
					return 1500;
					break;
				
				case 8:
					return 1500;
					break;
				
				case 9:
					return 1500;
					break;
				
				case 10:
					return 1500;
					break;
				
				case 11:
					return 1500;
					break;
				
				case 12:
					return 1500;
					break;
				
				case 13:
					return 1500;
					break;
				
				case 14:
					return 1500;
					break;
				
				case 15:
					return 1500;
					break;
				
				case 16:
					return 1500;
					break;
				
				case 17:
					return 600;
					break;
				
				case 18:
					return 700;
					break;
				
				case 19:
					return 800;
					break;
				
				case 20:
					return 1000;
					break;
				
				case 21:
					return 1200;
					break;
				
				case 22:
					return 1300;
					break;
				
				case 23:
					return 1400;
					break;
				
				case 24:
					return 1700;
					break;
				
				case 25:
					return 2000;
					break;
				
				case 26:
					return 2200;
					break;
				
				case 44:
					return 60;
					break;
				
				case 45:
					return 75;
					break;
				
				case 46:
					return 150;
					break;
				
				case 47:
					return 255;
					break;
				
				case 48:
					return 300;
					break;
				
				case 49:
					return 325;
					break;
				
				case 50:
					return 375;
					break;
				
				case 51:
					return 500;
					break;
				
				case 52:
					return 600;
					break;
			}
			break;
		
		case 29:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 300;
						break;
					
					case 1:
						return 1450;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 200;
						break;
					
					case 1:
						return 1000;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					
					case 1:
						return 300;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					
					case 1:
						return 100;
						break;
					}
			}
			break;
		
		case 30:
			if (iParam2 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					
					case 1:
						return 1000;
						break;
					
					case 2:
						return 1000;
						break;
					
					case 3:
						return 1250;
						break;
					
					case 4:
						return 1800;
						break;
					
					case 5:
						return 2000;
						break;
					
					case 6:
						return 2000;
						break;
					
					case 7:
						return 3000;
						break;
				}
			}
			else if (iParam2 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 650;
						break;
					
					case 1:
						return 650;
						break;
					
					case 2:
						return 650;
						break;
					
					case 3:
						return 650;
						break;
					
					case 4:
						return 650;
						break;
					
					case 5:
						return 650;
						break;
					
					case 6:
						return 650;
						break;
					
					case 7:
						return 650;
						break;
					
					case 8:
						return 650;
						break;
					
					case 9:
						return 650;
						break;
					
					case 10:
						return 650;
						break;
					
					case 11:
						return 650;
						break;
					
					case 12:
						return 650;
						break;
					}
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 50;
					break;
				
				case 1:
					return 50;
					break;
				
				case 2:
					return 50;
					break;
				
				case 3:
					return 75;
					break;
				
				case 4:
					return 150;
					break;
				
				case 10:
					return 600;
					break;
				
				default:
					return 600;
					break;
			}
			break;
		
		case 40:
			if (ENTITY::GET_ENTITY_MODEL(Global_1585308) == joaat("dukes"))
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					
					case 1:
						return 350;
						break;
					
					default:
						return 2500;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					
					case 1:
						return 350;
						break;
					
					case 2:
						return 575;
						break;
					
					case 3:
						return 800;
						break;
					
					case 4:
						return 975;
						break;
					
					case 5:
						return 1200;
						break;
					
					default:
						return 1500;
						break;
					}
			}
			break;
		
		case 44:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 1250;
						break;
					
					case 1:
						return 2750;
						break;
					
					case 2:
						return 4000;
						break;
					
					case 3:
						return 5250;
						break;
					
					case 4:
						return 7000;
						break;
					
					case 5:
						return 7350;
						break;
					
					case 6:
						return 7600;
						break;
					
					case 7:
						return 7900;
						break;
					
					case 8:
						return 8300;
						break;
					
					case 9:
						return 8500;
						break;
					
					case 10:
						return 9000;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 1250;
						break;
					
					case 1:
						return 1500;
						break;
					
					case 2:
						return 2000;
						break;
					
					case 3:
						return 2750;
						break;
					
					case 4:
						return 3900;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 300;
						break;
					
					case 1:
						return 415;
						break;
					
					case 2:
						return 500;
						break;
					
					case 3:
						return 750;
						break;
					
					case 4:
						return 1000;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 300;
						break;
					
					case 1:
						return 415;
						break;
					
					case 2:
						return 500;
						break;
					
					case 3:
						return 750;
						break;
					
					case 4:
						return 1000;
						break;
					
					case 5:
						return 1250;
						break;
					}
			}
			break;
		
		case 46:
			if ((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26)
			{
				switch (iParam1)
				{
					case 0:
						return 3000;
						break;
					
					case 1:
						return 3750;
						break;
					
					case 2:
						return 5000;
						break;
					
					case 3:
						return 6500;
						break;
					
					case 4:
						return 7000;
						break;
					
					case 5:
						return 8000;
						break;
					
					case 6:
						return 8500;
						break;
					
					case 7:
						return 9000;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 500;
						break;
					
					case 1:
						return 750;
						break;
					
					case 2:
						return 950;
						break;
					
					case 3:
						return 1300;
						break;
					
					case 4:
						return 1750;
						break;
					
					case 5:
						return 2000;
						break;
					
					case 6:
						return 2500;
						break;
					
					case 7:
						return 3000;
						break;
				}
			}
			else if (Global_1585307 == 0 || Global_1585307 == 28)
			{
				switch (iParam1)
				{
					case 0:
						return 150;
						break;
					
					case 1:
						return 275;
						break;
					
					case 2:
						return 350;
						break;
					
					case 3:
						return 525;
						break;
					
					case 4:
						return 750;
						break;
					
					case 5:
						return 1000;
						break;
					
					case 6:
						return 1250;
						break;
					
					case 7:
						return 1500;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 150;
						break;
					
					case 1:
						return 275;
						break;
					
					case 2:
						return 350;
						break;
					
					case 3:
						return 525;
						break;
					
					case 4:
						return 750;
						break;
					
					case 5:
						return 1000;
						break;
					
					case 6:
						return 1250;
						break;
					
					case 7:
						return 1500;
						break;
					}
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 500;
					break;
				
				case 2:
					return 1000;
					break;
				
				case 3:
					return 1700;
					break;
				
				case 4:
					return 2200;
					break;
				
				case 5:
					return 2300;
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					return 500;
					break;
				
				case 1:
					return 2500;
					break;
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 2:
					return 4000;
					break;
				
				case 10:
					return 100;
					break;
				
				case 11:
					return 2500;
					break;
				
				case 12:
					return 2500;
					break;
				
				case 13:
					return 2500;
					break;
				
				case 14:
					return 2500;
					break;
				
				case 15:
					return 2500;
					break;
				
				case 16:
					return 2500;
					break;
				
				case 17:
					return 2500;
					break;
				
				case 18:
					return 2500;
					break;
				
				case 19:
					return 2500;
					break;
				
				case 29:
					return 1000;
					break;
				
				case 30:
					return 1250;
					break;
				
				case 31:
					return 1500;
					break;
				
				case 32:
					return 1750;
					break;
				
				case 33:
					return 1900;
					break;
				
				case 34:
					return 2000;
					break;
				
				case 35:
					return 2150;
					break;
				
				case 36:
					return 2250;
					break;
				
				case 37:
					return 2500;
					break;
				
				case 38:
					return 2500;
					break;
				
				case 39:
					return 2500;
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 1500;
					break;
				
				case 1:
					return 800;
					break;
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 1500;
					break;
				
				case 1:
					return 800;
					break;
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 200;
					break;
				
				case 2:
					return 450;
					break;
				
				case 3:
					return 700;
					break;
				
				case 4:
					return 900;
					break;
				
				case 5:
					return 900;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 150;
					break;
				
				case 1:
					return 450;
					break;
				
				case 2:
					return 750;
					break;
				
				case 3:
					return 850;
					break;
				
				case 4:
					return 950;
					break;
				
				case 5:
					return 1000;
					break;
				
				case 6:
					return 1050;
					break;
				
				case 7:
					return 1100;
					break;
				
				case 8:
					return 1150;
					break;
				
				case 9:
					return 1200;
					break;
				
				case 10:
					return 150;
					break;
				
				case 11:
					return 450;
					break;
				
				case 12:
					return 750;
					break;
				
				case 13:
					return 850;
					break;
				
				case 14:
					return 950;
					break;
				
				case 15:
					return 1000;
					break;
				
				case 16:
					return 1050;
					break;
				
				case 17:
					return 1100;
					break;
				
				case 18:
					return 1150;
					break;
				
				case 19:
					return 1200;
					break;
			}
			break;
	}
	return 350;
}

int func_353()//Position - 0x33A30
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_49())
	{
		return 0;
	}
	if (!func_245(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	return 1;
}

int func_354(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, var uParam5)//Position - 0x33A7F
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	if (bParam4)
	{
		fVar0 = Global_262145.f_26642;
	}
	if ((func_339(Global_1585309, Global_1585310) || func_338()) || func_337())
	{
		return 0;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(Global_1585308);
	switch (iParam0)
	{
		case 4:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_397(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * func_397(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * func_397(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20000) * func_397(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(35000) * func_397(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(50000) * func_397(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(650) * func_397(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6375) * func_397(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10625) * func_397(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17000) * func_397(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(29750) * func_397(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(42500) * func_397(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_397(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5250) * func_397(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8750) * func_397(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14000) * func_397(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(24500) * func_397(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(35000) * func_397(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_397(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * func_397(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * func_397(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * func_397(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21000) * func_397(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(30000) * func_397(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_397(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * func_397(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * func_397(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9600) * func_397(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16800) * func_397(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(24000) * func_397(iParam1)));
						break;
					}
			}
			break;
		
		case 5:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_396(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20000) * func_396(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(27000) * func_396(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(35000) * func_396(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * func_396(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(650) * func_396(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13000) * func_396(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17550) * func_396(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(22750) * func_396(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * func_396(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_396(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * func_396(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13500) * func_396(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * func_396(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * func_396(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_396(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * func_396(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * func_396(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * func_396(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * func_396(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_396(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * func_396(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * func_396(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * func_396(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * func_396(iParam1)));
						break;
					}
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_395(iParam1)));
					break;
				
				case 1:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * func_395(iParam1)));
					break;
				
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * func_395(iParam1)));
					break;
				
				case 3:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14000) * func_395(iParam1)));
					break;
				
				case 4:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16000) * func_395(iParam1)));
					break;
				
				case 5:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * func_395(iParam1)));
					break;
				
				case 6:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16750) * func_395(iParam1)));
					break;
				
				case 7:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17000) * func_395(iParam1)));
					break;
				
				case 8:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17250) * func_395(iParam1)));
					break;
				
				case 9:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * func_395(iParam1)));
					break;
				
				case 10:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17750) * func_395(iParam1)));
					break;
				
				case 11:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18000) * func_395(iParam1)));
					break;
				
				case 12:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18250) * func_395(iParam1)));
					break;
				
				case 13:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18500) * func_395(iParam1)));
					break;
				
				case 14:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18750) * func_395(iParam1)));
					break;
				
				case 15:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19000) * func_395(iParam1)));
					break;
				
				case 16:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19250) * func_395(iParam1)));
					break;
			}
			break;
		
		case 31:
			if (func_353())
			{
				return 0;
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_394()));
						break;
					
					case 1:
						return 10000;
						break;
					}
			}
			break;
		
		case 39:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26684) * func_317(iParam1, 0)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26685) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26685) * func_317(iParam1, 0)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26686) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26686) * func_317(iParam1, 0)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26687) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26687) * func_317(iParam1, 0)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26688) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26688) * func_317(iParam1, 0)));
						}
						break;
					
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26689) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26689) * func_317(iParam1, 0)));
						}
						break;
					
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26690) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26690) * func_317(iParam1, 0)));
						}
						break;
					
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26691) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26691) * func_317(iParam1, 0)));
						}
						break;
					
					case 8:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26692) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26692) * func_317(iParam1, 0)));
						}
						break;
					
					case 9:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26693) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26693) * func_317(iParam1, 0)));
						}
						break;
					
					case 10:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26694) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26694) * func_317(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((100f * fVar0));
						break;
					
					case 1:
						return SYSTEM::FLOOR((7000f * fVar0));
						break;
					
					case 2:
						return SYSTEM::FLOOR((7950f * fVar0));
						break;
					
					case 3:
						return SYSTEM::FLOOR((8500f * fVar0));
						break;
					
					case 4:
						return SYSTEM::FLOOR((10000f * fVar0));
						break;
					
					case 5:
						return SYSTEM::FLOOR((11000f * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR((11950f * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR((13500f * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR((14000f * fVar0));
						break;
					}
			}
			break;
		
		case 26:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1600) * func_393(iParam1)));
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24158;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3000) * Global_262145.f_26642) * func_393(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_393(iParam1)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5000) * Global_262145.f_26642) * func_393(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_393(iParam1)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8000) * Global_262145.f_26642) * func_393(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8000) * func_393(iParam1)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(9600) * Global_262145.f_26642) * func_393(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9600) * func_393(iParam1)));
						}
						break;
					
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11000) * Global_262145.f_26642) * func_393(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11000) * func_393(iParam1)));
						}
						break;
					
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11600) * Global_262145.f_26642) * func_393(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11600) * func_393(iParam1)));
						}
						break;
					
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12000) * Global_262145.f_26642) * func_393(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * func_393(iParam1)));
						}
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12400) * func_393(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12400) * func_393(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12500) * func_393(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12900) * func_393(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13250) * func_393(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13600) * func_393(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13900) * func_393(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14150) * func_393(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14400) * func_393(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14650) * func_393(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14850) * func_393(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15050) * func_393(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15250) * func_393(iParam1)) * fVar0));
						break;
					
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15450) * func_393(iParam1)) * fVar0));
						break;
					
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15650) * func_393(iParam1)) * fVar0));
						break;
					
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15850) * func_393(iParam1)) * fVar0));
						break;
					
					case 24:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16050) * func_393(iParam1)) * fVar0));
						break;
					
					case 25:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16250) * func_393(iParam1)) * fVar0));
						break;
					
					case 26:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16450) * func_393(iParam1)) * fVar0));
						break;
					
					case 27:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16650) * func_393(iParam1)) * fVar0));
						break;
					
					case 28:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16850) * func_393(iParam1)) * fVar0));
						break;
					
					case 29:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17050) * func_393(iParam1)) * fVar0));
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_393(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_393(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * func_393(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2900) * func_393(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4450) * func_393(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_393(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_393(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * func_393(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * func_393(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * func_393(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7200) * func_393(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7750) * func_393(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8150) * func_393(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8600) * func_393(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9000) * func_393(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9400) * func_393(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9800) * func_393(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10200) * func_393(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10550) * func_393(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10900) * func_393(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11250) * func_393(iParam1)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11600) * func_393(iParam1)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11900) * func_393(iParam1)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12200) * func_393(iParam1)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12500) * func_393(iParam1)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12800) * func_393(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_393(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(650) * func_393(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_393(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1750) * func_393(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_393(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * func_393(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2900) * func_393(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4450) * func_393(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_393(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_393(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * func_393(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6450) * func_393(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6800) * func_393(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * func_393(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * func_393(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7850) * func_393(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8150) * func_393(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8450) * func_393(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8750) * func_393(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9050) * func_393(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9300) * func_393(iParam1)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9550) * func_393(iParam1)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9800) * func_393(iParam1)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10050) * func_393(iParam1)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10250) * func_393(iParam1)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10450) * func_393(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_393(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(400) * func_393(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_393(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(898) * func_393(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1250) * func_393(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1750) * func_393(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_393(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * func_393(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2900) * func_393(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4450) * func_393(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_393(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_393(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_393(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5700) * func_393(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * func_393(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6300) * func_393(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * func_393(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9600) * func_393(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9850) * func_393(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10100) * func_393(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10350) * func_393(iParam1)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10600) * func_393(iParam1)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10850) * func_393(iParam1)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11100) * func_393(iParam1)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11350) * func_393(iParam1)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11600) * func_393(iParam1)));
						break;
					}
			}
			break;
		
		case 8:
			if (((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 35) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * func_395(iParam1)));
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24156;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4600) * Global_262145.f_26642) * func_395(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * func_395(iParam1)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7400) * Global_262145.f_26642) * func_395(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7400) * func_395(iParam1)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11700) * Global_262145.f_26642) * func_395(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11700) * func_395(iParam1)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14500) * Global_262145.f_26642) * func_395(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14500) * func_395(iParam1)));
						}
						break;
					
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14700) * Global_262145.f_26642) * func_395(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14700) * func_395(iParam1)));
						}
						break;
					
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14900) * Global_262145.f_26642) * func_395(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14900) * func_395(iParam1)));
						}
						break;
					
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15100) * Global_262145.f_26642) * func_395(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15100) * func_395(iParam1)));
						}
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15300) * func_395(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15500) * func_395(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15700) * func_395(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15900) * func_395(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16100) * func_395(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16300) * func_395(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * func_395(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16700) * func_395(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16900) * func_395(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17100) * func_395(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17300) * func_395(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * func_395(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * func_392(0)));
						break;
					
					case 21:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24157;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4600) * Global_262145.f_26642) * func_395(1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * func_395(1)));
						}
						break;
					
					case 22:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7400) * Global_262145.f_26642) * func_395(2)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7400) * func_395(2)));
						}
						break;
					
					case 23:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11700) * Global_262145.f_26642) * func_395(3)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11700) * func_395(3)));
						}
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14500) * func_392(4)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14700) * func_392(5)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14900) * func_392(6)));
						break;
					
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15100) * func_392(7)));
						break;
					
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15300) * func_392(8)));
						break;
					
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15500) * func_392(9)));
						break;
					
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15700) * func_392(10)));
						break;
					
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15900) * func_392(11)));
						break;
					
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16100) * func_392(12)));
						break;
					
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16300) * func_392(13)));
						break;
					
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * func_392(14)));
						break;
					
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16700) * func_392(15)));
						break;
					
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16900) * func_392(16)));
						break;
					
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17100) * func_392(17)));
						break;
					
					case 38:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17300) * func_392(18)));
						break;
					
					case 39:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * func_392(19)));
						break;
					
					case 40:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17700) * func_392(20)));
						break;
				}
			}
			else if (Global_1585307 == 36 || Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_395(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(115000) * func_395(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(205000) * func_395(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(285000) * func_395(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * func_395(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_395(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_392(0)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24842) * func_392(1)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * func_392(2)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_392(3)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(350000) * func_392(4)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * func_392(5)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * func_392(6)));
						break;
					
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * func_392(7)));
						break;
					
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * func_392(8)));
						break;
					
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * func_392(9)));
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22612;
						break;
					
					case 2:
						return Global_262145.f_22613;
						break;
					
					case 29:
						return Global_262145.f_22618;
						break;
					
					case 30:
						return Global_262145.f_22618;
						break;
					
					case 31:
						return Global_262145.f_22618;
						break;
					
					case 32:
						return Global_262145.f_22618;
						break;
					
					case 33:
						return Global_262145.f_22618;
						break;
					
					case 34:
						return Global_262145.f_22618;
						break;
					
					case 35:
						return Global_262145.f_22618;
						break;
					
					case 36:
						return Global_262145.f_22618;
						break;
					
					case 37:
						return Global_262145.f_22618;
						break;
					
					case 38:
						return Global_262145.f_22618;
						break;
					
					case 39:
						return Global_262145.f_22618;
						break;
					
					case 40:
						return Global_262145.f_22618;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22624;
						break;
					
					case 2:
						return Global_262145.f_22625;
						break;
					
					case 29:
						return Global_262145.f_22630;
						break;
					
					case 30:
						return Global_262145.f_22630;
						break;
					
					case 31:
						return Global_262145.f_22630;
						break;
					
					case 32:
						return Global_262145.f_22630;
						break;
					
					case 33:
						return Global_262145.f_22630;
						break;
					
					case 34:
						return Global_262145.f_22630;
						break;
					
					case 35:
						return Global_262145.f_22630;
						break;
					
					case 36:
						return Global_262145.f_22630;
						break;
					
					case 37:
						return Global_262145.f_22630;
						break;
					
					case 38:
						return Global_262145.f_22630;
						break;
					
					case 39:
						return Global_262145.f_22630;
						break;
					
					case 40:
						return Global_262145.f_22630;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_395(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * func_395(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_395(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_395(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4700) * func_395(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4900) * func_395(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5100) * func_395(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_395(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * func_395(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5700) * func_395(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_395(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6100) * func_395(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6300) * func_395(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * func_395(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6700) * func_395(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6900) * func_395(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7100) * func_395(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7300) * func_395(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * func_395(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * func_395(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_392(0)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * func_392(1)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_392(2)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_392(3)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4700) * func_392(4)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4900) * func_392(5)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5100) * func_392(6)));
						break;
					
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_392(7)));
						break;
					
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * func_392(8)));
						break;
					
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5700) * func_392(9)));
						break;
					
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_392(10)));
						break;
					
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6100) * func_392(11)));
						break;
					
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6300) * func_392(12)));
						break;
					
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * func_392(13)));
						break;
					
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6700) * func_392(14)));
						break;
					
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6900) * func_392(15)));
						break;
					
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7100) * func_392(16)));
						break;
					
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7300) * func_392(17)));
						break;
					
					case 38:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * func_392(18)));
						break;
					
					case 39:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * func_392(19)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_395(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_395(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_395(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_395(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * func_395(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2800) * func_395(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_395(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * func_395(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * func_395(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * func_395(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3800) * func_395(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * func_395(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4200) * func_395(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4400) * func_395(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * func_395(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4800) * func_395(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_395(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5200) * func_395(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * func_395(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_395(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_392(0)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_392(1)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_392(2)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_392(3)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * func_392(4)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2800) * func_392(5)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_392(6)));
						break;
					
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * func_392(7)));
						break;
					
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * func_392(8)));
						break;
					
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * func_392(9)));
						break;
					
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3800) * func_392(10)));
						break;
					
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * func_392(11)));
						break;
					
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4200) * func_392(12)));
						break;
					
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4400) * func_392(13)));
						break;
					
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * func_392(14)));
						break;
					
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4800) * func_392(15)));
						break;
					
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_392(16)));
						break;
					
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5200) * func_392(17)));
						break;
					
					case 38:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * func_392(18)));
						break;
					
					case 39:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_392(19)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(298) * func_395(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(390) * func_395(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_395(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(750) * func_395(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_395(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1200) * func_395(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1400) * func_395(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1600) * func_395(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1800) * func_395(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_395(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * func_395(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * func_395(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * func_395(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2800) * func_395(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_395(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * func_395(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * func_395(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * func_395(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3800) * func_395(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * func_395(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_392(0)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_392(1)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_392(2)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_392(3)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * func_392(4)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2800) * func_392(5)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_392(6)));
						break;
					
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * func_392(7)));
						break;
					
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * func_392(8)));
						break;
					
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * func_392(9)));
						break;
					
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3800) * func_392(10)));
						break;
					
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * func_392(11)));
						break;
					
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4200) * func_392(12)));
						break;
					
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4400) * func_392(13)));
						break;
					
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * func_392(14)));
						break;
					
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4800) * func_392(15)));
						break;
					
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_392(16)));
						break;
					
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5200) * func_392(17)));
						break;
					
					case 38:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * func_392(18)));
						break;
					
					case 39:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_392(19)));
						break;
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_395(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(85000) * func_395(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * func_392(0)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(92500) * func_392(1)));
						break;
					}
			}
			break;
		
		case 9:
			if (iVar1 == joaat("dune3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21426) * func_391(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21427) * func_391(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("halftrack"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21430) * func_391(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21431) * func_391(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21432) * func_391(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("tampa3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21438) * func_391(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21439) * func_391(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21440) * func_391(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("insurgent3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21445) * func_391(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21446) * func_391(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21447) * func_391(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("technical3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21450) * func_391(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21451) * func_391(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21452) * func_391(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("menacer"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24865) * func_391(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(285000) * func_391(iParam1)));
						break;
				}
			}
			else if (func_295(iVar1))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26699) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_31795) * func_391(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22611;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22622;
						break;
					
					case 2:
						return Global_262145.f_24010;
						break;
				}
			}
			else if (Global_1585307 == 36 || Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24835) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24836) * func_391(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24837) * func_391(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24838) * func_391(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(225000) * func_391(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * func_391(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26699) * func_391(iParam1)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26700) * Global_262145.f_26642) * func_391(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26700) * func_391(iParam1)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26701) * Global_262145.f_26642) * func_391(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26701) * func_391(iParam1)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26702) * Global_262145.f_26642) * func_391(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26702) * func_391(iParam1)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26703) * Global_262145.f_26642) * func_391(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26703) * func_391(iParam1)));
						}
						break;
					
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26704) * Global_262145.f_26642) * func_391(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26704) * func_391(iParam1)));
						}
						break;
					
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26705) * Global_262145.f_26642) * func_391(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26705) * func_391(iParam1)));
						}
						break;
				}
			}
			else if (Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26724) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26725) * func_391(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26726) * func_391(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26727) * func_391(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26728) * func_391(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26729) * func_391(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26730) * func_391(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26731) * func_391(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26732) * func_391(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26733) * func_391(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26734) * func_391(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26735) * func_391(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26736) * func_391(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26737) * func_391(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26738) * func_391(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26739) * func_391(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26740) * func_391(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26741) * func_391(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26742) * func_391(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26743) * func_391(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26744) * func_391(iParam1)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_391(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1100) * func_391(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1350) * func_391(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_391(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_391(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * func_391(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4900) * func_391(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5800) * func_391(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * func_391(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8000) * func_391(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9150) * func_391(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10100) * func_391(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11050) * func_391(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11950) * func_391(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12900) * func_391(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13750) * func_391(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14600) * func_391(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15450) * func_391(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16250) * func_391(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17050) * func_391(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17800) * func_391(iParam1)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18550) * func_391(iParam1)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19250) * func_391(iParam1)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19950) * func_391(iParam1)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20600) * func_391(iParam1)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21250) * func_391(iParam1)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21850) * func_391(iParam1)));
						break;
					
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(22450) * func_391(iParam1)));
						break;
					
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(23000) * func_391(iParam1)));
						break;
					
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(23550) * func_391(iParam1)));
						break;
					
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(24050) * func_391(iParam1)));
						break;
					}
			}
			break;
		
		case 10:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_390(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9000) * func_390(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12500) * func_390(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18000) * func_390(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(33500) * func_390(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_390(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * func_390(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6250) * func_390(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9000) * func_390(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16750) * func_390(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_390(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5850) * func_390(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8125) * func_390(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11700) * func_390(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21775) * func_390(iParam1)));
						break;
				}
			}
			else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_390(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1800) * func_390(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * func_390(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * func_390(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6700) * func_390(iParam1)));
						break;
					}
			}
			break;
		
		case 12:
			if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_389(iParam1)));
						break;
					
					case 1:
						return Global_262145.f_22619;
						break;
					
					case 2:
						return Global_262145.f_22620;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_389(iParam1)));
						break;
					
					case 1:
						return Global_262145.f_22623;
						break;
					
					case 2:
						return Global_262145.f_22620;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(260) * func_389(iParam1)) * fVar0));
						break;
					
					case 1:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(750) * func_389(iParam1)) * fVar0));
						break;
					
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1800) * func_389(iParam1)) * fVar0));
						break;
					
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3000) * func_389(iParam1)) * fVar0));
						break;
					
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(9550) * func_389(iParam1)) * fVar0));
						break;
					
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(9750) * func_389(iParam1)) * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(10500) * func_389(iParam1)) * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12000) * func_389(iParam1)) * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13750) * func_389(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14625) * func_389(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15500) * func_389(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16475) * func_389(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17250) * func_389(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18125) * func_389(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19100) * func_389(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19975) * func_389(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20900) * func_389(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21675) * func_389(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22550) * func_389(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(23350) * func_389(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24175) * func_389(iParam1)) * fVar0));
						break;
					
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(25025) * func_389(iParam1)) * fVar0));
						break;
					
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(25900) * func_389(iParam1)) * fVar0));
						break;
					}
			}
			break;
		
		case 13:
			if (func_387(PLAYER::PLAYER_ID()) == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_386(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(750) * func_386(iParam1)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_386(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * func_386(iParam1)));
						break;
					}
			}
			break;
		
		case 50:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_385(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(29500) * func_385(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(32500) * func_385(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(40000) * func_385(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(50000) * func_385(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_385(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14750) * func_385(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16250) * func_385(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20000) * func_385(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(25000) * func_385(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(650) * func_385(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19175) * func_385(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21125) * func_385(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(26000) * func_385(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(30000) * func_385(iParam1)));
						break;
				}
			}
			else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_385(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_385(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * func_385(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8000) * func_385(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * func_385(iParam1)));
						break;
					}
			}
			break;
		
		case 23:
			if (Global_1585307 == 31)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_385(iParam1)));
						break;
					
					case 1:
						return Global_262145.f_24863;
						break;
					
					case 2:
						return Global_262145.f_24862;
						break;
					
					case 29:
						return Global_262145.f_24864;
						break;
					
					case 30:
						return Global_262145.f_24864;
						break;
					
					case 31:
						return Global_262145.f_24864;
						break;
					
					case 32:
						return Global_262145.f_24864;
						break;
					
					case 33:
						return Global_262145.f_24864;
						break;
					
					case 34:
						return Global_262145.f_24864;
						break;
					
					case 35:
						return Global_262145.f_24864;
						break;
					
					case 36:
						return Global_262145.f_24864;
						break;
					
					case 37:
						return Global_262145.f_24864;
						break;
					
					case 38:
						return Global_262145.f_24864;
						break;
					
					case 39:
						return Global_262145.f_24864;
						break;
					
					case 40:
						return Global_262145.f_24864;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(200) * func_384(iParam1)) * fVar0));
						break;
					
					case 1:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(750) * func_384(iParam1)) * fVar0));
						break;
					
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1340) * func_384(iParam1)) * fVar0));
						break;
					
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1650) * func_384(iParam1)) * fVar0));
						break;
					
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3000) * func_384(iParam1)) * fVar0));
						break;
					
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3200) * func_384(iParam1)) * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3650) * func_384(iParam1)) * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4100) * func_384(iParam1)) * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4550) * func_384(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5000) * func_384(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5350) * func_384(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5700) * func_384(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6050) * func_384(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6400) * func_384(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6750) * func_384(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7100) * func_384(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7450) * func_384(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7800) * func_384(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8150) * func_384(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8500) * func_384(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8850) * func_384(iParam1)) * fVar0));
						break;
					}
			}
			break;
		
		case 25:
			if (Global_1585307 == 31)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_385(iParam1)));
						break;
					
					case 1:
						return Global_262145.f_24863;
						break;
					
					case 2:
						return Global_262145.f_24862;
						break;
					
					case 29:
						return Global_262145.f_24864;
						break;
					
					case 30:
						return Global_262145.f_24864;
						break;
					
					case 31:
						return Global_262145.f_24864;
						break;
					
					case 32:
						return Global_262145.f_24864;
						break;
					
					case 33:
						return Global_262145.f_24864;
						break;
					
					case 34:
						return Global_262145.f_24864;
						break;
					
					case 35:
						return Global_262145.f_24864;
						break;
					
					case 36:
						return Global_262145.f_24864;
						break;
					
					case 37:
						return Global_262145.f_24864;
						break;
					
					case 38:
						return Global_262145.f_24864;
						break;
					
					case 39:
						return Global_262145.f_24864;
						break;
					
					case 40:
						return Global_262145.f_24864;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(200) * func_384(iParam1)) * fVar0));
						break;
					
					case 1:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(750) * func_384(iParam1)) * fVar0));
						break;
					
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1340) * func_384(iParam1)) * fVar0));
						break;
					
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1650) * func_384(iParam1)) * fVar0));
						break;
					
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3000) * func_384(iParam1)) * fVar0));
						break;
					
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3200) * func_384(iParam1)) * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3650) * func_384(iParam1)) * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4100) * func_384(iParam1)) * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4550) * func_384(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5000) * func_384(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5350) * func_384(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5700) * func_384(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6050) * func_384(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6400) * func_384(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6750) * func_384(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7100) * func_384(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7450) * func_384(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7800) * func_384(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8150) * func_384(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8500) * func_384(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8850) * func_384(iParam1)) * fVar0));
						break;
					}
			}
			break;
		
		case 27:
			iVar2 = iParam1;
			switch (iVar2)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_383(0)));
					break;
				
				case 1:
					return Global_262145.f_8280;
					break;
				
				case 2:
					return Global_262145.f_8281;
					break;
				
				case 3:
					return Global_262145.f_8282;
					break;
				
				case 4:
					return Global_262145.f_8283;
					break;
				
				case 5:
					return Global_262145.f_8121;
					break;
				
				case 6:
					return Global_262145.f_8122;
					break;
				
				case 7:
					return Global_262145.f_8123;
					break;
				
				case 8:
					return Global_262145.f_8124;
					break;
				
				case 9:
					return Global_262145.f_7681;
					break;
				
				case 10:
					return Global_262145.f_7682;
					break;
				
				case 11:
					return Global_262145.f_7683;
					break;
				
				case 12:
					return Global_262145.f_7684;
					break;
				
				case 13:
					return Global_262145.f_7685;
					break;
				
				case 14:
					return Global_262145.f_7686;
					break;
				
				case 15:
					return Global_262145.f_7687;
					break;
				
				case 16:
					return Global_262145.f_7688;
					break;
				
				case 17:
					return Global_262145.f_7617;
					break;
				
				case 18:
					return Global_262145.f_7618;
					break;
				
				case 19:
					return Global_262145.f_7619;
					break;
				
				case 20:
					return Global_262145.f_7620;
					break;
				
				case 21:
					return Global_262145.f_7621;
					break;
				
				case 22:
					return Global_262145.f_7622;
					break;
				
				case 23:
					return Global_262145.f_7623;
					break;
				
				case 24:
					return Global_262145.f_10654;
					break;
				
				case 25:
					return Global_262145.f_10655;
					break;
				
				case 26:
					return Global_262145.f_10656;
					break;
				
				case 30:
					return Global_262145.f_12346;
					break;
				
				case 31:
					return Global_262145.f_12347;
					break;
				
				case 34:
					return Global_262145.f_12558;
					break;
				
				case 35:
					return Global_262145.f_12559;
					break;
				
				case 38:
					return Global_262145.f_12585;
					break;
				
				case 39:
					return Global_262145.f_12586;
					break;
				
				case 40:
					return Global_262145.f_12587;
					break;
				
				case 44:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_383(44)));
					break;
				
				case 45:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_383(45)));
					break;
				
				case 46:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_383(46)));
					break;
				
				case 47:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * func_383(47)));
					break;
				
				case 48:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12500) * func_383(48)));
					break;
				
				case 49:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15000) * func_383(49)));
					break;
				
				case 50:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * func_383(50)));
					break;
				
				case 51:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(25000) * func_383(51)));
					break;
				
				case 52:
					return Global_262145.f_9228;
					break;
				
				case 53:
					return Global_262145.f_26656;
					break;
				
				case 54:
					return Global_262145.f_26657;
					break;
				
				case 55:
					return Global_262145.f_26658;
					break;
			}
			break;
		
		case 29:
		case 28:
			if (((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39) || (iParam1 > 1 && iParam0 == 29))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * func_382(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * func_382(iParam1)));
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26643) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26643) * func_382(iParam1)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26644) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26644) * func_382(iParam1)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26645) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26645) * func_382(iParam1)));
						}
						break;
					
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26646) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26646) * func_382(iParam1)));
						}
						break;
					
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26647) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26647) * func_382(iParam1)));
						}
						break;
					
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26648) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26648) * func_382(iParam1)));
						}
						break;
					
					case 8:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26649) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26649) * func_382(iParam1)));
						}
						break;
					
					case 9:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26650) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26650) * func_382(iParam1)));
						}
						break;
					
					case 10:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26651) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26651) * func_382(iParam1)));
						}
						break;
					
					case 11:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26652) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26652) * func_382(iParam1)));
						}
						break;
					
					case 12:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26653) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26653) * func_382(iParam1)));
						}
						break;
					
					case 13:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26654) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26654) * func_382(iParam1)));
						}
						break;
					
					case 14:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26655) * Global_262145.f_26642) * func_382(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26655) * func_382(iParam1)));
						}
						break;
					
					default:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26655) * func_382(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(400) * func_382(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_382(iParam1)));
						break;
					
					default:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_382(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_382(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_382(iParam1)));
						break;
					
					default:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_382(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(100) * func_382(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_382(iParam1)));
						break;
					
					default:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_382(iParam1)));
						break;
					}
			}
			break;
		
		case 30:
			if (iParam2 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					
					case 1:
						return Global_262145.f_9207;
						break;
					
					case 2:
						return Global_262145.f_9208;
						break;
					
					case 3:
						return Global_262145.f_9209;
						break;
					
					case 4:
						return Global_262145.f_9210;
						break;
					
					case 5:
						return Global_262145.f_9211;
						break;
					
					case 6:
						return Global_262145.f_9212;
						break;
					
					case 7:
						return Global_262145.f_9213;
						break;
				}
			}
			else if (iParam2 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return Global_262145.f_9214;
						break;
					
					case 1:
						return Global_262145.f_9215;
						break;
					
					case 2:
						return Global_262145.f_9216;
						break;
					
					case 3:
						return Global_262145.f_9217;
						break;
					
					case 4:
						return Global_262145.f_9218;
						break;
					
					case 5:
						return Global_262145.f_9219;
						break;
					
					case 6:
						return Global_262145.f_9220;
						break;
					
					case 7:
						return Global_262145.f_9221;
						break;
					
					case 8:
						return Global_262145.f_9222;
						break;
					
					case 9:
						return Global_262145.f_9223;
						break;
					
					case 10:
						return Global_262145.f_9224;
						break;
					
					case 11:
						return Global_262145.f_9225;
						break;
					
					case 12:
						return Global_262145.f_9226;
						break;
					
					case 13:
						return Global_262145.f_9227;
						break;
					}
			}
			break;
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_381(iParam1)));
					break;
				
				case 1:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_381(iParam1)));
					break;
				
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_381(iParam1)));
					break;
				
				case 3:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_381(iParam1)));
					break;
				
				case 4:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * func_381(iParam1)));
					break;
				
				case 10:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * func_381(iParam1)));
					break;
				
				default:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * func_381(99)));
					break;
			}
			break;
		
		case 40:
			if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("avenger")))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(0) * func_380(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21456) * func_380(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21457) * func_380(iParam1)));
						break;
				}
			}
			else if ((VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cerberus")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cerberus2"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cerberus3")))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26682) * func_380(iParam1)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26683) * Global_262145.f_26642) * func_380(iParam1)));
							break;
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26683) * func_380(iParam1)));
							break;
						}
						break;
				}
			}
			else if (((((VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("issi4")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("issi5"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("issi6"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("imperator"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("imperator2"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("imperator3")))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26680) * func_380(iParam1)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26681) * Global_262145.f_26642) * func_380(iParam1)));
							break;
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26681) * func_380(iParam1)));
							break;
						}
						break;
				}
			}
			else if (Global_1585307 == 31)
			{
				if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("oppressor2")))
				{
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(750) * func_380(iParam1)));
							break;
						
						case 1:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24860) * func_380(iParam1)));
							break;
						
						case 2:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24861) * func_380(iParam1)));
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(750) * func_380(iParam1)));
							break;
						
						case 1:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21434) * func_380(iParam1)));
							break;
						}
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(55000) * func_380(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21424) * func_380(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21425) * func_380(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 29)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(78500) * func_380(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21443) * func_380(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21442) * func_380(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 32)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(0) * func_380(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21454) * func_380(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21455) * func_380(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("tornado5"))
			{
				return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)) * Global_262145.f_15060));
			}
			else if (iVar1 == joaat("dukes") || iVar1 == joaat("dukes3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_380(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_380(iParam1)));
						break;
					
					case 2:
						return Global_262145.f_9340;
						break;
					
					case 3:
						return Global_262145.f_9341;
						break;
					
					case 4:
						return Global_262145.f_9342;
						break;
					
					case 5:
						return Global_262145.f_9343;
						break;
					
					case 6:
						return Global_262145.f_9344;
						break;
					
					case 7:
						return Global_262145.f_9345;
						break;
					
					case 8:
						return Global_262145.f_9346;
						break;
					
					case 9:
						return Global_262145.f_9347;
						break;
					
					case 10:
						return Global_262145.f_9348;
						break;
					
					case 11:
						return Global_262145.f_9349;
						break;
					
					case 12:
						return Global_262145.f_9350;
						break;
					
					case 13:
						return Global_262145.f_9351;
						break;
					
					case 14:
						return Global_262145.f_9352;
						break;
					
					case 15:
						return Global_262145.f_9353;
						break;
					
					case 16:
						return Global_262145.f_9354;
						break;
					
					case 17:
						return Global_262145.f_9355;
						break;
					
					case 18:
						return Global_262145.f_9356;
						break;
					
					case 19:
						return Global_262145.f_9357;
						break;
					
					case 20:
						return Global_262145.f_9358;
						break;
					
					case 21:
						return Global_262145.f_9359;
						break;
					
					case 22:
						return Global_262145.f_9360;
						break;
					
					case 23:
						return Global_262145.f_9361;
						break;
					
					case 24:
						return Global_262145.f_9362;
						break;
					
					case 25:
						return Global_262145.f_9363;
						break;
					
					case 26:
						return Global_262145.f_9364;
						break;
					
					default:
						return 2500;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_380(iParam1)));
						break;
					
					case 1:
						return Global_262145.f_22621;
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_380(iParam1)));
						break;
					
					case 1:
						return Global_262145.f_22608;
						break;
					
					case 2:
						return Global_262145.f_22609;
						break;
					
					case 3:
						return Global_262145.f_22610;
						break;
				}
			}
			else if (Global_1585307 == 35)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_379(iParam1)));
						break;
					
					case 1:
						return Global_262145.f_23948;
						break;
					
					case 2:
						return Global_262145.f_23949;
						break;
					
					case 3:
						return Global_262145.f_23950;
						break;
				}
			}
			else if (((VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("revolter")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("savestra"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("comet4"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("viseris")))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_379(iParam1)));
						break;
					
					case 1:
						return Global_262145.f_23954;
						break;
				}
			}
			else if (Global_1585307 == 36)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_380(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24839) * func_380(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24840) * func_380(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24841) * func_380(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * func_380(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_380(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_380(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24845) * func_380(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * func_380(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_380(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(350000) * func_380(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * func_380(iParam1)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_380(iParam1)));
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24159;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(700) * Global_262145.f_26642) * func_380(iParam1)));
							break;
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_380(iParam1)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1150) * Global_262145.f_26642) * func_380(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1150) * func_380(iParam1)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1600) * Global_262145.f_26642) * func_380(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1600) * func_380(iParam1)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1950) * Global_262145.f_26642) * func_380(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1950) * func_380(iParam1)));
						}
						break;
					
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2400) * func_380(iParam1)) * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2500) * func_380(iParam1)) * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2850) * func_380(iParam1)) * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3400) * func_380(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3950) * func_380(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4500) * func_380(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5050) * func_380(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5550) * func_380(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6000) * func_380(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6350) * func_380(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6650) * func_380(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6950) * func_380(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7250) * func_380(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7550) * func_380(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7850) * func_380(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8150) * func_380(iParam1)) * fVar0));
						break;
					
					default:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8150) * func_380(iParam1)) * fVar0));
						break;
					}
			}
			break;
		
		case 44:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * func_378(iParam1)));
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24161;
						}
						else
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5500) * func_378(iParam1)) * fVar0));
						}
						break;
					
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8000) * func_378(iParam1)) * fVar0));
						break;
					
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(10500) * func_378(iParam1)) * fVar0));
						break;
					
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14000) * func_378(iParam1)) * fVar0));
						break;
					
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14500) * func_378(iParam1)) * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15000) * func_378(iParam1)) * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15500) * func_378(iParam1)) * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16000) * func_378(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16500) * func_378(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17000) * func_378(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17400) * func_378(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18300) * func_378(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19000) * func_378(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20425) * func_378(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21025) * func_378(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21475) * func_378(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21925) * func_378(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22375) * func_378(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22825) * func_378(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(23275) * func_378(iParam1)) * fVar0));
						break;
					
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(23725) * func_378(iParam1)) * fVar0));
						break;
					
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24175) * func_378(iParam1)) * fVar0));
						break;
					
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24625) * func_378(iParam1)) * fVar0));
						break;
					
					case 24:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24625) * func_378(iParam1)) * fVar0));
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * func_378(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_378(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * func_378(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * func_378(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7800) * func_378(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8000) * func_378(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8300) * func_378(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8500) * func_378(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8550) * func_378(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8700) * func_378(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8800) * func_378(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9500) * func_378(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11075) * func_378(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13525) * func_378(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16850) * func_378(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21050) * func_378(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * func_378(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(830) * func_378(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_378(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_378(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_378(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14500) * func_378(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15000) * func_378(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15750) * func_378(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16200) * func_378(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * func_378(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18000) * func_378(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18100) * func_378(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18325) * func_378(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18675) * func_378(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19150) * func_378(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19750) * func_378(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(400) * func_378(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(480) * func_378(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(580) * func_378(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_378(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_378(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1200) * func_378(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1250) * func_378(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1330) * func_378(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1350) * func_378(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1750) * func_378(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * func_378(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2550) * func_378(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2625) * func_378(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2725) * func_378(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2850) * func_378(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_378(iParam1)));
						break;
					}
			}
			break;
		
		case 46:
			if (((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * func_379(iParam1)));
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24160;
						}
						else
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7050) * func_379(iParam1)) * fVar0));
						}
						break;
					
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(10000) * func_379(iParam1)) * fVar0));
						break;
					
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13000) * func_379(iParam1)) * fVar0));
						break;
					
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14000) * func_379(iParam1)) * fVar0));
						break;
					
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16000) * func_379(iParam1)) * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16500) * func_379(iParam1)) * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17000) * func_379(iParam1)) * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17500) * func_379(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18000) * func_379(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18500) * func_379(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19000) * func_379(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19500) * func_379(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20000) * func_379(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20500) * func_379(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21000) * func_379(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21500) * func_379(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22750) * func_379(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24000) * func_379(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(25250) * func_379(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(26500) * func_379(iParam1)) * fVar0));
						break;
					
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(27750) * func_379(iParam1)) * fVar0));
						break;
					
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(29000) * func_379(iParam1)) * fVar0));
						break;
					
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(30250) * func_379(iParam1)) * fVar0));
						break;
					
					case 24:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(31500) * func_379(iParam1)) * fVar0));
						break;
					
					case 25:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(32750) * func_379(iParam1)) * fVar0));
						break;
					
					case 26:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(34000) * func_379(iParam1)) * fVar0));
						break;
					
					case 27:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(35250) * func_379(iParam1)) * fVar0));
						break;
					
					case 28:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(36500) * func_379(iParam1)) * fVar0));
						break;
					
					case 29:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(37750) * func_379(iParam1)) * fVar0));
						break;
				}
			}
			else if (Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_379(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24846) * func_379(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24847) * func_379(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(285000) * func_379(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * func_379(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * func_379(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_379(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_379(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1900) * func_379(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * func_379(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * func_379(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * func_379(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4750) * func_379(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_379(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5250) * func_379(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * func_379(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_379(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * func_379(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6250) * func_379(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * func_379(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6750) * func_379(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * func_379(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7250) * func_379(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8750) * func_379(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10250) * func_379(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11750) * func_379(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13250) * func_379(iParam1)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13750) * func_379(iParam1)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14250) * func_379(iParam1)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14750) * func_379(iParam1)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15250) * func_379(iParam1)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15750) * func_379(iParam1)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16250) * func_379(iParam1)));
						break;
					
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16750) * func_379(iParam1)));
						break;
					
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17250) * func_379(iParam1)));
						break;
					
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17750) * func_379(iParam1)));
						break;
					
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18250) * func_379(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_379(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(550) * func_379(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_379(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1050) * func_379(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_379(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_379(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2300) * func_379(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * func_379(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * func_379(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * func_379(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * func_379(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * func_379(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_379(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * func_379(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * func_379(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * func_379(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * func_379(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7750) * func_379(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8500) * func_379(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9250) * func_379(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * func_379(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_379(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(400) * func_379(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * func_379(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(800) * func_379(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_379(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1200) * func_379(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_379(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1600) * func_379(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_379(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1800) * func_379(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1900) * func_379(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_379(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2100) * func_379(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * func_379(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2300) * func_379(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * func_379(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * func_379(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2850) * func_379(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * func_379(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3550) * func_379(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_379(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 35)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * func_379(iParam1)));
						break;
					
					case 1:
						return Global_262145.f_23951;
						break;
					
					case 2:
						return Global_262145.f_23952;
						break;
					
					case 3:
						return Global_262145.f_23953;
						break;
				}
			}
			else if (Global_1585307 == 36)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_379(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24844) * func_379(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * func_379(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18000) * func_379(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(26000) * func_379(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(39500) * func_379(iParam1)));
						break;
					}
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_377(iParam1)));
					break;
				
				case 1:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_377(iParam1)));
					break;
				
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_377(iParam1)));
					break;
				
				case 3:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * func_377(iParam1)));
					break;
				
				case 4:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4400) * func_377(iParam1)));
					break;
				
				case 5:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * func_377(iParam1)));
					break;
			}
			break;
		
		case 53:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 35) || Global_1585307 == 34) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_376(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(50000) * func_376(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3250) * func_376(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(42500) * func_376(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * func_376(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(35000) * func_376(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_376(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(30000) * func_376(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * func_376(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(24000) * func_376(iParam1)));
						break;
					}
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_31308;
					break;
				
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(25000) * func_375(iParam1)));
					break;
				
				case 1:
					return Global_262145.f_31309;
					break;
				
				case 10:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * func_375(iParam1)));
					break;
				
				case 11:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_375(iParam1)));
					break;
				
				case 12:
					return Global_262145.f_12687;
					break;
				
				case 13:
					return Global_262145.f_12688;
					break;
				
				case 14:
					return Global_262145.f_12689;
					break;
				
				case 15:
					return Global_262145.f_12690;
					break;
				
				case 16:
					return Global_262145.f_12691;
					break;
				
				case 17:
					return Global_262145.f_12692;
					break;
				
				case 18:
					return 12345;
				
				case 19:
					return 12345;
				
				case 29:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_375(iParam1)));
					break;
				
				case 30:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_375(iParam1)));
					break;
				
				case 31:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * func_375(iParam1)));
					break;
				
				case 32:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12500) * func_375(iParam1)));
					break;
				
				case 33:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14000) * func_375(iParam1)));
					break;
				
				case 34:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15000) * func_375(iParam1)));
					break;
				
				case 35:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * func_375(iParam1)));
					break;
				
				case 36:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20000) * func_375(iParam1)));
					break;
				
				case 37:
					return Global_262145.f_8125;
					break;
				
				case 38:
					return Global_262145.f_8126;
					break;
				
				case 39:
					return Global_262145.f_8279;
					break;
				
				case 40:
					if (func_353())
					{
						return 0;
					}
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(25000) * func_375(iParam1)));
					break;
			}
			break;
		
		case 45:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * func_379(iParam1)));
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24160;
						}
						else
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7050) * func_379(iParam1)) * fVar0));
						}
						break;
					
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(10000) * func_379(iParam1)) * fVar0));
						break;
					
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13000) * func_379(iParam1)) * fVar0));
						break;
					
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14000) * func_379(iParam1)) * fVar0));
						break;
					
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16000) * func_379(iParam1)) * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16500) * func_379(iParam1)) * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17000) * func_379(iParam1)) * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17500) * func_379(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18000) * func_379(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18500) * func_379(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19000) * func_379(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19500) * func_379(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20000) * func_379(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20500) * func_379(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21000) * func_379(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21500) * func_379(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22750) * func_379(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24000) * func_379(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(25250) * func_379(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(26500) * func_379(iParam1)) * fVar0));
						break;
					
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(27750) * func_379(iParam1)) * fVar0));
						break;
					
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(29000) * func_379(iParam1)) * fVar0));
						break;
					
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(30250) * func_379(iParam1)) * fVar0));
						break;
					
					case 24:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(31500) * func_379(iParam1)) * fVar0));
						break;
					
					case 25:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(32750) * func_379(iParam1)) * fVar0));
						break;
					}
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 1600;
					break;
				
				case 1:
					return 1600;
					break;
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 1500;
					break;
				
				case 1:
					return 800;
					break;
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * func_374(iParam1)));
					break;
				
				case 1:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_374(iParam1)));
					break;
				
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * func_374(iParam1)));
					break;
				
				case 3:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_374(iParam1)));
					break;
				
				case 4:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * func_374(iParam1)));
					break;
				
				case 5:
					return Global_262145.f_8120;
					break;
			}
			break;
		
		case 15:
			if (iVar1 == joaat("apc"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21423) * func_373(1)));
						break;
				}
			}
			else if (iVar1 == joaat("dune3"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21428) * func_373(1)));
						break;
				}
			}
			else if (iVar1 == joaat("halftrack"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21433) * func_373(1)));
						break;
				}
			}
			else if (iVar1 == joaat("tampa3"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21441) * func_373(1)));
						break;
				}
			}
			else if (iVar1 == joaat("insurgent3"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21448) * func_373(1)));
						break;
				}
			}
			else if (iVar1 == joaat("technical3"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21453) * func_373(1)));
						break;
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(99000) * func_373(1)));
						break;
				}
			}
			else if (Global_1585307 == 29)
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(99000) * func_373(1)));
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				iParam1 = (iParam1 - 21);
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22616;
						break;
					
					case 2:
						return Global_262145.f_22615;
						break;
					
					case 3:
						return Global_262145.f_22614;
						break;
					
					case 4:
						return Global_262145.f_22617;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				iParam1 = (iParam1 - 21);
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22628;
						break;
					
					case 2:
						return Global_262145.f_22627;
						break;
					
					case 3:
						return Global_262145.f_22626;
						break;
					
					case 4:
						return Global_262145.f_22629;
						break;
				}
			}
			else if (Global_1585307 == 38)
			{
				if (iParam1 > 20)
				{
					iParam1 = (iParam1 - 21);
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26659) * func_373(0)));
							break;
						
						case 1:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26660) * Global_262145.f_26642) * func_373(1)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26660) * func_373(1)));
							}
							break;
						
						case 2:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26661) * Global_262145.f_26642) * func_373(2)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26661) * func_373(2)));
							}
							break;
						
						case 3:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26662) * Global_262145.f_26642) * func_373(3)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26662) * func_373(3)));
							}
							break;
						
						case 4:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26663) * Global_262145.f_26642) * func_373(4)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26663) * func_373(4)));
							}
							break;
						
						case 5:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26664) * Global_262145.f_26642) * func_373(5)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26664) * func_373(5)));
							}
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_372(iParam1)));
							break;
						
						case 1:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_372(iParam1)));
							break;
						
						case 2:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_372(iParam1)));
							break;
						
						case 3:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_372(iParam1)));
							break;
						
						case 4:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_372(iParam1)));
							break;
						
						case 5:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_372(iParam1)));
							break;
						
						case 6:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_372(iParam1)));
							break;
						
						case 7:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_372(iParam1)));
							break;
						
						case 8:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * func_372(iParam1)));
							break;
						
						case 9:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_372(iParam1)));
							break;
						
						case 10:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_372(iParam1)));
							break;
						
						case 11:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_372(iParam1)));
							break;
						
						case 12:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_372(iParam1)));
							break;
						
						case 13:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_372(iParam1)));
							break;
						
						case 14:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_372(iParam1)));
							break;
						
						case 15:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_372(iParam1)));
							break;
						
						case 16:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * func_372(iParam1)));
							break;
						
						case 17:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * func_372(iParam1)));
							break;
						
						case 18:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * func_372(iParam1)));
							break;
						
						case 19:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * func_372(iParam1)));
							break;
						
						case 20:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * func_372(iParam1)));
							break;
						}
				}
			}
			else if (Global_1585307 == 39)
			{
				iParam1 = (iParam1 - 21);
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26717) * func_373(0)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26718) * func_373(1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26719) * func_373(2)));
						break;
				}
			}
			else if ((func_341(Global_1585308) && iVar1 != joaat("fcr2")) && iVar1 != joaat("diablous2"))
			{
				iParam1 = (iParam1 - 21);
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_373(0)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_373(1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_373(2)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_373(3)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_373(4)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_373(5)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_373(5)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_373(6)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * func_373(7)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_373(8)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_373(9)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_373(10)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_373(11)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_373(12)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_373(13)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_373(14)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * func_373(15)));
						break;
				}
			}
			else if (Global_1585307 == 35)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_372(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_372(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_372(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_372(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_372(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_372(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_372(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_372(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * func_372(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_372(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_372(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_372(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_372(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_372(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_372(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_372(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * func_372(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * func_372(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * func_372(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * func_372(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * func_372(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 31)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_372(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_372(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_372(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_372(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_372(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_372(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_372(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_372(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * func_372(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_372(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_372(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_372(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_372(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_372(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_372(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_372(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * func_372(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * func_372(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * func_372(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * func_372(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * func_372(iParam1)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * func_373(0)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(99000) * func_373(1)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(120000) * func_373(2)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(145000) * func_373(3)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(169000) * func_373(4)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200000) * func_373(5)));
						break;
				}
			}
			else if (Global_1585307 == 36 || Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_372(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_372(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_372(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_372(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_372(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_372(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_372(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_372(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * func_372(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_372(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_372(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_372(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_372(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_372(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_372(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_372(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * func_372(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * func_372(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * func_372(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * func_372(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * func_372(iParam1)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * func_373(0)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24843) * func_373(1)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(120000) * func_373(2)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(145000) * func_373(3)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(169000) * func_373(4)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200000) * func_373(5)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_372(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_372(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_372(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_372(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_372(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_372(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_372(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_372(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * func_372(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_372(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_372(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_372(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_372(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_372(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_372(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_372(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * func_372(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * func_372(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * func_372(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * func_372(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * func_372(iParam1)));
						break;
					
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_373(0)));
						break;
					
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_373(1)));
						break;
					
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_373(2)));
						break;
					
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_373(3)));
						break;
					
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_373(4)));
						break;
					
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_373(5)));
						break;
					
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_373(5)));
						break;
					
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_373(6)));
						break;
					
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * func_373(7)));
						break;
					
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_373(8)));
						break;
					
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_373(9)));
						break;
					
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_373(10)));
						break;
					
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_373(11)));
						break;
					
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_373(12)));
						break;
					
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_373(13)));
						break;
					
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_373(14)));
						break;
					
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * func_373(15)));
						break;
					}
			}
			break;
		
		case 95:
			if (Global_1585307 == 36 || Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * func_373(0)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24843) * func_373(1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(120000) * func_373(2)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(145000) * func_373(3)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(169000) * func_373(4)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200000) * func_373(5)));
						break;
				}
			}
			else if (Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26715) * func_372(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26716) * func_372(iParam1)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(300) * func_372(iParam1)) * fVar0));
						break;
					
					case 1:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(900) * func_372(iParam1)) * fVar0));
						break;
					
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1500) * func_372(iParam1)) * fVar0));
						break;
					
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1700) * func_372(iParam1)) * fVar0));
						break;
					
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2000) * func_372(iParam1)) * fVar0));
						break;
					
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2750) * func_372(iParam1)) * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3300) * func_372(iParam1)) * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3900) * func_372(iParam1)) * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4350) * func_372(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5000) * func_372(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5150) * func_372(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5300) * func_372(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5450) * func_372(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5600) * func_372(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5750) * func_372(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5900) * func_372(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6050) * func_372(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6600) * func_372(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7150) * func_372(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7700) * func_372(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8250) * func_372(iParam1)) * fVar0));
						break;
					}
			}
			break;
		
		case 18:
			if (iVar1 == joaat("tampa3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * func_392(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21436) * func_392(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_395(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(85000) * func_395(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22612;
						break;
					
					case 2:
						return Global_262145.f_22613;
						break;
					
					case 29:
						return Global_262145.f_22618;
						break;
					
					case 30:
						return Global_262145.f_22618;
						break;
					
					case 31:
						return Global_262145.f_22618;
						break;
					
					case 32:
						return Global_262145.f_22618;
						break;
					
					case 33:
						return Global_262145.f_22618;
						break;
					
					case 34:
						return Global_262145.f_22618;
						break;
					
					case 35:
						return Global_262145.f_22618;
						break;
					
					case 36:
						return Global_262145.f_22618;
						break;
					
					case 37:
						return Global_262145.f_22618;
						break;
					
					case 38:
						return Global_262145.f_22618;
						break;
					
					case 39:
						return Global_262145.f_22618;
						break;
					
					case 40:
						return Global_262145.f_22618;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22624;
						break;
					
					case 2:
						return Global_262145.f_22625;
						break;
					
					case 29:
						return Global_262145.f_22630;
						break;
					
					case 30:
						return Global_262145.f_22630;
						break;
					
					case 31:
						return Global_262145.f_22630;
						break;
					
					case 32:
						return Global_262145.f_22630;
						break;
					
					case 33:
						return Global_262145.f_22630;
						break;
					
					case 34:
						return Global_262145.f_22630;
						break;
					
					case 35:
						return Global_262145.f_22630;
						break;
					
					case 36:
						return Global_262145.f_22630;
						break;
					
					case 37:
						return Global_262145.f_22630;
						break;
					
					case 38:
						return Global_262145.f_22630;
						break;
					
					case 39:
						return Global_262145.f_22630;
						break;
					
					case 40:
						return Global_262145.f_22630;
						break;
				}
			}
			else if ((Global_1585307 == 3 || Global_1585307 == 38) || Global_1585307 == 3)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * func_395(iParam1)));
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24156;
						}
						else
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4600) * func_395(iParam1)) * fVar0));
						}
						break;
					
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7400) * func_395(iParam1)) * fVar0));
						break;
					
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11700) * func_395(iParam1)) * fVar0));
						break;
					
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14500) * func_395(iParam1)) * fVar0));
						break;
					
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14700) * func_395(iParam1)) * fVar0));
						break;
					
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14900) * func_395(iParam1)) * fVar0));
						break;
					
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15100) * func_395(iParam1)) * fVar0));
						break;
					
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15300) * func_395(iParam1)) * fVar0));
						break;
					
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15500) * func_395(iParam1)) * fVar0));
						break;
					
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15700) * func_395(iParam1)) * fVar0));
						break;
					
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15900) * func_395(iParam1)) * fVar0));
						break;
					
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16100) * func_395(iParam1)) * fVar0));
						break;
					
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16300) * func_395(iParam1)) * fVar0));
						break;
					
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16500) * func_395(iParam1)) * fVar0));
						break;
					
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16700) * func_395(iParam1)) * fVar0));
						break;
					
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16900) * func_395(iParam1)) * fVar0));
						break;
					
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17100) * func_395(iParam1)) * fVar0));
						break;
					
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17300) * func_395(iParam1)) * fVar0));
						break;
					
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17500) * func_395(iParam1)) * fVar0));
						break;
					
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17700) * func_395(iParam1)) * fVar0));
						break;
					
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17900) * func_395(iParam1)) * fVar0));
						break;
					
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18100) * func_395(iParam1)) * fVar0));
						break;
					
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18300) * func_395(iParam1)) * fVar0));
						break;
					}
			}
			break;
		
		case 36:
			if (iVar1 == joaat("tampa3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * func_392(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21437) * func_392(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * func_392(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(92500) * func_392(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 3 || Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * func_392(0)));
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24157;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4600) * Global_262145.f_26642) * func_392(1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * func_392(1)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7400) * Global_262145.f_26642) * func_392(2)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7400) * func_392(2)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11700) * Global_262145.f_26642) * func_392(3)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11700) * func_392(3)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14500) * Global_262145.f_26642) * func_392(4)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14500) * func_392(4)));
						}
						break;
					
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14700) * Global_262145.f_26642) * func_392(5)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14700) * func_392(5)));
						}
						break;
					
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14900) * Global_262145.f_26642) * func_392(6)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14900) * func_392(6)));
						}
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15100) * func_392(7)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15300) * func_392(8)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15500) * func_392(9)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15700) * func_392(10)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15900) * func_392(11)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16100) * func_392(12)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16300) * func_392(13)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * func_392(14)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16700) * func_392(15)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16900) * func_392(16)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17100) * func_392(17)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17300) * func_392(18)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * func_392(19)));
						break;
					}
			}
			break;
	}
	switch (iParam0)
	{
		case 62:
		case 63:
		case 66:
		case 90:
		case 67:
		case 68:
		case 69:
		case 70:
		case 72:
		case 74:
		case 76:
		case 83:
		case 84:
			return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * fVar0) * func_317(iParam1, 1)));
			break;
		
		case 71:
			return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * fVar0) * func_317(iParam1, 1)));
		
		case 73:
			return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * fVar0) * func_317(iParam1, 1)));
			break;
		
		case 91:
			if (func_370(iVar1) || func_369(iVar1))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_373(0)));
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_373(1)));
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_373(2)));
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_373(3)));
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_373(4)));
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_373(5)));
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_373(5)));
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_373(6)));
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * func_373(7)));
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_373(8)));
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_373(9)));
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_373(10)));
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_373(11)));
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_373(12)));
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_373(13)));
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_373(14)));
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * func_373(15)));
					}
				
				default:
			}
			return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * fVar0) * func_317(iParam1, 1)));
			break;
		
		case 64:
			if (iVar1 == joaat("kanjo") || func_370(iVar1))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_373(0)));
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_373(1)));
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_373(2)));
					
					default:
				}
			}
			else
			{
				return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * fVar0) * func_317(iParam1, 1)));
			}
			break;
		
		case 79:
			if (Global_1585307 == 38 && iVar1 != joaat("GREENWOOD"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26665) * func_317(iParam1, 0)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26666) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26666) * func_317(iParam1, 0)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26667) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26667) * func_317(iParam1, 0)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26668) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26668) * func_317(iParam1, 0)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26669) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26669) * func_317(iParam1, 0)));
						}
						break;
					
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26670) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26670) * func_317(iParam1, 0)));
						}
						break;
					
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26671) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26671) * func_317(iParam1, 0)));
						}
						break;
					
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26672) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26672) * func_317(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * func_317(iParam1, 1)));
			}
			break;
		
		case 81:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26673) * func_317(iParam1, 0)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26674) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							if (func_295(iVar1))
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_31997) * func_317(iParam1, 0)));
							}
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26674) * func_317(iParam1, 0)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26675) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							if (func_295(iVar1))
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_31996) * func_317(iParam1, 0)));
							}
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26675) * func_317(iParam1, 0)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26676) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26676) * func_317(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * func_317(iParam1, 1)));
			}
			break;
		
		case 82:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26677) * func_317(iParam1, 0)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26678) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26678) * func_317(iParam1, 0)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26679) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26679) * func_317(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * func_317(iParam1, 1)));
			}
			break;
		
		case 80:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26695) * func_317(iParam1, 0)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26696) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26696) * func_317(iParam1, 0)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26697) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26697) * func_317(iParam1, 0)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26698) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26698) * func_317(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * func_317(iParam1, 1)));
			}
			break;
		
		case 77:
			if (Global_1585307 == 38 && iVar1 != joaat("GREENWOOD"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26710) * func_317(iParam1, 0)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26711) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26711) * func_317(iParam1, 0)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26712) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26712) * func_317(iParam1, 0)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26713) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26713) * func_317(iParam1, 0)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26714) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26714) * func_317(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * func_317(iParam1, 1)));
			}
			break;
		
		case 78:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26706) * func_317(iParam1, 0)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26707) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26707) * func_317(iParam1, 0)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26708) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26708) * func_317(iParam1, 0)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26709) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26709) * func_317(iParam1, 0)));
						}
						break;
				}
			}
			else if (Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26720) * func_317(iParam1, 0)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26721) * func_317(iParam1, 0)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26722) * func_317(iParam1, 0)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26723) * func_317(iParam1, 0)));
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(func_371(iParam0, 0)) * func_317(iParam1, 1)));
			}
			break;
		
		case 65:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26684) * func_317(iParam1, 0)));
						break;
					
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26685) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26685) * func_317(iParam1, 0)));
						}
						break;
					
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26686) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26686) * func_317(iParam1, 0)));
						}
						break;
					
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26687) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26687) * func_317(iParam1, 0)));
						}
						break;
					
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26688) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26688) * func_317(iParam1, 0)));
						}
						break;
					
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26689) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26689) * func_317(iParam1, 0)));
						}
						break;
					
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26690) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26690) * func_317(iParam1, 0)));
						}
						break;
					
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26691) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26691) * func_317(iParam1, 0)));
						}
						break;
					
					case 8:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26692) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26692) * func_317(iParam1, 0)));
						}
						break;
					
					case 9:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26693) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26693) * func_317(iParam1, 0)));
						}
						break;
					
					case 10:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26694) * Global_262145.f_26642) * func_317(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26694) * func_317(iParam1, 0)));
						}
						break;
				}
			}
			else if (iVar1 == joaat("gauntlet5") || func_370(iVar1))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * func_372(iParam1)));
						break;
					
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * func_372(iParam1)));
						break;
					
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * func_372(iParam1)));
						break;
					
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * func_372(iParam1)));
						break;
					
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * func_372(iParam1)));
						break;
					
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * func_372(iParam1)));
						break;
					
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * func_372(iParam1)));
						break;
					
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * func_372(iParam1)));
						break;
					
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * func_372(iParam1)));
						break;
					
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * func_372(iParam1)));
						break;
					
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * func_372(iParam1)));
						break;
					
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * func_372(iParam1)));
						break;
					
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * func_372(iParam1)));
						break;
					
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * func_372(iParam1)));
						break;
					
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * func_372(iParam1)));
						break;
					
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * func_372(iParam1)));
						break;
					
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * func_372(iParam1)));
						break;
					
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * func_372(iParam1)));
						break;
					
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * func_372(iParam1)));
						break;
					
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * func_372(iParam1)));
						break;
					
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * func_372(iParam1)));
						break;
				}
			}
			else
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					switch (MISC::GET_HASH_KEY(sParam3))
					{
						case -929847281:
							return Global_262145.f_12560;
							break;
						
						case -1229552555:
							return Global_262145.f_12561;
							break;
						
						case -2139842610:
							return Global_262145.f_12562;
							break;
						
						case -1360507947:
							return Global_262145.f_12563;
							break;
						
						case -1139644887:
							return Global_262145.f_12564;
							break;
						
						case -1302211900:
							return Global_262145.f_12565;
							break;
						
						case 1592228606:
							return Global_262145.f_12566;
							break;
						
						case 798268505:
							return Global_262145.f_12567;
							break;
						
						case 861643751:
							return Global_262145.f_12568;
							break;
						
						case -558021330:
							return Global_262145.f_12569;
							break;
						
						case -987459075:
							return Global_262145.f_12570;
							break;
						
						case 917239050:
							return Global_262145.f_12571;
							break;
						
						case 1363606660:
							return Global_262145.f_12572;
							break;
						
						case -1273183702:
							return Global_262145.f_12573;
							break;
						
						case -1511774791:
							return Global_262145.f_12574;
							break;
						
						case -821260651:
							return Global_262145.f_12575;
							break;
						
						case -1183030415:
							return Global_262145.f_12576;
							break;
						
						case -1421031662:
							return Global_262145.f_12577;
							break;
						
						case -610274579:
							return Global_262145.f_12578;
							break;
						
						case -868133840:
							return Global_262145.f_12579;
							break;
						
						case 2011868036:
							return Global_262145.f_12580;
							break;
						
						case 1353096116:
							return Global_262145.f_12581;
							break;
						
						case 1652113241:
							return Global_262145.f_12582;
							break;
						
						case 432418292:
							return Global_262145.f_12583;
							break;
						
						case 2795047:
							return Global_262145.f_12348;
							break;
						
						case 1804762357:
							return Global_262145.f_12349;
							break;
						
						case 1016635138:
							return Global_262145.f_12350;
							break;
						
						case 1268211548:
							return Global_262145.f_12351;
							break;
						
						case -566131538:
							return Global_262145.f_12352;
							break;
						
						case 574164136:
							return Global_262145.f_12353;
							break;
						
						case 1383713628:
							return Global_262145.f_12354;
							break;
						
						case 1190769756:
							return Global_262145.f_12355;
							break;
						
						case 892080321:
							return Global_262145.f_12356;
							break;
						
						case -1417413257:
							return Global_262145.f_12357;
							break;
						
						case 2077201057:
							return Global_262145.f_12361;
							break;
						
						case -644723163:
							return Global_262145.f_12362;
							break;
						
						case -1624352418:
							return Global_262145.f_12363;
							break;
						
						case 307294542:
							return Global_262145.f_12358;
							break;
						
						case -460450359:
							return Global_262145.f_12359;
							break;
						
						case -1048653909:
							return Global_262145.f_12360;
							break;
						
						case -2047131528:
							return Global_262145.f_12364;
							break;
						
						case 934290415:
							return Global_262145.f_12365;
							break;
						
						case 390286389:
							return Global_262145.f_12366;
							break;
						
						case 684584778:
							return Global_262145.f_12367;
							break;
						
						case -811603811:
							return Global_262145.f_12368;
							break;
						
						default:
							switch (iParam1)
							{
								case 1:
									return Global_262145.f_12348;
									break;
								
								case 2:
									return Global_262145.f_12349;
									break;
								
								case 3:
									return Global_262145.f_12350;
									break;
								
								case 4:
									return Global_262145.f_12351;
									break;
								
								case 5:
									return Global_262145.f_12352;
									break;
								
								case 6:
									return Global_262145.f_12353;
									break;
								
								case 7:
									return Global_262145.f_12354;
									break;
							}
							break;
						}
				}
				return 12345;
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_12381;
					break;
				
				case 1:
					return Global_262145.f_12700;
					break;
				
				case 2:
					return Global_262145.f_12701;
					break;
				
				case 3:
					return Global_262145.f_12702;
					break;
				
				case 4:
					return Global_262145.f_12703;
					break;
				
				case 5:
					return Global_262145.f_12704;
					break;
				
				case 6:
					return Global_262145.f_15061;
					break;
				
				default:
					return Global_262145.f_12704;
					break;
			}
			break;
		
		case 85:
			switch (iVar1)
			{
				case joaat("trailerlarge"):
					switch (iParam1)
					{
						case 0:
							return 0;
							break;
						
						case 1:
							return Global_262145.f_21771;
							break;
						
						case 2:
							return Global_262145.f_21772;
							break;
						
						case 3:
							return Global_262145.f_21773;
							break;
						
						case 4:
							return Global_262145.f_21774;
							break;
					}
					break;
				
				case joaat("lurcher"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_12698;
							break;
						
						case 2:
							return Global_262145.f_12697;
							break;
					}
					break;
				
				case joaat("btype2"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_12696;
							break;
						
						case 2:
							return Global_262145.f_12694;
							break;
						
						case 3:
							return Global_262145.f_12693;
							break;
						
						case 4:
							return Global_262145.f_12695;
							break;
					}
					break;
				
				case joaat("faction2"):
					if (iParam1 == 10)
					{
						return Global_262145.f_12705;
					}
					break;
				
				case joaat("omnis"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17423;
							break;
						
						case 2:
							return Global_262145.f_17436;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("bf400"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17429;
							break;
						
						case 2:
							return Global_262145.f_17442;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("tropos"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17424;
							break;
						
						case 2:
							return Global_262145.f_17437;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("brioso"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17425;
							break;
						
						case 2:
							return Global_262145.f_17438;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("trophytruck"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17426;
							break;
						
						case 2:
							return Global_262145.f_17439;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("trophytruck2"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17427;
							break;
						
						case 2:
							return Global_262145.f_17440;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("cliffhanger"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17428;
							break;
						
						case 2:
							return Global_262145.f_17441;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("tampa2"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17421;
							break;
						
						case 2:
							return Global_262145.f_17434;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("gargoyle"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17431;
							break;
						
						case 2:
							return Global_262145.f_17444;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("le7b"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17422;
						
						case 2:
							return Global_262145.f_17435;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("tyrus"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17420;
							break;
						
						case 2:
							return Global_262145.f_17433;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("lynx"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17430;
							break;
						
						case 2:
							return Global_262145.f_17443;
							break;
						
						default:
							return 999;
							break;
					}
					break;
				
				case joaat("sheava"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391) * func_317(iParam1, 1)));
							break;
						
						case 1:
							return Global_262145.f_17419;
							break;
						
						case 2:
							return Global_262145.f_17432;
							break;
						
						default:
							return 999;
							break;
					}
					break;
			}
			return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(func_371(iParam0, bParam4)) * func_317(iParam1, 1)));
			break;
		
		case 61:
		case 103:
			if (STREAMING::IS_MODEL_VALID(iVar1))
			{
				if (func_360(iVar1, 0))
				{
					return func_355(func_356(iVar1, iParam1));
				}
			}
			break;
	}
	return 700;
}

int func_355(int iParam0)//Position - 0x41930
{
	switch (iParam0)
	{
		case joaat("chino2"):
			return Global_262145.f_12341;
			break;
		
		case joaat("primo2"):
			return Global_262145.f_12344;
			break;
		
		case joaat("moonbeam2"):
			return Global_262145.f_12343;
			break;
		
		case joaat("faction2"):
			return Global_262145.f_12342;
			break;
		
		case joaat("buccaneer2"):
			return Global_262145.f_12340;
			break;
		
		case joaat("voodoo"):
			return Global_262145.f_12345;
			break;
		
		case joaat("sultanrs"):
			return Global_262145.f_13450;
			break;
		
		case joaat("banshee2"):
			return Global_262145.f_13452;
			break;
		
		case joaat("faction3"):
			return Global_262145.f_15030;
			break;
		
		case joaat("minivan2"):
			return Global_262145.f_15031;
			break;
		
		case joaat("sabregt2"):
			return Global_262145.f_15032;
			break;
		
		case joaat("slamvan3"):
			return Global_262145.f_15033;
			break;
		
		case joaat("tornado5"):
			return Global_262145.f_15034;
			break;
		
		case joaat("virgo2"):
			return Global_262145.f_15035;
			break;
		
		case joaat("comet3"):
			return Global_262145.f_19686;
			break;
		
		case joaat("diablous2"):
			return Global_262145.f_19690;
			break;
		
		case joaat("fcr2"):
			return Global_262145.f_19688;
			break;
		
		case joaat("italigtb2"):
			return Global_262145.f_19680;
			break;
		
		case joaat("specter2"):
			return Global_262145.f_19682;
			break;
		
		case joaat("nero2"):
			return Global_262145.f_19684;
			break;
		
		case joaat("elegy"):
			return Global_262145.f_19685;
			break;
		
		case joaat("technical3"):
			return Global_262145.f_21415;
			break;
		
		case joaat("insurgent3"):
			return Global_262145.f_21414;
			break;
		
		case joaat("bruiser"):
			return Global_262145.f_25976;
			break;
		
		case joaat("monster3"):
			return Global_262145.f_25975;
			break;
		
		case joaat("impaler2"):
			return Global_262145.f_25979;
			break;
		
		case joaat("issi4"):
			return Global_262145.f_25980;
			break;
		
		case joaat("deathbike"):
			return Global_262145.f_25981;
			break;
		
		case joaat("dominator4"):
			return Global_262145.f_25978;
			break;
		
		case joaat("slamvan4"):
			return Global_262145.f_25977;
			break;
		
		case joaat("deathbike3"):
			return Global_262145.f_25995;
			break;
		
		case joaat("deathbike2"):
			return Global_262145.f_25988;
			break;
		
		case joaat("impaler3"):
			return Global_262145.f_25986;
			break;
		
		case joaat("bruiser2"):
			return Global_262145.f_25983;
			break;
		
		case joaat("slamvan5"):
			return Global_262145.f_25984;
			break;
		
		case joaat("issi5"):
			return Global_262145.f_25987;
			break;
		
		case joaat("monster4"):
			return Global_262145.f_25982;
			break;
		
		case joaat("dominator5"):
			return Global_262145.f_25985;
			break;
		
		case joaat("impaler4"):
			return Global_262145.f_25993;
			break;
		
		case joaat("bruiser3"):
			return Global_262145.f_25990;
			break;
		
		case joaat("slamvan6"):
			return Global_262145.f_25991;
			break;
		
		case joaat("issi6"):
			return Global_262145.f_25994;
			break;
		
		case joaat("monster5"):
			return Global_262145.f_25989;
			break;
		
		case joaat("dominator6"):
			return Global_262145.f_25992;
			break;
		
		case joaat("youga3"):
			return Global_262145.f_29364;
			break;
		
		case joaat("gauntlet5"):
			return Global_262145.f_29359;
			break;
		
		case joaat("manana2"):
			return Global_262145.f_29363;
			break;
		
		case joaat("peyote3"):
			return Global_262145.f_29361;
			break;
		
		case joaat("yosemite3"):
			return Global_262145.f_29360;
			break;
		
		case joaat("glendale2"):
			return Global_262145.f_29362;
			break;
		
		case joaat("TENF2"):
			return Global_262145.f_32664;
		
		case joaat("WEEVIL2"):
			return Global_262145.f_32665;
		
		case joaat("BRIOSO3"):
			return Global_262145.f_32666;
		
		case joaat("SENTINEL4"):
			return Global_262145.f_32667;
	}
	return 0;
}

int func_356(int iParam0, int iParam1)//Position - 0x41D36
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("faction"):
			if (func_359(iParam0) == 1)
			{
				return joaat("faction2");
			}
			else if (func_359(iParam0) == 2)
			{
				if (Global_262145.f_14734)
				{
					if (iParam1 == 0)
					{
						return joaat("faction3");
					}
				}
				if (iParam1 == 1)
				{
					return joaat("faction2");
				}
			}
			break;
		
		case joaat("buccaneer"):
			return joaat("buccaneer2");
			break;
		
		case joaat("chino"):
			return joaat("chino2");
			break;
		
		case joaat("moonbeam"):
			return joaat("moonbeam2");
			break;
		
		case joaat("primo"):
			return joaat("primo2");
			break;
		
		case joaat("voodoo2"):
			return joaat("voodoo");
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_19186)
			{
				return joaat("comet3");
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_19188)
			{
				return joaat("diablous2");
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_19192)
			{
				return joaat("fcr2");
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_19194)
			{
				return joaat("italigtb2");
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_19199)
			{
				return joaat("specter2");
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_19196)
			{
				return joaat("nero2");
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_19189)
			{
				return joaat("elegy");
			}
			break;
		
		case joaat("sabregt"):
			return joaat("sabregt2");
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			return joaat("tornado5");
			break;
		
		case joaat("virgo3"):
			return joaat("virgo2");
			break;
		
		case joaat("minivan"):
			return joaat("minivan2");
			break;
		
		case joaat("slamvan"):
			if (!func_358(PLAYER::PLAYER_ID()))
			{
				return joaat("slamvan3");
			}
			else if (PLAYER::PLAYER_ID() != func_49())
			{
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 12))
				{
					if (iParam1 == 0)
					{
						return joaat("slamvan3");
					}
					else if (iParam1 == 1)
					{
						return joaat("slamvan4");
					}
					else if (iParam1 == 2)
					{
						return joaat("slamvan5");
					}
					else if (iParam1 == 3)
					{
						return joaat("slamvan6");
					}
				}
				else if (iParam1 == 0)
				{
					return joaat("slamvan4");
				}
				else if (iParam1 == 1)
				{
					return joaat("slamvan5");
				}
				else if (iParam1 == 2)
				{
					return joaat("slamvan6");
				}
			}
			break;
		
		case joaat("sultan"):
			return joaat("sultanrs");
			break;
		
		case joaat("banshee"):
			return joaat("banshee2");
			break;
		
		case joaat("technical"):
			if (Global_262145.f_21144)
			{
				return joaat("technical3");
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_21145)
			{
				return joaat("insurgent3");
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			if (iParam1 == 0)
			{
				return joaat("monster3");
			}
			else if (iParam1 == 1)
			{
				return joaat("monster4");
			}
			else if (iParam1 == 2)
			{
				return joaat("monster5");
			}
			break;
		
		case joaat("monster3"):
			if (iParam1 == 0)
			{
				return joaat("monster4");
			}
			else if (iParam1 == 1)
			{
				return joaat("monster5");
			}
			break;
		
		case joaat("monster4"):
			if (iParam1 == 0)
			{
				return joaat("monster3");
			}
			else if (iParam1 == 1)
			{
				return joaat("monster5");
			}
			break;
		
		case joaat("monster5"):
			if (iParam1 == 0)
			{
				return joaat("monster3");
			}
			else if (iParam1 == 1)
			{
				return joaat("monster4");
			}
			break;
		
		case joaat("glendale"):
			if (!func_358(PLAYER::PLAYER_ID()))
			{
				return joaat("glendale2");
			}
			else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 12))
			{
				if (iParam1 == 0)
				{
					return joaat("glendale2");
				}
				else if (iParam1 == 1)
				{
					return joaat("bruiser");
				}
				else if (iParam1 == 2)
				{
					return joaat("bruiser2");
				}
				else if (iParam1 == 3)
				{
					return joaat("bruiser3");
				}
			}
			else if (iParam1 == 0)
			{
				return joaat("bruiser");
			}
			else if (iParam1 == 1)
			{
				return joaat("bruiser2");
			}
			else if (iParam1 == 2)
			{
				return joaat("bruiser3");
			}
			break;
		
		case joaat("bruiser"):
			if (iParam1 == 0)
			{
				return joaat("bruiser2");
			}
			else if (iParam1 == 1)
			{
				return joaat("bruiser3");
			}
			break;
		
		case joaat("bruiser2"):
			if (iParam1 == 0)
			{
				return joaat("bruiser");
			}
			else if (iParam1 == 1)
			{
				return joaat("bruiser3");
			}
			break;
		
		case joaat("bruiser3"):
			if (iParam1 == 0)
			{
				return joaat("bruiser");
			}
			else if (iParam1 == 1)
			{
				return joaat("bruiser2");
			}
			break;
		
		case joaat("impaler"):
			if (iParam1 == 0)
			{
				return joaat("impaler2");
			}
			else if (iParam1 == 1)
			{
				return joaat("impaler3");
			}
			else if (iParam1 == 2)
			{
				return joaat("impaler4");
			}
			break;
		
		case joaat("impaler2"):
			if (iParam1 == 0)
			{
				return joaat("impaler3");
			}
			else if (iParam1 == 1)
			{
				return joaat("impaler4");
			}
			break;
		
		case joaat("impaler3"):
			if (iParam1 == 0)
			{
				return joaat("impaler2");
			}
			else if (iParam1 == 1)
			{
				return joaat("impaler4");
			}
			break;
		
		case joaat("impaler4"):
			if (iParam1 == 0)
			{
				return joaat("impaler2");
			}
			else if (iParam1 == 1)
			{
				return joaat("impaler3");
			}
			break;
		
		case joaat("issi3"):
			if (iParam1 == 0)
			{
				return joaat("issi4");
			}
			else if (iParam1 == 1)
			{
				return joaat("issi5");
			}
			else if (iParam1 == 2)
			{
				return joaat("issi6");
			}
			break;
		
		case joaat("issi4"):
			if (iParam1 == 0)
			{
				return joaat("issi5");
			}
			else if (iParam1 == 1)
			{
				return joaat("issi6");
			}
			break;
		
		case joaat("issi5"):
			if (iParam1 == 0)
			{
				return joaat("issi4");
			}
			else if (iParam1 == 1)
			{
				return joaat("issi6");
			}
			break;
		
		case joaat("issi6"):
			if (iParam1 == 0)
			{
				return joaat("issi4");
			}
			else if (iParam1 == 1)
			{
				return joaat("issi5");
			}
			break;
		
		case joaat("gargoyle"):
			if (iParam1 == 0)
			{
				return joaat("deathbike");
			}
			else if (iParam1 == 1)
			{
				return joaat("deathbike2");
			}
			else if (iParam1 == 2)
			{
				return joaat("deathbike3");
			}
			break;
		
		case joaat("dominator"):
		case joaat("dominator2"):
			if (iParam1 == 0)
			{
				return joaat("dominator4");
			}
			else if (iParam1 == 1)
			{
				return joaat("dominator5");
			}
			else if (iParam1 == 2)
			{
				return joaat("dominator6");
			}
			break;
		
		case joaat("dominator4"):
			if (iParam1 == 0)
			{
				return joaat("dominator5");
			}
			else if (iParam1 == 1)
			{
				return joaat("dominator6");
			}
			break;
		
		case joaat("dominator5"):
			if (iParam1 == 0)
			{
				return joaat("dominator4");
			}
			else if (iParam1 == 1)
			{
				return joaat("dominator6");
			}
			break;
		
		case joaat("dominator6"):
			if (iParam1 == 0)
			{
				return joaat("dominator4");
			}
			else if (iParam1 == 1)
			{
				return joaat("dominator5");
			}
			break;
		
		case joaat("imperator"):
			if (iParam1 == 0)
			{
				return joaat("imperator2");
			}
			else if (iParam1 == 1)
			{
				return joaat("imperator3");
			}
			break;
		
		case joaat("imperator2"):
			if (iParam1 == 0)
			{
				return joaat("imperator");
			}
			else if (iParam1 == 1)
			{
				return joaat("imperator3");
			}
			break;
		
		case joaat("imperator3"):
			if (iParam1 == 0)
			{
				return joaat("imperator");
			}
			else if (iParam1 == 1)
			{
				return joaat("imperator2");
			}
			break;
		
		case joaat("deathbike"):
			if (iParam1 == 0)
			{
				return joaat("deathbike2");
			}
			else if (iParam1 == 1)
			{
				return joaat("deathbike3");
			}
			break;
		
		case joaat("deathbike2"):
			if (iParam1 == 0)
			{
				return joaat("deathbike");
			}
			else if (iParam1 == 1)
			{
				return joaat("deathbike3");
			}
			break;
		
		case joaat("deathbike3"):
			if (iParam1 == 0)
			{
				return joaat("deathbike");
			}
			else if (iParam1 == 1)
			{
				return joaat("deathbike2");
			}
			break;
		
		case joaat("zr380"):
			if (iParam1 == 0)
			{
				return joaat("zr3802");
			}
			else if (iParam1 == 1)
			{
				return joaat("zr3803");
			}
			break;
		
		case joaat("zr3802"):
			if (iParam1 == 0)
			{
				return joaat("zr380");
			}
			else if (iParam1 == 1)
			{
				return joaat("zr3803");
			}
			break;
		
		case joaat("zr3803"):
			if (iParam1 == 0)
			{
				return joaat("zr380");
			}
			else if (iParam1 == 1)
			{
				return joaat("zr3802");
			}
			break;
		
		case joaat("cerberus"):
			if (iParam1 == 0)
			{
				return joaat("cerberus2");
			}
			else if (iParam1 == 1)
			{
				return joaat("cerberus3");
			}
			break;
		
		case joaat("cerberus2"):
			if (iParam1 == 0)
			{
				return joaat("cerberus");
			}
			else if (iParam1 == 1)
			{
				return joaat("cerberus3");
			}
			break;
		
		case joaat("cerberus3"):
			if (iParam1 == 0)
			{
				return joaat("cerberus");
			}
			else if (iParam1 == 1)
			{
				return joaat("cerberus2");
			}
			break;
		
		case joaat("scarab"):
			if (iParam1 == 0)
			{
				return joaat("scarab2");
			}
			else if (iParam1 == 1)
			{
				return joaat("scarab3");
			}
			break;
		
		case joaat("scarab2"):
			if (iParam1 == 0)
			{
				return joaat("scarab");
			}
			else if (iParam1 == 1)
			{
				return joaat("scarab3");
			}
			break;
		
		case joaat("scarab3"):
			if (iParam1 == 0)
			{
				return joaat("scarab");
			}
			else if (iParam1 == 1)
			{
				return joaat("scarab2");
			}
			break;
		
		case joaat("slamvan4"):
			if (iParam1 == 0)
			{
				return joaat("slamvan5");
			}
			else if (iParam1 == 1)
			{
				return joaat("slamvan6");
			}
			break;
		
		case joaat("slamvan5"):
			if (iParam1 == 0)
			{
				return joaat("slamvan4");
			}
			else if (iParam1 == 1)
			{
				return joaat("slamvan6");
			}
			break;
		
		case joaat("slamvan6"):
			if (iParam1 == 0)
			{
				return joaat("slamvan4");
			}
			else if (iParam1 == 1)
			{
				return joaat("slamvan5");
			}
			break;
		
		case joaat("brutus"):
			if (iParam1 == 0)
			{
				return joaat("brutus2");
			}
			else if (iParam1 == 1)
			{
				return joaat("brutus3");
			}
			break;
		
		case joaat("brutus2"):
			if (iParam1 == 0)
			{
				return joaat("brutus");
			}
			else if (iParam1 == 1)
			{
				return joaat("brutus3");
			}
			break;
		
		case joaat("brutus3"):
			if (iParam1 == 0)
			{
				return joaat("brutus");
			}
			else if (iParam1 == 1)
			{
				return joaat("brutus2");
			}
			break;
		
		case joaat("youga2"):
			return joaat("youga3");
			break;
		
		case joaat("gauntlet3"):
			return joaat("gauntlet5");
			break;
		
		case joaat("manana"):
			return joaat("manana2");
			break;
		
		case joaat("peyote"):
			return joaat("peyote3");
		
		case joaat("yosemite"):
			return joaat("yosemite3");
		
		case joaat("TENF"):
			return joaat("TENF2");
		
		case joaat("weevil"):
			return joaat("WEEVIL2");
		
		case joaat("brioso2"):
			return joaat("BRIOSO3");
		
		case joaat("sentinel3"):
			return joaat("SENTINEL4");
	}
	if (func_357(iParam0, 0))
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_357(int iParam0, int iParam1)//Position - 0x42817
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("TENF2"):
		case joaat("WEEVIL2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_358(int iParam0)//Position - 0x42BF6
{
	if (iParam0 != func_49())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_246(Global_2689235[iParam0 /*453*/].f_318.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_359(int iParam0)//Position - 0x42C3D
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("faction"):
			if (Global_262145.f_14734)
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case joaat("slamvan"):
		case joaat("glendale"):
			if (!func_358(PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
			else if (PLAYER::PLAYER_ID() != func_49())
			{
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 12))
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 3;
				}
			}
			break;
		
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			iVar0 = 2;
			break;
		
		case joaat("gargoyle"):
		case joaat("ratloader"):
		case joaat("ratloader2"):
		case joaat("issi3"):
		case joaat("dominator"):
		case joaat("dominator2"):
		case joaat("impaler"):
			iVar0 = 3;
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_360(int iParam0, int iParam1)//Position - 0x42DCC
{
	if (iParam1 == 0)
	{
		if (func_357(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_368();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14731)
			{
				return func_367();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14732)
			{
				return func_367();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14730)
			{
				return func_367();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14733)
			{
				return func_367();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14735)
			{
				return func_367();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_366();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_19186)
			{
				return func_365();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_19188)
			{
				return func_365();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_19192)
			{
				return func_365();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_19189)
			{
				return func_365();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_19196)
			{
				return func_365();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_19194)
			{
				return func_365();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_19199)
			{
				return func_365();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_21144)
			{
				return func_364();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_21145)
			{
				return func_364();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_363();
			break;
		
		case joaat("glendale"):
			if (func_363() || func_362())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_363();
			break;
		
		case joaat("issi3"):
			return func_363();
			break;
		
		case joaat("gargoyle"):
			return func_363();
			break;
		
		case joaat("dominator"):
			return func_363();
			break;
		
		case joaat("dominator2"):
			return func_363();
			break;
		
		case joaat("imperator"):
			return func_363();
			break;
		
		case joaat("imperator2"):
			return func_363();
			break;
		
		case joaat("imperator3"):
			return func_363();
			break;
		
		case joaat("deathbike"):
			return func_363();
			break;
		
		case joaat("deathbike2"):
			return func_363();
			break;
		
		case joaat("deathbike3"):
			return func_363();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_363();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_29320)
			{
				return func_362();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_29670)
			{
				return func_362();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_29319)
			{
				return func_362();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_29669)
			{
				return func_362();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_29668)
			{
				return func_362();
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("TENF"):
			if (Global_262145.f_33045)
			{
				return func_361();
			}
			break;
		
		case joaat("weevil"):
			if (Global_262145.f_33044)
			{
				return func_361();
			}
			break;
		
		case joaat("brioso2"):
			if (Global_262145.f_33037)
			{
				return func_361();
			}
			break;
		
		case joaat("sentinel3"):
			if (Global_262145.f_33046)
			{
				return func_361();
			}
			break;
	}
	return 0;
}

bool func_361()//Position - 0x4324B
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum2"));
}

bool func_362()//Position - 0x4325C
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}

bool func_363()//Position - 0x4326D
{
	return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}

bool func_364()//Position - 0x4327E
{
	return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}

bool func_365()//Position - 0x4328F
{
	return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}

bool func_366()//Position - 0x432A0
{
	return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}

bool func_367()//Position - 0x432B1
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}

bool func_368()//Position - 0x432C2
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_369(int iParam0)//Position - 0x432D3
{
	switch (iParam0)
	{
		case joaat("comet6"):
		case joaat("vectre"):
		case joaat("warrener2"):
		case joaat("remus"):
		case joaat("jester4"):
		case joaat("rt3000"):
		case joaat("cypher"):
		case joaat("sultan3"):
		case joaat("TENF2"):
		case joaat("KANJOSJ"):
		case joaat("POSTLUDE"):
		case joaat("SENTINEL4"):
		case joaat("BRIOSO3"):
		case joaat("WEEVIL2"):
			return 1;
			break;
	}
	return 0;
}

int func_370(int iParam0)//Position - 0x4333E
{
	switch (iParam0)
	{
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
			return 1;
		
		default:
	}
	return 0;
}

int func_371(int iParam0, bool bParam1)//Position - 0x433B8
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(Global_1585308);
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = SYSTEM::FLOOR(Global_262145.f_26642);
	}
	switch (iVar0)
	{
		case joaat("sultanrs"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_12369;
					break;
				
				case 63:
					return Global_262145.f_12370;
					break;
				
				case 91:
				case 64:
					return Global_262145.f_13453;
					break;
				
				case 66:
					return Global_262145.f_13454;
					break;
				
				case 90:
				case 67:
					return Global_262145.f_13455;
					break;
				
				case 68:
					return Global_262145.f_13456;
					break;
				
				case 69:
					return Global_262145.f_13457;
					break;
				
				case 70:
					return Global_262145.f_13458;
					break;
				
				case 71:
					return Global_262145.f_12377;
					break;
				
				case 72:
					return Global_262145.f_12378;
					break;
				
				case 73:
					return Global_262145.f_12379;
					break;
				
				case 74:
					return Global_262145.f_12380;
					break;
				
				case 76:
					return Global_262145.f_13459;
					break;
				
				case 77:
					return Global_262145.f_13460;
					break;
				
				case 78:
					return Global_262145.f_13461;
					break;
				
				case 79:
					return Global_262145.f_13464;
					break;
				
				case 80:
					return Global_262145.f_13462;
					break;
				
				case 81:
					return Global_262145.f_13463;
					break;
				
				case 82:
					return Global_262145.f_12385;
					break;
				
				case 83:
					return Global_262145.f_13465;
					break;
				
				case 84:
					return Global_262145.f_12390;
					break;
				
				case 85:
					return Global_262145.f_13466;
					break;
			}
			break;
		
		case joaat("banshee2"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_12369;
					break;
				
				case 63:
					return Global_262145.f_12370;
					break;
				
				case 91:
				case 64:
					return Global_262145.f_12371;
					break;
				
				case 66:
					return Global_262145.f_13467;
					break;
				
				case 90:
				case 67:
					return Global_262145.f_13468;
					break;
				
				case 68:
					return Global_262145.f_13469;
					break;
				
				case 69:
					return Global_262145.f_13470;
					break;
				
				case 70:
					return Global_262145.f_13471;
					break;
				
				case 71:
					return Global_262145.f_12377;
					break;
				
				case 72:
					return Global_262145.f_12378;
					break;
				
				case 73:
					return Global_262145.f_12379;
					break;
				
				case 74:
					return Global_262145.f_12380;
					break;
				
				case 76:
					return Global_262145.f_13472;
					break;
				
				case 77:
					return Global_262145.f_12383;
					break;
				
				case 78:
					return Global_262145.f_13473;
					break;
				
				case 79:
					return Global_262145.f_12388;
					break;
				
				case 80:
					return Global_262145.f_12386;
					break;
				
				case 81:
					return Global_262145.f_12387;
					break;
				
				case 82:
					return Global_262145.f_12385;
					break;
				
				case 83:
					return Global_262145.f_12389;
					break;
				
				case 84:
					return Global_262145.f_12390;
					break;
				
				case 85:
					return Global_262145.f_13474;
					break;
			}
			break;
		
		case joaat("btype3"):
			switch (iParam0)
			{
				case 62:
					return Global_262145.f_12369;
					break;
				
				case 63:
					return Global_262145.f_12370;
					break;
				
				case 91:
				case 64:
					return Global_262145.f_12371;
					break;
				
				case 66:
					return Global_262145.f_12372;
					break;
				
				case 90:
				case 67:
					return Global_262145.f_12373;
					break;
				
				case 68:
					return Global_262145.f_12374;
					break;
				
				case 69:
					return Global_262145.f_12375;
					break;
				
		