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
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_70 = 17;
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
	var uLocal_88 = 17;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
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
	var uLocal_131 = -1;
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
	int iLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_165 = 0f;
	struct<3> Local_166 = { 0, 0, 0 } ;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	struct<9> Local_169 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_170 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_171 = { 0, 0, 0 } ;
	struct<3> Local_172 = { 0, 0, 0 } ;
	struct<3> Local_173 = { 0, 0, 0 } ;
	float fLocal_174 = 0f;
	float fLocal_175 = 0f;
	float fLocal_176 = 0f;
	float fLocal_177 = 0f;
	float fLocal_178 = 0f;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	float fLocal_205 = 0f;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	float fLocal_214 = 0f;
	float fLocal_215 = 0f;
	float fLocal_216 = 0f;
	float fLocal_217 = 0f;
	float fLocal_218 = 0f;
	float fLocal_219 = 0f;
	float fLocal_220 = 0f;
	float fLocal_221 = 0f;
	var uLocal_222[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_223 = 0;
	struct<68> Local_224 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	struct<437> Local_239 = { 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 132, -1, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = -1;
	var uLocal_244 = 0;
	var uLocal_245 = 3;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = -1;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 16;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
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
	var uLocal_282 = 12;
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
	var uLocal_301 = 0;
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
	var uLocal_314 = 0;
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
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
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
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 1065353216;
	var uLocal_981 = 0;
	var uLocal_982 = 16;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 3;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	struct<19> Local_1055 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	var uLocal_1056 = -1;
	var uLocal_1057 = -1;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<5> Var0;
	bool bVar1;
	bool bVar2;
	struct<9> Var3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int* iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int* iVar13;
	int iVar14[2];
	struct<97> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	struct<26> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<4> Var24;
	int iVar25;
	int iVar26;
	struct<25> Var27;
	struct<682> Var28;
	int* iVar29;
	int iVar30;
	int iVar31;
	var uVar32;
	var uVar33;
	int iVar34;
	struct<13> Var35[2];
	var uVar36;
	int* iVar37;
	int* iVar38;
	int* iVar39;
	int* iVar40;
	int* iVar41;
	int* iVar42;
	int* iVar43;
	int* iVar44;
	bool bVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50[2];
	int iVar51;
	int iVar52;
	int iVar53;
	var uVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	struct<2> Var77[2];
	struct<8> Var78;
	struct<6> Var79;
	char* sVar80[2];
	int iVar81;
	struct<4> Var82;
	struct<64> Var83;
	struct<34> Var84[16];
	int iVar85;
	bool bVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	struct<3> Var104;
	float fVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	float fVar113;
	struct<3> Var114;
	struct<26> Var115;
	struct<26> Var116;
	struct<26> Var117;
	
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_156 = -1;
	iLocal_159 = joaat("prop_dart_1");
	iLocal_160 = joaat("prop_dart_2");
	iLocal_163 = joaat("prop_dart_bd_cab_01");
	fLocal_165 = 0.063f;
	Local_166 = { -0.0035f, 0f, -0.001f };
	iLocal_168 = joaat("prop_target_bull");
	Local_173 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_178 = 0.1f;
	iLocal_211 = 65;
	iLocal_213 = 660;
	fLocal_218 = 0.27f;
	fLocal_219 = 0.1f;
	fLocal_220 = -120f;
	fLocal_221 = 127f;
	iLocal_232 = 1;
	Var0.f_1 = 2;
	Local_173 = { Local_173 };
	bVar1 = false;
	bVar2 = false;
	bVar4 = true;
	bVar5 = false;
	iVar7 = 0;
	bVar8 = false;
	Local_171 = { 1f, 1f, 1f };
	Var15 = 2;
	Var15.f_1 = 3;
	Var15.f_1.f_84 = 3;
	Var15.f_1.f_90.f_2 = 1;
	Var15.f_1.f_90.f_3 = 1;
	Var15.f_1.f_97 = 3;
	Var15.f_1.f_97.f_84 = 3;
	Var15.f_1.f_97.f_90.f_2 = 1;
	Var15.f_1.f_97.f_90.f_3 = 1;
	iVar14[0] = -1;
	iVar14[iLocal_232] = -1;
	iVar16 = 0;
	iVar17 = 0;
	Var21 = 3;
	Var21.f_84 = 2;
	Var21.f_87 = 2;
	Var21.f_96 = 16;
	Var27.f_1 = 2;
	Var27.f_1.f_1 = 7;
	Var27.f_1.f_1.f_8 = 7;
	Var28.f_3 = 8;
	Var28.f_12 = 8;
	Var28.f_21 = 4;
	Var28.f_26.f_3 = 8;
	Var28.f_26.f_12 = 8;
	Var28.f_26.f_21 = 4;
	Var28.f_72 = 3;
	Var28.f_72.f_44.f_3.f_1 = 4;
	Var28.f_72.f_113 = 2;
	Var28.f_72.f_113.f_1.f_1 = 4;
	Var28.f_72.f_113.f_1.f_66.f_1 = 4;
	Var28.f_72.f_246.f_6 = 12;
	Var28.f_72.f_246.f_187 = 3;
	Var28.f_509.f_2 = 8;
	Var28.f_509.f_2.f_1.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var28.f_681 = 2;
	iVar34 = 2;
	iVar46 = 0;
	if (func_977(PLAYER::PLAYER_PED_ID()))
	{
		iVar81 = func_974(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	func_973(&Var82, iVar81);
	Var22 = { Var82 };
	Var22.f_3 = Var82.f_3;
	iVar31 = iVar81;
	fLocal_176 = 0.06f;
	fLocal_177 = 0.08f;
	fLocal_174 = fLocal_176;
	fLocal_175 = fLocal_177;
	Global_2703735.f_3580.f_37 = 0;
	bVar72 = false;
	if (BitTest(ScriptParam_1055.f_18, 1))
	{
		bVar1 = true;
	}
	if (BitTest(ScriptParam_1055.f_18, 2))
	{
		bVar2 = true;
	}
	if (BitTest(ScriptParam_1055.f_18, 3))
	{
		bVar8 = true;
	}
	Var83.f_1 = 4;
	Var83.f_19 = 4;
	Var83.f_24 = 4;
	Var83.f_29 = 4;
	Var83.f_34 = 4;
	Var83.f_51 = 4;
	Var83.f_63.f_4 = 1;
	if (!func_962(&ScriptParam_1055, &Var83, &Var84, bVar1))
	{
		func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
	}
	if (bVar1)
	{
		func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18);
	}
	if (bVar8)
	{
		func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 30);
	}
	if (!bVar1)
	{
		func_929(0, ScriptParam_1055.f_16);
		func_928(0);
		func_926();
	}
	if (bVar2)
	{
		func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 23);
		Var83.f_39 = Global_4718592.f_116945;
		Var83.f_40 = Global_4718592.f_116946;
	}
	Var84[iLocal_234 /*34*/].f_32 = iLocal_234;
	func_930(&(Var84[iLocal_234 /*34*/]), 20);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Var84[iLocal_234 /*34*/].f_33 = 1;
	}
	else
	{
		Var84[iLocal_234 /*34*/].f_33 = 0;
	}
	if (!bVar1)
	{
		func_925(0f);
		func_924();
		func_923(38);
		AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", true);
		func_922(&(Var21.f_79), &Var22);
		func_919(&(Var21.f_79), &Var24, &Var23, 1);
		func_918(bVar8, &Var24, Var21.f_79);
	}
	while (!bVar67)
	{
		NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
		if (!func_917(PLAYER::GET_PLAYER_INDEX()) && !func_916(PLAYER::PLAYER_ID()))
		{
			if ((!func_913(PLAYER::GET_PLAYER_INDEX(), 0, -1) && !func_911(PLAYER::GET_PLAYER_INDEX())) && !func_909(PLAYER::PLAYER_ID()))
			{
				if (Var84[iLocal_234 /*34*/] < 21)
				{
					func_907(&(Var84[iLocal_234 /*34*/]), 21, 0);
				}
			}
		}
		if (func_906(PLAYER::PLAYER_ID()) && func_916(PLAYER::PLAYER_ID()))
		{
			if (Var84[iLocal_234 /*34*/] < 21)
			{
				func_907(&(Var84[iLocal_234 /*34*/]), 21, 0);
			}
		}
		func_903(&Local_239);
		iLocal_238 = func_902(&Var84, 0);
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
		}
		else if (func_901(&(Var84[iLocal_234 /*34*/]), 18) || func_899(PLAYER::PLAYER_ID(), 0))
		{
			if ((MISC::GET_GAME_TIMER() % 30000) < 50)
			{
			}
			if (iLocal_238 >= 2)
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if (!func_898(&iVar37))
				{
					func_897(&iVar37);
				}
				else if (func_896(&iVar37) > 4f)
				{
					bVar67 = true;
				}
			}
			else if (iLocal_238 >= 1)
			{
				if (!func_898(&iVar37))
				{
					func_897(&iVar37);
				}
				else if (func_896(&iVar37) > 4f)
				{
					bVar67 = true;
					func_930(&(Var84[iLocal_234 /*34*/]), 16);
				}
			}
			else if (iLocal_238 < 1)
			{
				if (!func_898(&iVar37))
				{
					func_897(&iVar37);
				}
				else if (func_896(&iVar37) > 3f)
				{
					func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
				}
			}
		}
		else if (iLocal_238 >= 2)
		{
			if (!func_898(&iVar37))
			{
				func_897(&iVar37);
			}
			else if (func_896(&iVar37) > 0f)
			{
				iVar85 = func_895(&Var84, &iLocal_235);
				if (iVar85 == 2)
				{
					bVar67 = true;
					if (func_898(&iVar37))
					{
						if (func_896(&iVar37) > 10f)
						{
							func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
						}
					}
				}
			}
			else if (!bVar67)
			{
				if (func_898(&iVar37))
				{
				}
			}
		}
		else if (Global_2703735.f_3580.f_37 == 1)
		{
			HUD::CLEAR_HELP(true);
			func_894(PLAYER::PLAYER_ID(), 0, 1);
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
		}
		else if (BitTest(Global_2703735.f_3580.f_35, 5))
		{
			func_893("DARTS_ENEMIES", 7500, 0);
			func_894(PLAYER::PLAYER_ID(), 0, 1);
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		else
		{
			if (!bVar67)
			{
				if (!func_898(&iVar37))
				{
					func_897(&iVar37);
					func_892(0);
				}
				else if (func_896(&iVar37) > 3f)
				{
					bVar67 = true;
					func_930(&(Var84[iLocal_234 /*34*/]), 16);
					iLocal_236 = 1;
					Var84[iLocal_234 /*34*/].f_33 = 1;
					if (func_898(&iVar37))
					{
						func_891(&iVar37);
					}
				}
			}
			if (!bVar68)
			{
				bVar68 = true;
			}
		}
		SYSTEM::WAIT(0);
	}
	iVar17 = 0;
	iVar16 = 1;
	if (!bVar2 && !bVar1)
	{
		iVar17 = 1;
		iVar16 = 0;
	}
	if (func_901(&(Var84[iLocal_234 /*34*/]), 16))
	{
		iLocal_232 = 0;
		iVar16 = iVar17;
	}
	func_890(&Var84, &iVar14, iLocal_238, iVar17, iVar16, bVar1);
	if (!func_901(&(Var84[iLocal_234 /*34*/]), 16) && iVar14[iLocal_232] < 0)
	{
		func_930(&(Var84[iLocal_234 /*34*/]), 16);
		iLocal_232 = 0;
		iVar16 = iVar17;
		func_890(&Var84, &iVar14, iLocal_238, iVar17, iVar16, bVar1);
	}
	func_889(iLocal_238);
	iLocal_235 = iVar14[iVar16];
	Var15[0 /*97*/].f_79 = iVar14[0];
	Var15[iLocal_232 /*97*/].f_79 = iVar14[iLocal_232];
	if (bVar1)
	{
		bVar86 = func_901(&(Var84[Var15[0 /*97*/].f_79 /*34*/]), 30);
		Var15[iLocal_232 /*97*/].f_94 = { func_886(func_888(iVar81, !bVar86), Var22) };
		Var15[0 /*97*/].f_94 = { func_886(func_888(iVar81, bVar86), Var22) };
	}
	if (!bVar1)
	{
		if (iLocal_234 != iVar14[iVar17])
		{
		}
		if (iVar17 < 0 || iVar17 > 1)
		{
		}
	}
	if (bVar2 && !NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	if (func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 16) && !bVar1)
	{
		iLocal_235 = iLocal_234;
	}
	iLocal_230 = iLocal_232;
	if (func_885() != 0)
	{
		SYSTEM::WAIT(500);
	}
	if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 16) && iLocal_235 >= 0)
	{
		if (((func_901(&(Var84[iLocal_235 /*34*/]), 5) && func_885() != 0) && !func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18)) && !func_899(PLAYER::PLAYER_ID(), 0))
		{
			while (true)
			{
				if (!bVar69)
				{
					func_897(&iVar37);
					bVar69 = true;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || func_896(&iVar37) >= 8f)
				{
					HUD::CLEAR_HELP(true);
					func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18))
	{
		HUD::DISPLAY_AREA_NAME(false);
	}
	if ((!func_901(&(Var84[iLocal_234 /*34*/]), 16) && !func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18)) && !func_899(PLAYER::PLAYER_ID(), 0))
	{
		Var84[iLocal_234 /*34*/].f_3 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
	}
	iVar55 = func_884(65, -1, 0);
	fVar65 = (SYSTEM::TO_FLOAT(iVar55) / 100f);
	fVar66 = (fVar65 * 540f);
	iLocal_213 = SYSTEM::ROUND(fVar66) + 660;
	if (iLocal_213 < 660)
	{
		iLocal_213 = 660;
	}
	if (Global_2725346)
	{
		Global_2725346 = 0;
	}
	func_880(0);
	bVar5 = true;
	bVar4 = func_901(&(Var84[iVar14[0] /*34*/]), 16);
	if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18))
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_879(1);
	}
	while (true)
	{
		NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
		SYSTEM::WAIT(0);
		iLocal_238 = func_902(&Var84, 0);
		if (func_873())
		{
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
		iVar63 = 0;
		iVar61 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		iVar88 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (iVar88 != iLocal_234)
		{
			iLocal_234 = iVar88;
		}
		if (iVar62 != iVar61)
		{
			bVar74 = true;
			iVar62 = iVar61;
		}
		if (bVar74)
		{
			iVar87 = 0;
			while (iVar87 < iVar61)
			{
				iVar89 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar87);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar89))
				{
					if (func_899(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar89), 0) || func_901(&(Var84[iVar87 /*34*/]), 18))
					{
						if (func_899(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar89), 0))
						{
						}
						if (func_901(&(Var84[iVar87 /*34*/]), 18))
						{
						}
					}
					else
					{
						iVar63++;
						if (iVar63 != iVar64)
						{
						}
					}
				}
				iVar87++;
			}
		}
		iVar64 = iVar63;
		bVar74 = false;
		if (func_873() || func_870(1))
		{
			if (((Var84[iLocal_234 /*34*/] < 18 && Var83.f_1[func_869(&iVar14, iLocal_234)] < 3) && Var21.f_90 == 0) && Var21.f_91 == 0)
			{
				if (func_868(&Var83, &Var84, &iVar14))
				{
					func_866(23, 1, -1);
					iVar60 = func_801(PLAYER::PLAYER_ID());
				}
				else
				{
					iVar60 = func_777();
				}
				if (func_776(159))
				{
					Global_2725346 = 1;
				}
			}
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		if (func_870(1))
		{
			if (((Var84[iLocal_234 /*34*/] < 18 && Var83.f_1[func_869(&iVar14, iLocal_234)] < 3) && Var21.f_90 == 0) && Var21.f_91 == 0)
			{
				if (func_868(&Var83, &Var84, &iVar14))
				{
					func_866(23, 1, -1);
					iVar60 = func_801(PLAYER::PLAYER_ID());
				}
				else
				{
					iVar60 = func_777();
				}
			}
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		if (((Var84[iLocal_234 /*34*/] > 6 && Var84[iLocal_234 /*34*/] < 21) && !func_901(&(Var84[iLocal_234 /*34*/]), 18)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			func_775(&iVar9, 2, 1);
		}
		if (!func_901(&(Var84[iLocal_234 /*34*/]), 18))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (HUD::GET_PAUSE_MENU_STATE() == 15)
				{
					if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
					{
						HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
					}
				}
			}
		}
		if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 25))
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_901(&(Var84[iLocal_234 /*34*/]), 18))
			{
				func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
			}
			if (func_901(&(Var84[iLocal_234 /*34*/]), 18))
			{
				if (iLocal_238 < 1)
				{
					func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
				}
			}
			if (func_774())
			{
				MISC::SET_BIT(&uVar10, 1);
				MISC::SET_BIT(&uVar10, 0);
				func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
			}
			if (Global_1931434)
			{
				MISC::SET_BIT(&uVar10, 0);
				func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
			}
			if (!func_917(PLAYER::GET_PLAYER_INDEX()))
			{
				if (((!func_913(PLAYER::GET_PLAYER_INDEX(), 0, -1) && !func_911(PLAYER::GET_PLAYER_INDEX())) && !func_909(PLAYER::PLAYER_ID())) || func_773(PLAYER::GET_PLAYER_INDEX()))
				{
					if (func_901(&(Var84[iLocal_234 /*34*/]), 18))
					{
						func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
					}
					else if (Var84[iLocal_234 /*34*/] < 18)
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 23, 0);
					}
				}
			}
			if (func_772() || Global_1931433)
			{
				if (Var84[iLocal_234 /*34*/] < 18)
				{
					MISC::SET_BIT(&uVar10, 0);
					func_907(&(Var84[iLocal_234 /*34*/]), 23, 0);
				}
			}
			if ((((iLocal_238 < 2 && Var84[iLocal_234 /*34*/] < 18) || (Var84[iLocal_235 /*34*/] > 19 && Var84[iLocal_234 /*34*/] < 18)) && !func_901(&(Var84[iLocal_234 /*34*/]), 16)) && !func_901(&(Var84[iLocal_234 /*34*/]), 18))
			{
				if (Var84[iLocal_234 /*34*/] == 18 || Var84[iLocal_234 /*34*/] == 19)
				{
					iVar25 = 3;
				}
				else
				{
					iVar25 = 1;
					if (func_868(&Var83, &Var84, &iVar14))
					{
						func_866(23, 1, -1);
						iVar60 = func_801(PLAYER::PLAYER_ID());
					}
					else
					{
						iVar60 = func_777();
					}
				}
				func_894(PLAYER::PLAYER_ID(), 0, 1);
				Var84[iLocal_234 /*34*/] = 20;
			}
			else if ((MISC::GET_GAME_TIMER() % 30000) < 50)
			{
			}
		}
		if (func_901(&(Var84[iLocal_234 /*34*/]), 16) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 2)
		{
			if (func_901(&(Var84[iLocal_235 /*34*/]), 18))
			{
				if (!func_901(&(Var84[iLocal_234 /*34*/]), 17))
				{
					func_930(&(Var84[iLocal_234 /*34*/]), 17);
				}
			}
		}
		else if (func_901(&(Var84[iLocal_234 /*34*/]), 17) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < 2)
		{
			func_771(&(Var84[iLocal_234 /*34*/]), 17);
		}
		if (BitTest(Global_2703735.f_3580.f_35, 5))
		{
			func_893("DARTS_ENEMIES", 7500, 0);
			func_894(PLAYER::PLAYER_ID(), 0, 1);
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		if (func_770(&Var83, &(Var84[iLocal_234 /*34*/]), &iVar29))
		{
			if (func_868(&Var83, &Var84, &iVar14))
			{
				func_866(23, 1, -1);
				iVar60 = func_801(PLAYER::PLAYER_ID());
			}
			else
			{
				iVar60 = func_777();
			}
		}
		if (Var84[iLocal_234 /*34*/] >= 12 && Var84[iLocal_234 /*34*/] < 18)
		{
			if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18))
			{
				if (func_768(&(Var84[iLocal_234 /*34*/]), &Var28, &uVar54))
				{
					MISC::CLEAR_BIT(&iVar9, 0);
					MISC::CLEAR_BIT(&iVar9, 1);
					MISC::CLEAR_BIT(&iVar9, 2);
					Global_2725346 = 1;
					if (func_868(&Var83, &Var84, &iVar14))
					{
						func_866(23, 1, -1);
						iVar60 = func_801(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
					}
					else
					{
						iVar60 = func_777();
					}
					func_767(&Var0);
					if (func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 22) && !func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 16))
					{
						iVar90 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16])));
						if (func_977(iVar90))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar90, "anim@amb@clubhouse@mini@darts@", "throw_idle_a_down", 3))
							{
								TASK::TASK_PLAY_ANIM(iVar90, "anim@amb@clubhouse@mini@darts@", "outro", 1000f, -8f, -1, 0, 0f, false, false, true);
							}
						}
					}
					func_766(&(Var15[iLocal_232 /*97*/]));
					func_766(&(Var15[0 /*97*/]));
					Var28.f_669++;
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					func_907(&(Var84[iLocal_234 /*34*/]), 23, 0);
				}
			}
		}
		if (bVar1)
		{
			iVar91 = 0;
			iVar91 = 0;
			while (iVar91 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
			{
				switch (SCRIPT::GET_EVENT_AT_INDEX(1, iVar91))
				{
					case 174:
						if (func_765(iVar91, &Var3))
						{
							if (Var3.f_0)
							{
							}
							else if (Var3.f_4)
							{
							}
						}
						break;
				}
				iVar91++;
			}
			iVar92 = 0;
			while (iVar92 < 2)
			{
				if (func_764(Var15[iVar92 /*97*/].f_79))
				{
					func_760(&(Var15[iVar92 /*97*/]), &(Var21.f_79), Var3.f_1);
				}
				iVar92++;
			}
			if (Var3.f_6 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Var27.f_0))
			{
				Var3.f_6 = 0;
				if (Var3.f_8 != -1)
				{
					func_758(&Var27, func_759(Var3.f_7), Var3.f_8);
				}
				func_756(&Var27, func_757(Var3.f_7 == 1, 0, 1));
				iVar93 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
				func_755(&(Var15[0 /*97*/]), &iVar93);
				func_751(&(Var15[0 /*97*/]), &iVar93, 0);
				if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
				{
					iVar94 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
					func_755(&(Var15[iLocal_232 /*97*/]), &iVar94);
					func_751(&(Var15[iLocal_232 /*97*/]), &iVar94, 0);
				}
			}
			switch (Var84[iLocal_234 /*34*/])
			{
				case 1:
					func_907(&(Var84[iLocal_234 /*34*/]), 4, 2);
					break;
				
				case 4:
					func_922(&(Var21.f_79), &Var22);
					Var21.f_79.f_4 = (Var21.f_79.f_4 + 0.01f);
					func_750(&Var27, iVar31, Var21.f_79.f_1, Var21.f_79.f_4);
					MISC::SET_BIT(&iVar9, 0);
					func_747(&Var27, bVar1);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					func_907(&(Var84[iLocal_234 /*34*/]), 5, 2);
					break;
				
				case 5:
					if (func_746(&Var27, bVar1))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 6, 2);
					}
					break;
				
				case 6:
					iVar95 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
					func_745(&(Var15[0 /*97*/]), iLocal_159);
					func_755(&(Var15[0 /*97*/]), &iVar95);
					func_751(&(Var15[0 /*97*/]), &iVar95, 0);
					func_744(&(Var15[0 /*97*/]), Var21.f_79.f_1);
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						iVar96 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
						func_745(&(Var15[iLocal_232 /*97*/]), iLocal_159);
						func_755(&(Var15[iLocal_232 /*97*/]), &iVar96);
						func_751(&(Var15[iLocal_232 /*97*/]), &iVar96, 0);
						func_744(&(Var15[iLocal_232 /*97*/]), Var21.f_79.f_1);
					}
					MISC::SET_BIT(&iVar9, 6);
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						sVar80[iLocal_232] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
						Var35[iLocal_232 /*13*/] = { func_743(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232]))) };
						Var77[iLocal_232 /*2*/] = { func_742(&(Var35[iLocal_232 /*13*/])) };
						if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])))))
						{
							iVar50[iLocal_232] = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
						}
						if (!func_741(&(Var77[iLocal_232 /*2*/])))
						{
							func_737(&Var27, func_759(iLocal_232), &(Var77[iLocal_232 /*2*/]), 0);
						}
						func_736(&Var27, func_759(iLocal_232));
					}
					sVar80[0] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
					Var35[0 /*13*/] = { func_743(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0]))) };
					Var77[0 /*2*/] = { func_742(&(Var35[0 /*13*/])) };
					iVar20 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
					if (!PED::IS_PED_INJURED(iVar20))
					{
						iVar50[0] = iVar20;
					}
					if (!func_741(&(Var77[0 /*2*/])))
					{
						func_737(&Var27, func_759(0), &(Var77[0 /*2*/]), 0);
					}
					func_736(&Var27, func_759(0));
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						func_735(&Var27, sVar80[iLocal_232], sVar80[0]);
					}
					else
					{
						func_735(&Var27, "", sVar80[0]);
					}
					func_734(&Var27, bVar4, 1, Var83.f_34[iLocal_232], Var83.f_34[0]);
					func_907(&(Var84[iLocal_234 /*34*/]), 8, 2);
					break;
				
				case 8:
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						if (!func_733(&Var83, 26))
						{
							func_907(&(Var84[iLocal_234 /*34*/]), 11, 2);
						}
						else
						{
							func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
						}
					}
					else
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
					}
					break;
				
				case 11:
					if (!func_898(&iVar37))
					{
						func_897(&iVar37);
					}
					else if ((func_731(&iVar37) >= 5f || Var84[iVar14[0] /*34*/] == 12) || Var84[iVar14[0] /*34*/] == 12)
					{
						func_891(&iVar37);
						if (Var83.f_46 == iVar17)
						{
							func_756(&Var27, 1);
						}
						else
						{
							func_756(&Var27, 0);
						}
						func_730(&iVar29);
						func_907(&(Var84[iLocal_234 /*34*/]), 12, 2);
						iVar12 = 1;
						iVar11 = 0;
						iVar18 = Var83.f_45;
					}
					break;
				
				case 12:
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (func_733(&Var83, 22))
					{
						if (Var83.f_1[0] == 3 || Var83.f_1[iLocal_232] == 3)
						{
							iVar12 = 3;
						}
						switch (iVar12)
						{
							case 1:
								switch (iVar11)
								{
									case 0:
										if (Var3.f_0)
										{
											Var3.f_0 = 0;
											func_729(&(Var28.f_666), 11, 0);
											iVar11 = 1;
										}
										else if ((MISC::GET_GAME_TIMER() % 1500) < 50)
										{
										}
										break;
									
									case 1:
										bVar19 = false;
										iVar11 = 2;
										iVar12 = 2;
										break;
									
									case 2:
										if ((MISC::GET_GAME_TIMER() % 2000) < 50)
										{
										}
										break;
								}
								break;
							
							case 2:
								if (!func_728(&(Var28.f_666), 11))
								{
									func_729(&(Var28.f_666), 11, 1);
								}
								if (!bVar19)
								{
									if ((func_727(&(Var84[iVar14[0] /*34*/]), 5) || func_727(&(Var84[iVar14[iLocal_232] /*34*/]), 5)) || Var3.f_4)
									{
										Var3.f_4 = 0;
										iVar11 = 0;
										func_724(&iVar13);
										bVar19 = true;
									}
								}
								else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
								{
								}
								if (((bVar19 && (Var83.f_1[0] == 0 || Var83.f_1[iLocal_232] == 0)) && (Var84[iVar14[0] /*34*/].f_1 == 0 || Var84[iVar14[iLocal_232] /*34*/].f_1 == 0)) && func_731(&iVar13) > 1f)
								{
									if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
									{
										if (iVar18 == 1)
										{
											iVar18 = 0;
										}
										else if (iVar18 == 0)
										{
											iVar18 = 1;
										}
									}
									iVar18 = Var83.f_45;
									if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
									{
										func_756(&Var27, func_759(Var83.f_46));
									}
									func_891(&iVar13);
									Var3.f_0 = 0;
									Var3.f_4 = 0;
									iVar12 = 1;
								}
								break;
							
							case 3:
								iVar97 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
								iVar98 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
								func_755(&(Var15[0 /*97*/]), &iVar97);
								func_755(&(Var15[iLocal_232 /*97*/]), &iVar98);
								func_751(&(Var15[0 /*97*/]), &iVar97, 0);
								func_751(&(Var15[iLocal_232 /*97*/]), &iVar98, 0);
								func_891(&iVar37);
								func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
								break;
						}
					}
					else if (func_733(&Var83, 26))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
					}
					break;
				
				case 13:
					iVar51 = 0;
					iVar52 = 0;
					iVar51 = 0;
					while (iVar51 < 2)
					{
						Var21.f_84[iVar51] = 0;
						Var21.f_87[iVar51] = 0;
						func_736(&Var27, iVar51);
						iVar51++;
					}
					iVar99 = Var83.f_19[func_759(0)];
					if (iVar99 == 0)
					{
						iVar99 = 301;
					}
					func_758(&Var27, func_759(0), iVar99);
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						iVar99 = Var83.f_19[func_759(iLocal_232)];
						if (iVar99 == 0)
						{
							iVar99 = 301;
						}
						func_758(&Var27, func_759(iLocal_232), iVar99);
					}
					iVar52 = 0;
					while (iVar52 < 3)
					{
						Var21[iVar52 /*26*/].f_25 = 0;
						iVar52++;
					}
					func_730(&iVar29);
					iVar11 = 0;
					Var21.f_92 = 0;
					Var21.f_93 = 0;
					bVar70 = false;
					func_907(&(Var84[iLocal_234 /*34*/]), 14, 2);
					break;
				
				case 14:
					if (Var83.f_0 == 16)
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 16, 2);
						iVar12 = 1;
						iVar11 = 0;
						if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
						{
							iVar18 = func_757(Var83.f_44 == 1, iLocal_232, 0);
						}
						else
						{
							iVar18 = 0;
						}
						iVar18 = Var83.f_45;
						if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
						{
							func_756(&Var27, func_757(Var83.f_44 == 1, 0, 1));
						}
						else
						{
							func_756(&Var27, 1);
						}
						bVar71 = false;
					}
					break;
				
				case 16:
					break;
				
				case 17:
					switch (iVar53)
					{
						case 0:
							if (func_731(&iVar37) > 1.5f)
							{
								func_734(&Var27, bVar4, 1, Var83.f_34[iLocal_232], Var83.f_34[0]);
								iVar53++;
							}
							break;
						
						case 1:
							iVar51 = 0;
							while (iVar51 < 2)
							{
								func_736(&Var27, iVar51);
								iVar51++;
							}
							iVar53++;
							break;
						
						case 2:
							iVar53 = 0;
							func_907(&(Var84[iLocal_234 /*34*/]), 19, 2);
							break;
					}
					break;
				
				case 18:
					if ((MISC::GET_GAME_TIMER() % 2500) < 50 && func_898(&iVar37))
					{
					}
					if (!func_898(&iVar37))
					{
						func_724(&iVar37);
					}
					else if (func_731(&iVar37) > 0.75f)
					{
						if (func_901(&(Var84[iLocal_234 /*34*/]), 18) && !func_899(PLAYER::PLAYER_ID(), 0))
						{
							func_907(&(Var84[iLocal_234 /*34*/]), 23, 2);
						}
						if ((func_901(&(Var84[iLocal_234 /*34*/]), 16) && func_727(&(Var84[iVar14[0] /*34*/]), 7)) || !((func_901(&(Var84[iLocal_234 /*34*/]), 16) && func_727(&(Var84[iVar14[0] /*34*/]), 7)) && func_727(&(Var84[iVar14[iLocal_232] /*34*/]), 7)))
						{
							if (Var83.f_0 >= 6)
							{
								iVar100 = 0;
								iVar101 = 1;
								func_736(&Var27, iVar100);
								func_736(&Var27, iVar101);
								func_907(&(Var84[iLocal_234 /*34*/]), 19, 2);
							}
						}
						Var28.f_668 = (Var28.f_668 + Var83.f_34[0]);
						Var28.f_669 = (Var28.f_669 + Var83.f_34[iLocal_232]);
						StringCopy(&(Var28.f_648), sVar80[0], 24);
						StringCopy(&(Var28.f_654), sVar80[iLocal_232], 24);
						Var28.f_671 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 19:
					func_723("spectate DARTS_MPSTATE_WAIT_POST_GAME", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if (((func_727(&(Var84[iVar14[0] /*34*/]), 7) && func_727(&(Var84[iVar14[iLocal_232] /*34*/]), 7)) || (func_727(&(Var84[iVar14[0] /*34*/]), 7) && func_901(&(Var84[iVar14[0] /*34*/]), 16))) || Var84[iVar14[0] /*34*/] == 16)
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
					}
					break;
				
				case 20:
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
						if (func_901(&(Var84[iLocal_234 /*34*/]), 18))
						{
						}
					}
					break;
				
				case 23:
					if (func_722(&uVar36))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 21, 2);
					}
					else
					{
						func_721(&uVar36, 0, 0);
					}
					break;
				
				case 21:
					func_720(0);
					func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
					break;
			}
		}
		else
		{
			iVar102 = 0;
			while (iVar102 < 2)
			{
				if (func_764(Var15[iVar102 /*97*/].f_79))
				{
					func_718(&(Var15[iVar102 /*97*/]));
				}
				iVar102++;
			}
			switch (Var84[iLocal_234 /*34*/])
			{
				case 1:
					if (Var83.f_0 > 4)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							if (!func_899(PLAYER::PLAYER_ID(), 0))
							{
								func_707(PLAYER::PLAYER_ID(), 0, 66048, 0);
							}
							STREAMING::REQUEST_ANIM_DICT("mini@dartsintro_alt1");
							STREAMING::REQUEST_ANIM_DICT("mini@darts");
							STREAMING::REQUEST_ANIM_DICT("anim@amb@clubhouse@mini@darts@");
							func_907(&(Var84[iLocal_234 /*34*/]), 2, 0);
						}
					}
					break;
				
				case 2:
					func_907(&(Var84[iLocal_234 /*34*/]), 3, 0);
					break;
				
				case 3:
					if (!func_901(&(Var84[iLocal_234 /*34*/]), 8))
					{
						iVar30 = 0;
						func_930(&(Var84[iLocal_234 /*34*/]), 8);
					}
					else
					{
						func_901(&(Var84[iLocal_234 /*34*/]), 8);
						func_907(&(Var84[iLocal_234 /*34*/]), 4, 0);
					}
					break;
				
				case 4:
					if (!func_898(&iVar43))
					{
						func_897(&iVar43);
					}
					func_922(&(Var21.f_79), &Var22);
					func_705(Var21.f_79.f_1, Var21.f_79.f_4);
					func_704(&(Var0.f_4), Var21.f_79.f_1);
					iVar103 = 0;
					while (iVar103 < 3)
					{
						func_703(&(Var21[iVar103 /*26*/]), 0);
						iVar103++;
					}
					func_702(0);
					Var21.f_79.f_4 = (Var21.f_79.f_4 + 0.01f);
					func_750(&Var27, iVar31, Var21.f_79.f_1, Var21.f_79.f_4);
					func_747(&Var27, bVar1);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					func_700(1);
					iLocal_213 = 770;
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (!func_899(PLAYER::PLAYER_ID(), 0))
							{
							}
						}
					}
					func_907(&(Var84[iLocal_234 /*34*/]), 5, 0);
					break;
				
				case 5:
					if (func_746(&Var27, bVar1))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 6, 0);
					}
					break;
				
				case 6:
					func_930(&(Var84[iLocal_234 /*34*/]), 5);
					if (func_885() == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							func_698();
							func_892(0);
						}
					}
					iLocal_167 = OBJECT::CREATE_OBJECT(iLocal_168, Var23, false, false, false);
					func_697(&Var28);
					func_695(&(Var28.f_26));
					sVar80[iVar17] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar17])));
					Var35[iVar17 /*13*/] = { func_743(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar17]))) };
					Var77[iVar17 /*2*/] = { func_742(&(Var35[iVar17 /*13*/])) };
					if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
					{
						sVar80[iVar16] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16])));
						Var35[iVar16 /*13*/] = { func_743(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16]))) };
						Var77[iVar16 /*2*/] = { func_742(&(Var35[iVar16 /*13*/])) };
						iVar50[0] = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
						iVar50[1] = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
						func_735(&Var27, sVar80[iVar16], sVar80[iVar17]);
						if (!func_741(&(Var77[iVar16 /*2*/])))
						{
							func_737(&Var27, 0, &(Var77[iVar16 /*2*/]), 0);
						}
						if (!func_741(&(Var77[iVar17 /*2*/])))
						{
							func_737(&Var27, 1, &(Var77[iVar17 /*2*/]), 0);
						}
						func_736(&Var27, 0);
						func_736(&Var27, 1);
					}
					else
					{
						func_735(&Var27, "", sVar80[iVar17]);
						if (!func_741(&(Var77[iVar17 /*2*/])))
						{
							func_737(&Var27, 1, &(Var77[iVar17 /*2*/]), 0);
						}
						func_736(&Var27, 1);
					}
					if (Var83.f_39 > 0 || Var83.f_40 > 0)
					{
						func_734(&Var27, bVar4, bVar5, 0, 0);
					}
					if (bVar72)
					{
						func_652(13, "MN_DART", 0, 1, -1, 2, 1, 0);
						func_897(&iVar37);
						func_651(PLAYER::PLAYER_PED_ID());
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					func_650(1);
					func_907(&(Var84[iLocal_234 /*34*/]), 7, 0);
					break;
				
				case 7:
					if ((((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_731(&iVar37) > 1f) && bVar72) && !func_648(PLAYER::PLAYER_ID()))
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if ((!func_901(&(Var84[iLocal_234 /*34*/]), 12) && ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && func_731(&iVar37) > 1.6f) || func_731(&iVar37) > 20f)) || !bVar72)
					{
						if (bVar72)
						{
							func_647();
							func_891(&iVar37);
						}
						func_930(&(Var84[iLocal_234 /*34*/]), 11);
						func_907(&(Var84[iLocal_234 /*34*/]), 9, 0);
						func_930(&(Var84[iLocal_234 /*34*/]), 12);
					}
					else if (!func_901(&(Var84[iLocal_234 /*34*/]), 12) && bVar72)
					{
						func_644("MN_DART");
					}
					break;
				
				case 8:
					if ((func_901(&(Var84[iLocal_234 /*34*/]), 12) && func_901(&(Var84[iLocal_235 /*34*/]), 12)) || (func_901(&(Var84[iLocal_234 /*34*/]), 12) && func_901(&(Var84[iLocal_234 /*34*/]), 16)))
					{
						if (func_885() == 0 && (!(func_901(&(Var84[iLocal_234 /*34*/]), 11) && func_901(&(Var84[iLocal_235 /*34*/]), 11)) && !(func_901(&(Var84[iLocal_234 /*34*/]), 11) && func_901(&(Var84[iLocal_234 /*34*/]), 16))))
						{
							if (func_634(&uVar32, &(Var21.f_79), &uVar33, &iVar34, &Var21, &iVar41, &Var84))
							{
								func_632(136, 1, -1, 1);
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									func_907(&(Var84[iLocal_234 /*34*/]), 9, 0);
								}
								else
								{
									if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29))
									{
										func_456(14, Var83.f_50, Var83.f_49, 0, 0);
										func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29);
									}
									func_907(&(Var84[iLocal_234 /*34*/]), 13, 0);
								}
							}
						}
						else
						{
							HUD::CLEAR_HELP(true);
							func_455();
							func_775(&iVar9, 0, 1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
							{
								func_907(&(Var84[iLocal_234 /*34*/]), 11, 0);
							}
							else
							{
								if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29))
								{
									func_456(14, Var83.f_50, Var83.f_49, 0, 0);
									func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29);
								}
								func_907(&(Var84[iLocal_234 /*34*/]), 13, 0);
							}
						}
					}
					break;
				
				case 9:
					func_454(iVar81, &iVar6, func_901(&(Var84[iLocal_234 /*34*/]), 16));
					func_907(&(Var84[iLocal_234 /*34*/]), 10, 0);
					break;
				
				case 10:
					switch (iVar7)
					{
						case 0:
							iVar7 = 1;
							func_891(&iVar38);
							break;
						
						case 1:
							Var104 = { func_888(iVar81, bVar8) };
							fVar105 = func_453(Var104, Var21.f_79.f_1);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iVar49);
								TASK::OPEN_SEQUENCE_TASK(&iVar49);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var104, 1f, 6000, fVar105, 0.02f);
								TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", func_452(bVar2), 8f, -8f, -1, 2, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_idle_a_down", 8f, -8f, -1, 1, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar49);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar49);
							}
							iVar7 = 3;
							break;
						
						case 3:
							func_417(&Var84, &Var15, &Var0, iVar81);
							if (CAM::DOES_CAM_EXIST(iVar6))
							{
								CAM::SET_CAM_ACTIVE(iVar6, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								CAM::SHAKE_CAM(iVar6, "HAND_SHAKE", 0.3f);
							}
							func_775(&iVar9, 5, 1);
							func_775(&iVar9, 1, 1);
							func_775(&iVar9, 2, 1);
							func_775(&iVar9, 3, 1);
							iVar7 = 8;
							break;
						
						case 8:
							if (!func_898(&iVar39))
							{
								func_897(&iVar39);
							}
							else if (func_896(&iVar39) > 5.5f || PED::GET_SYNCHRONIZED_SCENE_PHASE(Var0.f_0) >= 0.95f)
							{
								func_891(&iVar39);
								func_907(&(Var84[iLocal_234 /*34*/]), 8, 0);
							}
							break;
					}
					break;
				
				case 11:
					if (!func_898(&iVar37))
					{
						func_416(&uLocal_1035, "DARTS_THRW_OFF", "DARTS_THRW_STR", 3000, 0, 2);
						func_897(&iVar37);
						if (CAM::IS_SCREEN_FADED_OUT() && !func_648(PLAYER::PLAYER_ID()))
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
					else if (func_731(&iVar37) >= 3.5f || !func_414(&uLocal_1035, 0))
					{
						func_647();
						func_891(&iVar37);
						if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29))
						{
							func_456(14, Var83.f_50, Var83.f_49, 0, 0);
							func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29);
						}
						if (Var83.f_46 == iVar17)
						{
							func_756(&Var27, 1);
						}
						else
						{
							func_756(&Var27, 0);
						}
						func_730(&iVar29);
						func_413(&uLocal_1035);
						func_930(&(Var84[iLocal_234 /*34*/]), 15);
						func_907(&(Var84[iLocal_234 /*34*/]), 12, 0);
					}
					break;
				
				case 12:
					if (func_733(&Var83, 22))
					{
						if (CAM::IS_SCREEN_FADED_OUT() && !func_648(PLAYER::PLAYER_ID()))
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
						{
							if ((!Var83.f_1[iVar17] == 3 && (!func_727(&(Var84[iVar14[iVar17] /*34*/]), 1) == 1 || !func_727(&(Var84[iVar14[iVar16] /*34*/]), 1) == 1)) && !func_728(&(Var83.f_48), 1))
							{
								if (!bLocal_223)
								{
									if (!Var83.f_1[iVar17] == 2)
									{
										if (bVar73 && !func_728(&(Var28.f_666), 13))
										{
											if (!BitTest(Global_113347, 5))
											{
												func_412("DARTS_TIOT", -1);
												MISC::SET_BIT(&Global_113347, 5);
											}
											func_729(&(Var28.f_666), 13, 1);
										}
									}
									Var28.f_672 = 1;
								}
								else if (Var28.f_672)
								{
									HUD::CLEAR_HELP(true);
									Var28.f_672 = 0;
								}
							}
							if ((Var84[iLocal_234 /*34*/].f_1 == 0 && Var83.f_1[iVar17] == 0) || bVar71)
							{
								func_411(&Var28, Var83.f_1[iVar17] == 0);
							}
						}
						if ((MISC::GET_GAME_TIMER() % 2000) < 50)
						{
						}
						switch (Var83.f_1[iVar17])
						{
							case 0:
								switch (Var84[iLocal_234 /*34*/].f_1)
								{
									case 0:
										if (!BitTest(Global_113347, 9))
										{
											func_412("DARTS_AIM_HLP", -1);
											MISC::SET_BIT(&Global_113347, 9);
										}
										else if (!func_410("DARTS_AIM_HLP") && !BitTest(Global_113347, 7))
										{
											func_412("DARTS_CLOCK", -1);
											MISC::SET_BIT(&Global_113347, 7);
										}
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
										{
											func_409(&(Var83.f_6), 1);
										}
										if (Var83.f_6.f_10)
										{
										}
										if (Var83.f_6.f_12)
										{
										}
										if ((!func_901(&(Var84[iLocal_234 /*34*/]), 7) && !HUD::IS_PAUSE_MENU_ACTIVE()) || Var83.f_6.f_12)
										{
											if (func_397(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), &Var23, 0, Var83.f_6.f_12, 1, 0))
											{
												func_396(Var21[Var83.f_41 /*26*/].f_11);
												if (Var83.f_6.f_12 && !bVar73)
												{
													bVar73 = true;
												}
												func_729(&(Var28.f_666), 11, 0);
												func_395(&(Var84[iLocal_234 /*34*/]), Var21[Var83.f_41 /*26*/]);
												if (func_901(&(Var84[iLocal_234 /*34*/]), 6))
												{
													func_771(&(Var84[iLocal_234 /*34*/]), 6);
												}
												if (Global_2703735.f_3580.f_36 <= 0 || !BitTest(Global_2703735.f_3580.f_35, 2))
												{
													func_771(&(Var84[iLocal_234 /*34*/]), 9);
												}
												else
												{
													func_930(&(Var84[iLocal_234 /*34*/]), 9);
												}
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 1);
												TASK::CLEAR_SEQUENCE_TASK(&iVar49);
												TASK::OPEN_SEQUENCE_TASK(&iVar49);
												TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_overlay", 8f, -8f, -1, 2, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_idle_a_down", 1000f, -8f, -1, 1, 0f, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iVar49);
												TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar49);
												func_393(&(Var84[iLocal_234 /*34*/].f_1), 1, 0);
											}
										}
										break;
									
									case 1:
										func_723("[AM_DARTS] current client is THROWING", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 9))
										{
											if (func_384(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0, 0))
											{
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
												func_393(&(Var84[iLocal_234 /*34*/].f_1), 2, 0);
											}
										}
										else if (!func_898(&iVar40))
										{
											if (func_383(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 988.1219f, -99.3023f, 73.8456f))
											{
												func_382(PLAYER::PLAYER_ID(), 2, 0);
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
												func_724(&iVar40);
											}
										}
										else if (func_731(&iVar40) > 1f || func_901(&(Var84[iLocal_235 /*34*/]), 6))
										{
											if (!func_901(&(Var84[iLocal_234 /*34*/]), 6))
											{
												func_930(&(Var84[iLocal_234 /*34*/]), 6);
											}
											func_891(&iVar40);
											func_393(&(Var84[iLocal_234 /*34*/].f_1), 0, 0);
										}
										break;
									
									case 2:
										func_380(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0);
										Var84[iLocal_234 /*34*/].f_4.f_20 = Var21[Var83.f_41 /*26*/].f_20;
										Var84[iLocal_234 /*34*/].f_4.f_21 = Var21[Var83.f_41 /*26*/].f_21;
										Var84[iLocal_234 /*34*/].f_4.f_22 = Var21[Var83.f_41 /*26*/].f_22;
										func_393(&(Var84[iLocal_234 /*34*/].f_1), 3, 0);
										func_723("Current client is waiting for other client to finish throwing", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										break;
									
									case 3:
										if (Var84[iLocal_235 /*34*/].f_2 >= 3)
										{
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
											func_930(&(Var84[iLocal_234 /*34*/]), 21);
											if (!Var21[Var83.f_41 /*26*/].f_25)
											{
												Var21[Var83.f_41 /*26*/].f_25 = 1;
												Var84[iLocal_234 /*34*/].f_4.f_25 = 1;
												func_379();
											}
											SYSTEM::SETTIMERA(0);
										}
										func_723("Waiting for other client to get to DARTS_MPWAIT_TURN_CHANGE", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										break;
								}
								break;
							
							case 1:
								switch (Var84[iLocal_234 /*34*/].f_2)
								{
									case 0:
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
										{
											func_409(&(Var83.f_6), 0);
										}
										if (!bVar71)
										{
											bVar71 = true;
										}
										if (func_727(&(Var84[iVar14[iVar16] /*34*/]), 1))
										{
											func_729(&(Var28.f_666), 11, 0);
											func_378(&(Var21[Var83.f_41 /*26*/]), &(Var84[iLocal_235 /*34*/]), iLocal_235);
											if (func_901(&(Var84[iLocal_234 /*34*/]), 6))
											{
												func_771(&(Var84[iLocal_234 /*34*/]), 6);
											}
											Var84[iLocal_234 /*34*/].f_2 = 1;
										}
										else
										{
											func_723("Current client is waiting for other client to throw", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										}
										break;
									
									case 1:
										if (!func_901(&(Var84[iLocal_235 /*34*/]), 9))
										{
											if (func_384(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0, 0))
											{
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
												Var84[iLocal_234 /*34*/].f_2 = 2;
											}
										}
										else if (!func_898(&iVar40))
										{
											if (func_383(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 988.1219f, -99.3023f, 73.8456f))
											{
												func_724(&iVar40);
											}
										}
										else if (func_896(&iVar40) > 1f || func_901(&(Var84[iLocal_235 /*34*/]), 6))
										{
											if (!func_901(&(Var84[iLocal_234 /*34*/]), 6))
											{
												func_930(&(Var84[iLocal_234 /*34*/]), 6);
											}
											func_891(&iVar40);
											Var84[iLocal_234 /*34*/].f_2 = 0;
										}
										break;
									
									case 2:
										if (Var84[iLocal_235 /*34*/].f_1 >= 2)
										{
											func_380(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0);
											Var84[iLocal_234 /*34*/].f_4.f_22 = Var21[Var83.f_41 /*26*/].f_22;
											Var84[iLocal_234 /*34*/].f_4.f_20 = Var21[Var83.f_41 /*26*/].f_20;
											Var84[iLocal_234 /*34*/].f_4.f_21 = Var21[Var83.f_41 /*26*/].f_21;
											Var84[iLocal_234 /*34*/].f_2 = 3;
										}
										func_723("Current client is waiting for other client to finish throwing", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										break;
									
									case 3:
										if (Var84[iLocal_235 /*34*/].f_1 >= 3)
										{
											func_930(&(Var84[iLocal_234 /*34*/]), 21);
											if (!Var21[Var83.f_41 /*26*/].f_25)
											{
												Var21[Var83.f_41 /*26*/].f_25 = 1;
											}
											SYSTEM::SETTIMERA(0);
										}
										func_723("Waiting for other client to get to DARTS_MPTHROW_TURN_CHANGE", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										break;
								}
								break;
							
							case 2:
								if (!func_728(&(Var28.f_666), 11))
								{
									if (iLocal_234 == Var83.f_45)
									{
									}
									func_729(&(Var28.f_666), 11, 1);
								}
								if (!func_727(&(Var84[iVar14[iVar17] /*34*/]), 5) && SYSTEM::TIMERA() > 1000)
								{
									Var84[iLocal_234 /*34*/].f_2 = 0;
									Var84[iLocal_234 /*34*/].f_1 = 0;
									Var21[Var83.f_41 /*26*/].f_25 = 0;
									func_771(&(Var84[iLocal_234 /*34*/]), 21);
									HUD::CLEAR_HELP(true);
									if (func_728(&(Var83.f_48), 1))
									{
										iVar106 = 0;
										while (iVar106 < 3)
										{
											Var21[iVar106 /*26*/].f_25 = 0;
											iVar106++;
										}
										if (iVar17 != Var83.f_45)
										{
											bVar71 = false;
										}
										if (Var83.f_45 == iVar17)
										{
											func_377(Var83.f_45, -1);
										}
										if (Var83.f_46 == iVar17)
										{
											func_756(&Var27, 1);
										}
										else
										{
											func_756(&Var27, 0);
										}
										iLocal_179 = 0;
									}
									func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 1);
								}
								break;
							
							case 3:
								if (!func_898(&iVar37))
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(true);
									if (Var83.f_43 == iVar17)
									{
										StringCopy(&Var78, "<C>", 64);
										StringConCat(&Var78, "~HUD_COLOUR_BLUE~", 64);
										StringConCat(&Var78, sVar80[iVar17], 64);
										StringConCat(&Var78, "</C>", 64);
										StringConCat(&Var78, "~s~", 64);
										func_375(&uLocal_1035, "DARTS_THRW_WIN", "DARTS_FIRST_DT", &Var78, 3000, 0, 1);
										AUDIO::PLAY_SOUND_FRONTEND(-1, "WINNER", "CELEBRATION_SOUNDSET", true);
									}
									else
									{
										StringCopy(&Var78, "<C>", 64);
										StringConCat(&Var78, "~HUD_COLOUR_RED~", 64);
										StringConCat(&Var78, sVar80[iVar16], 64);
										StringConCat(&Var78, "</C>", 64);
										StringConCat(&Var78, "~s~", 64);
										func_375(&uLocal_1035, "DARTS_THRW_LOS", "DARTS_FIRST_DT", &Var78, 3000, 0, 6);
										AUDIO::PLAY_SOUND_FRONTEND(-1, "LOSER", "CELEBRATION_SOUNDSET", true);
									}
									CAM::SET_CAM_ACTIVE(iLocal_191, true);
									func_897(&iVar37);
								}
								else if (func_731(&iVar37) >= 5f || !func_414(&uLocal_1035, 1))
								{
									iVar107 = 0;
									while (iVar107 < 3)
									{
										func_374(&(Var21[iVar107 /*26*/]));
										Var21[iVar107 /*26*/].f_25 = 0;
										iVar107++;
									}
									func_891(&iVar37);
									func_413(&uLocal_1035);
									func_930(&(Var84[iLocal_234 /*34*/]), 15);
									func_907(&(Var84[iLocal_234 /*34*/]), 13, 0);
								}
								break;
							}
					}
					break;
				
				case 13:
					iVar51 = 0;
					iVar52 = 0;
					iVar51 = 0;
					while (iVar51 < 2)
					{
						Var21.f_84[iVar51] = 0;
						Var21.f_87[iVar51] = 0;
						func_736(&Var27, iVar51);
						iVar51++;
					}
					func_758(&Var27, 1, 301);
					if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
					{
						func_758(&Var27, 0, 301);
					}
					iVar52 = 0;
					while (iVar52 < 3)
					{
						func_374(&(Var21[iVar52 /*26*/]));
						Var21[iVar52 /*26*/].f_25 = 0;
						iVar52++;
					}
					func_373(&(Var84[iLocal_234 /*34*/]));
					func_730(&iVar29);
					func_393(&(Var84[iLocal_234 /*34*/].f_1), 0, 0);
					Var84[iLocal_234 /*34*/].f_2 = 0;
					func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
					Var21.f_92 = 0;
					Var21.f_93 = 0;
					bVar70 = false;
					iLocal_179 = 0;
					iLocal_181 = 0;
					func_729(&(Var28.f_666), 12, 0);
					func_650(0);
					func_930(&(Var84[iLocal_234 /*34*/]), 1);
					func_907(&(Var84[iLocal_234 /*34*/]), 14, 0);
					break;
				
				case 14:
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_372())
					{
						func_361(&Var28, 0);
					}
					if (Var83.f_0 == 16)
					{
						func_394(&(Var84[iVar14[iVar17] /*34*/]), 7, 0);
						func_767(&Var0);
						func_358();
						HUD::DISPLAY_RADAR(false);
						func_455();
						func_775(&iVar9, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (func_357(func_884(1260, -1, 0), &iVar56))
						{
							func_729(&(Var28.f_666), 24, 1);
						}
						fLocal_176 = func_356(func_884(1260, -1, 0));
						fLocal_177 = func_355(func_884(1260, -1, 0));
						fLocal_174 = fLocal_176;
						fLocal_175 = fLocal_177;
						func_771(&(Var84[iLocal_234 /*34*/]), 1);
						if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
						{
							uLocal_222[4]++;
						}
						func_353(&Var28);
						if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
						{
							func_756(&Var27, func_757(Var83.f_44 == iVar17, 1, 0));
						}
						else
						{
							func_756(&Var27, 1);
						}
						bVar71 = false;
						func_352(&iVar9, 7);
						func_891(&iVar44);
						func_907(&(Var84[iLocal_234 /*34*/]), 16, 0);
					}
					else if (!func_898(&iVar44))
					{
						func_897(&iVar44);
					}
					else if (func_896(&iVar44) >= 25f)
					{
						func_352(&iVar9, 7);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
					}
					else if (func_896(&iVar44) >= 12f && func_896(&iVar44) < 25f)
					{
						if (!func_351(&iVar9, 7))
						{
							func_350(&iVar9, 7);
						}
					}
					break;
				
				case 15:
					if (func_733(&Var83, 20))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 16, 0);
					}
					break;
				
				case 16:
					if (CAM::IS_SCREEN_FADED_OUT() && !func_648(PLAYER::PLAYER_ID()))
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					switch (iVar30)
					{
						case 0:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_348(Var24, 1) > 1.5f)
							{
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								iVar30 = 0;
							}
							break;
					}
					if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
					{
						if ((!Var83.f_1[iVar17] == 3 && (!func_727(&(Var84[iVar14[iVar17] /*34*/]), 1) || !func_727(&(Var84[iVar14[iVar16] /*34*/]), 1))) && !func_728(&(Var83.f_48), 1))
						{
							if (!bLocal_223)
							{
								if (func_728(&(Var28.f_666), 18) && Var83.f_1[iVar17] == 0)
								{
									if (!func_728(&(Var28.f_666), 21))
									{
										if (!BitTest(Global_113347, 3))
										{
											func_412("DARTS_INSTR_W", -1);
											MISC::SET_BIT(&Global_113347, 3);
										}
										func_729(&(Var28.f_666), 21, 1);
									}
									else if (!func_728(&(Var28.f_666), 20) && func_728(&(Var28.f_666), 19))
									{
										if (!BitTest(Global_113347, 4))
										{
											func_412("DARTS_INSTR_B", -1);
											MISC::SET_BIT(&Global_113347, 4);
										}
										func_729(&(Var28.f_666), 20, 1);
									}
								}
								if (((bVar70 && !func_410("DARTS_SHT_USE")) && !func_410("DARTS_FST_HLP")) && Var83.f_1[iVar17] == 0)
								{
								}
								else if (!Var83.f_1[iVar17] == 2)
								{
									if ((((bVar73 && !func_728(&(Var28.f_666), 13)) && !func_410("DARTS_INSTR_W")) && !func_410("DARTS_INSTR_B")) && (func_898(&(Var83.f_6)) && func_731(&(Var83.f_6)) < 5f))
									{
										if (!BitTest(Global_113347, 5))
										{
											func_412("DARTS_TIOT", -1);
											MISC::SET_BIT(&Global_113347, 5);
										}
										func_729(&(Var28.f_666), 13, 1);
									}
								}
								Var28.f_672 = 1;
							}
							else if (Var28.f_672)
							{
								HUD::CLEAR_HELP(true);
								Var28.f_672 = 0;
							}
						}
						if ((Var84[iLocal_234 /*34*/].f_1 == 0 && Var83.f_1[iVar17] == 0) || bVar71)
						{
							if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_372())
							{
								func_361(&Var28, Var83.f_1[iVar17] == 0);
							}
						}
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							func_346(&Var28);
							if (bVar75)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "GOLF_NEW_RECORD", "HUD_AWARDS", true);
								bVar75 = false;
							}
						}
					}
					switch (Var83.f_1[iVar17])
					{
						case 0:
							switch (Var84[iLocal_234 /*34*/].f_1)
							{
								case 0:
									func_394(&(Var84[iVar14[iVar17] /*34*/]), 2, 1);
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
									{
										func_342(&(Var83.f_6), 1);
									}
									func_341(Var83.f_41, 1);
									if (func_728(&(Var28.f_666), 24))
									{
										if ((((((!func_410("DARTS_SHT_USE") && !func_410("DARTS_CLOCK")) && !func_410("DARTS_INSTR_W")) && !func_410("DARTS_INSTR_B")) && !func_410("DARTS_AIM_HLP")) && !func_410("DARTS_STD_HLP")) && !func_410("DARTS_FST_HLP"))
										{
											func_412("DARTS_LEVEL", -1);
											MISC::SET_BIT(&(Global_113386.f_18970.f_6), iVar56);
											func_729(&(Var28.f_666), 24, 0);
										}
									}
									if (Var83.f_6.f_10)
									{
									}
									if (Var83.f_6.f_12)
									{
									}
									if ((((!func_901(&(Var84[iLocal_234 /*34*/]), 7) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !func_372()) || Var83.f_6.f_12)
									{
										if (func_397(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), &Var23, 0, Var83.f_6.f_12, 0, 0))
										{
											func_396(Var21[Var83.f_41 /*26*/].f_11);
											if (Var83.f_6.f_12 && !bVar73)
											{
												bVar73 = true;
											}
											Var28.f_670 = (Var28.f_670 - 1);
											func_729(&(Var28.f_666), 11, 0);
											func_395(&(Var84[iLocal_234 /*34*/]), Var21[Var83.f_41 /*26*/]);
											if (func_901(&(Var84[iLocal_234 /*34*/]), 6))
											{
												func_771(&(Var84[iLocal_234 /*34*/]), 6);
											}
											if (Global_2703735.f_3580.f_36 <= 0 || !BitTest(Global_2703735.f_3580.f_35, 2))
											{
												func_771(&(Var84[iLocal_234 /*34*/]), 9);
											}
											else
											{
												func_930(&(Var84[iLocal_234 /*34*/]), 9);
											}
											if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
											{
												uLocal_222[10]++;
											}
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 1);
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 2, 0);
											TASK::CLEAR_SEQUENCE_TASK(&iVar49);
											TASK::OPEN_SEQUENCE_TASK(&iVar49);
											TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_overlay", 8f, -8f, -1, 2, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_idle_a_down", 1000f, -8f, -1, 1, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iVar49);
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar49);
											func_393(&(Var84[iLocal_234 /*34*/].f_1), 1, 0);
										}
									}
									break;
								
								case 1:
									func_723("[AM_DARTS] current client is THROWING", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 9))
									{
										if (func_384(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0, 0))
										{
											Var21.f_84[iVar17]++;
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
											func_393(&(Var84[iLocal_234 /*34*/].f_1), 2, 0);
										}
									}
									else if (!func_898(&iVar40))
									{
										if (func_383(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 988.1219f, -99.3023f, 73.8456f))
										{
											func_382(PLAYER::PLAYER_ID(), 2, 0);
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 2, 0);
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
											func_724(&iVar40);
										}
									}
									else if (func_896(&iVar40) > 1f || func_901(&(Var84[iLocal_235 /*34*/]), 6))
									{
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 6))
										{
											func_930(&(Var84[iLocal_234 /*34*/]), 6);
										}
										func_891(&iVar40);
										func_393(&(Var84[iLocal_234 /*34*/].f_1), 0, 0);
									}
									break;
								
								case 2:
									func_380(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0);
									Var84[iLocal_234 /*34*/].f_4.f_20 = Var21[Var83.f_41 /*26*/].f_20;
									Var84[iLocal_234 /*34*/].f_4.f_21 = Var21[Var83.f_41 /*26*/].f_21;
									if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
									{
										Var21.f_87[iVar17]++;
									}
									if (Var84[iLocal_234 /*34*/].f_4.f_21 == 2 || Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
									{
										func_394(&(Var84[iVar14[iVar17] /*34*/]), 4, 1);
									}
									else
									{
										func_394(&(Var84[iVar14[iVar17] /*34*/]), 4, 0);
									}
									func_393(&(Var84[iLocal_234 /*34*/].f_1), 3, 0);
									func_723("Current client is waiting for other client to finish throwing", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									break;
								
								case 3:
									if (Var84[iLocal_235 /*34*/].f_2 >= 3 || func_901(&(Var84[iLocal_234 /*34*/]), 16))
									{
										func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
										func_930(&(Var84[iLocal_234 /*34*/]), 21);
										if (!Var21[Var83.f_41 /*26*/].f_25)
										{
											Var21[Var83.f_41 /*26*/].f_25 = 1;
											Var84[iLocal_234 /*34*/].f_4.f_25 = 1;
											func_379();
										}
										SYSTEM::SETTIMERA(0);
									}
									func_723("Waiting for other client to get to DARTS_MPWAIT_TURN_CHANGE", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									break;
							}
							break;
						
						case 1:
							switch (Var84[iLocal_234 /*34*/].f_2)
							{
								case 0:
									func_340("DART_A_P_WAIT", sVar80[iVar16], 20000, 0);
									if (!bVar71)
									{
										bVar71 = true;
									}
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
									{
										func_342(&(Var83.f_6), 0);
									}
									if (func_727(&(Var84[iVar14[iVar16] /*34*/]), 1))
									{
										Var28.f_670 = (Var28.f_670 - 1);
										func_729(&(Var28.f_666), 11, 0);
										func_378(&(Var21[Var83.f_41 /*26*/]), &(Var84[iLocal_235 /*34*/]), iLocal_235);
										if (func_901(&(Var84[iLocal_234 /*34*/]), 6))
										{
											func_771(&(Var84[iLocal_234 /*34*/]), 6);
										}
										Var84[iLocal_234 /*34*/].f_2 = 1;
									}
									else
									{
										func_723("Current client is waiting for other client to throw", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									}
									break;
								
								case 1:
									if (!func_901(&(Var84[iLocal_235 /*34*/]), 9))
									{
										if (func_384(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0, 0))
										{
											Var21.f_84[iVar16]++;
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
											Var84[iLocal_234 /*34*/].f_2 = 2;
										}
									}
									else if (!func_898(&iVar40))
									{
										if (func_383(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 988.1219f, -99.3023f, 73.8456f))
										{
											func_724(&iVar40);
										}
									}
									else if (func_896(&iVar40) > 1f || func_901(&(Var84[iLocal_235 /*34*/]), 6))
									{
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 6))
										{
											func_930(&(Var84[iLocal_234 /*34*/]), 6);
										}
										func_891(&iVar40);
										Var84[iLocal_234 /*34*/].f_2 = 0;
									}
									break;
								
								case 2:
									if (Var84[iLocal_235 /*34*/].f_1 >= 2)
									{
										func_380(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0);
										Var84[iLocal_234 /*34*/].f_4.f_20 = Var21[Var83.f_41 /*26*/].f_20;
										Var84[iLocal_234 /*34*/].f_4.f_21 = Var21[Var83.f_41 /*26*/].f_21;
										if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
										{
											Var21.f_87[iVar16]++;
										}
										if (Var84[iLocal_234 /*34*/].f_4.f_21 == 2 || Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
										{
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 4, 1);
										}
										else
										{
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 4, 0);
										}
										Var84[iLocal_234 /*34*/].f_2 = 3;
									}
									func_723("Current client is waiting for other client to finish throwing", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									break;
								
								case 3:
									if (Var84[iLocal_235 /*34*/].f_1 >= 3)
									{
										func_930(&(Var84[iLocal_234 /*34*/]), 21);
										if (!Var21[Var83.f_41 /*26*/].f_25)
										{
											Var21[Var83.f_41 /*26*/].f_25 = 1;
										}
										SYSTEM::SETTIMERA(0);
									}
									func_723("Waiting for other client to get to DARTS_MPTHROW_TURN_CHANGE", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									break;
							}
							break;
						
						case 2:
							if (((Var83.f_19[iVar17] < 41 && Var83.f_19[iVar17] > 0) && (Var83.f_19[iVar17] % 2) == 0) || Var83.f_19[iVar17] == 50)
							{
								if (!bVar70)
								{
									bVar70 = true;
								}
								else
								{
									func_723("DARTS UIFLAG IS DARTS_UIFLAGS_IN_WIN_RANGE IS ALREADY SET", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
								}
							}
							if (Var83.f_19[iVar17] <= 170 && !func_728(&(Var28.f_666), 18))
							{
								func_729(&(Var28.f_666), 18, 1);
							}
							if (!func_728(&(Var28.f_666), 19) && func_728(&(Var28.f_666), 21))
							{
								func_729(&(Var28.f_666), 19, 1);
							}
							if (!func_728(&(Var28.f_666), 11))
							{
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(true);
								if (iVar17 == Var83.f_45)
								{
									if (func_728(&(Var83.f_48), 0))
									{
										func_339("DARTS_REMAIN", (Var83.f_24[iVar17] - Var83.f_19[iVar17]), Var83.f_19[iVar17], 20000, 0);
										if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
										{
											func_338(&Var28, 1);
											bVar75 = true;
										}
									}
									else if (func_728(&(Var83.f_48), 2))
									{
										func_337("DARTS_BUST_L", Var83.f_42, 5000, 0);
									}
									else if (func_728(&(Var83.f_48), 3))
									{
										func_337("DARTS_DOUBLE_L", Var84[iLocal_234 /*34*/].f_4.f_20, 5000, 0);
									}
									else if (func_728(&(Var83.f_48), 4))
									{
										func_893("DARTS_ONE_PT", 5000, 0);
									}
									else if (func_728(&(Var83.f_48), 1))
									{
										if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
										{
											func_338(&Var28, 1);
											bVar75 = true;
										}
										else if (Var83.f_42 == 180)
										{
											func_338(&Var28, 0);
											bVar75 = true;
										}
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
										{
											func_336("DARTS_SWITCH_L", sVar80[iVar16], Var83.f_19[iVar17], 5000, 0);
										}
										else
										{
											func_339("DARTS_REMAIN", (Var83.f_24[iVar17] - Var83.f_19[iVar17]), Var83.f_19[iVar17], 5000, 0);
										}
									}
								}
								else if (func_728(&(Var83.f_48), 0))
								{
									func_339("DARTS_REMAIN", (Var83.f_24[iVar16] - Var83.f_19[iVar16]), Var83.f_19[iVar16], 20000, 0);
								}
								else if (func_728(&(Var83.f_48), 2))
								{
									func_337("DARTS_BUST_L", Var83.f_42, 5000, 0);
								}
								else if (func_728(&(Var83.f_48), 3))
								{
									func_337("DARTS_DOUBLE_L", Var84[iLocal_234 /*34*/].f_4.f_20, 5000, 0);
								}
								else if (func_728(&(Var83.f_48), 4))
								{
									func_893("DARTS_ONE_PT", 5000, 0);
								}
								else if (func_728(&(Var83.f_48), 1))
								{
									func_336("DARTS_SWITCH_L", PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Var83.f_19[iVar16], 5000, 0);
								}
								func_729(&(Var28.f_666), 11, 1);
							}
							if (!func_727(&(Var84[iVar14[iVar17] /*34*/]), 5) && ((func_728(&(Var83.f_48), 0) && SYSTEM::TIMERA() > 1000) || SYSTEM::TIMERA() > 2000))
							{
								Var84[iLocal_234 /*34*/].f_2 = 0;
								Var84[iLocal_234 /*34*/].f_1 = 0;
								Var21[Var83.f_41 /*26*/].f_25 = 0;
								func_771(&(Var84[iLocal_234 /*34*/]), 21);
								if (iVar17 == iVar14[Var83.f_45])
								{
									if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
									{
										uLocal_222[1]++;
										iVar59 = SYSTEM::ROUND((10f * Global_262145.f_4310));
										iVar57 = (iVar57 + func_300(1, "XPT_DARTS", -875716015, 2124178747, iVar59, 1, -1, 0));
									}
								}
								if (func_728(&(Var83.f_48), 1))
								{
									Var28.f_670 = 3;
									iVar108 = 0;
									while (iVar108 < 3)
									{
										func_374(&(Var21[iVar108 /*26*/]));
										Var21[iVar108 /*26*/].f_25 = 0;
										iVar108++;
									}
									if (Var83.f_45 == iVar17)
									{
										func_377(Var83.f_45, Var83.f_19[Var83.f_45]);
									}
									if (Var83.f_24[Var83.f_45] != Var83.f_19[Var83.f_45])
									{
										if (Var83.f_45 == iVar17)
										{
											func_758(&Var27, 1, Var83.f_19[Var83.f_45]);
										}
										else
										{
											func_758(&Var27, 0, Var83.f_19[Var83.f_45]);
										}
									}
									if (iVar17 == Var83.f_45)
									{
										if (Var83.f_42 == 180 && !func_901(&(Var84[iLocal_234 /*34*/]), 16))
										{
											uLocal_222[2]++;
										}
									}
									else
									{
										bVar71 = false;
									}
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
									{
										if (Var83.f_46 == iVar17)
										{
											func_756(&Var27, 1);
										}
										else
										{
											func_756(&Var27, 0);
										}
									}
									iLocal_179 = 0;
								}
								func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 1);
							}
							break;
						
						case 3:
							HUD::CLEAR_PRINTS();
							if (!Global_2703735.f_3580.f_39)
							{
								Global_2703735.f_3580.f_39 = 1;
							}
							if (Var83.f_43 == iVar17)
							{
								Var21.f_94 = 1;
								Var21.f_90++;
								if (iVar17 == Var83.f_45)
								{
									if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
									{
										uLocal_222[1]++;
										iVar59 = SYSTEM::ROUND((10f * Global_262145.f_4310));
										iVar57 = (iVar57 + func_300(1, "XPT_DARTS", -875716015, 2124178747, iVar59, 1, -1, 0));
									}
								}
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									uLocal_222[8]++;
									iVar58 = (iVar58 + SYSTEM::ROUND((50f * Global_262145.f_4311)));
								}
								if (Var21.f_84[iVar17] <= 6)
								{
									func_299(7, 1, -1);
								}
							}
							else
							{
								Var21.f_94 = 0;
								Var21.f_91++;
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									uLocal_222[9]++;
								}
							}
							func_724(&iVar37);
							if (func_733(&Var83, 23))
							{
								func_907(&(Var84[iLocal_234 /*34*/]), 17, 0);
							}
							else
							{
								func_293(&Local_239, 1);
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									if (Var21.f_94)
									{
										if (Var83.f_39 < 5)
										{
											func_292(3, 2, 1);
										}
										else
										{
											func_292(3, 2, 2);
										}
										func_866(23, 1, -1);
										func_287(joaat("mpply_darts_total_wins"), 1);
										uLocal_222[3]++;
										uLocal_222[6]++;
									}
									else
									{
										uLocal_222[5]++;
										uLocal_222[7]++;
									}
									func_287(joaat("mpply_darts_total_matches"), 1);
								}
								Var28.f_668 = (Var28.f_668 + Var83.f_34[iVar17]);
								Var28.f_669 = (Var28.f_669 + Var83.f_34[iVar16]);
								StringCopy(&(Var28.f_648), sVar80[iVar17], 24);
								StringCopy(&(Var28.f_654), sVar80[iVar16], 24);
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									if (Var21.f_94)
									{
										iVar58 = (iVar58 + SYSTEM::ROUND((250f * Global_262145.f_4313)));
										iVar60 = func_801(PLAYER::PLAYER_ID());
									}
									else
									{
										iVar60 = func_801(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
									}
								}
								if (Var21.f_94)
								{
								}
								if (iVar60 > 0)
								{
								}
								iVar58 = (iVar58 + SYSTEM::ROUND((100f * Global_262145.f_4312)));
								func_285(37);
								func_907(&(Var84[iLocal_234 /*34*/]), 18, 0);
							}
							break;
					}
					break;
				
				case 17:
					switch (iVar53)
					{
						case 0:
							if (func_731(&iVar37) > 0.75f)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								func_734(&Var27, bVar4, bVar5, Var83.f_34[iVar16], Var83.f_34[iVar17]);
								if (func_733(&Var83, 24))
								{
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
									{
										if (Var21.f_94)
										{
											uLocal_222[6]++;
										}
										else
										{
											uLocal_222[7]++;
										}
									}
									if (Var21.f_94)
									{
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
										{
											func_416(&uLocal_1045, "DARTS_WINNER", "DARTS_GAMEW", 4000, 5, 1);
										}
										else
										{
											func_416(&uLocal_1045, "DARTS_WINP", "DARTS_GAMEW", 4000, 5, 1);
										}
									}
									else
									{
										func_416(&uLocal_1045, "BM_R2P_LOSS", "DARTS_GAMEL", 4000, 5, 6);
									}
								}
								else if (Var21.f_94)
								{
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
									{
										func_416(&uLocal_1045, "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 1);
									}
									else
									{
										func_416(&uLocal_1045, "DARTS_WINP", "DARTS_LEGW", 4000, 5, 1);
									}
								}
								else
								{
									func_416(&uLocal_1045, "BM_R2P_LOSS", "DARTS_LEGL", 4000, 5, 6);
								}
								if (Var21.f_94)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "WINNER", "CELEBRATION_SOUNDSET", true);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "LOSER", "CELEBRATION_SOUNDSET", true);
								}
								iVar53++;
							}
							break;
						
						case 1:
							if (!func_414(&uLocal_1045, 1))
							{
								func_413(&uLocal_1045);
								iVar51 = 0;
								while (iVar51 < 2)
								{
									func_736(&Var27, iVar51);
									iVar51++;
								}
								iVar52 = 0;
								while (iVar52 < 3)
								{
									func_374(&(Var21[iVar52 /*26*/]));
									iVar52++;
								}
								iVar53++;
							}
							break;
						
						case 2:
							if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
							{
								if (!PED::IS_PED_INJURED(iVar50[iLocal_232]) && !PED::IS_PED_INJURED(iVar50[0]))
								{
									func_455();
									CAM::DESTROY_CAM(iLocal_1034, false);
								}
							}
							else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								func_455();
								CAM::DESTROY_CAM(iLocal_1034, false);
							}
							func_394(&(Var84[iVar14[iVar17] /*34*/]), 7, 1);
							func_284();
							iVar53 = 0;
							func_907(&(Var84[iLocal_234 /*34*/]), 19, 0);
							break;
					}
					break;
				
				case 18:
					func_723("Reached Client side GAME END", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if (func_731(&iVar37) > 0.75f)
					{
						if (Var84[iLocal_235 /*34*/] >= 18 || func_901(&(Var84[iLocal_234 /*34*/]), 16))
						{
							if (!Var21.f_95)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								if (func_280(1))
								{
									if (Var21.f_94)
									{
										func_270(1);
									}
								}
								func_269(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]));
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									if (Var21.f_94)
									{
										func_268();
									}
									else
									{
										func_267();
									}
								}
								else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
								}
								Var21.f_95 = 1;
							}
						}
						if (iVar57 > 0)
						{
						}
						if (Var21.f_94)
						{
							iVar109 = 0;
							iVar47 = PLAYER::PLAYER_ID();
						}
						else
						{
							iVar109 = 1;
							iVar47 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235));
						}
						if (func_731(&iVar37) > 2.15f)
						{
							if (func_66(&Local_239, &iLocal_1031, "XPT_DARTS", -1636175450, -1766560248, iVar58, iVar109, Global_1837285, &iVar46, iVar47, 1, 0, 0, 1, 0, 3))
							{
								if (!func_898(&iVar42))
								{
									func_724(&iVar42);
									if (Var21.f_94)
									{
										GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Win");
									}
									else
									{
										GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Lose");
									}
								}
								else if (func_896(&iVar42) > 0.1f)
								{
								}
								if (Var21.f_92)
								{
									func_38(1, 0f, 0f, 0f, Var79);
									HUD::CLEAR_PRINTS();
									func_394(&(Var84[iVar14[iVar17] /*34*/]), 8, 1);
									func_907(&(Var84[iLocal_234 /*34*/]), 23, 0);
								}
								else if (Var84[iLocal_235 /*34*/] >= 18 || func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									Var21.f_92 = 1;
								}
							}
							if (Local_239.f_436 == 3 && func_37(&(Local_239.f_430), 416, 0))
							{
								if (!bVar76)
								{
									if (func_36() == 0)
									{
										func_35(1);
									}
									func_29(0, 0);
									bVar76 = true;
								}
							}
						}
					}
					break;
				
				case 19:
					func_723("CLIENT DARTS_MPSTATE_WAIT_POST_GAME", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if ((func_727(&(Var84[iVar14[iVar17] /*34*/]), 7) && func_727(&(Var84[iVar14[iVar16] /*34*/]), 7)) || (func_727(&(Var84[iVar14[iVar17] /*34*/]), 7) && func_901(&(Var84[iLocal_234 /*34*/]), 16)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Var84[iLocal_234 /*34*/].f_3))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
						if (func_901(&(Var84[iLocal_234 /*34*/]), 17))
						{
							sVar80[iVar17] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
							Var35[iVar17 /*13*/] = { func_743(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234))) };
							Var77[iVar17 /*2*/] = { func_742(&(Var35[iVar17 /*13*/])) };
							sVar80[iVar16] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
							Var35[iVar16 /*13*/] = { func_743(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235))) };
							Var77[iVar16 /*2*/] = { func_742(&(Var35[iVar16 /*13*/])) };
							iVar110 = 0;
							iVar111 = 1;
							func_735(&Var27, sVar80[iVar16], sVar80[iVar17]);
							if (!func_741(&(Var77[iVar16 /*2*/])))
							{
								func_737(&Var27, iVar110, &(Var77[iVar16 /*2*/]), 0);
							}
							if (!func_741(&(Var77[iVar17 /*2*/])))
							{
								func_737(&Var27, iVar111, &(Var77[iVar17 /*2*/]), 0);
							}
							func_736(&Var27, iVar110);
							func_736(&Var27, iVar111);
							func_771(&(Var84[iLocal_234 /*34*/]), 16);
							func_771(&(Var84[iLocal_234 /*34*/]), 17);
						}
						HUD::CLEAR_HELP(true);
						func_647();
						if (Var83.f_0 == 6)
						{
							func_907(&(Var84[iLocal_234 /*34*/]), 13, 0);
						}
					}
					if (func_727(&(Var84[iVar14[iVar16] /*34*/]), 8))
					{
						func_284();
						HUD::CLEAR_PRINTS();
						func_647();
						func_907(&(Var84[iLocal_234 /*34*/]), 20, 0);
					}
					break;
				
				case 20:
					func_723("Reached Client side TERMINATE SPLASH", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if (func_885() == 0)
					{
						if (func_722(&uVar36))
						{
							if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_648(PLAYER::PLAYER_ID()))
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							if (!Global_2715699.f_2846.f_26)
							{
								func_28(&uVar36, 0, 0);
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(true);
								func_720(0);
								if (Global_2703735.f_3580.f_39)
								{
									Global_2703735.f_3580.f_39 = 0;
								}
								func_907(&(Var84[iLocal_234 /*34*/]), 21, 0);
								if (iVar25 == 1)
								{
									func_269(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]));
									func_416(&uLocal_1035, "DARTS_WINNER", "DARTS_OPP_LFT", 15000, 0, 1);
									func_26(&(Var28.f_509), 0, 0, 0, 1);
									func_25(&(Var28.f_509), "CMRC_CONT", 2, 201, 1, 1, 0);
									func_24(&iVar26, 0, 0);
									func_38(1, 0f, 0f, 0f, Var79);
								}
								else if (iVar25 == 2)
								{
									func_269(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]));
									func_416(&uLocal_1035, "DARTS_WINNER", "", 15000, 0, 1);
									func_26(&(Var28.f_509), 0, 0, 0, 1);
									func_25(&(Var28.f_509), "CMRC_CONT", 2, 201, 1, 1, 0);
									func_24(&iVar26, 0, 0);
									func_38(1, 0f, 0f, 0f, Var79);
								}
								else
								{
									if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
									{
										if (MISC::IS_STRING_NULL(sVar80[Var84[iLocal_235 /*34*/].f_33]))
										{
											func_893("DARTS_OPP_LFT", 7500, 0);
										}
										else
										{
											func_340("DARTS_PLYR_LFT", sVar80[Var84[iLocal_235 /*34*/].f_33], 7500, 0);
										}
									}
									func_24(&iVar26, 2, 0);
								}
							}
						}
						else
						{
							func_721(&uVar36, 0, 0);
						}
					}
					else
					{
						func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
					}
					break;
				
				case 23:
					if (func_722(&uVar36))
					{
						func_647();
						func_269(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]));
						func_28(&uVar36, 0, 0);
						func_720(0);
						if (Global_2703735.f_3580.f_39)
						{
							Global_2703735.f_3580.f_39 = 0;
						}
						func_907(&(Var84[iLocal_234 /*34*/]), 21, 0);
						func_24(&iVar26, 3, 0);
					}
					else
					{
						func_721(&uVar36, 0, 0);
					}
					break;
				
				case 21:
					switch (iVar26)
					{
						case 0:
							if (!func_414(&uLocal_1035, 1) || func_37(&uVar36, 3000, 0))
							{
								func_647();
								iVar59 = SYSTEM::ROUND((100f * Global_262145.f_4312));
								iVar58 = (iVar58 + func_300(1, "XPT_DARTS", -1636175450, -1766560248, iVar59, 1, -1, 0));
								Var28.f_668++;
								func_24(&iVar26, 3, 0);
							}
							break;
						
						case 1:
							func_24(&iVar26, 2, 0);
							break;
						
						case 2:
							func_720(0);
							func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
							break;
						
						case 3:
							func_24(&iVar26, 4, 0);
							break;
						
						case 4:
							func_24(&iVar26, 2, 0);
							break;
					}
					break;
				}
		}
		if (BitTest(iVar9, 0))
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Var27.f_0))
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var27.f_0, Var27.f_18, Var27.f_21, Var27.f_24, Var27.f_24, 2);
			}
		}
		if (BitTest(iVar9, 1))
		{
			func_21();
		}
		if (BitTest(iVar9, 5))
		{
			func_20(4, -1);
		}
		if (BitTest(iVar9, 2) && !func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18))
		{
			func_19();
		}
		if (BitTest(iVar9, 4))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16])))
			{
				iVar112 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16])));
				if (func_977(iVar112))
				{
					fVar113 = func_453(Var24.f_3, Var21.f_79.f_1);
					Var114 = { ENTITY::GET_ENTITY_COORDS(iVar112, true) };
					Var24.f_3.f_2 = Var114.f_2;
					NETWORK::NETWORK_OVERRIDE_COORDS_AND_HEADING(iVar112, Var114, fVar113);
				}
			}
		}
		if (BitTest(iVar9, 6))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var15[0 /*97*/].f_89))
			{
				CAM::_DISABLE_CAM_COLLISION_FOR_ENTITY(Var15[0 /*97*/].f_89);
				if ((MISC::GET_GAME_TIMER() % 1000) > 100)
				{
				}
			}
			if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var15[iLocal_232 /*97*/].f_89))
				{
					CAM::_DISABLE_CAM_COLLISION_FOR_ENTITY(Var15[iLocal_232 /*97*/].f_89);
					if ((MISC::GET_GAME_TIMER() % 1000) > 100)
					{
					}
				}
			}
		}
		if (func_351(&iVar9, 7))
		{
			if (!HUD::BUSYSPINNER_IS_ON())
			{
				HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("");
				HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(0);
			}
		}
		else if (HUD::BUSYSPINNER_IS_ON())
		{
			HUD::BUSYSPINNER_OFF();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (Var83.f_0)
			{
				case 4:
					if (iLocal_238 >= 2)
					{
						func_907(&Var83, 11, 1);
					}
					else if (func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						func_907(&Var83, 6, 1);
					}
					break;
				
				case 11:
					if (BitTest(Var84[iVar14[iLocal_232] /*34*/].f_31, 27) && BitTest(Var84[iVar14[0] /*34*/].f_31, 27))
					{
						if (!func_733(&Var83, 27))
						{
							func_18(&Var83, 27);
						}
					}
					else if ((MISC::GET_GAME_TIMER() % 1000) > 50)
					{
					}
					func_723("Reached Server side THROW_OFF_SETUP", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if (BitTest(Var84[iVar14[iLocal_232] /*34*/].f_31, 15) && BitTest(Var84[iVar14[0] /*34*/].f_31, 15))
					{
						func_17(&Var83);
						func_907(&Var83, 12, 1);
					}
					break;
				
				case 12:
					Var115 = { Var21[Var83.f_41 /*26*/] };
					if (bVar1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (Var84[iVar14[0] /*34*/].f_1 < 3 && Var84[iVar14[iLocal_232] /*34*/].f_1 < 3)
						{
							Var115.f_25 = 0;
						}
						if (Var84[iVar14[0] /*34*/].f_1 >= 3 || Var84[iVar14[iLocal_232] /*34*/].f_1 >= 3)
						{
							Var115.f_25 = 1;
							Var115.f_20 = Var84[iVar14[0] /*34*/].f_4.f_20;
							Var115.f_21 = Var84[iVar14[0] /*34*/].f_4.f_21;
						}
					}
					func_15(&Var83, &Var84, &Var115, &iVar14);
					break;
				
				case 6:
					if (!func_733(&Var83, 26))
					{
						func_18(&Var83, 26);
					}
					func_723("Reached Server side SETUP", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					bVar45 = false;
					if (BitTest(Var84[iVar14[0] /*34*/].f_31, 16))
					{
						if (BitTest(Var84[iVar14[0] /*34*/].f_31, 1))
						{
							bVar45 = true;
						}
					}
					else if (iVar14[iLocal_232] >= 0)
					{
						if (BitTest(Var84[iVar14[iLocal_232] /*34*/].f_31, 1) && BitTest(Var84[iVar14[0] /*34*/].f_31, 1))
						{
							bVar45 = true;
						}
					}
					if (bVar45)
					{
						func_14(&Var83, func_901(&(Var84[iVar14[0] /*34*/]), 16), 0);
						func_894(PLAYER::PLAYER_ID(), 0, 1);
						if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
						{
							iVar48 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234));
							func_10(iVar48, NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])), Var83.f_19[iLocal_230], Var83.f_19[iLocal_231], PLAYER::GET_PLAYER_TEAM(iVar48), 1, 1);
						}
						func_907(&Var83, 16, 1);
					}
					break;
				
				case 16:
					if (func_9(&Var84, 0))
					{
						func_18(&Var83, 25);
					}
					else
					{
						func_8(&Var83, 25);
					}
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						Var116 = { Var21[Var83.f_41 /*26*/] };
						if (bVar1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							if (Var84[iVar14[0] /*34*/].f_1 < 3 && Var84[iVar14[iLocal_232] /*34*/].f_1 < 3)
							{
								Var116.f_25 = 0;
							}
							if (Var84[iVar14[0] /*34*/].f_1 >= 3 || Var84[iVar14[iLocal_232] /*34*/].f_1 >= 3)
							{
								Var116.f_25 = 1;
								Var116.f_20 = Var84[iVar14[0] /*34*/].f_4.f_20;
								Var116.f_21 = Var84[iVar14[0] /*34*/].f_4.f_21;
							}
						}
						func_7(&Var83, &Var84, &Var116, &iVar14);
					}
					else
					{
						Var117 = { Var21[Var83.f_41 /*26*/] };
						if (bVar1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							if (Var84[iVar14[0] /*34*/].f_1 < 3 && Var84[iVar14[iLocal_232] /*34*/].f_1 < 3)
							{
								Var117.f_25 = 0;
							}
							if (Var84[iVar14[0] /*34*/].f_1 >= 3 && Var84[iVar14[iLocal_232] /*34*/].f_1 >= 3)
							{
								Var117.f_25 = 1;
								Var117.f_20 = Var84[iVar14[0] /*34*/].f_4.f_20;
								Var117.f_21 = Var84[iVar14[0] /*34*/].f_4.f_21;
							}
						}
						func_1(&Var83, &Var84, &Var117, &iVar14);
					}
					break;
				}
		}
	}
}

void func_1(int* iParam0, int* iParam1, var uParam2, int iParam3)//Position - 0x58E8
{
	int iVar0;
	
	if ((*iParam1)[(*iParam3)[0] /*34*/] == 16)
	{
		if ((iParam1[(*iParam3)[0] /*34*/])->f_1 == 0)
		{
			func_6(&(iParam0->f_6));
		}
		if (iParam0->f_1[0] == 0 && !iParam0->f_57)
		{
			if (func_901(iParam1[(*iParam3)[0] /*34*/], 9) && (iParam1[(*iParam3)[0] /*34*/])->f_1 == 1)
			{
				iParam0->f_6.f_10 = 1;
			}
			if (func_5(uParam2) && func_901(iParam1[(*iParam3)[0] /*34*/], 21))
			{
				func_729(&(iParam0->f_48), 1, 0);
				iParam0->f_45 = 0;
				iParam0->f_42 = (iParam0->f_42 + uParam2->f_20);
				iVar0 = (iParam0->f_19[iParam0->f_45] - uParam2->f_20);
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 4))
				{
				}
				if (iVar0 == 0 && (uParam2->f_21 == 2 || uParam2->f_20 == 50))
				{
					iParam0->f_19[iParam0->f_45] = iVar0;
					iParam0->f_62 = 1;
				}
				else if ((iVar0 == 1 || iVar0 < 0) || (iVar0 == 0 && func_727(iParam1[(*iParam3)[0] /*34*/], 4) == 0))
				{
					iParam0->f_19[iParam0->f_45] = iParam0->f_24[iParam0->f_45];
					func_729(&(iParam0->f_48), 1, 1);
					if (iVar0 < 0)
					{
						func_729(&(iParam0->f_48), 2, 1);
					}
					else if (iVar0 == 1)
					{
						func_729(&(iParam0->f_48), 4, 1);
					}
					else if (iVar0 == 0 && func_727(iParam1[(*iParam3)[iParam0->f_45] /*34*/], 4) == 0)
					{
						func_729(&(iParam0->f_48), 3, 1);
					}
				}
				else
				{
					iParam0->f_41++;
					iParam0->f_19[iParam0->f_45] = iVar0;
					if (iParam0->f_41 >= 3)
					{
						iParam0->f_41 = (iParam0->f_41 - 1);
						func_729(&(iParam0->f_48), 1, 1);
					}
					else
					{
						func_729(&(iParam0->f_48), 0, 1);
					}
				}
				iParam0->f_57 = 1;
				iParam0->f_1[0] = 2;
			}
		}
		else if (iParam0->f_1[0] == 2)
		{
			iParam0->f_6.f_12 = 0;
			if (iParam0->f_62)
			{
				iParam0->f_43 = 0;
				iParam0->f_29[iParam0->f_43]++;
				if (func_3(iParam0))
				{
					func_8(iParam0, 23);
				}
				else
				{
					func_18(iParam0, 23);
				}
				iParam0->f_1[0] = 3;
				iParam0->f_57 = 0;
				*iParam0 = 6;
			}
			if (func_728(&(iParam0->f_48), 0))
			{
				func_723("[MP DARTS] Server is continuing turn", &uLocal_233, 0, 0, 0, 0, 0, 0, 1000);
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5))
				{
					iParam0->f_1[iParam0->f_45] = 0;
					iParam0->f_57 = 0;
					func_729(&(iParam0->f_48), 0, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
			if (func_728(&(iParam0->f_48), 1))
			{
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5))
				{
					iParam0->f_24[0] = iParam0->f_19[0];
					iParam0->f_42 = 0;
					iParam0->f_1[0] = 0;
					iParam0->f_41 = 0;
					iParam0->f_57 = 0;
					func_729(&(iParam0->f_48), 3, 0);
					func_729(&(iParam0->f_48), 4, 0);
					func_729(&(iParam0->f_48), 2, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
		}
		else if (iParam0->f_1[0] == 3)
		{
			if (func_727(iParam1[(*iParam3)[0] /*34*/], 7))
			{
				*iParam0 = 6;
			}
		}
	}
	if ((*iParam1)[(*iParam3)[0] /*34*/] == 19)
	{
		func_18(iParam0, 21);
		func_8(iParam0, 20);
		func_8(iParam0, 10);
		func_8(iParam0, 11);
		func_2(iParam0);
		*iParam0 = 6;
	}
}

void func_2(int* iParam0)//Position - 0x5C4B
{
	iParam0->f_19[iLocal_230] = 301;
	iParam0->f_19[iLocal_231] = 301;
}

int func_3(int* iParam0)//Position - 0x5C6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0->f_43;
	iVar1 = func_4(iParam0);
	if (iParam0->f_29[iVar0] == iVar1)
	{
		iParam0->f_34[iVar0]++;
		iParam0->f_29[0] = 0;
		iParam0->f_29[iLocal_232] = 0;
		func_18(iParam0, 24);
		if (iParam0->f_34[iVar0] == iParam0->f_40)
		{
			return 1;
		}
	}
	else if (func_733(iParam0, 24))
	{
		func_8(iParam0, 24);
	}
	return 0;
}

int func_4(var uParam0)//Position - 0x5CE4
{
	switch (uParam0->f_39)
	{
		case 1:
			return 1;
		
		case 3:
			return 1;
		
		case 5:
			return 1;
		
		default:
	}
	return 1;
}

int func_5(var uParam0)//Position - 0x5D14
{
	if (uParam0->f_25)
	{
		return 1;
	}
	return 0;
}

void func_6(int* iParam0)//Position - 0x5D28
{
	if (iParam0->f_10)
	{
		func_724(iParam0);
		iParam0->f_12 = 0;
		iParam0->f_11 = 0;
		iParam0->f_10 = 0;
	}
	if (func_898(iParam0))
	{
		if ((iParam0->f_7 - func_896(iParam0)) < 10.5f)
		{
			iParam0->f_11 = 1;
		}
		if (func_896(iParam0) >= iParam0->f_7)
		{
			func_891(iParam0);
			iParam0->f_12 = 1;
		}
	}
}

void func_7(int* iParam0, int* iParam1, var uParam2, int iParam3)//Position - 0x5D87
{
	int iVar0;
	
	if ((*iParam1)[(*iParam3)[iLocal_232] /*34*/] == 16 && (*iParam1)[(*iParam3)[0] /*34*/] == 16)
	{
		if ((MISC::GET_GAME_TIMER() % 1000) > 50)
		{
		}
		if (((iParam1[(*iParam3)[iLocal_232] /*34*/])->f_1 == 0 || (iParam1[(*iParam3)[iLocal_232] /*34*/])->f_2 == 0) && ((iParam1[(*iParam3)[0] /*34*/])->f_1 == 0 || (iParam1[(*iParam3)[0] /*34*/])->f_2 == 0))
		{
			func_6(&(iParam0->f_6));
		}
		if ((iParam0->f_1[iLocal_232] == 0 || iParam0->f_1[0] == 0) && !iParam0->f_57)
		{
			if (((func_901(iParam1[(*iParam3)[iLocal_232] /*34*/], 9) || func_901(iParam1[(*iParam3)[0] /*34*/], 9)) && ((iParam1[(*iParam3)[iLocal_232] /*34*/])->f_1 == 1 || (iParam1[(*iParam3)[iLocal_232] /*34*/])->f_2 == 1)) && ((iParam1[(*iParam3)[0] /*34*/])->f_1 == 1 || (iParam1[(*iParam3)[0] /*34*/])->f_2 == 1))
			{
				iParam0->f_6.f_10 = 1;
			}
			if ((func_5(uParam2) && func_901(iParam1[(*iParam3)[0] /*34*/], 21)) && func_901(iParam1[(*iParam3)[iLocal_232] /*34*/], 21))
			{
				func_729(&(iParam0->f_48), 1, 0);
				if (iParam0->f_1[0] == 0)
				{
					iParam0->f_45 = 0;
					iParam0->f_46 = iLocal_232;
				}
				else
				{
					iParam0->f_45 = iLocal_232;
					iParam0->f_46 = 0;
				}
				iParam0->f_42 = (iParam0->f_42 + uParam2->f_20);
				iVar0 = (iParam0->f_19[iParam0->f_45] - uParam2->f_20);
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 4))
				{
				}
				if (func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 4))
				{
				}
				if (iVar0 == 0 && (uParam2->f_21 == 2 || uParam2->f_20 == 50))
				{
					iParam0->f_19[iParam0->f_45] = iVar0;
					iParam0->f_62 = 1;
				}
				else if ((iVar0 == 1 || iVar0 < 0) || (iVar0 == 0 && func_727(iParam1[(*iParam3)[iParam0->f_45] /*34*/], 4) == 0))
				{
					iParam0->f_19[iParam0->f_45] = iParam0->f_24[iParam0->f_45];
					func_729(&(iParam0->f_48), 1, 1);
					if (iVar0 < 0)
					{
						func_729(&(iParam0->f_48), 2, 1);
					}
					else if (iVar0 == 1)
					{
						func_729(&(iParam0->f_48), 4, 1);
					}
					else if (iVar0 == 0 && func_727(iParam1[(*iParam3)[iParam0->f_45] /*34*/], 4) == 0)
					{
						func_729(&(iParam0->f_48), 3, 1);
					}
				}
				else
				{
					iParam0->f_41++;
					iParam0->f_19[iParam0->f_45] = iVar0;
					if (iParam0->f_41 >= 3)
					{
						iParam0->f_41 = (iParam0->f_41 - 1);
						func_729(&(iParam0->f_48), 1, 1);
					}
					else
					{
						func_729(&(iParam0->f_48), 0, 1);
					}
				}
				iParam0->f_57 = 1;
				iParam0->f_1[iLocal_232] = 2;
				iParam0->f_1[0] = 2;
			}
		}
		else if (iParam0->f_1[iLocal_232] == 2 || iParam0->f_1[0] == 2)
		{
			iParam0->f_6.f_12 = 0;
			if (iParam0->f_62)
			{
				if (iParam0->f_45 == 0)
				{
					iParam0->f_43 = 0;
				}
				else
				{
					iParam0->f_43 = iLocal_232;
				}
				iParam0->f_29[iParam0->f_43]++;
				if (func_3(iParam0))
				{
					func_8(iParam0, 23);
				}
				else
				{
					func_18(iParam0, 23);
				}
				iParam0->f_1[0] = 3;
				iParam0->f_1[iLocal_232] = 3;
				iParam0->f_57 = 0;
				*iParam0 = 6;
			}
			if (func_728(&(iParam0->f_48), 0))
			{
				func_723("[MP DARTS] Server is continuing turn", &uLocal_233, 0, 0, 0, 0, 0, 0, 1000);
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 5))
				{
					iParam0->f_1[iParam0->f_45] = 0;
					iParam0->f_1[iParam0->f_46] = 1;
					iParam0->f_57 = 0;
					func_729(&(iParam0->f_48), 0, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
			if (func_728(&(iParam0->f_48), 1))
			{
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 5))
				{
					iParam0->f_24[0] = iParam0->f_19[0];
					iParam0->f_24[iLocal_232] = iParam0->f_19[iLocal_232];
					iParam0->f_42 = 0;
					if (iParam0->f_45 == 0)
					{
						iParam0->f_1[0] = 1;
						iParam0->f_1[iLocal_232] = 0;
					}
					else
					{
						iParam0->f_1[0] = 0;
						iParam0->f_1[iLocal_232] = 1;
					}
					iParam0->f_41 = 0;
					iParam0->f_57 = 0;
					func_729(&(iParam0->f_48), 3, 0);
					func_729(&(iParam0->f_48), 4, 0);
					func_729(&(iParam0->f_48), 2, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
		}
		else if (iParam0->f_1[iLocal_232] == 3 || iParam0->f_1[0] == 3)
		{
			if (func_727(iParam1[(*iParam3)[0] /*34*/], 7) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 7))
			{
				*iParam0 = 6;
			}
		}
	}
	if ((*iParam1)[(*iParam3)[iLocal_232] /*34*/] == 19 && (*iParam1)[(*iParam3)[0] /*34*/] == 19)
	{
		func_18(iParam0, 21);
		func_8(iParam0, 20);
		func_8(iParam0, 10);
		func_8(iParam0, 11);
		func_2(iParam0);
		*iParam0 = 6;
	}
}

void func_8(int* iParam0, int iParam1)//Position - 0x62DD
{
	MISC::CLEAR_BIT(&(iParam0->f_47), iParam1);
}

int func_9(int* iParam0, bool bParam1)//Position - 0x62EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = 16;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (bParam1)
	{
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_901(iParam0[iVar0 /*34*/], 20))
		{
			if (func_901(iParam0[iVar0 /*34*/], 18))
			{
				iVar2++;
				if (func_901(iParam0[iVar0 /*34*/], 21))
				{
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	if (iVar3 >= iVar2)
	{
		iVar4 = 1;
	}
	return iVar4;
}

void func_10(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x6361
{
	struct<5> Var0;
	
	Var0.f_0 = -1707341117;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_3 = (uParam2 & 32767 + SYSTEM::SHIFT_LEFT(uParam3 & 32767, 15));
	Var0.f_4 = SYSTEM::SHIFT_LEFT(iParam4, 1);
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_4), 0);
	}
	if (!bParam6)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 6, func_13(1, 1));
	}
	else
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 6, func_11(1));
	}
}

var func_11(int iParam0)//Position - 0x63D0
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
			if (func_12(iVar2, 0, 0))
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

int func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x642D
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

var func_13(int iParam0, bool bParam1)//Position - 0x648D
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_899(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_14(int* iParam0, bool bParam1, int iParam2)//Position - 0x64F2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iParam0->f_19[iVar0] = 301;
		iParam0->f_24[iVar0] = 301;
		iVar0++;
	}
	if (!func_733(iParam0, 23))
	{
		iParam0->f_29[0] = 0;
		iParam0->f_29[iLocal_232] = 0;
		iParam0->f_34[0] = 0;
		iParam0->f_34[iLocal_232] = 0;
	}
	iVar1 = Global_4718592.f_116945;
	iVar2 = Global_4718592.f_116946;
	switch (iVar1)
	{
		case 0:
			iParam0->f_39 = 0;
			break;
		
		case 1:
			iParam0->f_39 = 3;
			break;
		
		case 2:
			iParam0->f_39 = 5;
			break;
	}
	switch (iVar2)
	{
		case 0:
			iParam0->f_40 = 0;
			break;
		
		case 1:
			iParam0->f_40 = 1;
			break;
		
		case 2:
			iParam0->f_40 = 2;
			break;
		
		case 3:
			iParam0->f_40 = 3;
			break;
		
		case 4:
			iParam0->f_40 = 4;
			break;
		
		case 5:
			iParam0->f_40 = 5;
			break;
		
		case 6:
			iParam0->f_40 = 15;
			break;
	}
	if (bParam1)
	{
		iParam0->f_1[0] = 0;
	}
	else
	{
		if (!iParam0->f_62)
		{
			iParam0->f_44 = iParam0->f_43;
		}
		else
		{
			iParam0->f_44 = (1 - iParam0->f_44);
		}
		if (iParam0->f_44 == 1)
		{
			iParam0->f_1[iLocal_232] = 0;
			iParam0->f_1[0] = 1;
		}
		else
		{
			iParam0->f_1[0] = 0;
			iParam0->f_1[iLocal_232] = 1;
		}
	}
	iParam0->f_41 = 0;
	iParam0->f_42 = 0;
	iParam0->f_48 = 0;
	iParam0->f_62 = 0;
	iParam0->f_58 = 0;
	iParam0->f_59 = 0;
	iParam0->f_60 = 0;
	iParam0->f_61 = 0;
	iParam0->f_6.f_10 = 1;
	func_730(&(iParam0->f_6));
}

void func_15(int* iParam0, int* iParam1, var uParam2, int iParam3)//Position - 0x669C
{
	if ((*iParam1)[(*iParam3)[iLocal_232] /*34*/] == 12 && (*iParam1)[(*iParam3)[0] /*34*/] == 12)
	{
		if (((iParam1[(*iParam3)[iLocal_232] /*34*/])->f_1 == 0 || (iParam1[(*iParam3)[iLocal_232] /*34*/])->f_2 == 0) && ((iParam1[(*iParam3)[0] /*34*/])->f_1 == 0 || (iParam1[(*iParam3)[0] /*34*/])->f_2 == 0))
		{
			func_16(&(iParam0->f_6));
		}
		if ((iParam0->f_1[iLocal_232] == 0 || iParam0->f_1[0] == 0) && !iParam0->f_57)
		{
			if ((func_5(uParam2) && func_901(iParam1[(*iParam3)[0] /*34*/], 21)) && func_901(iParam1[(*iParam3)[iLocal_232] /*34*/], 21))
			{
				if (iParam0->f_1[0] == 0)
				{
					iParam0->f_45 = 0;
					iParam0->f_46 = iLocal_232;
				}
				else
				{
					iParam0->f_45 = iLocal_232;
					iParam0->f_46 = 0;
				}
				iParam0->f_51[iParam0->f_45] = uParam2->f_22;
				if (iParam0->f_45 == 0)
				{
					func_729(&(iParam0->f_48), 1, 1);
				}
				else
				{
					iParam0->f_62 = 1;
				}
				iParam0->f_57 = 1;
				iParam0->f_1[0] = 2;
				iParam0->f_1[iLocal_232] = 2;
			}
		}
		else if (iParam0->f_1[iLocal_232] == 2 || iParam0->f_1[0] == 2)
		{
			iParam0->f_6.f_12 = 0;
			if (func_728(&(iParam0->f_48), 1))
			{
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 5))
				{
					iParam0->f_24[0] = iParam0->f_19[0];
					iParam0->f_24[iLocal_232] = iParam0->f_19[iLocal_232];
					iParam0->f_42 = 0;
					if (iParam0->f_45 == 0)
					{
						iParam0->f_1[0] = 1;
						iParam0->f_1[iLocal_232] = 0;
					}
					else
					{
						iParam0->f_1[0] = 0;
						iParam0->f_1[iLocal_232] = 1;
					}
					iParam0->f_41++;
					iParam0->f_57 = 0;
					func_729(&(iParam0->f_48), 1, 0);
					func_729(&(iParam0->f_48), 3, 0);
					func_729(&(iParam0->f_48), 4, 0);
					func_729(&(iParam0->f_48), 2, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
			if (iParam0->f_62)
			{
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 5))
				{
					if (iParam0->f_51[0] < iParam0->f_51[iLocal_232])
					{
						iParam0->f_43 = 0;
					}
					else
					{
						iParam0->f_43 = iLocal_232;
					}
					iParam0->f_1[iLocal_232] = 3;
					iParam0->f_1[0] = 3;
					iParam0->f_57 = 0;
					iParam0->f_62 = 0;
					*iParam0 = 6;
				}
			}
		}
	}
	if ((*iParam1)[(*iParam3)[iLocal_232] /*34*/] == 19 && (*iParam1)[(*iParam3)[0] /*34*/] == 19)
	{
		func_18(iParam0, 21);
		func_8(iParam0, 20);
		func_8(iParam0, 10);
		func_8(iParam0, 11);
		func_2(iParam0);
		*iParam0 = 6;
	}
}

void func_16(int* iParam0)//Position - 0x6980
{
	if (iParam0->f_10)
	{
		func_724(iParam0);
		iParam0->f_12 = 0;
		iParam0->f_11 = 0;
		iParam0->f_10 = 0;
	}
	if (func_898(iParam0))
	{
		if ((iParam0->f_9 - func_896(iParam0)) < 10.5f)
		{
			iParam0->f_11 = 1;
		}
		if (func_896(iParam0) >= iParam0->f_9)
		{
			func_891(iParam0);
			iParam0->f_12 = 1;
		}
	}
}

void func_17(int* iParam0)//Position - 0x69DF
{
	iParam0->f_44 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
	iParam0->f_44 = (iParam0->f_44 % 2);
	iParam0->f_1[iLocal_232] = 0;
	iParam0->f_1[0] = 1;
	iParam0->f_1[0] = 0;
	iParam0->f_1[iLocal_232] = 1;
	func_18(iParam0, 22);
	iParam0->f_6.f_10 = 1;
	func_730(&(iParam0->f_6));
}

void func_18(int* iParam0, int iParam1)//Position - 0x6A38
{
	MISC::SET_BIT(&(iParam0->f_47), iParam1);
}

void func_19()//Position - 0x6A4A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
		}
		iVar0++;
	}
}

void func_20(int iParam0, int iParam1)//Position - 0x6A79
{
	MISC::SET_BIT(&(Global_1648034.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1648034.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_21()//Position - 0x6AAF
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_23();
	func_22(1);
	PAD::_0x7F4724035FDCA1DD(0);
	PAD::_0x7F4724035FDCA1DD(2);
}

void func_22(int iParam0)//Position - 0x6ACE
{
	Global_1577896 = iParam0;
}

void func_23()//Position - 0x6ADC
{
	Global_23011.f_6 = 1;
}

void func_24(int iParam0, int iParam1, bool bParam2)//Position - 0x6AEA
{
	if (*iParam0 != iParam1)
	{
		if (bParam2)
		{
		}
		*iParam0 = iParam1;
		if (bParam2)
		{
		}
	}
}

int func_25(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6B0F
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_26(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6BD8
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_27(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_27(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_27(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_27(&(uParam0->f_1), 8192);
	}
}

void func_27(var uParam0, int iParam1)//Position - 0x6C52
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_28(var uParam0, bool bParam1, bool bParam2)//Position - 0x6C63
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

void func_29(bool bParam0, int iParam1)//Position - 0x6CA0
{
	if (bParam0)
	{
		func_32(1, 0, 1);
	}
	else
	{
		func_30(iParam1);
	}
}

void func_30(int iParam0)//Position - 0x6CBD
{
	func_31();
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
		{
			return;
		}
	}
	if (func_36() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_35(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
}

void func_31()//Position - 0x6CFE
{
	Global_2727095 = 1;
}

void func_32(int iParam0, bool bParam1, bool bParam2)//Position - 0x6D0B
{
	if (func_33())
	{
		return;
	}
	if ((func_36() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_35(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		if (!bParam1)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
		if (bParam2)
		{
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
		}
	}
}

int func_33()//Position - 0x6D56
{
	if (func_34())
	{
		return Global_2725330;
	}
	return 0;
}

int func_34()//Position - 0x6D6D
{
	if (Global_2725323)
	{
		return Global_2725322;
	}
	return 0;
}

void func_35(int iParam0)//Position - 0x6D84
{
	if (Global_1574632.f_20 != iParam0)
	{
		Global_1574632.f_20 = iParam0;
	}
}

int func_36()//Position - 0x6D9F
{
	return Global_1574632.f_20;
}

int func_37(var uParam0, int iParam1, bool bParam2)//Position - 0x6DAD
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_721(uParam0, bParam2, 0);
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

void func_38(int iParam0, struct<3> Param1, struct<6> Param2)//Position - 0x6E0B
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_65();
	func_64();
	func_63();
	func_62();
	func_61();
	func_60();
	Global_1922955.f_9 = iParam0;
	switch (Global_1922955.f_9)
	{
		case 1:
			Global_1922955 = 0;
			Global_1922955.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			func_57();
			break;
		
		case 2:
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			Global_1922955.f_17 = { Param2 };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		
		case 3:
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 1)
			{
				func_56(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28);
			}
			func_55();
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			if (func_54())
			{
				Global_1922955.f_17 = { Param2 };
			}
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		
		case 4:
			func_53();
			func_55();
			Global_1922955 = 1;
			if (func_52(PLAYER::PLAYER_ID()) || func_51(PLAYER::PLAYER_ID()))
			{
				func_50(1);
			}
			if ((func_49() || func_48()) && func_47())
			{
				Global_1922955.f_17 = { func_46() };
				Param2 = { Global_1922955.f_17 };
				Global_1922955.f_23 = { func_45() };
			}
			else if (func_49() || func_48())
			{
				if (func_44())
				{
					Global_1922955.f_23 = { func_43() };
				}
				else
				{
					Global_1922955.f_23 = { Param1 };
				}
			}
			else
			{
				Global_1922955.f_23 = { Param1 };
			}
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		
		case 5:
			func_53();
			func_42();
			func_55();
			if (func_52(PLAYER::PLAYER_ID()) || func_51(PLAYER::PLAYER_ID()))
			{
				func_50(1);
			}
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		
		case 8:
			Global_1922955 = 0;
			Global_1922955.f_23 = { Param1 };
			Global_1922955.f_17 = { Param2 };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		
		case 9:
			func_55();
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		
		case 10:
			Global_1922955 = 0;
			Global_1922955.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
	}
	func_41();
	func_40();
	func_39(Global_1922955.f_9);
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_221 = { Global_1922955.f_23 };
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_224 = { Param2 };
}

void func_39(var uParam0)//Position - 0x711E
{
	Global_2715699.f_1.f_837 = uParam0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_220 = uParam0;
}

void func_40()//Position - 0x7140
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 23);
}

void func_41()//Position - 0x715D
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 12);
}

void func_42()//Position - 0x717A
{
	Global_1922955.f_4 = 1;
}

Vector3 func_43()//Position - 0x7189
{
	return Global_2714762.f_43.f_575;
}

int func_44()//Position - 0x719C
{
	if ((Global_2714762.f_43.f_575 != 0f || Global_2714762.f_43.f_575.f_1 != 0f) || Global_2714762.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_45()//Position - 0x71DD
{
	return Global_2714762.f_43.f_578;
}

struct<6> func_46()//Position - 0x71F0
{
	return Global_2714762.f_43.f_12;
}

var func_47()//Position - 0x7202
{
	return Global_2714762.f_43.f_59;
}

var func_48()//Position - 0x7212
{
	return Global_2714762.f_43.f_55;
}

bool func_49()//Position - 0x7222
{
	return Global_2714762.f_43.f_57;
}

void func_50(int iParam0)//Position - 0x7232
{
	Global_2715699.f_6321 = iParam0;
}

bool func_51(int iParam0)//Position - 0x7243
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_52(int iParam0)//Position - 0x7258
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

void func_53()//Position - 0x726D
{
	Global_1922955.f_3 = 1;
}

bool func_54()//Position - 0x727C
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 24);
}

void func_55()//Position - 0x7296
{
	Global_1922955.f_7 = 1;
}

void func_56(var uParam0)//Position - 0x72A5
{
	Global_1922955.f_10 = uParam0;
}

int func_57()//Position - 0x72B5
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2715699.f_6603), 13))
	{
		return 0;
	}
	iVar2 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_743(iVar0) };
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var3, &(Global_2715699.f_6603)) && func_59(iVar0))
			{
				func_58();
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_58()//Position - 0x7335
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 9);
}

var func_59(int iParam0)//Position - 0x7352
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 9);
}

void func_60()//Position - 0x736A
{
	Global_1922955.f_7 = 0;
}

void func_61()//Position - 0x7379
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_5 = 0;
}

void func_62()//Position - 0x738F
{
	Global_1922955.f_10 = -1;
}

void func_63()//Position - 0x739E
{
	Global_1922955.f_4 = 0;
}

void func_64()//Position - 0x73AD
{
	Global_1922955.f_3 = 0;
}

void func_65()//Position - 0x73BC
{
	Global_2715699.f_2846.f_2 = 1;
}

int func_66(int* iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x73CE
{
	char* sVar0;
	char[] cVar1[8];
	bool bVar2;
	char* sVar3;
	char* sVar4;
	struct<8> Var5;
	char cVar6[64];
	bool bVar7;
	char* sVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<8> Var16;
	char cVar17[64];
	
	if (iParam0->f_436 > 0)
	{
		func_256(0);
	}
	bVar2 = iParam9;
	*iParam8 = 1;
	if (bParam14)
	{
		func_255();
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		func_246(&(iParam0->f_23), &(iParam0->f_145), iParam0->f_436, iParam0->f_2);
	}
	else
	{
		func_238(iParam0, &(iParam0->f_451), &(iParam0->f_452), &(iParam0->f_23), &(iParam0->f_145), iParam0->f_436, &(iParam0->f_2), &(iParam0->f_3), &(iParam0->f_475));
	}
	func_237(iParam0);
	switch (*iParam8)
	{
		case 0:
			switch (iParam0->f_436)
			{
				case 0:
					func_236(iParam0, 0);
					if (func_235(iParam0))
					{
						func_234(iParam0, 0);
						if ((func_37(&(iParam0->f_432), 500, 0) || CAM::IS_SCREEN_FADED_OUT()) && func_162(iParam0, iParam1, iParam9, 0))
						{
							func_160(Global_2689235[bVar2 /*453*/].f_258, PED::IS_PED_MALE(iParam0->f_23[0]), 0, &sVar0, &cVar1, Global_2689235[bVar2 /*453*/].f_257, Global_2689235[bVar2 /*453*/].f_259, 0, -1);
							STREAMING::REQUEST_ANIM_DICT(&sVar0);
							if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0) || func_159(iParam0))
							{
								func_158(&(iParam0->f_430));
								func_721(&(iParam0->f_430), 0, 0);
								func_155(1, 1);
								iParam0->f_436 = 1;
							}
						}
					}
					break;
				
				case 1:
					func_154(iParam0, &(iParam0->f_20), 0, 1);
					func_153(iParam0, 0);
					if (func_37(&(iParam0->f_430), 375, 0))
					{
						func_152(iParam0);
					}
					if (func_37(&(iParam0->f_430), 750, 0))
					{
						sVar3 = "WINNER";
						StringCopy(&Var5, PLAYER::GET_PLAYER_NAME(iParam9), 64);
						cVar6 = { func_148(iParam9) };
						iParam0->f_419 = 666;
						if (!func_147() || !func_146(PLAYER::PLAYER_ID()))
						{
							StringCopy(&cVar6, "", 64);
						}
						if (iParam6 == 0)
						{
							sVar4 = "HUD_COLOUR_FRIENDLY";
						}
						else
						{
							sVar4 = "HUD_COLOUR_NET_PLAYER1";
						}
						func_145(iParam0, sVar3, sVar4, 1, 0);
						func_140(iParam0, sVar3, iParam6, &Var5, &cVar6, "", iParam7, 1, 0, 0, 0);
						iParam0->f_419 += 4666;
						iParam0->f_419 += 666;
						func_138(iParam0, sVar3, 75, 0);
						func_137(iParam0, sVar3);
						func_158(&(iParam0->f_430));
						func_721(&(iParam0->f_430), 0, 0);
						func_32(1, 0, 1);
						GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
						GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
						func_136(iParam0);
						HUD::_MULTIPLAYER_CHAT_SET_DISABLED(true);
						iParam0->f_436 = 3;
					}
					break;
				
				case 3:
					func_154(iParam0, &(iParam0->f_20), 0, 1);
					if (func_37(&(iParam0->f_430), iParam0->f_419, 0))
					{
						iParam0->f_436 = 5;
					}
					break;
				
				case 5:
					func_135(iParam0);
					HUD::_MULTIPLAYER_CHAT_SET_DISABLED(false);
					*iParam8 = 1;
					iParam0->f_436 = 0;
					break;
			}
			break;
		
		case 1:
			switch (iParam0->f_436)
			{
				case 0:
					if (!bParam10)
					{
						if (func_124(iParam0, iParam1, &bVar7, 0, 0))
						{
							func_236(iParam0, 0);
							func_155(1, 1);
							func_117(0);
							func_256(0);
							func_707(PLAYER::PLAYER_ID(), 0, 0, 0);
							if (bVar7)
							{
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							}
							iParam0->f_436 = 1;
						}
					}
					else
					{
						func_236(iParam0, 0);
						func_155(1, 1);
						func_117(0);
						func_256(0);
						func_707(PLAYER::PLAYER_ID(), 0, 0, 0);
						iParam0->f_436 = 1;
					}
					break;
				
				case 1:
					func_236(iParam0, 0);
					if ((func_235(iParam0) && CAM::IS_SCREEN_FADED_IN()) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
					{
						StringCopy(&Var16, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
						cVar17 = { func_148(PLAYER::PLAYER_ID()) };
						iParam0->f_419 = 666;
						sVar8 = "SUMMARY";
						sVar9 = "HUD_COLOUR_BLACK";
						iVar10 = func_113(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));
						iVar15 = func_300(iParam15, sParam2, iParam3, iParam4, iParam5, 1, -1, 0);
						iVar11 = func_112(iVar10, 0);
						iVar12 = iVar11 + 1;
						iVar13 = func_111(iVar11, 0, 0);
						iVar14 = func_111(iVar12, 0, 0);
						iParam0->f_419 = 666;
						if (!func_147() || !func_146(PLAYER::PLAYER_ID()))
						{
							StringCopy(&cVar17, "", 64);
						}
						func_145(iParam0, sVar8, sVar9, 1, 0);
						if (iParam6 == 2)
						{
							func_140(iParam0, sVar8, iParam6, "", "", "", iParam7, 1, 0, 0, 0);
						}
						else
						{
							func_140(iParam0, sVar8, iParam6, &Var16, &cVar17, "", iParam7, 1, 0, 0, 0);
						}
						iParam0->f_419 += 2333;
						if (iParam12 > 0)
						{
							func_108(iParam0, sVar8, iParam11, iParam12);
							iParam0->f_419 += 2333;
						}
						func_107(iParam0, sVar8, iVar15, iVar10, iVar13, iVar14, iVar11, iVar12);
						iParam0->f_419 += 2333;
						if ((iVar10 + iVar15) >= iVar14)
						{
							iParam0->f_419 = (iParam0->f_419 + SYSTEM::ROUND((SYSTEM::TO_FLOAT(2333) / 1.75f)));
						}
						func_138(iParam0, sVar8, -1, 0);
						func_137(iParam0, sVar8);
						func_158(&(iParam0->f_430));
						func_721(&(iParam0->f_430), 0, 0);
						if (func_106())
						{
							AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
						}
						else
						{
							AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
						}
						func_136(iParam0);
						iParam0->f_436 = 3;
						HUD::_MULTIPLAYER_CHAT_SET_DISABLED(true);
					}
					else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
					{
						if (!func_722(&(iParam0->f_456)))
						{
							func_721(&(iParam0->f_456), 0, 0);
						}
						else if (func_37(&(iParam0->f_456), 1000, 0))
						{
							func_102();
						}
					}
					break;
				
				case 3:
					func_101(iParam0, 0);
					if (func_37(&(iParam0->f_430), iParam0->f_419, 0))
					{
						if (bParam13)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
							func_98();
							func_97(iParam0, "SUMMARY");
							func_85(iParam0, 1, "SUMMARY", 0);
							func_155(0, 1);
							if (CAM::DOES_CAM_EXIST(*iParam1))
							{
								CAM::DESTROY_CAM(*iParam1, true);
								CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							}
							iParam0->f_436 = 5;
							if (func_106())
							{
								AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
							}
							else
							{
								AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
							}
							return 1;
						}
						else
						{
							if (!bParam10)
							{
								func_83(iParam1);
							}
							func_158(&(iParam0->f_430));
							func_721(&(iParam0->f_430), 0, 0);
							iParam0->f_436 = 4;
						}
					}
					break;
				
				case 4:
					func_101(iParam0, 0);
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
					func_98();
					func_97(iParam0, "SUMMARY");
					func_85(iParam0, 1, "SUMMARY", 0);
					func_155(0, 1);
					if (CAM::DOES_CAM_EXIST(*iParam1))
					{
						CAM::DESTROY_CAM(*iParam1, true);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					iParam0->f_436 = 5;
					if (func_106())
					{
						AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
					}
					else
					{
						AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
					}
					return 1;
					break;
				
				case 5:
					HUD::_MULTIPLAYER_CHAT_SET_DISABLED(false);
					if (func_106())
					{
						AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
					}
					else
					{
						AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
					}
					return 1;
					break;
			}
			break;
	}
	if (iParam0->f_436 > 0 && iParam0->f_436 < 5)
	{
		if (CAM::DOES_CAM_EXIST(*iParam1))
		{
			if (CAM::IS_CAM_RENDERING(*iParam1))
			{
				func_67(iParam0, &(iParam0->f_20), bVar2, 0, 0, 0, 0, 0, -1, -1, 200, 0, 0, -1);
			}
		}
	}
	return 0;
}

void func_67(int* iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x7B1F
{
	if (iParam8 == iParam8)
	{
		iParam8 = iParam8;
	}
	if (iParam11 == iParam11)
	{
		iParam11 = iParam11;
	}
	func_68(iParam0, uParam1, bParam2, bParam3, bParam4, bParam5, bParam6, iParam7, iParam9, iParam10, bParam12, iParam13);
}

void func_68(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x7B59
{
	struct<41> Var0;
	struct<8> Var1;
	char cVar2[64];
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	char cVar7[64];
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	Var0 = -1;
	Var0.f_1 = 32;
	Var0.f_34 = 3;
	Var0.f_40 = -1;
	if (!PED::IS_PED_INJURED(*uParam1) && (bParam2 >= 0 || bParam4))
	{
		PED::SET_PED_RESET_FLAG(*uParam1, 150, true);
		StringCopy(&Var1, "", 64);
		StringCopy(&cVar2, "", 64);
		StringCopy(&Var6, "", 64);
		StringCopy(&cVar7, "", 64);
		if (iParam8 > -1)
		{
			iVar3 = iParam8;
		}
		else
		{
			iVar3 = Global_2689235[bParam2 /*453*/].f_258;
			iVar4 = Global_2689235[bParam2 /*453*/].f_257;
			iVar5 = Global_2689235[bParam2 /*453*/].f_259;
		}
		if (iParam9 == iParam9)
		{
			iParam9 = iParam9;
		}
		if (!bParam5)
		{
			func_160(iVar3, PED::IS_PED_MALE(*uParam1), bParam4, &Var1, &cVar2, iVar4, iVar5, bParam10, iParam11);
		}
		else
		{
			func_82(iParam7, Global_2689235[bParam2 /*453*/].f_260, *uParam1, bParam6, &Var1, &cVar2);
		}
		func_81(uParam0, &Var6, &cVar7, PED::IS_PED_MALE(*uParam1));
		if (uParam0->f_449 != 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
			{
				STREAMING::REQUEST_ANIM_DICT(&Var1);
				STREAMING::REQUEST_ANIM_DICT(&Var6);
				if (((STREAMING::HAS_ANIM_DICT_LOADED(&Var1) && STREAMING::HAS_ANIM_DICT_LOADED(&Var6)) && func_80(iVar3, bParam5)) && func_79(iVar3, bParam5))
				{
					switch (uParam0->f_450)
					{
						case 0:
							if (bParam2 > -1 && ((bParam5 && bParam3 > -1) || !bParam5))
							{
								if (!BitTest(uParam0->f_426, bParam2) || (bParam5 && !BitTest(uParam0->f_426, bParam3)))
								{
									if (bParam5)
									{
										func_72(&Var0, 0, &Var8, &Var9, 1, 0, 1);
										Var9.f_2 = (Var9.f_2 + 90f);
										uParam0->f_438 = PED::CREATE_SYNCHRONIZED_SCENE(Var8, Var9, 2);
										Var10 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&Var1, &cVar2, Var8, Var9, 0f, 2) };
										Var11 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&Var1, &cVar2, Var8, Var9, 0f, 2) };
										if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
										{
											if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
											{
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, Var10, false, false, true);
												ENTITY::SET_ENTITY_ROTATION(*uParam1, Var11, 2, true);
											}
										}
									}
									else
									{
										Var12 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true) };
										Var13 = { Var12 };
										func_71(&(uParam0->f_441), iVar3, bParam5, Var13);
										uParam0->f_438 = PED::CREATE_SYNCHRONIZED_SCENE(Var12, ENTITY::GET_ENTITY_ROTATION(*uParam1, 2), 2);
									}
									if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_441))
									{
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_441, uParam0->f_438, &cVar2, &Var1, 1000f, -1000f, 0, 1000f);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(*uParam1, uParam0->f_438, &Var1, &cVar2, 1000f, -8f, 0, 0, 1000f, 31);
									if (bParam5)
									{
										if (bParam6)
										{
											if (bParam2 >= 0 && bParam2 < 32)
											{
												MISC::SET_BIT(&(uParam0->f_426), bParam2);
											}
										}
										else if (bParam3 >= 0 && bParam3 < 32)
										{
											MISC::SET_BIT(&(uParam0->f_426), bParam3);
										}
									}
									else if (bParam2 >= 0 && bParam2 < 32)
									{
										MISC::SET_BIT(&(uParam0->f_426), bParam2);
									}
								}
								else
								{
									uParam0->f_450++;
								}
							}
							else
							{
								uParam0->f_450 = 2;
							}
							break;
						
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438))
							{
								if (!bParam5)
								{
									if (iVar3 == 8)
									{
										func_70(uParam0, uParam1);
									}
									if (iVar3 == 9)
									{
										func_69(uParam0, uParam1);
									}
								}
								if (uParam0->f_1196)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438) < 0.98f)
									{
										if (iVar3 == 8)
										{
											func_70(uParam0, uParam1);
										}
										if (iVar3 == 9)
										{
											func_69(uParam0, uParam1);
										}
									}
									else
									{
										TASK::TASK_PLAY_ANIM_ADVANCED(*uParam1, &Var6, &cVar7, ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_ROTATION(*uParam1, 2), 2f, -8f, -1, 0, 0f, 2, 31);
										uParam0->f_450++;
									}
								}
							}
							break;
						
						case 2:
							break;
					}
				}
				else
				{
					if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var1))
					{
					}
					if (!func_80(iVar3, bParam5))
					{
					}
					if (!STREAMING::HAS_ANIM_DICT_LOADED(&Var6))
					{
					}
					if (!func_79(iVar3, bParam5))
					{
					}
				}
			}
		}
	}
	else
	{
		if (PED::IS_PED_INJURED(*uParam1))
		{
		}
		if (bParam2 < 0)
		{
		}
	}
}

void func_69(var uParam0, var uParam1)//Position - 0x7F92
{
	float fVar0;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			return;
		}
		if (uParam0->f_440 == -1)
		{
			uParam0->f_440 = AUDIO::GET_SOUND_ID();
		}
		else if (fVar0 >= 0.595f)
		{
			if (!BitTest(uParam0->f_439, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 0);
			}
		}
		else if (fVar0 >= 0.371f)
		{
			if (!BitTest(uParam0->f_439, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 1);
			}
		}
		else if (fVar0 >= 0.152f)
		{
			if (!BitTest(uParam0->f_439, 2))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 2);
			}
		}
	}
}

void func_70(var uParam0, var uParam1)//Position - 0x8089
{
	float fVar0;
	
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			return;
		}
		if (uParam0->f_440 == -1)
		{
			uParam0->f_440 = AUDIO::GET_SOUND_ID();
		}
		if (!PED::IS_PED_MALE(*uParam1))
		{
			if (fVar0 >= 0.622f)
			{
				if (!BitTest(uParam0->f_439, 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 0);
				}
			}
			else if (fVar0 >= 0.495f)
			{
				if (!BitTest(uParam0->f_439, 1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 1);
				}
			}
			else if (fVar0 >= 0.333f)
			{
				if (!BitTest(uParam0->f_439, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 2);
				}
			}
			else if (fVar0 >= 0.162f)
			{
				if (!BitTest(uParam0->f_439, 3))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 3);
				}
			}
			else if (fVar0 >= 0.131f)
			{
				if (!BitTest(uParam0->f_439, 4))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 4);
				}
			}
		}
		else if (fVar0 >= 0.595f)
		{
			if (!BitTest(uParam0->f_439, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 0);
			}
		}
		else if (fVar0 >= 0.445f)
		{
			if (!BitTest(uParam0->f_439, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 1);
			}
		}
		else if (fVar0 >= 0.282f)
		{
			if (!BitTest(uParam0->f_439, 2))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 2);
			}
		}
		else if (fVar0 >= 0.141f)
		{
			if (!BitTest(uParam0->f_439, 3))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 3);
			}
		}
	}
}

bool func_71(var uParam0, int iParam1, bool bParam2, struct<3> Param3)//Position - 0x82BB
{
	int iVar0;
	float fVar1;
	
	fVar1 = -1f;
	if (bParam2)
	{
		return 1;
	}
	if (iParam1 == 59)
	{
		iVar0 = joaat("prop_cs_ciggy_01");
	}
	else
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
		if (func_79(iParam1, bParam2))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iVar0, Param3, false, false, false);
			if (fVar1 != -1f)
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fVar1);
			}
		}
	}
	else
	{
		return 1;
	}
	return ENTITY::DOES_ENTITY_EXIST(*uParam0);
}

void func_72(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x833F
{
	if (func_106() || func_78())
	{
		func_73(uParam0, iParam1, uParam2, uParam3, iParam1);
		return;
	}
	if (bParam5)
	{
		*uParam2 = { 414.4f, -977.6f, -100.0042f };
		uParam2->f_2 = (uParam2->f_2 - 1f);
		*uParam3 = { 0f, 0f, 200f };
		return;
	}
	else if (bParam6)
	{
		*uParam2 = { 414.65f, -978.46f, -99.004f };
		uParam2->f_2 = (uParam2->f_2 - 1f);
		*uParam3 = { 0f, 0f, 200f };
		return;
	}
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 414.4f, -977.6f, -100.0042f };
			*uParam3 = { 0f, 0f, 200f };
			break;
		
		case 1:
			if (bParam4)
			{
				*uParam2 = { 412.5202f, -977.6f, -100.0042f };
				*uParam3 = { 0f, 0f, 225.375f };
			}
			else
			{
				*uParam2 = { 413.0202f, -976.6559f, -100.0042f };
				*uParam3 = { 0f, 0f, 225.375f };
			}
			break;
		
		case 2:
			*uParam2 = { 414.9879f, -975.4411f, -100.0042f };
			*uParam3 = { 0f, 0f, 183.625f };
			break;
		
		case 3:
			*uParam2 = { 416.2123f, -975.5722f, -100.0042f };
			*uParam3 = { 0f, 0f, 155.3f };
			break;
		
		case 4:
			*uParam2 = { 410.7824f, -976.5933f, -100.0042f };
			*uParam3 = { 0f, 0f, 240.9f };
			break;
		
		case 5:
			*uParam2 = { 411.1806f, -975.819f, -100.0042f };
			*uParam3 = { 0f, 0f, 227.5f };
			break;
		
		case 6:
			*uParam2 = { 414.0178f, -974.6259f, -100.0042f };
			*uParam3 = { 0f, 0f, 206.65f };
			break;
		
		case 7:
			*uParam2 = { 415.7338f, -972.9619f, -100.0042f };
			*uParam3 = { 0f, 0f, 170.775f };
			break;
		
		case 8:
			*uParam2 = { 412.1275f, -974.0275f, -100.0042f };
			*uParam3 = { 0f, 0f, 200f };
			break;
		
		case 9:
			*uParam2 = { 417.3252f, -970.7984f, -100.0042f };
			*uParam3 = { 0f, 0f, 160.025f };
			break;
		
		case 10:
			*uParam2 = { 409.805f, -975.0361f, -100.0042f };
			*uParam3 = { 0f, 0f, 240.65f };
			break;
		
		case 11:
			*uParam2 = { 410.6598f, -974.3722f, -100.0042f };
			*uParam3 = { 0f, 0f, 222.15f };
			break;
		
		case 12:
			*uParam2 = { 407.5374f, -974.3933f, -100.0042f };
			*uParam3 = { 0f, 0f, 258.175f };
			break;
		
		case 13:
			*uParam2 = { 413.1881f, -969.019f, -100.0042f };
			*uParam3 = { 0f, 0f, 204.025f };
			break;
		
		case 14:
			*uParam2 = { 415.0103f, -969.1959f, -100.0042f };
			*uParam3 = { 0f, 0f, 182.35f };
			break;
	}
	uParam2->f_2 = (uParam2->f_2 - 1f);
}

void func_73(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0x864C
{
	switch (*uParam0)
	{
		case 0:
			*uParam2 = { 2956.984f, -3866.815f, 140f };
			switch (Global_4718592.f_162543)
			{
				case 3:
					uParam2->f_2 = (uParam2->f_2 + 0.05f);
					break;
			}
			*uParam3 = { 0f, 0f, 48f };
			break;
		
		case 1:
			if (iParam4 == 0 || (func_77(uParam0->f_1[iParam4]) && iParam4 == 1))
			{
				*uParam2 = { 2966.769f, -3874.841f, 140.0011f };
				*uParam3 = { 0f, 0f, 48f };
			}
			else
			{
				*uParam2 = { func_75(uParam0, iParam1) };
				uParam2->f_2 = (uParam2->f_2 - 1f);
				*uParam3 = { 0f, 0f, func_74(iParam1) };
			}
			break;
		
		default:
			*uParam2 = { func_75(uParam0, iParam1) };
			uParam2->f_2 = (uParam2->f_2 - 1f);
			*uParam3 = { 0f, 0f, func_74(iParam1) };
			break;
	}
}

float func_74(int iParam0)//Position - 0x873C
{
	if (func_78())
	{
		switch (iParam0)
		{
			case 0:
				return 68f;
			
			case 1:
				return 122.599f;
			
			case 2:
				return 92.199f;
			
			case 3:
				return 137.598f;
			
			case 4:
				return 139.799f;
			
			case 5:
				return 56.799f;
			
			case 6:
				return 23.599f;
			
			case 7:
				return 66.399f;
			
			case 8:
				return 109.598f;
			
			case 9:
				return 85.199f;
			
			case 10:
				return 91.998f;
			
			case 11:
				return 82.798f;
			
			case 12:
				return 94.598f;
			
			case 13:
				return 41.198f;
			
			case 14:
				return 104.597f;
			
			case 15:
				return 15.997f;
			
			default:
		}
		return 68f;
	}
	if (func_106())
	{
		switch (iParam0)
		{
			case 0:
				return 203.6f;
			
			case 1:
				return 214.6f;
			
			case 2:
				return 256.8f;
			
			case 3:
				return 247.1997f;
			
			case 4:
				return 188.6f;
			
			case 5:
				return 229.199f;
			
			case 6:
				return 203.799f;
			
			case 7:
				return 212.599f;
			
			case 8:
				return 247.999f;
			
			case 9:
				return 247.999f;
			
			case 10:
				return 189.199f;
			
			case 11:
				return 213.599f;
			
			case 12:
				return 242.399f;
			
			case 13:
				return 269.599f;
			
			case 14:
				return 218.199f;
			
			case 15:
				return 266.6238f;
			
			default:
		}
		return 306.5976f;
	}
	return 0f;
}

Vector3 func_75(var uParam0, int iParam1)//Position - 0x8931
{
	if (func_78())
	{
		switch (iParam1)
		{
			case 0:
				return 4523f, -4488.264f, 3.1814f;
			
			case 1:
				return 4525.786f, -4485.819f, 3.166f;
			
			case 2:
				return 4526.7f, -4487.269f, 3.158f;
			
			case 3:
				return 4527.203f, -4484.359f, 3.17f;
			
			case 4:
				return 4525.744f, -4484.242f, 3.175f;
			
			case 5:
				return 4526.483f, -4490.852f, 3.169f;
			
			case 6:
				return 4526.028f, -4491.967f, 3.177f;
			
			case 7:
				return 4526.876f, -4491.695f, 3.171f;
			
			case 8:
				return 4527.959f, -4484.871f, 3.166f;
			
			case 9:
				return 4527.785f, -4488.536f, 3.154f;
			
			case 10:
				return 4528.447f, -4486.53f, 3.156f;
			
			case 11:
				return 4528.621f, -4489.301f, 3.152f;
			
			case 12:
				return 4528.693f, -4487.89f, 3.148f;
			
			case 13:
				return 4527.085f, -4493.315f, 3.178f;
			
			case 14:
				return 4527.154f, -4485.98f, 3.162f;
			
			case 15:
				return 4526.244f, -4493.404f, 3.181f;
			
			default:
		}
		return 4523f, -4488.264f, 3.1814f;
	}
	if (func_106())
	{
		if (func_76(uParam0))
		{
			switch (iParam1)
			{
				case 0:
					return 2828.92f, -3901.475f, 139.3957f;
					break;
				
				case 1:
					return 2829.51f, -3902.015f, 139.2491f;
					break;
				
				case 2:
					return 2828.365f, -3900.967f, 139.2491f;
					break;
			}
			return 2828.92f, -3901.475f, 139.3957f;
		}
		switch (iParam1)
		{
			case 0:
				return 2963.925f, -3870.137f, 140.082f;
			
			case 1:
				return 2963.068f, -3870.597f, 140.082f;
			
			case 2:
				return 2960.217f, -3874.703f, 140.082f;
			
			case 3:
				return 2960.612f, -3873.702f, 140.0732f;
			
			case 4:
				return 2965.272f, -3869.305f, 140.082f;
			
			case 5:
				return 2959.643f, -3871.999f, 140.082f;
			
			case 6:
				return 2964.449f, -3869.2f, 140.082f;
			
			case 7:
				return 2963.433f, -3868.566f, 140.082f;
			
			case 8:
				return 2959.914f, -3872.786f, 140.082f;
			
			case 9:
				return 2959.735f, -3873.895f, 140.075f;
			
			case 10:
				return 2965.66f, -3868.658f, 140.082f;
			
			case 11:
				return 2962.806f, -3869.486f, 140.082f;
			
			case 12:
				return 2960.431f, -3871.78f, 140.082f;
			
			case 13:
				return 2959.737f, -3875.456f, 140.082f;
			
			case 14:
				return 2961.832f, -3870.305f, 140.082f;
			
			case 15:
				return 2957.675f, -3874.198f, 140.0816f;
			
			default:
		}
		return 2828.286f, -3904.493f, 139.01f;
	}
	return 418.9326f, -979.3876f, -100.0042f;
}

bool func_76(var uParam0)//Position - 0x8CFB
{
	return *uParam0 == 0;
}

int func_77(int iParam0)//Position - 0x8D08
{
	switch (iParam0)
	{
		case 25:
		case 52:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 80:
		case 100:
		case 81:
		case 101:
		case 82:
		case 102:
		case 83:
		case 103:
		case 84:
		case 104:
		case 85:
		case 105:
		case 86:
		case 106:
		case 67:
		case 87:
		case 68:
		case 88:
		case 69:
		case 89:
		case 70:
		case 90:
		case 71:
		case 91:
		case 72:
		case 92:
		case 73:
		case 93:
		case 74:
		case 94:
		case 75:
		case 95:
		case 76:
		case 96:
		case 77:
		case 97:
		case 78:
		case 98:
		case 79:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

bool func_78()//Position - 0x8E96
{
	return BitTest(Global_4718592.f_162495, 19);
}

int func_79(int iParam0, bool bParam1)//Position - 0x8EAB
{
	int iVar0;
	
	if (!bParam1)
	{
		if (iParam0 == 59)
		{
			iVar0 = joaat("prop_cs_ciggy_01");
		}
		else
		{
			return 1;
		}
		STREAMING::REQUEST_MODEL(iVar0);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_80(int iParam0, bool bParam1)//Position - 0x8EE3
{
	if (bParam1)
	{
		return 1;
	}
	if (iParam0 != 8 && iParam0 != 9)
	{
		return 1;
	}
	return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_GTAO/SNACKS", false, -1);
}

void func_81(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x8F14
{
	int iVar0;
	
	if (uParam0->f_449 == 0)
	{
		if (bParam3)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				uParam0->f_449 = 1;
			}
			else
			{
				uParam0->f_449 = 2;
			}
		}
		else
		{
			uParam0->f_449 = 3;
		}
	}
	switch (uParam0->f_449)
	{
		case 1:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_A", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_B", 64);
			break;
		
		case 3:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@FEMALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_F_A", 64);
			break;
		
		case 0:
			StringCopy(sParam1, "", 64);
			StringCopy(sParam2, "", 64);
			break;
	}
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3, char* sParam4, char* sParam5)//Position - 0x8FBC
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 2:
			if (PED::IS_PED_MALE(iParam2))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 1:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
		
		case 3:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_manly_handshake", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_manly_handshake", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_manly_handshake", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_RIGHT", 64);
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_fist_bump", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_fist_bump", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_fist_bump", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "FIST_BUMP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "FIST_BUMP_RIGHT", 64);
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_backslap", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_backslap", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_backslap", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BACKSLAP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BACKSLAP_RIGHT", 64);
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_high_five", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_high_five", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_high_five", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "HIGH_FIVE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "HIGH_FIVE_RIGHT", 64);
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_cowering", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_cowering", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_cowering", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "COWERING_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "COWERING_RIGHT", 64);
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_sarcastic", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_sarcastic", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_sarcastic", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "SARCASTIC_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "SARCASTIC_RIGHT", 64);
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_bro_hug", 64);
					break;
				
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_bro_hug", 64);
					break;
				
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_bro_hug", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BRO_HUG_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BRO_HUG_RIGHT", 64);
			}
			break;
	}
}

int func_83(var uParam0)//Position - 0x9298
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		Var0 = { CAM::GET_CAM_COORD(*uParam0) };
		Var1 = { CAM::GET_CAM_ROT(*uParam0, 2) };
		fVar2 = CAM::GET_CAM_FOV(*uParam0);
		CAM::STOP_CAM_POINTING(*uParam0);
		CAM::SET_CAM_PARAMS(*uParam0, Var0, Var1, (fVar2 - 3f), 0, 1, 1, 2);
		CAM::SET_CAM_PARAMS(*uParam0, Var0, Var1, fVar2, 1500, 0, 0, 2);
		func_84(uParam0, 0.3f);
		return 1;
	}
	return 0;
}

void func_84(var uParam0, float fParam1)//Position - 0x930F
{
	if (func_106())
	{
		return;
	}
	CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam1);
}

void func_85(int* iParam0, bool bParam1, char* sParam2, bool bParam3)//Position - 0x932D
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		func_97(iParam0, sParam2);
	}
	func_96(iParam0);
	if (CAM::DOES_CAM_EXIST(iParam0->f_1224))
	{
		CAM::SET_CAM_ACTIVE(iParam0->f_1224, false);
		CAM::DESTROY_CAM(iParam0->f_1224, false);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0->f_3[iVar0] != 0)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_3[iVar0]));
			iParam0->f_3[iVar0] = 0;
		}
		iVar0++;
	}
	func_94();
	func_93(iParam0);
	func_135(iParam0);
	if (bParam1)
	{
		func_155(0, 1);
	}
	func_86(0, 1, 1, 0, bParam3, 0, 0);
	Global_1931427 = 0;
}

void func_86(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x93CD
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_92(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_91())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_90(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_92(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_90(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_88(PLAYER::PLAYER_ID())) && !func_899(PLAYER::PLAYER_ID(), 0)) && !func_87()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_88(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_87()//Position - 0x9510
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

int func_88(int iParam0)//Position - 0x952A
{
	if (func_899(iParam0, 0))
	{
		return 1;
	}
	if (func_89())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_89()//Position - 0x9569
{
	return BitTest(Global_2621446, 3);
}

int func_90(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x9577
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_91()//Position - 0x95AA
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0)//Position - 0x95D1
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 13);
	}
}

void func_93(int* iParam0)//Position - 0x95F4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_21))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_21));
	}
	if (INTERIOR::IS_VALID_INTERIOR(iParam0->f_41))
	{
		if (INTERIOR::IS_INTERIOR_READY(iParam0->f_41))
		{
			INTERIOR::UNPIN_INTERIOR(iParam0->f_41);
		}
	}
	STREAMING::REMOVE_ANIM_DICT("Move_m@generic_idles@std");
	STREAMING::REMOVE_ANIM_DICT("Move_f@generic_idles@std");
	STREAMING::REMOVE_ANIM_DICT("mp_player_intfinger");
	STREAMING::REMOVE_ANIM_DICT("mp_player_intsalute");
	STREAMING::REMOVE_ANIM_DICT("mp_player_introck");
	STREAMING::REMOVE_ANIM_DICT("mp_player_intwank");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_23)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_23[iVar0]))
		{
			PED::DELETE_PED(&(iParam0->f_23[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1225))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_1225));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1226))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_1226));
	}
}

void func_94()//Position - 0x96BA
{
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@FEMALE_A@BASE");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@FEMALE_B@BASE");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@FEMALE_C@BASE");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_A@BASE");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_B@BASE");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_C@BASE");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_D@BASE");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_E@BASE");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@FEMALE_A@IDLE_A");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_A@IDLE_A");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_B@IDLE_A");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA@SINGLE_TEAM");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA@TEAM_IDLES@FEMALE_A");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_A");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_B");
	STREAMING::REMOVE_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_C");
	if (func_95(Global_4718592.f_168757))
	{
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@BASE");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@IDLE_A");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@BASE");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@IDLE_A");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@BASE");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@IDLE_A");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@BASE");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@IDLE_A");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@BASE");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@IDLE_A");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@BASE");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@IDLE_A");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@BASE");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@IDLE_A");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@BASE");
		STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@IDLE_A");
	}
}

bool func_95(int iParam0)//Position - 0x97D3
{
	return iParam0 == 15;
}

void func_96(int* iParam0)//Position - 0x97E0
{
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	if (iParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_1));
		iParam0->f_1 = 0;
	}
	if (iParam0->f_2 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_2));
		iParam0->f_2 = 0;
	}
}

void func_97(int* iParam0, char* sParam1)//Position - 0x9823
{
	if (*iParam0 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0->f_1 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0->f_2 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_98()//Position - 0x98D3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			func_99(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_99(var uParam0, int iParam1)//Position - 0x991E
{
	func_100(uParam0, iParam1);
}

void func_100(var uParam0, var uParam1)//Position - 0x992E
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_101(int* iParam0, bool bParam1)//Position - 0x993F
{
	if (bParam1)
	{
		CAM::_0x5A43C76F7FC7BA5F();
	}
	if ((*iParam0 != 0 && iParam0->f_1 != 0) && iParam0->f_2 != 0)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*iParam0, iParam0->f_1, 255, 255, 255, 255);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0->f_2, 255, 255, 255, 255, 0);
	}
}

void func_102()//Position - 0x998E
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_race_crash"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_race_crash");
	}
	func_105(0);
	func_104(0);
	func_103(0);
	Global_2703735.f_2394.f_2 = 0;
}

void func_103(bool bParam0)//Position - 0x99C2
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2703735.f_2394.f_2), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_2394.f_2), 2);
	}
}

void func_104(bool bParam0)//Position - 0x99EE
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2703735.f_2394.f_2), 1);
	}
	else
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPDark"))
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailMPDark");
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailMPIn");
		}
		CAM::_SET_CAM_EFFECT(0);
		MISC::CLEAR_BIT(&(Global_2703735.f_2394.f_2), 1);
	}
}

void func_105(bool bParam0)//Position - 0x9A45
{
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_race_crash");
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine"))
		{
			GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
		}
		if (GRAPHICS::GET_REQUESTINGNIGHTVISION())
		{
			GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPDark", 0, false);
		}
		else
		{
			GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPIn", 0, false);
		}
		CAM::_SET_CAM_EFFECT(1);
		Global_2703735.f_2394 = NETWORK::GET_NETWORK_TIME();
		Global_2703735.f_2394.f_1 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_2703735.f_2394.f_2), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_2394.f_2), 0);
	}
}

bool func_106()//Position - 0x9AC7
{
	return BitTest(Global_4718592.f_162497, 12);
}

void func_107(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9ADC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_108(int* iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x9BB8
{
	char* sVar0;
	char* sVar1;
	
	sVar0 = func_109(iParam3);
	sVar1 = "CELEB_GAMES_WON";
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "ADD_GAMES_WON_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "ADD_GAMES_WON_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "ADD_GAMES_WON_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

var func_109(int iParam0)//Position - 0x9C78
{
	char cVar0[16];
	
	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_110(&cVar0);
}

var func_110(char[4] cParam0)//Position - 0x9C93
{
	return cParam0;
}

int func_111(int iParam0, bool bParam1, int iParam2)//Position - 0x9C9D
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
	return Global_295824[iParam0];
}

int func_112(int iParam0, int iParam1)//Position - 0x9CC5
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
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
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

int func_113(int iParam0)//Position - 0x9D84
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1659759[func_115(-1)];
			}
			else if (func_114(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_115(-1)];
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x9DE1
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

int func_115(int iParam0)//Position - 0x9E03
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_116();
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

int func_116()//Position - 0x9E37
{
	return Global_1574918;
}

void func_117(bool bParam0)//Position - 0x9E43
{
	if (!bParam0)
	{
		func_119(0);
	}
	func_98();
	func_118();
}

void func_118()//Position - 0x9E5E
{
	Global_75488 = 1;
}

void func_119(int iParam0)//Position - 0x9E6B
{
	if (func_123())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_122())
		{
			func_120(1, 1);
		}
		else
		{
			func_120(0, 0);
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
	if (!func_91())
	{
		Global_20266.f_1 = 3;
	}
}

void func_120(bool bParam0, bool bParam1)//Position - 0x9EF5
{
	if (bParam0)
	{
		if (func_121(0))
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

int func_121(int iParam0)//Position - 0x9F69
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

bool func_122()//Position - 0x9FC0
{
	return BitTest(Global_1958711, 5);
}

bool func_123()//Position - 0x9FCE
{
	return BitTest(Global_1958711, 19);
}

int func_124(int* iParam0, var uParam1, var uParam2, bool bParam3, int iParam4)//Position - 0x9FDD
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	float fVar20;
	struct<3> Var21;
	int iVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	
	if (func_12(PLAYER::PLAYER_ID(), 1, 1))
	{
		bVar13 = true;
		if (bParam3)
		{
			if (iParam0->f_437 == 0)
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				}
				else
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				}
			}
			if (iParam0->f_421 < 6)
			{
				if (iParam0->f_422 == 0)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.305f, 3.404f, 1.873f };
					Var5 = { 0.3318f, 0.6829f, 0.782f };
					fVar7 = 48.872f;
				}
				else if (iParam0->f_422 == 1)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.3027f, 1.9371f, 0.8861f };
					Var5 = { 0.7526f, -0.7846f, 0.1942f };
					fVar7 = 49.9607f;
				}
				else if (iParam0->f_422 == 2)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.3685f, 5.6646f, 3.8144f };
					Var5 = { 0.3407f, 3.2028f, 2.2534f };
					fVar7 = 49.9607f;
				}
				else if (iParam0->f_422 == 3)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.551f, 1.5299f, 0.0099f };
					Var5 = { 1.1136f, -0.8876f, 0.6298f };
					fVar7 = 40.5195f;
				}
				else if (iParam0->f_422 == 4)
				{
					Var6 = { -0.6761f, 2.3219f, 0.3315f };
					Var4 = { 0.1252f, 1.692f, 0.0052f };
					Var5 = { -0.9193f, -1.0597f, 0.5854f };
					fVar7 = 40.5195f;
				}
				else if (iParam0->f_422 == 5)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.098f, 1.4671f, 0.0645f };
					Var5 = { 0.3334f, -1.4352f, 0.6893f };
					fVar7 = 40.5195f;
				}
			}
			else
			{
				*uParam2 = 0;
				iParam0->f_437 = 0;
				iParam0->f_421 = 0;
				return 1;
			}
		}
		else
		{
			if (iParam0->f_437 == 0)
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				}
				else
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				}
			}
			if (!func_127(PLAYER::PLAYER_PED_ID()))
			{
				fVar8 = -0.09f;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar14 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				iVar15 = ENTITY::GET_ENTITY_MODEL(iVar14);
				if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar15))
				{
					bVar13 = false;
					bVar11 = true;
				}
			}
			else
			{
				bVar13 = false;
			}
			if (bVar13 && iParam4)
			{
				if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
				}
				else
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				}
			}
			if (!func_125(iParam0, fVar9, fVar8, bVar11, (iParam4 && bVar13), &Var6, &Var4, &Var5, &fVar7, &bVar12, &bVar10))
			{
				*uParam2 = 0;
				iParam0->f_437 = 0;
				iParam0->f_421 = 0;
				return 1;
			}
			if (bVar13 && iParam4)
			{
				bVar13 = false;
			}
		}
		Var16 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var4) };
		Var17 = { Var16 };
		Var18 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var19 = { ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
		fVar20 = SYSTEM::VMAG(Var19);
		if (MISC::ABSF(fVar20) > 0.5f)
		{
			Var21 = { Var19 / Vector(fVar20, fVar20, fVar20) };
			Var17 = { Var16 + Var21 };
		}
		if (iParam0->f_437 == 0)
		{
			iVar22 = 343;
			iParam0->f_437 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var17, Var18, 0.25f, iVar22, PLAYER::PLAYER_PED_ID(), 7);
		}
		else
		{
			iVar23 = SHAPETEST::GET_SHAPE_TEST_RESULT(iParam0->f_437, &iVar0, &uVar1, &uVar2, &uVar3);
			switch (iVar23)
			{
				case 2:
					iParam0->f_437 = 0;
					if (iVar0 > 0)
					{
						iParam0->f_421++;
					}
					else if (((((!bVar13 && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var18, &fVar24, false, false);
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var16, &fVar25, false, false);
						if (MISC::ABSF((fVar24 - fVar25)) > 5f)
						{
							iParam0->f_421++;
						}
						else
						{
							if (!CAM::DOES_CAM_EXIST(*uParam1))
							{
								*uParam1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
							}
							CAM::STOP_CAM_POINTING(*uParam1);
							if (!func_88(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								CAM::ATTACH_CAM_TO_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID(), Var4, true);
							}
							CAM::POINT_CAM_AT_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID(), Var5, true);
							CAM::SET_CAM_FOV(*uParam1, fVar7);
							func_84(uParam1, 0.3f);
							CAM::SET_CAM_NEAR_CLIP(*uParam1, 0.15f);
							if (!bVar12)
							{
								if (bVar10)
								{
									TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var6), 20000, 2048, 2);
								}
								else
								{
									TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var6), 20000, 10240, 2);
								}
							}
							*uParam2 = 1;
							iParam0->f_421 = 0;
							return 1;
						}
					}
					else
					{
						iParam0->f_421++;
					}
					break;
				
				case 0:
					iParam0->f_437 = 0;
					iParam0->f_421++;
					break;
				}
		}
	}
	else
	{
		*uParam2 = 0;
		iParam0->f_421 = 0;
		return 1;
	}
	return 0;
}

int func_125(var uParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, var uParam9, var uParam10)//Position - 0xA558
{
	if (bParam3)
	{
		if (uParam0->f_421 < 6)
		{
			if (uParam0->f_422 == 0)
			{
				*uParam6 = { 0.3792f, 1.6661f, 0.253f };
				*uParam7 = { -0.1166f, -1.2463f, 0.7746f };
				*fParam8 = 34.0457f;
				return 1;
			}
			else if (uParam0->f_422 == 1)
			{
				*uParam6 = { 0.8206f, 2.4757f, -0.14f };
				*uParam7 = { 0.0702f, -0.392f, 0.3218f };
				*fParam8 = 34.0457f;
				return 1;
			}
			else if (uParam0->f_422 == 2)
			{
				*uParam6 = { -0.5169f, 2.6701f, 0.1763f };
				*uParam7 = { -0.1689f, -0.3063f, 0.3164f };
				*fParam8 = 34.0457f;
				return 1;
			}
			else if (uParam0->f_422 == 3)
			{
				*uParam6 = { -1.7521f, 1.9222f, 0.2656f };
				*uParam7 = { 0.3639f, -0.2033f, 0.2015f };
				*fParam8 = 34.0457f;
				return 1;
			}
			else if (uParam0->f_422 == 4)
			{
				*uParam6 = { -1.1718f, 1.6414f, 0.7172f };
				*uParam7 = { 1.3122f, 0.1011f, 0.0411f };
				*fParam8 = 32.6085f;
				return 1;
			}
			else if (uParam0->f_422 == 5)
			{
				*uParam6 = { -0.0185f, 1.7642f, 0.4961f };
				*uParam7 = { 0.6648f, -1.1468f, 0.2534f };
				*fParam8 = 35.6186f;
				return 1;
			}
		}
	}
	else if (bParam4)
	{
		if (uParam0->f_421 < 6)
		{
			if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) || func_126(PLAYER::PLAYER_PED_ID()))
			{
				switch ((uParam0->f_422 % 7))
				{
					case 0:
						*uParam6 = { -0.45f, 2.5f, 0.35f };
						*uParam7 = { 0.3f, 0f, 0.45f };
						*fParam8 = 26f;
						break;
					
					case 1:
						*uParam6 = { 1.1f, 2.5f, 0.05f };
						*uParam7 = { -0.3f, 0f, 0.5f };
						*fParam8 = 26f;
						break;
					
					case 2:
						*uParam6 = { -1.45f, 2.15f, 0.05f };
						*uParam7 = { 0.5f, 0f, 0.5f };
						*fParam8 = 26f;
						break;
					
					case 3:
						*uParam6 = { -0.175f, 1.1f, 0.788f };
						*uParam7 = { 0.063f, 0f, 0.466f };
						*fParam8 = 37.8f;
						break;
					
					case 4:
						*uParam6 = { 1.6f, 1.338f, 0.688f };
						*uParam7 = { 0.025f, 0f, 0.416f };
						*fParam8 = 26f;
						break;
					
					case 5:
						*uParam6 = { -1.013f, 0.726f, 0.813f };
						*uParam7 = { -0.05f, 0f, 0.441f };
						*fParam8 = 37.8f;
						break;
					
					case 6:
						*uParam6 = { 1.038f, 1.376f, 0.826f };
						*uParam7 = { -0.05f, 0f, 0.466f };
						*fParam8 = 26f;
						break;
				}
			}
			else
			{
				switch ((uParam0->f_422 % 6))
				{
					case 0:
						*uParam6 = { -0.45f, 2.5f, 0.35f };
						*uParam7 = { 0.3f, 0f, 0.263f };
						*fParam8 = 26f;
						break;
					
					case 1:
						*uParam6 = { 1.1f, 2.5f, 0.05f };
						*uParam7 = { -0.3f, 0f, 0.375f };
						*fParam8 = 26f;
						break;
					
					case 2:
						*uParam6 = { -1.45f, 2.15f, 0.05f };
						*uParam7 = { 0.5f, 0f, 0.375f };
						*fParam8 = 26f;
						break;
					
					case 3:
						*uParam6 = { 0.388f, 2.489f, 0.4f };
						*uParam7 = { -0.287f, 0f, 0.304f };
						*fParam8 = 26f;
						break;
					
					case 4:
						*uParam6 = { 0.388f, 2.177f, -0.575f };
						*uParam7 = { -0.237f, 0f, 0.617f };
						*fParam8 = 26f;
						break;
					
					case 5:
						*uParam6 = { -0.575f, 1.901f, -0.112f };
						*uParam7 = { 0.275f, 0f, 0.516f };
						*fParam8 = 26f;
						break;
					}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
	{
		*uParam9 = 1;
		if (PED::IS_PED_IN_HIGH_COVER(PLAYER::PLAYER_PED_ID()))
		{
			if (uParam0->f_421 < 6)
			{
				if (uParam0->f_422 == 0)
				{
					*uParam6 = { -0.5356f, 1.4423f, 0.3999f };
					*uParam7 = { 0.9181f, -1.1788f, 0.5275f };
					*fParam8 = 29.2736f;
					return 1;
				}
				else if (uParam0->f_422 == 1)
				{
					*uParam6 = { 0.0181f, 1.4527f, 0.4043f };
					*uParam7 = { -0.1861f, -1.5314f, 0.6351f };
					*fParam8 = 29.2736f;
					return 1;
				}
				else if (uParam0->f_422 == 2)
				{
					*uParam6 = { -0.5997f, 1.0214f, 0.417f };
					*uParam7 = { 1.4133f, -1.1792f, 0.7419f };
					*fParam8 = 29.2736f;
					return 1;
				}
			}
			else
			{
				return 0;
			}
		}
		else if (uParam0->f_421 < 6)
		{
			if (uParam0->f_422 > 2)
			{
				uParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			}
			if (uParam0->f_422 == 0)
			{
				*uParam6 = { -0.5893f, 1.4073f, -0.09f };
				*uParam7 = { 0.8156f, -1.2407f, -0.2103f };
				*fParam8 = 31.7183f;
				return 1;
			}
			else if (uParam0->f_422 == 1)
			{
				*uParam6 = { -0.003f, 1.4062f, -0.096f };
				*uParam7 = { -0.5691f, -1.5399f, -0.1137f };
				*fParam8 = 31.7183f;
				return 1;
			}
			else if (uParam0->f_422 == 2)
			{
				*uParam6 = { -0.6984f, 1.1364f, -0.0971f };
				*uParam7 = { 1.2011f, -1.1855f, -0.1149f };
				*fParam8 = 31.7183f;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		if (!PED::IS_PED_IN_COVER_FACING_LEFT(PLAYER::PLAYER_PED_ID()))
		{
			*uParam6 = (*uParam6 * -1f);
			*uParam7 = (*uParam7 * -1f);
		}
	}
	else if (uParam0->f_421 < 6)
	{
		if (uParam0->f_422 == 0)
		{
			*uParam5 = { 1.3494f, 0.8708f, 0.3814f };
			*uParam6 = { 0.6428f, (1.0178f + fParam1), (0.0411f + fParam2) };
			*uParam7 = { -0.3699f, (-1.5251f + fParam1), (1.2691f + fParam2) };
			*fParam8 = 34.3832f;
			return 1;
		}
		else if (uParam0->f_422 == 1)
		{
			*uParam5 = { 0.2657f, 1.3743f, 0.364f };
			*uParam5 = { *uParam5 / FtoV(SYSTEM::VMAG(*uParam5)) * Vector(5f, 5f, 5f) };
			*uParam6 = { 0.6768f, (0.9824f + fParam1), (0.1864f + fParam2) };
			*uParam7 = { -1.3043f, (-1.0657f + fParam1), (1.1243f + fParam2) };
			*fParam8 = 34.3832f;
			*uParam10 = 1;
			return 1;
		}
		else if (uParam0->f_422 == 2)
		{
			*uParam5 = { 0.5182f, 1.1454f, 0.4312f };
			*uParam6 = { 0.2419f, (1.1082f + fParam1), (0.5226f + fParam2) };
			*uParam7 = { 0.1327f, (-1.8846f + fParam1), (0.6999f + fParam2) };
			*fParam8 = 34.3832f;
			return 1;
		}
		else if (uParam0->f_422 == 3)
		{
			*uParam5 = { 0.4529f, 1.0868f, 0.365f };
			*uParam5 = { *uParam5 / FtoV(SYSTEM::VMAG(*uParam5)) * Vector(5f, 5f, 5f) };
			*uParam6 = { 0.6216f, (0.9493f + fParam1), (0.4129f + fParam2) };
			*uParam7 = { -1.4273f, (-1.1768f + fParam1), (0.9439f + fParam2) };
			*fParam8 = 34.3832f;
			*uParam10 = 1;
			return 1;
		}
		else if (uParam0->f_422 == 4)
		{
			*uParam5 = { 1.3811f, 1.7491f, 0.296f };
			*uParam5 = { *uParam5 / FtoV(SYSTEM::VMAG(*uParam5)) * Vector(5f, 5f, 5f) };
			*uParam6 = { 1.7091f, (1.1087f + fParam1), (0.3014f + fParam2) };
			*uParam7 = { -1.0311f, (-0.1093f + fParam1), (0.3918f + fParam2) };
			*fParam8 = 34.3832f;
			*uParam10 = 1;
			return 1;
		}
		else if (uParam0->f_422 == 5)
		{
			*uParam5 = { 1.3494f, 0.8708f, 0.3814f };
			*uParam6 = { 0.7036f, (1.7661f + fParam1), (0.2981f + fParam2) };
			*uParam7 = { 0.2668f, (-1.2009f + fParam1), (0.377f + fParam2) };
			*fParam8 = 34.3832f;
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_126(int iParam0)//Position - 0xAE2F
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(iParam0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iParam0, false));
	if (VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)//Position - 0xAE6D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_133(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_129(iVar0, iVar1, 6, 4);
			iVar3 = func_128(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_128(int iParam0)//Position - 0xAF8B
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

int func_129(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB0F8
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar1 = (iParam1 - func_132(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var3);
		iVar4 = (iParam1 - func_130(iParam0, func_131(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78252.f_26[iParam2] && iParam1 == Global_78252[iParam2]) && Global_78252.f_13[iParam2] != 0)
		{
			return Global_78252.f_13[iParam2];
		}
		iVar5 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_131(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar4, &Var3);
		Global_78252.f_13[iParam2] = Var3.f_1;
		Global_78252[iParam2] = iParam1;
		Global_78252.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_130(int iParam0, int iParam1)//Position - 0xB212
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_131(int iParam0)//Position - 0xB5B9
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_132(int iParam0)//Position - 0xB669
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_133(int iParam0, int iParam1)//Position - 0xB6CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_131(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_134(iParam0, iVar1, iVar2, iParam1);
}

int func_134(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB72A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_131(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

void func_135(int* iParam0)//Position - 0xB781
{
	iParam0->f_436 = 0;
	iParam0->f_419 = 0;
	iParam0->f_420 = 0;
	iParam0->f_437 = 0;
	iParam0->f_426 = 0;
	iParam0->f_427 = 0;
	iParam0->f_1209 = 0;
	func_158(&(iParam0->f_430));
	func_158(&(iParam0->f_432));
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_20))
	{
		PED::DELETE_PED(&(iParam0->f_20));
	}
}

void func_136(int* iParam0)//Position - 0xB7D8
{
	iParam0->f_453 = 0;
	Global_1574971 = 0;
	func_158(&(iParam0->f_454));
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
}

void func_137(int* iParam0, char* sParam1)//Position - 0xB807
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_138(int* iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xB877
{
	if (func_139())
	{
		iParam3 = 1;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_139()//Position - 0xB942
{
	return Global_2714762.f_19;
}

void func_140(int* iParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xB950
{
	char* sVar0;
	
	if (iParam2 == 0)
	{
		if (bParam9)
		{
			sVar0 = "CELEB_FINCOMP";
		}
		else if (bParam8)
		{
			sVar0 = "CELEB_WINNERS";
		}
		else
		{
			sVar0 = "CELEB_WINNER";
		}
	}
	else if (iParam2 == 1)
	{
		sVar0 = "CELEB_LOSER";
	}
	else if (iParam2 == 3)
	{
		sVar0 = "CELEB_PASSED";
	}
	else if (iParam2 == 4)
	{
		sVar0 = "CELEB_FAILED";
	}
	else
	{
		sVar0 = "CELEB_DRAW";
		sParam3 = "";
		sParam4 = "";
	}
	if (!func_142() || !func_146(PLAYER::PLAYER_ID()))
	{
		sParam4 = "";
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!bParam9)
	{
		func_141(sVar0);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2715699.f_3479.f_60));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	func_141(sParam3);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!bParam9)
	{
		func_141(sVar0);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2715699.f_3479.f_60));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!bParam9)
	{
		func_141(sVar0);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2715699.f_3479.f_60));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_141(char* sParam0)//Position - 0xBB91
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_142()//Position - 0xBB9F
{
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
	{
		return 0;
	}
	if (func_144())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_143())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_143()//Position - 0xBC06
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

bool func_144()//Position - 0xBC1C
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

void func_145(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0xBC32
{
	if (bParam3)
	{
		sParam2 = "HUD_COLOUR_BLACK";
	}
	if (func_139())
	{
		if (Global_2715699.f_3479)
		{
			sParam2 = "HUD_COLOUR_HARK";
		}
	}
	func_97(iParam0, sParam1);
	HUD::RESET_GLOBAL_ACTIONSCRIPT_FLAG(10);
	if (*iParam0 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CREATE_STAT_WALL");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0->f_1 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "CREATE_STAT_WALL");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0->f_2 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "CREATE_STAT_WALL");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (iParam4 > 0 && iParam4 <= 3)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_146(int iParam0)//Position - 0xBD8A
{
	int iVar0;
	struct<13> Var1;
	
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || func_144())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || func_143())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_743(iParam0) };
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_147()//Position - 0xBE63
{
	if (func_144())
	{
		if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE() == 0)
		{
			return 1;
		}
	}
	else if (func_143())
	{
		if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE() == 0)
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		{
			return 1;
		}
	}
	return 0;
}

struct<16> func_148(int iParam0)//Position - 0xBEAA
{
	struct<16> Var0;
	struct<13> Var1;
	struct<35> Var2;
	
	if (func_12(iParam0, 0, 1))
	{
		Var1 = { func_743(iParam0) };
		if (func_151(&Var1))
		{
			Var2 = { func_149(iParam0) };
			Var0 = { Var2.f_1 };
		}
	}
	return Var0;
}

struct<35> func_149(int iParam0)//Position - 0xBEED
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_150(iParam0))
	{
		return Global_1575090[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_743(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_150(int iParam0)//Position - 0xBF29
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_151(var* uParam0)//Position - 0xBF3F
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

void func_152(var uParam0)//Position - 0xBF65
{
	if (!uParam0->f_1206)
	{
		uParam0->f_1206 = 1;
	}
}

int func_153(var uParam0, bool bParam1)//Position - 0xBF7C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	uParam0->f_420 = (uParam0->f_420 - 30);
	if (uParam0->f_420 < 0)
	{
		uParam0->f_420 = 0;
	}
	if (uParam0->f_420 != 0)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, iVar0, iVar1, iVar2, uParam0->f_420, false);
	}
	if (uParam0->f_420 <= 0)
	{
		return 1;
	}
	return 0;
}

void func_154(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xBFE9
{
	if (bParam3)
	{
		CAM::_0x5A43C76F7FC7BA5F();
	}
	if (GRAPHICS::UI3DSCENE_IS_AVAILABLE())
	{
		if (GRAPHICS::UI3DSCENE_PUSH_PRESET("CELEBRATION_WINNER"))
		{
			if (!PED::IS_PED_INJURED(*uParam1))
			{
				GRAPHICS::_0x98C4FE6EC34154CA("CELEBRATION_WINNER", *uParam1, 0, 0f, 0f, 0f);
				GRAPHICS::_0x98C4FE6EC34154CA("CELEBRATION_WINNER", *uParam1, 1, 0f, 0f, 0f);
				GRAPHICS::_0x98C4FE6EC34154CA("CELEBRATION_WINNER", *uParam1, 2, 0f, 0f, 0f);
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1.5f, 1.5f, 0, 0, 0, 255, false);
			if (bParam2)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*uParam0, uParam0->f_1, 255, 255, 255, 255);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_2, 255, 255, 255, 255, 0);
		}
	}
}

void func_155(bool bParam0, bool bParam1)//Position - 0xC09B
{
	if (bParam0)
	{
		func_157();
		func_90(1, 0, 1, 0);
		CAM::SET_WIDESCREEN_BORDERS(true, 0);
	}
	else
	{
		if (bParam1)
		{
			func_156();
			func_90(0, 0, 1, 0);
		}
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
	}
	Global_1931426 = bParam0;
	if (bParam0 == 0)
	{
		Global_1931428 = 0;
	}
}

void func_156()//Position - 0xC0E7
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_157()//Position - 0xC105
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_158(var uParam0)//Position - 0xC124
{
	uParam0->f_1 = 0;
}

int func_159(var uParam0)//Position - 0xC131
{
	if (!func_722(&(uParam0->f_434)))
	{
		func_721(&(uParam0->f_434), 0, 0);
	}
	else if (func_37(&(uParam0->f_434), 10000, 0))
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, bool bParam7, int iParam8)//Position - 0xC169
{
	if (bParam2)
	{
		StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
		StringCopy(sParam4, "finger", 64);
		return;
	}
	if (bParam7)
	{
		StringCopy(sParam3, "ANIM@MP_JUGGERNAUT@", 64);
		StringCopy(sParam4, "Idle_Intro", 64);
		return;
	}
	if (iParam8 != -1)
	{
		func_161(iParam8, sParam3, sParam4);
		return;
	}
	switch (iParam5)
	{
		case 1:
			switch (iParam6)
			{
				case 0:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@bro_love", 64);
						StringCopy(sParam4, "bro_love", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@bro_love", 64);
						StringCopy(sParam4, "bro_love", 64);
					}
					break;
				
				case 1:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					break;
				
				case 2:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(sParam4, "wank", 64);
					break;
				
				case 3:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 5:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@blow_kiss", 64);
						StringCopy(sParam4, "blow_kiss", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@blow_kiss", 64);
						StringCopy(sParam4, "blow_kiss", 64);
					}
					break;
				
				case 1:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
						StringCopy(sParam4, "finger", 64);
					}
					break;
				
				case 2:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(sParam4, "rock", 64);
					break;
				
				case 3:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(sParam4, "salute", 64);
					break;
				
				case 4:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(sParam4, "wank", 64);
					break;
				
				case 6:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_shagging", 64);
						StringCopy(sParam4, "air_shagging", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_shagging", 64);
						StringCopy(sParam4, "air_shagging", 64);
					}
					break;
				
				case 7:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@dock", 64);
						StringCopy(sParam4, "dock", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@dock", 64);
						StringCopy(sParam4, "dock", 64);
					}
					break;
				
				case 8:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
						StringCopy(sParam4, "knuckle_crunch", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@knuckle_crunch", 64);
						StringCopy(sParam4, "knuckle_crunch", 64);
					}
					break;
				
				case 9:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@slow_clap", 64);
						StringCopy(sParam4, "slow_clap", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@slow_clap", 64);
						StringCopy(sParam4, "slow_clap", 64);
					}
					break;
				
				case 10:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@face_palm", 64);
						StringCopy(sParam4, "face_palm", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@face_palm", 64);
						StringCopy(sParam4, "face_palm", 64);
					}
					break;
				
				case 11:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@thumbs_up", 64);
						StringCopy(sParam4, "thumbs_up", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@thumbs_up", 64);
						StringCopy(sParam4, "thumbs_up", 64);
					}
					break;
				
				case 12:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@jazz_hands", 64);
						StringCopy(sParam4, "jazz_hands", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@jazz_hands", 64);
						StringCopy(sParam4, "jazz_hands", 64);
					}
					break;
				
				case 13:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@nose_pick", 64);
						StringCopy(sParam4, "nose_pick", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@nose_pick", 64);
						StringCopy(sParam4, "nose_pick", 64);
					}
					break;
				
				case 59:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@smoke_flick", 64);
						StringCopy(sParam4, "smoke_flick", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@smoke_flick", 64);
						StringCopy(sParam4, "smoke_flick", 64);
					}
					break;
				
				case 14:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_guitar", 64);
						StringCopy(sParam4, "air_guitar", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_guitar", 64);
						StringCopy(sParam4, "air_guitar", 64);
					}
					break;
				
				case 15:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wave", 64);
						StringCopy(sParam4, "wave", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@wave", 64);
						StringCopy(sParam4, "wave", 64);
					}
					break;
				
				case 16:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@surrender", 64);
						StringCopy(sParam4, "surrender", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@surrender", 64);
						StringCopy(sParam4, "surrender", 64);
					}
					break;
				
				case 17:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shush", 64);
						StringCopy(sParam4, "shush", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shush", 64);
						StringCopy(sParam4, "shush", 64);
					}
					break;
				
				case 18:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@photography", 64);
						StringCopy(sParam4, "photography", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@photography", 64);
						StringCopy(sParam4, "photography", 64);
					}
					break;
				
				case 19:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@dj", 64);
						StringCopy(sParam4, "dj", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@dj", 64);
						StringCopy(sParam4, "dj", 64);
					}
					break;
				
				case 20:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_synth", 64);
						StringCopy(sParam4, "air_synth", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_synth", 64);
						StringCopy(sParam4, "air_synth", 64);
					}
					break;
				
				case 21:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@no_way", 64);
						StringCopy(sParam4, "no_way", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@no_way", 64);
						StringCopy(sParam4, "no_way", 64);
					}
					break;
				
				case 22:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@chicken_taunt", 64);
						StringCopy(sParam4, "chicken_taunt", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@chicken_taunt", 64);
						StringCopy(sParam4, "chicken_taunt", 64);
					}
					break;
				
				case 23:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@chin_brush", 64);
						StringCopy(sParam4, "chin_brush", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@chin_brush", 64);
						StringCopy(sParam4, "chin_brush", 64);
					}
					break;
				
				case 26:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@you_loco", 64);
						StringCopy(sParam4, "you_loco", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@you_loco", 64);
						StringCopy(sParam4, "you_loco", 64);
					}
					break;
				
				case 24:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger_kiss", 64);
						StringCopy(sParam4, "finger_kiss", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger_kiss", 64);
						StringCopy(sParam4, "finger_kiss", 64);
					}
					break;
				
				case 25:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@peace", 64);
						StringCopy(sParam4, "peace", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@peace", 64);
						StringCopy(sParam4, "peace", 64);
					}
					break;
				
				case 27:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@freakout", 64);
						StringCopy(sParam4, "freakout", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@freakout", 64);
						StringCopy(sParam4, "freakout", 64);
					}
					break;
				
				case 28:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@thumb_on_ears", 64);
						StringCopy(sParam4, "thumb_on_ears", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@thumb_on_ears", 64);
						StringCopy(sParam4, "thumb_on_ears", 64);
					}
					break;
				
				case 30:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					break;
				
				case 29:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes_left", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes_left", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					break;
				
				case 31:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes_right", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes_right", 64);
						StringCopy(sParam4, "banging_tunes", 64);
					}
					break;
				
				case 32:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@oh_snap", 64);
						StringCopy(sParam4, "oh_snap", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@oh_snap", 64);
						StringCopy(sParam4, "oh_snap", 64);
					}
					break;
				
				case 33:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cats_cradle", 64);
						StringCopy(sParam4, "cats_cradle", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cats_cradle", 64);
						StringCopy(sParam4, "cats_cradle", 64);
					}
					break;
				
				case 34:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@raise_the_roof", 64);
						StringCopy(sParam4, "raise_the_roof", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@raise_the_roof", 64);
						StringCopy(sParam4, "raise_the_roof", 64);
					}
					break;
				
				case 35:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@find_the_fish", 64);
						StringCopy(sParam4, "find_the_fish", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@find_the_fish", 64);
						StringCopy(sParam4, "find_the_fish", 64);
					}
					break;
				
				case 36:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salsa_roll", 64);
						StringCopy(sParam4, "salsa_roll", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@salsa_roll", 64);
						StringCopy(sParam4, "salsa_roll", 64);
					}
					break;
				
				case 37:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@heart_pumping", 64);
						StringCopy(sParam4, "heart_pumping", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@heart_pumping", 64);
						StringCopy(sParam4, "heart_pumping", 64);
					}
					break;
				
				case 38:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@uncle_disco", 64);
						StringCopy(sParam4, "uncle_disco", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@uncle_disco", 64);
						StringCopy(sParam4, "uncle_disco", 64);
					}
					break;
				
				case 39:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@raining_cash", 64);
						StringCopy(sParam4, "raining_cash", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@raining_cash", 64);
						StringCopy(sParam4, "raining_cash", 64);
					}
					break;
				
				case 40:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cry_baby", 64);
						StringCopy(sParam4, "cry_baby", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cry_baby", 64);
						StringCopy(sParam4, "cry_baby", 64);
					}
					break;
				
				case 41:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cut_throat", 64);
						StringCopy(sParam4, "cut_throat", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cut_throat", 64);
						StringCopy(sParam4, "cut_throat", 64);
					}
					break;
				
				case 42:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@karate_chops", 64);
						StringCopy(sParam4, "karate_chops", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@karate_chops", 64);
						StringCopy(sParam4, "karate_chops", 64);
					}
					break;
				
				case 43:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shadow_boxing", 64);
						StringCopy(sParam4, "shadow_boxing", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shadow_boxing", 64);
						StringCopy(sParam4, "shadow_boxing", 64);
					}
					break;
				
				case 44:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@the_woogie", 64);
						StringCopy(sParam4, "the_woogie", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@the_woogie", 64);
						StringCopy(sParam4, "the_woogie", 64);
					}
					break;
				
				case 45:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@stinker", 64);
						StringCopy(sParam4, "stinker", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@stinker", 64);
						StringCopy(sParam4, "stinker", 64);
					}
					break;
				
				case 46:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_drums", 64);
						StringCopy(sParam4, "air_drums", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_drums", 64);
						StringCopy(sParam4, "air_drums", 64);
					}
					break;
				
				case 47:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@call_me", 64);
						StringCopy(sParam4, "call_me", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@call_me", 64);
						StringCopy(sParam4, "call_me", 64);
					}
					break;
				
				case 48:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@coin_roll_and_toss", 64);
						StringCopy(sParam4, "coin_roll_and_toss", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@coin_roll_and_toss", 64);
						StringCopy(sParam4, "coin_roll_and_toss", 64);
					}
					break;
				
				case 49:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@bang_bang", 64);
						StringCopy(sParam4, "bang_bang", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@bang_bang", 64);
						StringCopy(sParam4, "bang_bang", 64);
					}
					break;
				
				case 50:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@respect", 64);
						StringCopy(sParam4, "respect", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@respect", 64);
						StringCopy(sParam4, "respect", 64);
					}
					break;
				
				case 51:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@mind_blown", 64);
						StringCopy(sParam4, "mind_blown", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@mind_blown", 64);
						StringCopy(sParam4, "mind_blown", 64);
					}
					break;
				
				case 62:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@spray_champagne", 64);
						StringCopy(sParam4, "spray_champagne", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@spray_champagne", 64);
						StringCopy(sParam4, "spray_champagne", 64);
					}
					break;
				
				case 52:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@crowd_invitation", 64);
						StringCopy(sParam4, "crowd_invitation", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@crowd_invitation", 64);
						StringCopy(sParam4, "crowd_invitation", 64);
					}
					break;
				
				case 53:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@driver", 64);
						StringCopy(sParam4, "driver", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@driver", 64);
						StringCopy(sParam4, "driver", 64);
					}
					break;
				
				case 54:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@runner", 64);
						StringCopy(sParam4, "runner", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@runner", 64);
						StringCopy(sParam4, "runner", 64);
					}
					break;
				
				case 55:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shooting", 64);
						StringCopy(sParam4, "shooting", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shooting", 64);
						StringCopy(sParam4, "shooting", 64);
					}
					break;
				
				case 56:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@suck_it", 64);
						StringCopy(sParam4, "suck_it", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@suck_it", 64);
						StringCopy(sParam4, "suck_it", 64);
					}
					break;
				
				case 57:
					if (bParam1)
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationmale@take_selfie", 64);
						StringCopy(sParam4, "take_selfie", 64);
					}
					else
					{
						StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@take_selfie", 64);
						StringCopy(sParam4, "take_selfie", 64);
					}
					break;
				
				default:
					StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(sParam4, "salute", 64);
					break;
			}
			break;
		
		default:
			StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
			StringCopy(sParam4, "salute", 64);
			break;
	}
}

void func_161(int iParam0, char* sParam1, char* sParam2)//Position - 0xCDB0
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
			StringCopy(sParam2, "knuckle_crunch", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "anim@mp_player_intcelebrationmale@finger", 64);
			StringCopy(sParam2, "finger", 64);
			break;
	}
}

int func_162(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xCDF1
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
	{
		return 1;
	}
	else
	{
		Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
		Var1 = { Var0.f_0, Var0.f_1, 1320f };
		if (iParam3 != 0)
		{
			func_180(&(uParam0->f_20), iParam3, Var1, 0f, -1, 0, 1);
		}
		else
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iParam2);
			if (PED::IS_PED_INJURED(iVar3))
			{
				iParam2 = PLAYER::PLAYER_ID();
				iVar3 = PLAYER::PLAYER_PED_ID();
			}
			bVar2 = func_164(iVar3, Global_2689235[iParam2 /*453*/].f_257, Global_2689235[iParam2 /*453*/].f_258, 1, 0, 0);
			func_180(&(uParam0->f_20), iVar3, Var1, 0f, iParam2, bVar2, 1);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_20, func_163(Global_1853348[iParam2 /*834*/].f_266), 0);
		}
		if (!PED::IS_PED_INJURED(uParam0->f_20))
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_20, Var1 + Vector(-2.85f, -0.26f, (20f + IntToFloat(PLAYER::PLAYER_ID()))), true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_20, 0f, 0f, 0f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_20, true);
			if (PED::IS_PED_MALE(uParam0->f_20))
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_20, "move_m@generic", "idle", 1000f, -1.5f, -1, 9, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_20, "move_f@generic", "idle", 1000f, -1.5f, -1, 9, 0f, false, false, false);
			}
			TASK::TASK_LOOK_AT_COORD(uParam0->f_20, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_20, 0.7866f, 2.2904f, 0.7608f), -1, 2048, 2);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_20, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_20, true);
		}
		if (!CAM::DOES_CAM_EXIST(*uParam1))
		{
			*uParam1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
		}
		CAM::STOP_CAM_POINTING(*uParam1);
		CAM::SET_CAM_COORD(*uParam1, Var1);
		CAM::SET_CAM_ROT(*uParam1, 0f, 0f, 0f, 2);
		CAM::SET_CAM_FOV(*uParam1, 45f);
		func_84(uParam1, 0.05f);
		CAM::SET_CAM_NEAR_CLIP(*uParam1, 0.01f);
		if (!CAM::IS_CAM_RENDERING(*uParam1))
		{
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		return 1;
	}
	return 0;
}

char* func_163(int iParam0)//Position - 0xCFED
{
	switch (iParam0)
	{
		case 0:
			return "mood_Aiming_1";
		
		case 1:
			return "mood_Angry_1";
		
		case 2:
			return "mood_Happy_1";
		
		case 3:
			return "mood_Injured_1";
		
		case 4:
			return "mood_Normal_1";
		
		case 5:
			return "mood_stressed_1";
		
		case 6:
			return "mood_smug_1";
		
		case 7:
			return "mood_sulk_1";
		
		default:
	}
	return "mood_Normal_1";
}

int func_164(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xD068
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_179())
	{
		return 0;
	}
	uVar0 = 6;
	uVar1 = 6;
	uVar2 = 7;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_172(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_171(iParam0);
			if (!iVar3 == -1)
			{
				if (func_170(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_169(iParam0);
			if (!iVar4 == -1)
			{
				if (func_167(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar5 = func_166(iParam0);
			if (!iVar5 == 0)
			{
				if (func_165(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_165(var uParam0, int iParam1)//Position - 0xD142
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0xD180
{
	int iVar0;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

bool func_167(var uParam0, int iParam1)//Position - 0xD193
{
	return func_168(uParam0, iParam1);
}

int func_168(var uParam0, int iParam1)//Position - 0xD1A3
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0)//Position - 0xD1E1
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

bool func_170(var uParam0, int iParam1)//Position - 0xD1F4
{
	return func_168(uParam0, iParam1);
}

int func_171(int iParam0)//Position - 0xD204
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

void func_172(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0xD217
{
	func_178(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_177(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 13, 1);
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 2, 1);
							func_174(uParam2, 20, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 75, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
						
						case 1:
							func_176(uParam3, 4, 1);
							func_176(uParam3, 13, 1);
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 2, 1);
							func_174(uParam2, 20, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 75, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
						
						case 2:
							func_176(uParam3, 13, 1);
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 39, 1);
							func_174(uParam2, 2, 1);
							func_174(uParam2, 20, 1);
							func_174(uParam2, 38, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 75, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_176(uParam3, 62, 1);
							func_174(uParam2, 16, 1);
							func_174(uParam2, 47, 1);
							func_174(uParam2, 48, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 1, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 4, 1);
							func_178(uParam4, 5, 1);
							func_178(uParam4, 7, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 12, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 14, 1);
							func_178(uParam4, 15, 1);
							func_178(uParam4, 16, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_178(uParam4, 115, 1);
							func_178(uParam4, 116, 1);
							func_178(uParam4, 136, 1);
							func_178(uParam4, 138, 1);
							func_178(uParam4, 139, 1);
							func_178(uParam4, 143, 1);
							func_178(uParam4, 144, 1);
							func_178(uParam4, 145, 1);
							func_178(uParam4, 147, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
						
						case 1:
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 16, 1);
							func_174(uParam2, 47, 1);
							func_174(uParam2, 48, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_178(uParam4, 115, 1);
							func_178(uParam4, 116, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
						
						case 2:
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 4, 1);
							func_178(uParam4, 5, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 12, 1);
							func_178(uParam4, 14, 1);
							func_178(uParam4, 15, 1);
							func_178(uParam4, 16, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_178(uParam4, 115, 1);
							func_178(uParam4, 116, 1);
							func_178(uParam4, 136, 1);
							func_178(uParam4, 138, 1);
							func_178(uParam4, 139, 1);
							func_178(uParam4, 143, 1);
							func_178(uParam4, 144, 1);
							func_178(uParam4, 145, 1);
							func_178(uParam4, 147, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
					}
					break;
				
				case 59:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 66, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 77, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 12, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 32, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 60:
				case 63:
					func_176(uParam3, 67, 1);
					func_176(uParam3, 68, 1);
					func_176(uParam3, 69, 1);
					func_176(uParam3, 70, 1);
					func_176(uParam3, 71, 1);
					func_176(uParam3, 72, 1);
					func_176(uParam3, 73, 1);
					func_176(uParam3, 74, 1);
					func_176(uParam3, 78, 1);
					func_176(uParam3, 79, 1);
					func_176(uParam3, 80, 1);
					func_176(uParam3, 81, 1);
					func_176(uParam3, 82, 1);
					func_176(uParam3, 91, 1);
					func_176(uParam3, 92, 1);
					func_174(uParam2, 66, 1);
					func_174(uParam2, 67, 1);
					func_174(uParam2, 68, 1);
					func_174(uParam2, 69, 1);
					func_174(uParam2, 70, 1);
					func_174(uParam2, 71, 1);
					func_174(uParam2, 72, 1);
					func_174(uParam2, 73, 1);
					func_174(uParam2, 77, 1);
					func_174(uParam2, 78, 1);
					func_174(uParam2, 79, 1);
					func_174(uParam2, 80, 1);
					func_174(uParam2, 81, 1);
					func_174(uParam2, 90, 1);
					func_174(uParam2, 91, 1);
					func_176(uParam3, 38, 1);
					func_176(uParam3, 47, 1);
					func_176(uParam3, 111, 1);
					func_174(uParam2, 37, 1);
					func_174(uParam2, 46, 1);
					func_174(uParam2, 110, 1);
					func_178(uParam4, 92, 1);
					func_178(uParam4, 93, 1);
					func_178(uParam4, 94, 1);
					func_178(uParam4, 96, 1);
					func_178(uParam4, 97, 1);
					func_178(uParam4, 98, 1);
					func_178(uParam4, 100, 1);
					func_178(uParam4, 103, 1);
					func_178(uParam4, 104, 1);
					func_178(uParam4, 105, 1);
					func_178(uParam4, 106, 1);
					func_178(uParam4, 107, 1);
					func_178(uParam4, 108, 1);
					func_173(uParam2, uParam3, uParam4);
					break;
				
				case 61:
					func_176(uParam3, 67, 1);
					func_176(uParam3, 68, 1);
					func_176(uParam3, 69, 1);
					func_176(uParam3, 70, 1);
					func_176(uParam3, 71, 1);
					func_176(uParam3, 72, 1);
					func_176(uParam3, 73, 1);
					func_176(uParam3, 74, 1);
					func_176(uParam3, 78, 1);
					func_176(uParam3, 79, 1);
					func_176(uParam3, 80, 1);
					func_176(uParam3, 81, 1);
					func_176(uParam3, 82, 1);
					func_176(uParam3, 91, 1);
					func_176(uParam3, 92, 1);
					func_174(uParam2, 66, 1);
					func_174(uParam2, 67, 1);
					func_174(uParam2, 68, 1);
					func_174(uParam2, 69, 1);
					func_174(uParam2, 70, 1);
					func_174(uParam2, 71, 1);
					func_174(uParam2, 72, 1);
					func_174(uParam2, 73, 1);
					func_174(uParam2, 77, 1);
					func_174(uParam2, 78, 1);
					func_174(uParam2, 79, 1);
					func_174(uParam2, 80, 1);
					func_174(uParam2, 81, 1);
					func_174(uParam2, 90, 1);
					func_174(uParam2, 91, 1);
					func_176(uParam3, 38, 1);
					func_176(uParam3, 47, 1);
					func_176(uParam3, 111, 1);
					func_174(uParam2, 37, 1);
					func_174(uParam2, 46, 1);
					func_174(uParam2, 110, 1);
					func_178(uParam4, 92, 1);
					func_178(uParam4, 93, 1);
					func_178(uParam4, 94, 1);
					func_178(uParam4, 96, 1);
					func_178(uParam4, 97, 1);
					func_178(uParam4, 98, 1);
					func_178(uParam4, 100, 1);
					func_178(uParam4, 103, 1);
					func_178(uParam4, 104, 1);
					func_178(uParam4, 105, 1);
					func_178(uParam4, 106, 1);
					func_178(uParam4, 107, 1);
					func_178(uParam4, 108, 1);
					func_173(uParam2, uParam3, uParam4);
					break;
				
				case 62:
					func_176(uParam3, 67, 1);
					func_176(uParam3, 68, 1);
					func_176(uParam3, 69, 1);
					func_176(uParam3, 70, 1);
					func_176(uParam3, 71, 1);
					func_176(uParam3, 72, 1);
					func_176(uParam3, 73, 1);
					func_176(uParam3, 74, 1);
					func_176(uParam3, 78, 1);
					func_176(uParam3, 79, 1);
					func_176(uParam3, 80, 1);
					func_176(uParam3, 81, 1);
					func_176(uParam3, 82, 1);
					func_176(uParam3, 91, 1);
					func_176(uParam3, 92, 1);
					func_174(uParam2, 66, 1);
					func_174(uParam2, 67, 1);
					func_174(uParam2, 68, 1);
					func_174(uParam2, 69, 1);
					func_174(uParam2, 70, 1);
					func_174(uParam2, 71, 1);
					func_174(uParam2, 72, 1);
					func_174(uParam2, 73, 1);
					func_174(uParam2, 77, 1);
					func_174(uParam2, 78, 1);
					func_174(uParam2, 79, 1);
					func_174(uParam2, 80, 1);
					func_174(uParam2, 81, 1);
					func_174(uParam2, 90, 1);
					func_174(uParam2, 91, 1);
					func_176(uParam3, 38, 1);
					func_176(uParam3, 47, 1);
					func_176(uParam3, 111, 1);
					func_174(uParam2, 37, 1);
					func_174(uParam2, 46, 1);
					func_174(uParam2, 110, 1);
					func_178(uParam4, 92, 1);
					func_178(uParam4, 93, 1);
					func_178(uParam4, 94, 1);
					func_178(uParam4, 96, 1);
					func_178(uParam4, 97, 1);
					func_178(uParam4, 98, 1);
					func_178(uParam4, 100, 1);
					func_178(uParam4, 103, 1);
					func_178(uParam4, 104, 1);
					func_178(uParam4, 105, 1);
					func_178(uParam4, 106, 1);
					func_178(uParam4, 107, 1);
					func_178(uParam4, 108, 1);
					func_173(uParam2, uParam3, uParam4);
					break;
				
				case 64:
				case 65:
				case 66:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 12, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 32, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 3, 1);
							func_176(uParam3, 4, 1);
							func_176(uParam3, 6, 1);
							func_176(uParam3, 10, 1);
							func_176(uParam3, 54, 1);
							func_176(uParam3, 55, 1);
							func_176(uParam3, 56, 1);
							func_176(uParam3, 13, 1);
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_176(uParam3, 20, 1);
							func_176(uParam3, 26, 1);
							func_176(uParam3, 27, 1);
							func_176(uParam3, 32, 1);
							func_176(uParam3, 33, 1);
							func_176(uParam3, 37, 1);
							func_176(uParam3, 39, 1);
							func_176(uParam3, 55, 1);
							func_176(uParam3, 106, 1);
							func_176(uParam3, 114, 1);
							func_176(uParam3, 116, 1);
							func_176(uParam3, 117, 1);
							func_176(uParam3, 118, 1);
							func_176(uParam3, 119, 1);
							func_174(uParam2, 3, 1);
							func_174(uParam2, 4, 1);
							func_174(uParam2, 6, 1);
							func_174(uParam2, 8, 1);
							func_174(uParam2, 9, 1);
							func_174(uParam2, 10, 1);
							func_174(uParam2, 53, 1);
							func_174(uParam2, 56, 1);
							func_174(uParam2, 55, 1);
							func_174(uParam2, 13, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_174(uParam2, 21, 1);
							func_174(uParam2, 26, 1);
							func_174(uParam2, 27, 1);
							func_174(uParam2, 28, 1);
							func_174(uParam2, 32, 1);
							func_174(uParam2, 36, 1);
							func_174(uParam2, 38, 1);
							func_174(uParam2, 55, 1);
							func_174(uParam2, 14, 1);
							func_174(uParam2, 105, 1);
							func_174(uParam2, 113, 1);
							func_174(uParam2, 114, 1);
							func_174(uParam2, 115, 1);
							func_174(uParam2, 116, 1);
							func_174(uParam2, 117, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 4, 1);
							func_178(uParam4, 14, 1);
							func_178(uParam4, 15, 1);
							func_178(uParam4, 16, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 12, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 32, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_176(uParam3, 65, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 75, 1);
							func_176(uParam3, 76, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 64, 1);
							func_174(uParam2, 65, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 75, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_176(uParam3, 3, 1);
							func_176(uParam3, 4, 1);
							func_176(uParam3, 6, 1);
							func_176(uParam3, 13, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_176(uParam3, 19, 1);
							func_176(uParam3, 20, 1);
							func_176(uParam3, 26, 1);
							func_176(uParam3, 27, 1);
							func_176(uParam3, 32, 1);
							func_176(uParam3, 33, 1);
							func_176(uParam3, 37, 1);
							func_176(uParam3, 39, 1);
							func_176(uParam3, 55, 1);
							func_176(uParam3, 106, 1);
							func_176(uParam3, 114, 1);
							func_176(uParam3, 116, 1);
							func_176(uParam3, 117, 1);
							func_176(uParam3, 118, 1);
							func_176(uParam3, 119, 1);
							func_174(uParam2, 3, 1);
							func_174(uParam2, 4, 1);
							func_174(uParam2, 6, 1);
							func_174(uParam2, 8, 1);
							func_174(uParam2, 9, 1);
							func_174(uParam2, 10, 1);
							func_174(uParam2, 53, 1);
							func_174(uParam2, 56, 1);
							func_174(uParam2, 55, 1);
							func_174(uParam2, 11, 1);
							func_174(uParam2, 13, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_174(uParam2, 21, 1);
							func_174(uParam2, 22, 1);
							func_174(uParam2, 54, 1);
							func_174(uParam2, 26, 1);
							func_174(uParam2, 27, 1);
							func_174(uParam2, 28, 1);
							func_174(uParam2, 30, 1);
							func_174(uParam2, 31, 1);
							func_174(uParam2, 32, 1);
							func_174(uParam2, 36, 1);
							func_174(uParam2, 38, 1);
							func_174(uParam2, 55, 1);
							func_174(uParam2, 14, 1);
							func_174(uParam2, 105, 1);
							func_174(uParam2, 113, 1);
							func_174(uParam2, 114, 1);
							func_174(uParam2, 115, 1);
							func_174(uParam2, 116, 1);
							func_174(uParam2, 117, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 4, 1);
							func_178(uParam4, 14, 1);
							func_178(uParam4, 15, 1);
							func_178(uParam4, 16, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 12, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 32, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_176(uParam3, 65, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 75, 1);
							func_176(uParam3, 76, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 64, 1);
							func_174(uParam2, 65, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 75, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_176(uParam3, 39, 1);
							func_176(uParam3, 106, 1);
							func_176(uParam3, 114, 1);
							func_176(uParam3, 116, 1);
							func_176(uParam3, 117, 1);
							func_176(uParam3, 118, 1);
							func_176(uParam3, 119, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_174(uParam2, 38, 1);
							func_174(uParam2, 14, 1);
							func_174(uParam2, 105, 1);
							func_174(uParam2, 113, 1);
							func_174(uParam2, 114, 1);
							func_174(uParam2, 115, 1);
							func_174(uParam2, 116, 1);
							func_174(uParam2, 117, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 12, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 32, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_176(uParam3, 65, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 75, 1);
							func_176(uParam3, 76, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 64, 1);
							func_174(uParam2, 65, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 75, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_174(uParam2, 19, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 32, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_178(uParam4, 115, 1);
							func_178(uParam4, 116, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 7, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 32, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_178(uParam4, 115, 1);
							func_178(uParam4, 116, 1);
							func_173(uParam2, uParam3, uParam4);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
						
						case 2:
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 1, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 5, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 32, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_178(uParam4, 115, 1);
							func_178(uParam4, 116, 1);
							func_173(uParam2, uParam3, uParam4);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 4, 1);
							break;
						
						case 1:
							func_178(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_178(uParam4, 110, 1);
							func_178(uParam4, 112, 1);
							func_173(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 16, 1);
							func_174(uParam2, 47, 1);
							func_174(uParam2, 48, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 1, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 5, 1);
							func_178(uParam4, 6, 1);
							func_178(uParam4, 7, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
						
						case 1:
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 16, 1);
							func_174(uParam2, 47, 1);
							func_174(uParam2, 48, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 1, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 5, 1);
							func_178(uParam4, 6, 1);
							func_178(uParam4, 7, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
						
						case 2:
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 16, 1);
							func_174(uParam2, 47, 1);
							func_174(uParam2, 48, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_178(uParam4, 1, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 5, 1);
							func_178(uParam4, 6, 1);
							func_178(uParam4, 7, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 3, 1);
							func_176(uParam3, 7, 1);
							func_176(uParam3, 0, 1);
							func_176(uParam3, 12, 1);
							func_176(uParam3, 13, 1);
							func_176(uParam3, 15, 1);
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 17, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_176(uParam3, 20, 1);
							func_176(uParam3, 21, 1);
							func_176(uParam3, 25, 1);
							func_176(uParam3, 26, 1);
							func_176(uParam3, 27, 1);
							func_176(uParam3, 30, 1);
							func_176(uParam3, 31, 1);
							func_176(uParam3, 32, 1);
							func_176(uParam3, 33, 1);
							func_176(uParam3, 39, 1);
							func_176(uParam3, 37, 1);
							func_174(uParam2, 0, 1);
							func_174(uParam2, 2, 1);
							func_174(uParam2, 3, 1);
							func_174(uParam2, 4, 1);
							func_174(uParam2, 6, 1);
							func_174(uParam2, 7, 1);
							func_174(uParam2, 8, 1);
							func_174(uParam2, 11, 1);
							func_174(uParam2, 13, 1);
							func_174(uParam2, 15, 1);
							func_174(uParam2, 16, 1);
							func_174(uParam2, 47, 1);
							func_174(uParam2, 48, 1);
							func_174(uParam2, 17, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_174(uParam2, 19, 1);
							func_174(uParam2, 20, 1);
							func_174(uParam2, 21, 1);
							func_174(uParam2, 22, 1);
							func_174(uParam2, 54, 1);
							func_174(uParam2, 24, 1);
							func_174(uParam2, 26, 1);
							func_174(uParam2, 27, 1);
							func_174(uParam2, 28, 1);
							func_174(uParam2, 30, 1);
							func_174(uParam2, 31, 1);
							func_174(uParam2, 32, 1);
							func_174(uParam2, 38, 1);
							func_174(uParam2, 36, 1);
							func_178(uParam4, 1, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 4, 1);
							func_178(uParam4, 14, 1);
							func_178(uParam4, 15, 1);
							func_178(uParam4, 16, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 65, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 75, 1);
							func_176(uParam3, 76, 1);
							func_176(uParam3, 77, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 64, 1);
							func_174(uParam2, 65, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 75, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
						
						case 1:
							func_176(uParam3, 3, 1);
							func_176(uParam3, 7, 1);
							func_176(uParam3, 0, 1);
							func_176(uParam3, 12, 1);
							func_176(uParam3, 13, 1);
							func_176(uParam3, 15, 1);
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 17, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_176(uParam3, 20, 1);
							func_176(uParam3, 21, 1);
							func_176(uParam3, 25, 1);
							func_176(uParam3, 26, 1);
							func_176(uParam3, 27, 1);
							func_176(uParam3, 30, 1);
							func_176(uParam3, 31, 1);
							func_176(uParam3, 32, 1);
							func_176(uParam3, 33, 1);
							func_176(uParam3, 39, 1);
							func_174(uParam2, 0, 1);
							func_174(uParam2, 2, 1);
							func_174(uParam2, 3, 1);
							func_174(uParam2, 4, 1);
							func_174(uParam2, 6, 1);
							func_174(uParam2, 7, 1);
							func_174(uParam2, 11, 1);
							func_174(uParam2, 13, 1);
							func_174(uParam2, 15, 1);
							func_174(uParam2, 16, 1);
							func_174(uParam2, 47, 1);
							func_174(uParam2, 48, 1);
							func_174(uParam2, 17, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_174(uParam2, 19, 1);
							func_174(uParam2, 20, 1);
							func_174(uParam2, 21, 1);
							func_174(uParam2, 22, 1);
							func_174(uParam2, 54, 1);
							func_174(uParam2, 24, 1);
							func_174(uParam2, 38, 1);
							func_178(uParam4, 1, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 4, 1);
							func_178(uParam4, 14, 1);
							func_178(uParam4, 15, 1);
							func_178(uParam4, 16, 1);
							func_178(uParam4, 6, 1);
							func_178(uParam4, 7, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 43, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 65, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 75, 1);
							func_176(uParam3, 76, 1);
							func_176(uParam3, 77, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 64, 1);
							func_174(uParam2, 65, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 75, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
						
						case 2:
							func_176(uParam3, 1, 1);
							func_176(uParam3, 3, 1);
							func_176(uParam3, 4, 1);
							func_176(uParam3, 5, 1);
							func_176(uParam3, 7, 1);
							func_176(uParam3, 10, 1);
							func_176(uParam3, 54, 1);
							func_176(uParam3, 55, 1);
							func_176(uParam3, 56, 1);
							func_176(uParam3, 0, 1);
							func_176(uParam3, 12, 1);
							func_176(uParam3, 13, 1);
							func_176(uParam3, 15, 1);
							func_176(uParam3, 16, 1);
							func_176(uParam3, 48, 1);
							func_176(uParam3, 49, 1);
							func_176(uParam3, 17, 1);
							func_176(uParam3, 18, 1);
							func_176(uParam3, 50, 1);
							func_176(uParam3, 51, 1);
							func_176(uParam3, 52, 1);
							func_176(uParam3, 53, 1);
							func_176(uParam3, 62, 1);
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_176(uParam3, 20, 1);
							func_176(uParam3, 21, 1);
							func_176(uParam3, 25, 1);
							func_176(uParam3, 26, 1);
							func_176(uParam3, 27, 1);
							func_176(uParam3, 30, 1);
							func_176(uParam3, 31, 1);
							func_176(uParam3, 32, 1);
							func_176(uParam3, 33, 1);
							func_176(uParam3, 37, 1);
							func_176(uParam3, 39, 1);
							func_174(uParam2, 0, 1);
							func_174(uParam2, 1, 1);
							func_174(uParam2, 2, 1);
							func_174(uParam2, 3, 1);
							func_174(uParam2, 4, 1);
							func_174(uParam2, 5, 1);
							func_174(uParam2, 6, 1);
							func_174(uParam2, 7, 1);
							func_174(uParam2, 8, 1);
							func_174(uParam2, 9, 1);
							func_174(uParam2, 10, 1);
							func_174(uParam2, 53, 1);
							func_174(uParam2, 56, 1);
							func_174(uParam2, 55, 1);
							func_174(uParam2, 11, 1);
							func_174(uParam2, 12, 1);
							func_174(uParam2, 13, 1);
							func_174(uParam2, 14, 1);
							func_174(uParam2, 15, 1);
							func_174(uParam2, 16, 1);
							func_174(uParam2, 47, 1);
							func_174(uParam2, 48, 1);
							func_174(uParam2, 17, 1);
							func_174(uParam2, 18, 1);
							func_174(uParam2, 49, 1);
							func_174(uParam2, 50, 1);
							func_174(uParam2, 51, 1);
							func_174(uParam2, 52, 1);
							func_174(uParam2, 62, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							func_174(uParam2, 19, 1);
							func_174(uParam2, 20, 1);
							func_174(uParam2, 21, 1);
							func_174(uParam2, 22, 1);
							func_174(uParam2, 54, 1);
							func_174(uParam2, 23, 1);
							func_174(uParam2, 24, 1);
							func_174(uParam2, 26, 1);
							func_174(uParam2, 27, 1);
							func_174(uParam2, 28, 1);
							func_174(uParam2, 29, 1);
							func_174(uParam2, 30, 1);
							func_174(uParam2, 31, 1);
							func_174(uParam2, 32, 1);
							func_174(uParam2, 33, 1);
							func_174(uParam2, 36, 1);
							func_174(uParam2, 38, 1);
							func_174(uParam2, 55, 1);
							func_178(uParam4, 1, 1);
							func_178(uParam4, 2, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 3, 1);
							func_178(uParam4, 4, 1);
							func_178(uParam4, 14, 1);
							func_178(uParam4, 15, 1);
							func_178(uParam4, 16, 1);
							func_178(uParam4, 6, 1);
							func_178(uParam4, 8, 1);
							func_178(uParam4, 9, 1);
							func_178(uParam4, 10, 1);
							func_178(uParam4, 12, 1);
							func_178(uParam4, 13, 1);
							func_178(uParam4, 17, 1);
							func_178(uParam4, 18, 1);
							func_178(uParam4, 19, 1);
							func_178(uParam4, 20, 1);
							func_178(uParam4, 59, 1);
							func_178(uParam4, 60, 1);
							func_178(uParam4, 61, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 62, 1);
							func_178(uParam4, 63, 1);
							func_178(uParam4, 64, 1);
							func_178(uParam4, 65, 1);
							func_178(uParam4, 66, 1);
							func_178(uParam4, 67, 1);
							func_178(uParam4, 68, 1);
							func_178(uParam4, 69, 1);
							func_178(uParam4, 70, 1);
							func_178(uParam4, 71, 1);
							func_178(uParam4, 72, 1);
							func_178(uParam4, 21, 1);
							func_178(uParam4, 22, 1);
							func_178(uParam4, 23, 1);
							func_178(uParam4, 24, 1);
							func_178(uParam4, 25, 1);
							func_178(uParam4, 26, 1);
							func_178(uParam4, 36, 1);
							func_178(uParam4, 46, 1);
							func_178(uParam4, 38, 1);
							func_178(uParam4, 29, 1);
							func_178(uParam4, 28, 1);
							func_178(uParam4, 31, 1);
							func_178(uParam4, 33, 1);
							func_178(uParam4, 34, 1);
							func_178(uParam4, 32, 1);
							func_178(uParam4, 92, 1);
							func_178(uParam4, 93, 1);
							func_178(uParam4, 94, 1);
							func_178(uParam4, 96, 1);
							func_178(uParam4, 97, 1);
							func_178(uParam4, 98, 1);
							func_178(uParam4, 100, 1);
							func_178(uParam4, 103, 1);
							func_178(uParam4, 104, 1);
							func_178(uParam4, 105, 1);
							func_178(uParam4, 106, 1);
							func_178(uParam4, 107, 1);
							func_178(uParam4, 108, 1);
							func_176(uParam3, 65, 1);
							func_176(uParam3, 67, 1);
							func_176(uParam3, 68, 1);
							func_176(uParam3, 69, 1);
							func_176(uParam3, 70, 1);
							func_176(uParam3, 71, 1);
							func_176(uParam3, 72, 1);
							func_176(uParam3, 73, 1);
							func_176(uParam3, 74, 1);
							func_176(uParam3, 75, 1);
							func_176(uParam3, 76, 1);
							func_176(uParam3, 77, 1);
							func_176(uParam3, 78, 1);
							func_176(uParam3, 79, 1);
							func_176(uParam3, 80, 1);
							func_176(uParam3, 81, 1);
							func_176(uParam3, 82, 1);
							func_176(uParam3, 91, 1);
							func_176(uParam3, 92, 1);
							func_174(uParam2, 64, 1);
							func_174(uParam2, 65, 1);
							func_174(uParam2, 66, 1);
							func_174(uParam2, 67, 1);
							func_174(uParam2, 68, 1);
							func_174(uParam2, 69, 1);
							func_174(uParam2, 70, 1);
							func_174(uParam2, 71, 1);
							func_174(uParam2, 72, 1);
							func_174(uParam2, 73, 1);
							func_174(uParam2, 74, 1);
							func_174(uParam2, 75, 1);
							func_174(uParam2, 77, 1);
							func_174(uParam2, 78, 1);
							func_174(uParam2, 79, 1);
							func_174(uParam2, 80, 1);
							func_174(uParam2, 81, 1);
							func_174(uParam2, 90, 1);
							func_174(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_174(uParam2, 2, 1);
							func_174(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_172(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_172(2, 60, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_173(var uParam0, var uParam1, var uParam2)//Position - 0x13435
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_178(uParam2, 124, 1);
	func_178(uParam2, 125, 1);
	func_178(uParam2, 126, 1);
	func_178(uParam2, 127, 1);
	func_178(uParam2, 128, 1);
	func_178(uParam2, 129, 1);
	func_178(uParam2, 130, 1);
	func_178(uParam2, 131, 1);
	func_178(uParam2, 132, 1);
	func_178(uParam2, 133, 1);
	func_178(uParam2, 136, 1);
	func_178(uParam2, 138, 1);
	func_178(uParam2, 139, 1);
	func_178(uParam2, 143, 1);
	func_178(uParam2, 144, 1);
	func_178(uParam2, 145, 1);
	func_178(uParam2, 147, 1);
}

void func_174(var uParam0, int iParam1, bool bParam2)//Position - 0x134ED
{
	func_175(uParam0, iParam1, bParam2);
}

void func_175(var uParam0, int iParam1, bool bParam2)//Position - 0x134FF
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_176(var uParam0, int iParam1, bool bParam2)//Position - 0x13550
{
	func_175(uParam0, iParam1, bParam2);
}

void func_177(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x13562
{
	func_178(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							break;
						
						case 1:
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							break;
						
						case 2:
							func_176(uParam3, 38, 1);
							func_176(uParam3, 47, 1);
							func_176(uParam3, 111, 1);
							func_174(uParam2, 37, 1);
							func_174(uParam2, 46, 1);
							func_174(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_176(uParam3, 16, 1);
						func_176(uParam3, 48, 1);
						func_176(uParam3, 49, 1);
						func_176(uParam3, 18, 1);
						func_176(uParam3, 50, 1);
						func_176(uParam3, 51, 1);
						func_176(uParam3, 52, 1);
						func_176(uParam3, 53, 1);
						func_176(uParam3, 38, 1);
						func_176(uParam3, 47, 1);
						func_176(uParam3, 111, 1);
						func_176(uParam3, 62, 1);
						func_174(uParam2, 16, 1);
						func_174(uParam2, 47, 1);
						func_174(uParam2, 48, 1);
						func_174(uParam2, 18, 1);
						func_174(uParam2, 37, 1);
						func_174(uParam2, 46, 1);
						func_174(uParam2, 110, 1);
					}
					func_178(uParam4, 3, 1);
					func_178(uParam4, 4, 1);
					func_178(uParam4, 5, 1);
					func_178(uParam4, 6, 1);
					func_178(uParam4, 7, 1);
					func_178(uParam4, 8, 1);
					func_178(uParam4, 9, 1);
					func_178(uParam4, 12, 1);
					func_178(uParam4, 14, 1);
					func_178(uParam4, 15, 1);
					func_178(uParam4, 16, 1);
					func_178(uParam4, 17, 1);
					func_178(uParam4, 18, 1);
					func_178(uParam4, 19, 1);
					func_178(uParam4, 20, 1);
					func_178(uParam4, 59, 1);
					func_178(uParam4, 60, 1);
					func_178(uParam4, 61, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 63, 1);
					func_178(uParam4, 64, 1);
					func_178(uParam4, 65, 1);
					func_178(uParam4, 66, 1);
					func_178(uParam4, 67, 1);
					func_178(uParam4, 68, 1);
					func_178(uParam4, 69, 1);
					func_178(uParam4, 70, 1);
					func_178(uParam4, 71, 1);
					func_178(uParam4, 72, 1);
					func_178(uParam4, 21, 1);
					func_178(uParam4, 22, 1);
					func_178(uParam4, 23, 1);
					func_178(uParam4, 24, 1);
					func_178(uParam4, 25, 1);
					func_178(uParam4, 26, 1);
					func_178(uParam4, 36, 1);
					func_178(uParam4, 46, 1);
					func_178(uParam4, 38, 1);
					func_178(uParam4, 28, 1);
					func_178(uParam4, 10, 1);
					func_178(uParam4, 33, 1);
					func_178(uParam4, 92, 1);
					func_178(uParam4, 93, 1);
					func_178(uParam4, 94, 1);
					func_178(uParam4, 96, 1);
					func_178(uParam4, 97, 1);
					func_178(uParam4, 98, 1);
					func_178(uParam4, 100, 1);
					func_178(uParam4, 103, 1);
					func_178(uParam4, 104, 1);
					func_178(uParam4, 105, 1);
					func_178(uParam4, 106, 1);
					func_178(uParam4, 107, 1);
					func_178(uParam4, 108, 1);
					func_178(uParam4, 110, 1);
					func_178(uParam4, 112, 1);
					func_178(uParam4, 115, 1);
					func_178(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_176(uParam3, 16, 1);
						func_176(uParam3, 48, 1);
						func_176(uParam3, 49, 1);
						func_176(uParam3, 18, 1);
						func_176(uParam3, 50, 1);
						func_176(uParam3, 51, 1);
						func_176(uParam3, 52, 1);
						func_176(uParam3, 53, 1);
						func_176(uParam3, 38, 1);
						func_176(uParam3, 47, 1);
						func_176(uParam3, 111, 1);
						func_176(uParam3, 62, 1);
						func_174(uParam2, 18, 1);
						func_174(uParam2, 49, 1);
						func_174(uParam2, 50, 1);
						func_174(uParam2, 51, 1);
						func_174(uParam2, 52, 1);
						func_174(uParam2, 62, 1);
						func_174(uParam2, 37, 1);
						func_174(uParam2, 46, 1);
						func_174(uParam2, 110, 1);
					}
					func_178(uParam4, 9, 1);
					func_178(uParam4, 12, 1);
					func_178(uParam4, 13, 1);
					func_178(uParam4, 17, 1);
					func_178(uParam4, 18, 1);
					func_178(uParam4, 19, 1);
					func_178(uParam4, 20, 1);
					func_178(uParam4, 59, 1);
					func_178(uParam4, 60, 1);
					func_178(uParam4, 61, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 63, 1);
					func_178(uParam4, 64, 1);
					func_178(uParam4, 65, 1);
					func_178(uParam4, 66, 1);
					func_178(uParam4, 67, 1);
					func_178(uParam4, 68, 1);
					func_178(uParam4, 69, 1);
					func_178(uParam4, 70, 1);
					func_178(uParam4, 71, 1);
					func_178(uParam4, 72, 1);
					func_178(uParam4, 21, 1);
					func_178(uParam4, 22, 1);
					func_178(uParam4, 23, 1);
					func_178(uParam4, 24, 1);
					func_178(uParam4, 25, 1);
					func_178(uParam4, 26, 1);
					func_178(uParam4, 36, 1);
					func_178(uParam4, 46, 1);
					func_178(uParam4, 38, 1);
					func_178(uParam4, 29, 1);
					func_178(uParam4, 28, 1);
					func_178(uParam4, 8, 1);
					func_178(uParam4, 10, 1);
					func_178(uParam4, 31, 1);
					func_178(uParam4, 33, 1);
					func_178(uParam4, 34, 1);
					func_178(uParam4, 92, 1);
					func_178(uParam4, 93, 1);
					func_178(uParam4, 94, 1);
					func_178(uParam4, 96, 1);
					func_178(uParam4, 97, 1);
					func_178(uParam4, 98, 1);
					func_178(uParam4, 100, 1);
					func_178(uParam4, 103, 1);
					func_178(uParam4, 104, 1);
					func_178(uParam4, 105, 1);
					func_178(uParam4, 106, 1);
					func_178(uParam4, 107, 1);
					func_178(uParam4, 108, 1);
					break;
				
				case 10:
					func_178(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_176(uParam3, 3, 1);
						func_176(uParam3, 4, 1);
						func_176(uParam3, 6, 1);
						func_176(uParam3, 10, 1);
						func_176(uParam3, 54, 1);
						func_176(uParam3, 55, 1);
						func_176(uParam3, 56, 1);
						func_176(uParam3, 13, 1);
						func_176(uParam3, 16, 1);
						func_176(uParam3, 48, 1);
						func_176(uParam3, 49, 1);
						func_176(uParam3, 18, 1);
						func_176(uParam3, 50, 1);
						func_176(uParam3, 51, 1);
						func_176(uParam3, 52, 1);
						func_176(uParam3, 53, 1);
						func_176(uParam3, 38, 1);
						func_176(uParam3, 47, 1);
						func_176(uParam3, 111, 1);
						func_176(uParam3, 62, 1);
						func_176(uParam3, 20, 1);
						func_176(uParam3, 26, 1);
						func_176(uParam3, 27, 1);
						func_176(uParam3, 32, 1);
						func_176(uParam3, 33, 1);
						func_176(uParam3, 37, 1);
						func_176(uParam3, 39, 1);
						func_176(uParam3, 106, 1);
						func_176(uParam3, 114, 1);
						func_176(uParam3, 116, 1);
						func_176(uParam3, 117, 1);
						func_176(uParam3, 118, 1);
						func_176(uParam3, 119, 1);
						func_174(uParam2, 3, 1);
						func_174(uParam2, 4, 1);
						func_174(uParam2, 6, 1);
						func_174(uParam2, 8, 1);
						func_174(uParam2, 9, 1);
						func_174(uParam2, 10, 1);
						func_174(uParam2, 53, 1);
						func_174(uParam2, 56, 1);
						func_174(uParam2, 55, 1);
						func_174(uParam2, 13, 1);
						func_174(uParam2, 18, 1);
						func_174(uParam2, 49, 1);
						func_174(uParam2, 50, 1);
						func_174(uParam2, 51, 1);
						func_174(uParam2, 52, 1);
						func_174(uParam2, 62, 1);
						func_174(uParam2, 37, 1);
						func_174(uParam2, 46, 1);
						func_174(uParam2, 110, 1);
						func_174(uParam2, 21, 1);
						func_174(uParam2, 26, 1);
						func_174(uParam2, 27, 1);
						func_174(uParam2, 28, 1);
						func_174(uParam2, 32, 1);
						func_174(uParam2, 36, 1);
						func_174(uParam2, 38, 1);
						func_174(uParam2, 55, 1);
						func_174(uParam2, 14, 1);
						func_174(uParam2, 105, 1);
						func_174(uParam2, 113, 1);
						func_174(uParam2, 114, 1);
						func_174(uParam2, 115, 1);
						func_174(uParam2, 116, 1);
						func_174(uParam2, 117, 1);
					}
					func_178(uParam4, 2, 1);
					func_178(uParam4, 3, 1);
					func_178(uParam4, 4, 1);
					func_178(uParam4, 14, 1);
					func_178(uParam4, 15, 1);
					func_178(uParam4, 16, 1);
					func_178(uParam4, 9, 1);
					func_178(uParam4, 10, 1);
					func_178(uParam4, 12, 1);
					func_178(uParam4, 13, 1);
					func_178(uParam4, 17, 1);
					func_178(uParam4, 18, 1);
					func_178(uParam4, 19, 1);
					func_178(uParam4, 20, 1);
					func_178(uParam4, 59, 1);
					func_178(uParam4, 60, 1);
					func_178(uParam4, 61, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 63, 1);
					func_178(uParam4, 64, 1);
					func_178(uParam4, 65, 1);
					func_178(uParam4, 66, 1);
					func_178(uParam4, 67, 1);
					func_178(uParam4, 68, 1);
					func_178(uParam4, 69, 1);
					func_178(uParam4, 70, 1);
					func_178(uParam4, 71, 1);
					func_178(uParam4, 72, 1);
					func_178(uParam4, 21, 1);
					func_178(uParam4, 22, 1);
					func_178(uParam4, 23, 1);
					func_178(uParam4, 24, 1);
					func_178(uParam4, 25, 1);
					func_178(uParam4, 26, 1);
					func_178(uParam4, 36, 1);
					func_178(uParam4, 46, 1);
					func_178(uParam4, 38, 1);
					func_178(uParam4, 29, 1);
					func_178(uParam4, 28, 1);
					func_178(uParam4, 8, 1);
					func_178(uParam4, 31, 1);
					func_178(uParam4, 32, 1);
					func_178(uParam4, 33, 1);
					func_178(uParam4, 34, 1);
					func_178(uParam4, 92, 1);
					func_178(uParam4, 93, 1);
					func_178(uParam4, 94, 1);
					func_178(uParam4, 96, 1);
					func_178(uParam4, 97, 1);
					func_178(uParam4, 98, 1);
					func_178(uParam4, 100, 1);
					func_178(uParam4, 103, 1);
					func_178(uParam4, 104, 1);
					func_178(uParam4, 105, 1);
					func_178(uParam4, 106, 1);
					func_178(uParam4, 107, 1);
					func_178(uParam4, 108, 1);
					func_178(uParam4, 110, 1);
					func_178(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_176(uParam3, 16, 1);
						func_176(uParam3, 48, 1);
						func_176(uParam3, 49, 1);
						func_176(uParam3, 18, 1);
						func_176(uParam3, 50, 1);
						func_176(uParam3, 51, 1);
						func_176(uParam3, 52, 1);
						func_176(uParam3, 53, 1);
						func_176(uParam3, 38, 1);
						func_176(uParam3, 47, 1);
						func_176(uParam3, 111, 1);
						func_176(uParam3, 62, 1);
						func_174(uParam2, 18, 1);
						func_174(uParam2, 49, 1);
						func_174(uParam2, 50, 1);
						func_174(uParam2, 51, 1);
						func_174(uParam2, 52, 1);
						func_174(uParam2, 62, 1);
						func_174(uParam2, 37, 1);
						func_174(uParam2, 46, 1);
						func_174(uParam2, 110, 1);
						func_174(uParam2, 19, 1);
					}
					func_178(uParam4, 3, 1);
					func_178(uParam4, 6, 1);
					func_178(uParam4, 8, 1);
					func_178(uParam4, 9, 1);
					func_178(uParam4, 10, 1);
					func_178(uParam4, 13, 1);
					func_178(uParam4, 17, 1);
					func_178(uParam4, 18, 1);
					func_178(uParam4, 19, 1);
					func_178(uParam4, 20, 1);
					func_178(uParam4, 59, 1);
					func_178(uParam4, 60, 1);
					func_178(uParam4, 61, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 63, 1);
					func_178(uParam4, 64, 1);
					func_178(uParam4, 65, 1);
					func_178(uParam4, 66, 1);
					func_178(uParam4, 67, 1);
					func_178(uParam4, 68, 1);
					func_178(uParam4, 69, 1);
					func_178(uParam4, 70, 1);
					func_178(uParam4, 71, 1);
					func_178(uParam4, 72, 1);
					func_178(uParam4, 21, 1);
					func_178(uParam4, 22, 1);
					func_178(uParam4, 23, 1);
					func_178(uParam4, 24, 1);
					func_178(uParam4, 25, 1);
					func_178(uParam4, 26, 1);
					func_178(uParam4, 36, 1);
					func_178(uParam4, 46, 1);
					func_178(uParam4, 38, 1);
					func_178(uParam4, 29, 1);
					func_178(uParam4, 28, 1);
					func_178(uParam4, 31, 1);
					func_178(uParam4, 32, 1);
					func_178(uParam4, 33, 1);
					func_178(uParam4, 34, 1);
					func_178(uParam4, 92, 1);
					func_178(uParam4, 93, 1);
					func_178(uParam4, 94, 1);
					func_178(uParam4, 96, 1);
					func_178(uParam4, 97, 1);
					func_178(uParam4, 98, 1);
					func_178(uParam4, 100, 1);
					func_178(uParam4, 103, 1);
					func_178(uParam4, 104, 1);
					func_178(uParam4, 105, 1);
					func_178(uParam4, 106, 1);
					func_178(uParam4, 107, 1);
					func_178(uParam4, 108, 1);
					func_178(uParam4, 110, 1);
					func_178(uParam4, 112, 1);
					func_178(uParam4, 115, 1);
					func_178(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_176(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_178(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_176(uParam3, 16, 1);
						func_176(uParam3, 48, 1);
						func_176(uParam3, 49, 1);
						func_176(uParam3, 18, 1);
						func_176(uParam3, 50, 1);
						func_176(uParam3, 51, 1);
						func_176(uParam3, 52, 1);
						func_176(uParam3, 53, 1);
						func_176(uParam3, 38, 1);
						func_176(uParam3, 47, 1);
						func_176(uParam3, 111, 1);
						func_176(uParam3, 62, 1);
						func_174(uParam2, 16, 1);
						func_174(uParam2, 47, 1);
						func_174(uParam2, 48, 1);
						func_174(uParam2, 18, 1);
						func_174(uParam2, 49, 1);
						func_174(uParam2, 50, 1);
						func_174(uParam2, 51, 1);
						func_174(uParam2, 52, 1);
						func_174(uParam2, 62, 1);
						func_174(uParam2, 37, 1);
						func_174(uParam2, 46, 1);
						func_174(uParam2, 110, 1);
					}
					func_178(uParam4, 9, 1);
					func_178(uParam4, 10, 1);
					func_178(uParam4, 18, 1);
					func_178(uParam4, 19, 1);
					func_178(uParam4, 20, 1);
					func_178(uParam4, 59, 1);
					func_178(uParam4, 60, 1);
					func_178(uParam4, 61, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 63, 1);
					func_178(uParam4, 64, 1);
					func_178(uParam4, 65, 1);
					func_178(uParam4, 66, 1);
					func_178(uParam4, 67, 1);
					func_178(uParam4, 68, 1);
					func_178(uParam4, 69, 1);
					func_178(uParam4, 70, 1);
					func_178(uParam4, 71, 1);
					func_178(uParam4, 72, 1);
					func_178(uParam4, 21, 1);
					func_178(uParam4, 22, 1);
					func_178(uParam4, 23, 1);
					func_178(uParam4, 24, 1);
					func_178(uParam4, 25, 1);
					func_178(uParam4, 26, 1);
					func_178(uParam4, 36, 1);
					func_178(uParam4, 46, 1);
					func_178(uParam4, 38, 1);
					func_178(uParam4, 29, 1);
					func_178(uParam4, 8, 1);
					func_178(uParam4, 92, 1);
					func_178(uParam4, 93, 1);
					func_178(uParam4, 94, 1);
					func_178(uParam4, 96, 1);
					func_178(uParam4, 97, 1);
					func_178(uParam4, 98, 1);
					func_178(uParam4, 100, 1);
					func_178(uParam4, 103, 1);
					func_178(uParam4, 104, 1);
					func_178(uParam4, 105, 1);
					func_178(uParam4, 106, 1);
					func_178(uParam4, 107, 1);
					func_178(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_176(uParam3, 3, 1);
						func_176(uParam3, 7, 1);
						func_176(uParam3, 0, 1);
						func_176(uParam3, 12, 1);
						func_176(uParam3, 13, 1);
						func_176(uParam3, 15, 1);
						func_176(uParam3, 16, 1);
						func_176(uParam3, 48, 1);
						func_176(uParam3, 49, 1);
						func_176(uParam3, 17, 1);
						func_176(uParam3, 18, 1);
						func_176(uParam3, 50, 1);
						func_176(uParam3, 51, 1);
						func_176(uParam3, 52, 1);
						func_176(uParam3, 53, 1);
						func_176(uParam3, 38, 1);
						func_176(uParam3, 47, 1);
						func_176(uParam3, 111, 1);
						func_176(uParam3, 62, 1);
						func_176(uParam3, 20, 1);
						func_176(uParam3, 21, 1);
						func_176(uParam3, 25, 1);
						func_176(uParam3, 26, 1);
						func_176(uParam3, 27, 1);
						func_176(uParam3, 30, 1);
						func_176(uParam3, 31, 1);
						func_176(uParam3, 32, 1);
						func_176(uParam3, 33, 1);
						func_176(uParam3, 39, 1);
						func_176(uParam3, 37, 1);
						func_176(uParam3, 55, 1);
						func_174(uParam2, 0, 1);
						func_174(uParam2, 2, 1);
						func_174(uParam2, 3, 1);
						func_174(uParam2, 4, 1);
						func_174(uParam2, 6, 1);
						func_174(uParam2, 7, 1);
						func_174(uParam2, 8, 1);
						func_174(uParam2, 11, 1);
						func_174(uParam2, 13, 1);
						func_174(uParam2, 15, 1);
						func_174(uParam2, 16, 1);
						func_174(uParam2, 47, 1);
						func_174(uParam2, 48, 1);
						func_174(uParam2, 17, 1);
						func_174(uParam2, 18, 1);
						func_174(uParam2, 49, 1);
						func_174(uParam2, 50, 1);
						func_174(uParam2, 51, 1);
						func_174(uParam2, 52, 1);
						func_174(uParam2, 62, 1);
						func_174(uParam2, 37, 1);
						func_174(uParam2, 46, 1);
						func_174(uParam2, 110, 1);
						func_174(uParam2, 19, 1);
						func_174(uParam2, 20, 1);
						func_174(uParam2, 21, 1);
						func_174(uParam2, 22, 1);
						func_174(uParam2, 54, 1);
						func_174(uParam2, 24, 1);
						func_174(uParam2, 26, 1);
						func_174(uParam2, 27, 1);
						func_174(uParam2, 28, 1);
						func_174(uParam2, 30, 1);
						func_174(uParam2, 31, 1);
						func_174(uParam2, 32, 1);
						func_174(uParam2, 38, 1);
						func_174(uParam2, 36, 1);
					}
					func_178(uParam4, 3, 1);
					func_178(uParam4, 3, 1);
					func_178(uParam4, 4, 1);
					func_178(uParam4, 14, 1);
					func_178(uParam4, 15, 1);
					func_178(uParam4, 16, 1);
					func_178(uParam4, 8, 1);
					func_178(uParam4, 9, 1);
					func_178(uParam4, 10, 1);
					func_178(uParam4, 12, 1);
					func_178(uParam4, 13, 1);
					func_178(uParam4, 17, 1);
					func_178(uParam4, 18, 1);
					func_178(uParam4, 19, 1);
					func_178(uParam4, 20, 1);
					func_178(uParam4, 59, 1);
					func_178(uParam4, 60, 1);
					func_178(uParam4, 61, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 62, 1);
					func_178(uParam4, 63, 1);
					func_178(uParam4, 64, 1);
					func_178(uParam4, 65, 1);
					func_178(uParam4, 66, 1);
					func_178(uParam4, 67, 1);
					func_178(uParam4, 68, 1);
					func_178(uParam4, 69, 1);
					func_178(uParam4, 70, 1);
					func_178(uParam4, 71, 1);
					func_178(uParam4, 72, 1);
					func_178(uParam4, 21, 1);
					func_178(uParam4, 22, 1);
					func_178(uParam4, 23, 1);
					func_178(uParam4, 24, 1);
					func_178(uParam4, 25, 1);
					func_178(uParam4, 26, 1);
					func_178(uParam4, 36, 1);
					func_178(uParam4, 46, 1);
					func_178(uParam4, 38, 1);
					func_178(uParam4, 29, 1);
					func_178(uParam4, 28, 1);
					func_178(uParam4, 31, 1);
					func_178(uParam4, 33, 1);
					func_178(uParam4, 34, 1);
					func_178(uParam4, 92, 1);
					func_178(uParam4, 93, 1);
					func_178(uParam4, 94, 1);
					func_178(uParam4, 96, 1);
					func_178(uParam4, 97, 1);
					func_178(uParam4, 98, 1);
					func_178(uParam4, 100, 1);
					func_178(uParam4, 103, 1);
					func_178(uParam4, 104, 1);
					func_178(uParam4, 105, 1);
					func_178(uParam4, 106, 1);
					func_178(uParam4, 107, 1);
					func_178(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_178(var uParam0, int iParam1, bool bParam2)//Position - 0x14A2F
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_179()//Position - 0x14A81
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

void func_180(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x14A99
{
	Param2.f_2 = (Param2.f_2 + 1f);
	func_182(uParam0, iParam1, Param2, fParam3, iParam4, bParam5);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_181(*uParam0) && iParam6)
		{
			WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_minigun"), -1, true, true);
		}
		if (func_106())
		{
			if (func_127(*uParam0))
			{
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 3, 0, 0);
			}
		}
	}
}

int func_181(int iParam0)//Position - 0x14B03
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (FILES::_DOES_CUSTOMIZATION_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 11, joaat("JUGG_SUIT")))
	{
		return 1;
	}
	return 0;
}

void func_182(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5)//Position - 0x14B3B
{
	struct<14> Var0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
		}
		*uParam0 = PED::CLONE_PED(iParam1, false, false, false);
		if (PED::IS_PED_INJURED(*uParam0))
		{
			PED::REVIVE_INJURED_PED(*uParam0);
		}
		PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
		ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
		ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), true);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
		if (bParam5)
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
			PED::CLEAR_PED_PROP(*uParam0, 0);
			if (iParam4 > -1 && iParam4 < 32)
			{
				Var0 = { func_184(ENTITY::GET_ENTITY_MODEL(*uParam0), 2, Global_2689235[iParam4 /*453*/].f_248, -1) };
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, Var0.f_3, Var0.f_4, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
			}
		}
		if (func_183(*uParam0, 11))
		{
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
}

int func_183(int iParam0, int iParam1)//Position - 0x14C64
{
	if (FILES::_DOES_CUSTOMIZATION_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, iParam1, joaat("PILOT_SUIT")))
	{
		return 1;
	}
	return 0;
}

struct<14> func_184(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14C81
{
	func_233();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_217(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_185(iParam1, iParam2, iParam3);
	}
	return Global_78130[0 /*14*/];
}

void func_185(int iParam0, int iParam1, int iParam2)//Position - 0x14CC2
{
	switch (iParam0)
	{
		case 2:
			func_216(iParam1, iParam2);
			break;
		
		case 11:
			func_215(iParam1, iParam2);
			break;
		
		case 8:
			func_208(iParam1, iParam2);
			break;
		
		case 9:
			func_207(iParam1, iParam2);
			break;
		
		case 3:
			func_206(iParam1, iParam2);
			break;
		
		case 4:
			func_205(iParam1, iParam2);
			break;
		
		case 6:
			func_204(iParam1, iParam2);
			break;
		
		case 1:
			func_203(iParam1, iParam2);
			break;
		
		case 7:
			func_202(iParam1, iParam2);
			break;
		
		case 10:
			func_201(iParam1, iParam2);
			break;
		
		case 14:
			func_200(iParam1, iParam2);
			break;
		
		case 12:
			func_199(iParam1, iParam2);
			break;
		
		case 5:
			func_198(iParam1, iParam2);
			break;
		
		case 0:
			func_196(iParam1, iParam2);
			break;
		
		case 13:
			func_186(iParam1);
			break;
	}
}

void func_186(int iParam0)//Position - 0x14DCE
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_187(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x14F89
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_195(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_194(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_192(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_192(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_192(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_192(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_192(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_192(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(uParam0->f_6), 1);
			MISC::CLEAR_BIT(&(uParam0->f_6), 0);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_191(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_191(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_191(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_194(14))
			{
				return;
			}
			iVar0 = func_884(func_190(iParam1, uParam0->f_2), Global_78127, 0);
			if (BitTest(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_884(func_189(iParam1, uParam0->f_2), Global_78127, 0);
			if (BitTest(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_188(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_884(iVar1, Global_78127, 0);
				if (!BitTest(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_188(int iParam0, int iParam1, var uParam2)//Position - 0x1532E
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_189(int iParam0, int iParam1)//Position - 0x15733
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_190(int iParam0, int iParam1)//Position - 0x15B2E
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_191(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x15F29
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return BitTest(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_192(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x16DCC
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_78127;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_193(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		iVar3 = func_884(iVar2, iVar0, 0);
		return BitTest(iVar3, uVar1);
	}
	return 0;
}

bool func_193(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x16E0B
{
	int iVar0;
	
	*uParam2 = 13122;
	if ((bParam4 && Global_4538418) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4538418)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2592;
					break;
				
				case 52:
					*uParam2 = 2593;
					break;
				
				case 53:
					*uParam2 = 2594;
					break;
				
				case 54:
					*uParam2 = 2595;
					break;
				
				case 55:
					*uParam2 = 2596;
					break;
				
				case 56:
					*uParam2 = 2597;
					break;
				
				case 57:
					*uParam2 = 2598;
					break;
				
				case 58:
					*uParam2 = 2599;
					break;
				
				case 59:
					*uParam2 = 2600;
					break;
				
				case 60:
					*uParam2 = 2601;
					break;
				
				case 61:
					*uParam2 = 2602;
					break;
				
				case 62:
					*uParam2 = 3199;
					break;
				
				case 63:
					*uParam2 = 3200;
					break;
				
				case 64:
					*uParam2 = 3201;
					break;
				
				case 65:
					*uParam2 = 3202;
					break;
				
				case 66:
					*uParam2 = 3203;
					break;
				
				case 67:
					*uParam2 = 3204;
					break;
				
				case 68:
					*uParam2 = 3672;
					break;
				
				case 69:
					*uParam2 = 3673;
					break;
				
				case 70:
					*uParam2 = 3674;
					break;
				
				case 71:
					*uParam2 = 3675;
					break;
				
				case 72:
					*uParam2 = 3676;
					break;
				
				case 73:
					*uParam2 = 3677;
					break;
				
				case 74:
					*uParam2 = 3678;
					break;
				
				case 75:
					*uParam2 = 3679;
					break;
				
				case 76:
					*uParam2 = 3680;
					break;
				
				case 77:
					*uParam2 = 3681;
					break;
				
				case 78:
					*uParam2 = 3795;
					break;
				
				case 79:
					*uParam2 = 3796;
					break;
				
				case 80:
					*uParam2 = 3797;
					break;
				
				case 81:
					*uParam2 = 3798;
					break;
				
				case 82:
					*uParam2 = 3799;
					break;
				
				case 83:
					*uParam2 = 3800;
					break;
				
				case 84:
					*uParam2 = 3801;
					break;
				
				case 85:
					*uParam2 = 3802;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5340;
					break;
				
				case 90:
					*uParam2 = 5341;
					break;
				
				case 91:
					*uParam2 = 5342;
					break;
				
				case 92:
					*uParam2 = 5343;
					break;
				
				case 93:
					*uParam2 = 5344;
					break;
				
				case 94:
					*uParam2 = 5345;
					break;
				
				case 95:
					*uParam2 = 5346;
					break;
				
				case 96:
					*uParam2 = 5347;
					break;
				
				case 97:
					*uParam2 = 5348;
					break;
				
				case 98:
					*uParam2 = 5349;
					break;
				
				case 99:
					*uParam2 = 5350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5351;
					break;
				
				case 101:
					*uParam2 = 5397;
					break;
				
				case 102:
					*uParam2 = 5398;
					break;
				
				case 103:
					*uParam2 = 5399;
					break;
				
				case 104:
					*uParam2 = 5400;
					break;
				
				case 105:
					*uParam2 = 5401;
					break;
				
				case 106:
					*uParam2 = 5402;
					break;
				
				case 107:
					*uParam2 = 5403;
					break;
				
				case 108:
					*uParam2 = 5404;
					break;
				
				case 109:
					*uParam2 = 5405;
					break;
				
				case 110:
					*uParam2 = 5406;
					break;
				
				case 111:
					*uParam2 = 5407;
					break;
				
				case 112:
					*uParam2 = 5408;
					break;
				
				case 113:
					*uParam2 = 5409;
					break;
				
				case 114:
					*uParam2 = 5410;
					break;
				
				case 115:
					*uParam2 = 5411;
					break;
				
				case 116:
					*uParam2 = 5412;
					break;
				
				case 117:
					*uParam2 = 5413;
					break;
				
				case 118:
					*uParam2 = 5414;
					break;
				
				case 119:
					*uParam2 = 5415;
					break;
				
				case 120:
					*uParam2 = 5416;
					break;
				
				case 121:
					*uParam2 = 5417;
					break;
				
				case 122:
					*uParam2 = 5418;
					break;
				
				case 123:
					*uParam2 = 5419;
					break;
				
				case 124:
					*uParam2 = 6125;
					break;
				
				case 125:
					*uParam2 = 6126;
					break;
				
				case 126:
					*uParam2 = 6127;
					break;
				
				case 127:
					*uParam2 = 6128;
					break;
				
				case 128:
					*uParam2 = 6129;
					break;
				
				case 129:
					*uParam2 = 6130;
					break;
				
				case 130:
					*uParam2 = 6131;
					break;
				
				case 131:
					*uParam2 = 6132;
					break;
				
				case 132:
					*uParam2 = 6133;
					break;
				
				case 133:
					*uParam2 = 6134;
					break;
				
				case 134:
					*uParam2 = 6135;
					break;
				
				case 135:
					*uParam2 = 6136;
					break;
				
				case 136:
					*uParam2 = 6137;
					break;
				
				case 137:
					*uParam2 = 6138;
					break;
				
				case 138:
					*uParam2 = 6139;
					break;
				
				case 139:
					*uParam2 = 6438;
					break;
				
				case 140:
					*uParam2 = 6439;
					break;
				
				case 141:
					*uParam2 = 6440;
					break;
				
				case 142:
					*uParam2 = 6441;
					break;
				
				case 143:
					*uParam2 = 6442;
					break;
				
				case 144:
					*uParam2 = 6443;
					break;
				
				case 145:
					*uParam2 = 6444;
					break;
				
				case 146:
					*uParam2 = 6445;
					break;
				
				case 147:
					*uParam2 = 6446;
					break;
				
				case 148:
					*uParam2 = 6447;
					break;
				
				case 149:
					*uParam2 = 6448;
					break;
				
				case 150:
					*uParam2 = 6449;
					break;
				
				case 151:
					*uParam2 = 6450;
					break;
				
				case 152:
					*uParam2 = 6451;
					break;
				
				case 153:
					*uParam2 = 6452;
					break;
				
				case 154:
					*uParam2 = 7269;
					break;
				
				case 155:
					*uParam2 = 7270;
					break;
				
				case 156:
					*uParam2 = 7271;
					break;
				
				case 157:
					*uParam2 = 7272;
					break;
				
				case 158:
					*uParam2 = 7273;
					break;
				
				case 159:
					*uParam2 = 7274;
					break;
				
				case 160:
					*uParam2 = 7275;
					break;
				
				case 161:
					*uParam2 = 7882;
					break;
				
				case 162:
					*uParam2 = 7883;
					break;
				
				case 163:
					*uParam2 = 7884;
					break;
				
				case 164:
					*uParam2 = 7885;
					break;
				
				case 165:
					*uParam2 = 7886;
					break;
				
				case 166:
					*uParam2 = 7887;
					break;
				
				case 167:
					*uParam2 = 7888;
					break;
				
				case 168:
					*uParam2 = 7889;
					break;
				
				case 169:
					*uParam2 = 7890;
					break;
				
				case 170:
					*uParam2 = 7891;
					break;
				
				case 171:
					*uParam2 = 7892;
					break;
				
				case 172:
					*uParam2 = 7893;
					break;
				
				case 173:
					*uParam2 = 7894;
					break;
				
				case 174:
					*uParam2 = 7895;
					break;
				
				case 175:
					*uParam2 = 7896;
					break;
				
				case 176:
					*uParam2 = 8302;
					break;
				
				case 177:
					*uParam2 = 8303;
					break;
				
				case 178:
					*uParam2 = 8304;
					break;
				
				case 179:
					*uParam2 = 8305;
					break;
				
				case 180:
					*uParam2 = 8306;
					break;
				
				case 181:
					*uParam2 = 8307;
					break;
				
				case 182:
					*uParam2 = 8308;
					break;
				
				case 183:
					*uParam2 = 8309;
					break;
				
				case 184:
					*uParam2 = 8310;
					break;
				
				case 185:
					*uParam2 = 8311;
					break;
				
				case 186:
					*uParam2 = 8312;
					break;
				
				case 187:
					*uParam2 = 8313;
					break;
				
				case 188:
					*uParam2 = 8314;
					break;
				
				case 189:
					*uParam2 = 8315;
					break;
				
				case 190:
					*uParam2 = 8316;
					break;
				
				case 191:
					*uParam2 = 8317;
					break;
				
				case 192:
					*uParam2 = 8318;
					break;
				
				case 193:
					*uParam2 = 8319;
					break;
				
				case 194:
					*uParam2 = 8320;
					break;
				
				case 195:
					*uParam2 = 8321;
					break;
				
				case 196:
					*uParam2 = 8322;
					break;
				
				case 197:
					*uParam2 = 8323;
					break;
				
				case 198:
					*uParam2 = 8324;
					break;
				
				case 199:
					*uParam2 = 8325;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8326;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9424;
					break;
				
				case 207:
					*uParam2 = 9425;
					break;
				
				case 208:
					*uParam2 = 9426;
					break;
				
				case 209:
					*uParam2 = 9427;
					break;
				
				case 210:
					*uParam2 = 9428;
					break;
				
				case 211:
					*uParam2 = 9429;
					break;
				
				case 212:
					*uParam2 = 9430;
					break;
				
				case 213:
					*uParam2 = 9431;
					break;
				
				case 214:
					*uParam2 = 9432;
					break;
				
				case 215:
					*uParam2 = 9433;
					break;
				
				case 216:
					*uParam2 = 9434;
					break;
				
				case 217:
					*uParam2 = 9435;
					break;
				
				case 218:
					*uParam2 = 9436;
					break;
				
				case 219:
					*uParam2 = 9437;
					break;
				
				case 220:
					*uParam2 = 9438;
					break;
				
				case 221:
					*uParam2 = 9439;
					break;
				
				case 222:
					*uParam2 = 9440;
					break;
				
				case 223:
					*uParam2 = 9441;
					break;
				
				case 224:
					*uParam2 = 9442;
					break;
				
				case 225:
					*uParam2 = 9443;
					break;
				
				case 226:
					*uParam2 = 9444;
					break;
				
				case 227:
					*uParam2 = 9445;
					break;
				
				case 228:
					*uParam2 = 9446;
					break;
				
				case 229:
					*uParam2 = 9447;
					break;
				
				case 230:
					*uParam2 = 9448;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10303;
					break;
				
				case 232:
					*uParam2 = 10304;
					break;
				
				case 233:
					*uParam2 = 10305;
					break;
				
				case 234:
					*uParam2 = 10306;
					break;
				
				case 235:
					*uParam2 = 10307;
					break;
				
				case 236:
					*uParam2 = 10308;
					break;
				
				case 237:
					*uParam2 = 10309;
					break;
				
				case 238:
					*uParam2 = 10310;
					break;
				
				case 239:
					*uParam2 = 10311;
					break;
				
				case 240:
					*uParam2 = 10312;
					break;
				
				case 241:
					*uParam2 = 10313;
					break;
				
				case 242:
					*uParam2 = 10314;
					break;
				
				case 243:
					*uParam2 = 10315;
					break;
				
				case 244:
					*uParam2 = 10316;
					break;
				
				case 245:
					*uParam2 = 10317;
					break;
				
				case 246:
					*uParam2 = 10318;
					break;
				
				case 247:
					*uParam2 = 10319;
					break;
				
				case 248:
					*uParam2 = 10320;
					break;
				
				case 249:
					*uParam2 = 10321;
					break;
				
				case 250:
					*uParam2 = 10322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10419;
					break;
				
				case 252:
					*uParam2 = 10420;
					break;
				
				case 253:
					*uParam2 = 10421;
					break;
				
				case 254:
					*uParam2 = 10422;
					break;
				
				case 255:
					*uParam2 = 10423;
					break;
				
				case 256:
					*uParam2 = 10424;
					break;
				
				case 257:
					*uParam2 = 10425;
					break;
				
				case 258:
					*uParam2 = 10426;
					break;
				
				case 259:
					*uParam2 = 10427;
					break;
				
				case 260:
					*uParam2 = 10428;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2603;
					break;
				
				case 52:
					*uParam2 = 2604;
					break;
				
				case 53:
					*uParam2 = 2605;
					break;
				
				case 54:
					*uParam2 = 2606;
					break;
				
				case 55:
					*uParam2 = 2607;
					break;
				
				case 56:
					*uParam2 = 2608;
					break;
				
				case 57:
					*uParam2 = 2609;
					break;
				
				case 58:
					*uParam2 = 2610;
					break;
				
				case 59:
					*uParam2 = 2611;
					break;
				
				case 60:
					*uParam2 = 2612;
					break;
				
				case 61:
					*uParam2 = 2613;
					break;
				
				case 62:
					*uParam2 = 3205;
					break;
				
				case 63:
					*uParam2 = 3206;
					break;
				
				case 64:
					*uParam2 = 3207;
					break;
				
				case 65:
					*uParam2 = 3208;
					break;
				
				case 66:
					*uParam2 = 3209;
					break;
				
				case 67:
					*uParam2 = 3210;
					break;
				
				case 68:
					*uParam2 = 3682;
					break;
				
				case 69:
					*uParam2 = 3683;
					break;
				
				case 70:
					*uParam2 = 3684;
					break;
				
				case 71:
					*uParam2 = 3685;
					break;
				
				case 72:
					*uParam2 = 3686;
					break;
				
				case 73:
					*uParam2 = 3687;
					break;
				
				case 74:
					*uParam2 = 3688;
					break;
				
				case 75:
					*uParam2 = 3689;
					break;
				
				case 76:
					*uParam2 = 3690;
					break;
				
				case 77:
					*uParam2 = 3691;
					break;
				
				case 78:
					*uParam2 = 3803;
					break;
				
				case 79:
					*uParam2 = 3804;
					break;
				
				case 80:
					*uParam2 = 3805;
					break;
				
				case 81:
					*uParam2 = 3806;
					break;
				
				case 82:
					*uParam2 = 3807;
					break;
				
				case 83:
					*uParam2 = 3808;
					break;
				
				case 84:
					*uParam2 = 3809;
					break;
				
				case 85:
					*uParam2 = 3810;
					break;
				
				case 86:
					*uParam2 = 3908;
					break;
				
				case 87:
					*uParam2 = 3909;
					break;
				
				case 88:
					*uParam2 = 3910;
					break;
				
				case 89:
					*uParam2 = 5352;
					break;
				
				case 90:
					*uParam2 = 5353;
					break;
				
				case 91:
					*uParam2 = 5354;
					break;
				
				case 92:
					*uParam2 = 5355;
					break;
				
				case 93:
					*uParam2 = 5356;
					break;
				
				case 94:
					*uParam2 = 5357;
					break;
				
				case 95:
					*uParam2 = 5358;
					break;
				
				case 96:
					*uParam2 = 5359;
					break;
				
				case 97:
					*uParam2 = 5360;
					break;
				
				case 98:
					*uParam2 = 5361;
					break;
				
				case 99:
					*uParam2 = 5362;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5363;
					break;
				
				case 101:
					*uParam2 = 5420;
					break;
				
				case 102:
					*uParam2 = 5421;
					break;
				
				case 103:
					*uParam2 = 5422;
					break;
				
				case 104:
					*uParam2 = 5423;
					break;
				
				case 105:
					*uParam2 = 5424;
					break;
				
				case 106:
					*uParam2 = 5425;
					break;
				
				case 107:
					*uParam2 = 5426;
					break;
				
				case 108:
					*uParam2 = 5427;
					break;
				
				case 109:
					*uParam2 = 5428;
					break;
				
				case 110:
					*uParam2 = 5429;
					break;
				
				case 111:
					*uParam2 = 5430;
					break;
				
				case 112:
					*uParam2 = 5431;
					break;
				
				case 113:
					*uParam2 = 5432;
					break;
				
				case 114:
					*uParam2 = 5433;
					break;
				
				case 115:
					*uParam2 = 5434;
					break;
				
				case 116:
					*uParam2 = 5435;
					break;
				
				case 117:
					*uParam2 = 5436;
					break;
				
				case 118:
					*uParam2 = 5437;
					break;
				
				case 119:
					*uParam2 = 5438;
					break;
				
				case 120:
					*uParam2 = 5439;
					break;
				
				case 121:
					*uParam2 = 5440;
					break;
				
				case 122:
					*uParam2 = 5441;
					break;
				
				case 123:
					*uParam2 = 5442;
					break;
				
				case 124:
					*uParam2 = 6140;
					break;
				
				case 125:
					*uParam2 = 6141;
					break;
				
				case 126:
					*uParam2 = 6142;
					break;
				
				case 127:
					*uParam2 = 6143;
					break;
				
				case 128:
					*uParam2 = 6144;
					break;
				
				case 129:
					*uParam2 = 6145;
					break;
				
				case 130:
					*uParam2 = 6146;
					break;
				
				case 131:
					*uParam2 = 6147;
					break;
				
				case 132:
					*uParam2 = 6148;
					break;
				
				case 133:
					*uParam2 = 6149;
					break;
				
				case 134:
					*uParam2 = 6150;
					break;
				
				case 135:
					*uParam2 = 6151;
					break;
				
				case 136:
					*uParam2 = 6152;
					break;
				
				case 137:
					*uParam2 = 6153;
					break;
				
				case 138:
					*uParam2 = 6154;
					break;
				
				case 139:
					*uParam2 = 6453;
					break;
				
				case 140:
					*uParam2 = 6454;
					break;
				
				case 141:
					*uParam2 = 6455;
					break;
				
				case 142:
					*uParam2 = 6456;
					break;
				
				case 143:
					*uParam2 = 6457;
					break;
				
				case 144:
					*uParam2 = 6458;
					break;
				
				case 145:
					*uParam2 = 6459;
					break;
				
				case 146:
					*uParam2 = 6460;
					break;
				
				case 147:
					*uParam2 = 6461;
					break;
				
				case 148:
					*uParam2 = 6462;
					break;
				
				case 149:
					*uParam2 = 6463;
					break;
				
				case 150:
					*uParam2 = 6464;
					break;
				
				case 151:
					*uParam2 = 6465;
					break;
				
				case 152:
					*uParam2 = 6466;
					break;
				
				case 153:
					*uParam2 = 6467;
					break;
				
				case 154:
					*uParam2 = 7276;
					break;
				
				case 155:
					*uParam2 = 7277;
					break;
				
				case 156:
					*uParam2 = 7278;
					break;
				
				case 157:
					*uParam2 = 7279;
					break;
				
				case 158:
					*uParam2 = 7280;
					break;
				
				case 159:
					*uParam2 = 7281;
					break;
				
				case 160:
					*uParam2 = 7282;
					break;
				
				case 161:
					*uParam2 = 7897;
					break;
				
				case 162:
					*uParam2 = 7898;
					break;
				
				case 163:
					*uParam2 = 7899;
					break;
				
				case 164:
					*uParam2 = 7900;
					break;
				
				case 165:
					*uParam2 = 7901;
					break;
				
				case 166:
					*uParam2 = 7902;
					break;
				
				case 167:
					*uParam2 = 7903;
					break;
				
				case 168:
					*uParam2 = 7904;
					break;
				
				case 169:
					*uParam2 = 7905;
					break;
				
				case 170:
					*uParam2 = 7906;
					break;
				
				case 171:
					*uParam2 = 7907;
					break;
				
				case 172:
					*uParam2 = 7908;
					break;
				
				case 173:
					*uParam2 = 7909;
					break;
				
				case 174:
					*uParam2 = 7910;
					break;
				
				case 175:
					*uParam2 = 7911;
					break;
				
				case 176:
					*uParam2 = 8327;
					break;
				
				case 177:
					*uParam2 = 8328;
					break;
				
				case 178:
					*uParam2 = 8329;
					break;
				
				case 179:
					*uParam2 = 8330;
					break;
				
				case 180:
					*uParam2 = 8331;
					break;
				
				case 181:
					*uParam2 = 8332;
					break;
				
				case 182:
					*uParam2 = 8333;
					break;
				
				case 183:
					*uParam2 = 8334;
					break;
				
				case 184:
					*uParam2 = 8335;
					break;
				
				case 185:
					*uParam2 = 8336;
					break;
				
				case 186:
					*uParam2 = 8337;
					break;
				
				case 187:
					*uParam2 = 8338;
					break;
				
				case 188:
					*uParam2 = 8339;
					break;
				
				case 189:
					*uParam2 = 8340;
					break;
				
				case 190:
					*uParam2 = 8341;
					break;
				
				case 191:
					*uParam2 = 8342;
					break;
				
				case 192:
					*uParam2 = 8343;
					break;
				
				case 193:
					*uParam2 = 8344;
					break;
				
				case 194:
					*uParam2 = 8345;
					break;
				
				case 195:
					*uParam2 = 8346;
					break;
				
				case 196:
					*uParam2 = 8347;
					break;
				
				case 197:
					*uParam2 = 8348;
					break;
				
				case 198:
					*uParam2 = 8349;
					break;
				
				case 199:
					*uParam2 = 8350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8351;
					break;
				
				case 201:
					*uParam2 = 8946;
					break;
				
				case 202:
					*uParam2 = 8947;
					break;
				
				case 203:
					*uParam2 = 8948;
					break;
				
				case 204:
					*uParam2 = 8949;
					break;
				
				case 205:
					*uParam2 = 8950;
					break;
				
				case 206:
					*uParam2 = 9449;
					break;
				
				case 207:
					*uParam2 = 9450;
					break;
				
				case 208:
					*uParam2 = 9451;
					break;
				
				case 209:
					*uParam2 = 9452;
					break;
				
				case 210:
					*uParam2 = 9453;
					break;
				
				case 211:
					*uParam2 = 9454;
					break;
				
				case 212:
					*uParam2 = 9455;
					break;
				
				case 213:
					*uParam2 = 9456;
					break;
				
				case 214:
					*uParam2 = 9457;
					break;
				
				case 215:
					*uParam2 = 9458;
					break;
				
				case 216:
					*uParam2 = 9459;
					break;
				
				case 217:
					*uParam2 = 9460;
					break;
				
				case 218:
					*uParam2 = 9461;
					break;
				
				case 219:
					*uParam2 = 9462;
					break;
				
				case 220:
					*uParam2 = 9463;
					break;
				
				case 221:
					*uParam2 = 9464;
					break;
				
				case 222:
					*uParam2 = 9465;
					break;
				
				case 223:
					*uParam2 = 9466;
					break;
				
				case 224:
					*uParam2 = 9467;
					break;
				
				case 225:
					*uParam2 = 9468;
					break;
				
				case 226:
					*uParam2 = 9469;
					break;
				
				case 227:
					*uParam2 = 9470;
					break;
				
				case 228:
					*uParam2 = 9471;
					break;
				
				case 229:
					*uParam2 = 9472;
					break;
				
				case 230:
					*uParam2 = 9473;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10323;
					break;
				
				case 232:
					*uParam2 = 10324;
					break;
				
				case 233:
					*uParam2 = 10325;
					break;
				
				case 234:
					*uParam2 = 10326;
					break;
				
				case 235:
					*uParam2 = 10327;
					break;
				
				case 236:
					*uParam2 = 10328;
					break;
				
				case 237:
					*uParam2 = 10329;
					break;
				
				case 238:
					*uParam2 = 10330;
					break;
				
				case 239:
					*uParam2 = 10331;
					break;
				
				case 240:
					*uParam2 = 10332;
					break;
				
				case 241:
					*uParam2 = 10333;
					break;
				
				case 242:
					*uParam2 = 10334;
					break;
				
				case 243:
					*uParam2 = 10335;
					break;
				
				case 244:
					*uParam2 = 10336;
					break;
				
				case 245:
					*uParam2 = 10337;
					break;
				
				case 246:
					*uParam2 = 10338;
					break;
				
				case 247:
					*uParam2 = 10339;
					break;
				
				case 248:
					*uParam2 = 10340;
					break;
				
				case 249:
					*uParam2 = 10341;
					break;
				
				case 250:
					*uParam2 = 10342;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10429;
					break;
				
				case 252:
					*uParam2 = 10430;
					break;
				
				case 253:
					*uParam2 = 10431;
					break;
				
				case 254:
					*uParam2 = 10432;
					break;
				
				case 255:
					*uParam2 = 10433;
					break;
				
				case 256:
					*uParam2 = 10434;
					break;
				
				case 257:
					*uParam2 = 10435;
					break;
				
				case 258:
					*uParam2 = 10436;
					break;
				
				case 259:
					*uParam2 = 10437;
					break;
				
				case 260:
					*uParam2 = 9473;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 13122;
}

bool func_194(int iParam0)//Position - 0x1938E
{
	return Global_43052 == iParam0;
}

int func_195(int iParam0)//Position - 0x1939C
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_196(int iParam0, int iParam1)//Position - 0x19470
{
	int iVar0;
	
	iVar0 = 0;
	Global_78130[0 /*14*/].f_5 = 4;
	func_197(iVar0, iParam0, 0, iParam1);
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x19490
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_78130[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
			if (iVar4 > iVar3)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_187(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_187(&(Global_78130[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
			if (iVar8 > iVar7)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5.f_0;
				func_187(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("OUTFIT_ONLY"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var9);
		if (iParam3 != -1 && Global_78300)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9.f_0;
			func_187(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, func_131(iParam0));
			if (iVar11 > iVar10)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9.f_0;
				func_187(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

void func_198(int iParam0, int iParam1)//Position - 0x19717
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_197(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_199(int iParam0, int iParam1)//Position - 0x1981A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_197(iVar7, iParam0, 28, iParam1);
			return;
			break;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_200(int iParam0, int iParam1)//Position - 0x19AF9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 400;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 375;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 325;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 255;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 360;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 3970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1355;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 515;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 545;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 1440;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 50;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 575;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 605;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 285;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 2125;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 295;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 855;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1615;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 1130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 390;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 970;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1125;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 740;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 805;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 6250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 3585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 4075;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 4935;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 5600;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 4790;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 2245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 1205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 2215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 4815;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 4795;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 4965;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 480;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 465;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 2390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 2005;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 570;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 525;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4275;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 3660;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 4165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 3670;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 3620;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 3610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 4140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 1490;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 1105;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 825;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2053[iVar9]) * Global_295754.f_26));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2174[iVar10]) * Global_295754.f_27));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2199[iVar11]) * Global_295754.f_56));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2328[iVar12]) * Global_295754.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_197(iVar7, iParam0, 327, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1))
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_26));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_56));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1))
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_28));
			}
		}
	}
	else
	{
		func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_201(int iParam0, int iParam1)//Position - 0x1C8D0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_197(iVar7, iParam0, 6, iParam1);
			return;
			break;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_202(int iParam0, int iParam1)//Position - 0x1C9D5
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 4;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 5;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_197(iVar7, iParam0, 55, iParam1);
			if (Global_78130[0 /*14*/].f_7 > 0)
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_58));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_203(int iParam0, int iParam1)//Position - 0x1D1B1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_197(iVar7, iParam0, 26, iParam1);
			if (Global_78130[0 /*14*/].f_7 > 0)
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2026[iVar8]) * Global_295754.f_29));
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_204(int iParam0, int iParam1)//Position - 0x1D496
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1769[iVar8]) * Global_295754.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_197(iVar7, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_25));
		}
	}
	else
	{
		func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_205(int iParam0, int iParam1)//Position - 0x1EABD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1255[iVar8]) * Global_295754.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_197(iVar7, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_23));
		}
	}
	else
	{
		func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_206(int iParam0, int iParam1)//Position - 0x2011E
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_197(iVar7, iParam0, 16, iParam1);
		return;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_207(int iParam0, int iParam1)//Position - 0x20279
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 11:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 21:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 23:
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 26:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 27:
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 28:
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 29:
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 31:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 32:
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 33:
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 34:
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_197(iVar7, iParam0, 36, iParam1);
		return;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_208(int iParam0, int iParam1)//Position - 0x204F9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 33:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 67:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 68:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 69:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 70:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[223]));
			break;
		
		case 119:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_197(iVar7, iParam0, 136, iParam1);
			if (Global_78130[0 /*14*/].f_7 > 0)
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_209(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_209(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar8]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar9 = (iParam0 - 16);
		if (iVar9 >= 0 && iVar9 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar9]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_24));
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

int func_209(int iParam0, int iParam1)//Position - 0x2189B
{
	var uVar0;
	int iVar1;
	
	if (func_212(iParam0) == 13122)
	{
		return 0;
	}
	uVar0 = func_211(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_210(iVar1));
}

int func_210(int iParam0)//Position - 0x218CA
{
	return (iParam0 % 32);
}

int func_211(var uParam0, int iParam1)//Position - 0x218D7
{
	int iVar0;
	
	iVar0 = func_884(func_212(uParam0), iParam1, 0);
	return iVar0;
}

int func_212(var uParam0)//Position - 0x218F0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_214(iVar0);
	if ((func_885() == 0 || func_213() == 0) || (func_885() == 999 && func_213() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2614;
				break;
			
			case 18:
				return 2617;
				break;
			
			case 19:
				return 2620;
				break;
			
			case 20:
				return 3786;
				break;
			
			case 21:
				return 3789;
				break;
			
			case 22:
				return 3864;
				break;
			
			case 23:
				return 3867;
				break;
			
			case 24:
				return 3870;
				break;
			
			case 25:
				return 3873;
				break;
			
			case 26:
				return 5364;
				break;
			
			case 27:
				return 5367;
				break;
			
			case 28:
				return 5469;
				break;
			
			case 29:
				return 5472;
				break;
			
			case 30:
				return 6431;
				break;
			
			case 31:
				return 6434;
				break;
			
			case 32:
				return 7255;
				break;
			
			case 33:
				return 7258;
				break;
			
			case 34:
				return 7261;
				break;
			
			case 35:
				return 7970;
				break;
			
			case 36:
				return 7973;
				break;
			
			case 37:
				return 7976;
				break;
			
			case 38:
				return 7979;
				break;
			
			case 39:
				return 8501;
				break;
			
			case 40:
				return 8504;
				break;
			
			case 41:
				return 8507;
				break;
			
			case 42:
				return 8510;
				break;
			
			case 43:
				return 8906;
				break;
			
			case 44:
				return 8909;
				break;
			
			case 45:
				return 8912;
				break;
			
			case 46:
				return 10287;
				break;
			
			case 47:
				return 10290;
				break;
			
			case 48:
				return 10413;
				break;
			
			case 49:
				return 10416;
				break;
		}
	}
	return 13122;
}

int func_213()//Position - 0x21C2F
{
	return Global_31960;
}

int func_214(int iParam0)//Position - 0x21C3A
{
	return (iParam0 / 32);
}

void func_215(int iParam0, int iParam1)//Position - 0x21C47
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 4)
	{
		if (func_209(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989) * Global_295754.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[4]) * Global_295754.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988) * Global_295754.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_209(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987) * Global_295754.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[9]) * Global_295754.f_24));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar8]) * Global_295754.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		func_197(iVar7, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_24));
		}
	}
	else
	{
		func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_216(int iParam0, int iParam1)//Position - 0x233AC
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[0]));
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[1]));
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[2]));
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[3]));
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[4]));
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[5]));
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[6]));
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[7]));
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[8]));
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[9]));
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[10]));
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[11]));
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[12]));
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[13]));
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[14]));
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[15]));
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[16]));
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[17]));
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[18]));
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[19]));
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[20]));
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[21]));
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[22]));
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[23]));
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[24]));
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[25]));
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[26]));
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[27]));
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[28]));
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[29]));
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[30]));
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[31]));
			break;
		
		case 36:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[32]));
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[33]));
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[34]));
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[35]));
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[36]));
			break;
		
		case 42:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[37]));
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[38]));
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[39]));
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[40]));
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[41]));
			break;
		
		case 48:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[42]));
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[43]));
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[44]));
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[45]));
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[46]));
			break;
		
		case 54:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[47]));
			break;
		
		case 55:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[48]));
			break;
		
		case 56:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[49]));
			break;
		
		case 57:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[50]));
			break;
		
		case 58:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[51]));
			break;
		
		case 61:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[52]));
			break;
		
		case 62:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[53]));
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[54]));
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[55]));
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[56]));
			break;
		
		case 68:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[57]));
			break;
		
		case 69:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[58]));
			break;
		
		case 70:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[59]));
			break;
		
		case 71:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[60]));
			break;
		
		case 72:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[61]));
			break;
		
		case 74:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[62]));
			break;
		
		case 75:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[63]));
			break;
		
		case 76:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[64]));
			break;
		
		case 77:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[65]));
			break;
		
		case 78:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 79:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[66]));
			break;
		
		case 80:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[67]));
			break;
		
		case 81:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[68]));
			break;
		
		case 82:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[69]));
			break;
		
		case 83:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[70]));
			break;
		
		case 84:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[71]));
			break;
		
		case 86:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[72]));
			break;
		
		case 87:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[73]));
			break;
		
		case 88:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[74]));
			break;
		
		case 89:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2465[75]));
			break;
		
		case 90:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			func_197(iVar7, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_217(int iParam0, int iParam1, int iParam2)//Position - 0x2427E
{
	switch (iParam0)
	{
		case 2:
			func_232(iParam1, iParam2);
			break;
		
		case 11:
			func_231(iParam1, iParam2);
			break;
		
		case 8:
			func_230(iParam1, iParam2);
			break;
		
		case 9:
			func_229(iParam1, iParam2);
			break;
		
		case 3:
			func_228(iParam1, iParam2);
			break;
		
		case 4:
			func_227(iParam1, iParam2);
			break;
		
		case 6:
			func_226(iParam1, iParam2);
			break;
		
		case 1:
			func_225(iParam1, iParam2);
			break;
		
		case 7:
			func_224(iParam1, iParam2);
			break;
		
		case 10:
			func_223(iParam1, iParam2);
			break;
		
		case 14:
			func_222(iParam1, iParam2);
			break;
		
		case 12:
			func_221(iParam1, iParam2);
			break;
		
		case 5:
			func_220(iParam1, iParam2);
			break;
		
		case 0:
			func_219(iParam1, iParam2);
			break;
		
		case 13:
			func_218(iParam1);
			break;
	}
}

void func_218(int iParam0)//Position - 0x2438A
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_219(int iParam0, int iParam1)//Position - 0x24554
{
	int iVar0;
	
	iVar0 = 0;
	Global_78130[0 /*14*/].f_5 = 3;
	func_197(iVar0, iParam0, 0, iParam1);
}

void func_220(int iParam0, int iParam1)//Position - 0x24574
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_197(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_221(int iParam0, int iParam1)//Position - 0x24677
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_197(iVar7, iParam0, 26, iParam1);
			return;
			break;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_222(int iParam0, int iParam1)//Position - 0x24928
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 320;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 245;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 415;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 315;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 265;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 570;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 560;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 260;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 430;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 100;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 1715;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 3900;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 1550;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 4250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 4460;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 4970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 290;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 305;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 4170;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 335;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 4940;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 275;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 3620;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 350;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 365;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 380;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 380;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 950;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 565;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 630;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 95;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 265;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 330;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 675;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 4050;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 4060;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 1760;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 1375;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 1440;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 1445;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 530;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 785;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 850;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 4260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 4310;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 4130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1885;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 1500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 1565;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 4290;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 4150;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 4295;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 6240;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 4955;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 5590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4920;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 4990;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 4780;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 4775;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 4800;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 385;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 310;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 3655;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 4055;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 3595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 3605;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 3645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1605;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 2230;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 1690;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 2715;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2330;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 2395;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 95;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 485;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 695;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_964[iVar9]) * Global_295754.f_18));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1085[iVar10]) * Global_295754.f_19));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1110[iVar11]) * Global_295754.f_20));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 15)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1239[iVar12]) * Global_295754.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_78130[0 /*14*/].f_5 = 3;
		func_197(iVar7, iParam0, 327, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1))
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_18));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_20));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1))
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_21));
			}
		}
	}
	else
	{
		func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_223(int iParam0, int iParam1)//Position - 0x276E7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_197(iVar7, iParam0, 7, iParam1);
			return;
			break;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_224(int iParam0, int iParam1)//Position - 0x27808
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 39:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 40:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 41:
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 12;
			iVar4 = 0;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar3 = 12;
			iVar4 = 1;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar3 = 12;
			iVar4 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 90:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 91:
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_197(iVar7, iParam0, 92, iParam1);
			if (Global_78130[0 /*14*/].f_7 > 0)
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_57));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_225(int iParam0, int iParam1)//Position - 0x28101
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_197(iVar7, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_937[iVar8]) * Global_295754.f_22));
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_226(int iParam0, int iParam1)//Position - 0x283B8
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 690;
			break;
	}
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_680[iVar8]) * Global_295754.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 3;
		func_197(iVar7, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_17));
		}
	}
	else
	{
		func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_227(int iParam0, int iParam1)//Position - 0x299F5
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_185[iVar8]) * Global_295754.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 3;
		func_197(iVar7, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_15));
		}
	}
	else
	{
		func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_228(int iParam0, int iParam1)//Position - 0x2B028
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_197(iVar7, iParam0, 16, iParam1);
			return;
			break;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_229(int iParam0, int iParam1)//Position - 0x2B17F
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 11:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 21:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 23:
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 26:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 27:
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 28:
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 29:
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 31:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 32:
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 33:
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 34:
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 36:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 37:
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 38:
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 39:
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 40:
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 41:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 42:
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 43:
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 44:
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 45:
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_197(iVar7, iParam0, 46, iParam1);
			return;
			break;
	}
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_230(int iParam0, int iParam1)//Position - 0x2B49B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar3 = 1;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4211 != -1)
			{
				iVar1 = Global_262145.f_4211;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4209 != -1)
			{
				iVar1 = Global_262145.f_4209;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4203 != -1)
			{
				iVar1 = Global_262145.f_4203;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4205 != -1)
			{
				iVar1 = Global_262145.f_4205;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			if (Global_262145.f_4208 != -1)
			{
				iVar1 = Global_262145.f_4208;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			if (Global_262145.f_4204 != -1)
			{
				iVar1 = Global_262145.f_4204;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			if (Global_262145.f_4210 != -1)
			{
				iVar1 = Global_262145.f_4210;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			if (Global_262145.f_4206 != -1)
			{
				iVar1 = Global_262145.f_4206;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4211 != -1)
			{
				iVar1 = Global_262145.f_4211;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4209 != -1)
			{
				iVar1 = Global_262145.f_4209;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			if (Global_262145.f_4203 != -1)
			{
				iVar1 = Global_262145.f_4203;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			if (Global_262145.f_4205 != -1)
			{
				iVar1 = Global_262145.f_4205;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			if (Global_262145.f_4208 != -1)
			{
				iVar1 = Global_262145.f_4208;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			if (Global_262145.f_4204 != -1)
			{
				iVar1 = Global_262145.f_4204;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			if (Global_262145.f_4210 != -1)
			{
				iVar1 = Global_262145.f_4210;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			if (Global_262145.f_4206 != -1)
			{
				iVar1 = Global_262145.f_4206;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_4211 != -1)
			{
				iVar1 = Global_262145.f_4211;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_4209 != -1)
			{
				iVar1 = Global_262145.f_4209;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			if (Global_262145.f_4203 != -1)
			{
				iVar1 = Global_262145.f_4203;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			if (Global_262145.f_4205 != -1)
			{
				iVar1 = Global_262145.f_4205;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			if (Global_262145.f_4208 != -1)
			{
				iVar1 = Global_262145.f_4208;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			if (Global_262145.f_4204 != -1)
			{
				iVar1 = Global_262145.f_4204;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			if (Global_262145.f_4207 != -1)
			{
				iVar1 = Global_262145.f_4207;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			if (Global_262145.f_4210 != -1)
			{
				iVar1 = Global_262145.f_4210;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			if (Global_262145.f_4211 != -1)
			{
				iVar1 = Global_262145.f_4211;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			if (Global_262145.f_4209 != -1)
			{
				iVar1 = Global_262145.f_4209;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			if (Global_262145.f_4203 != -1)
			{
				iVar1 = Global_262145.f_4203;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			if (Global_262145.f_4205 != -1)
			{
				iVar1 = Global_262145.f_4205;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			if (Global_262145.f_4208 != -1)
			{
				iVar1 = Global_262145.f_4208;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			if (Global_262145.f_4204 != -1)
			{
				iVar1 = Global_262145.f_4204;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			if (Global_262145.f_4207 != -1)
			{
				iVar1 = Global_262145.f_4207;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			if (Global_262145.f_4210 != -1)
			{
				iVar1 = Global_262145.f_4210;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 315;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 215;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 265;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 205;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 55;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_209(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_442[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_209(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(55) * Global_262145.f_442[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar8]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar9 = (iParam0 - 32);
		if (iVar9 >= 0 && iVar9 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar9]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar10 = (iParam0 - 160) + 124;
		if (iVar10 >= 0 && iVar10 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar10]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar11 = (iParam0 - 160) + 188;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar11]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_16));
	if (iParam0 >= 241)
	{
		Global_78130[0 /*14*/].f_5 = 3;
		func_197(iVar7, iParam0, 241, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_16));
		}
	}
	else
	{
		func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_231(int iParam0, int iParam1)//Position - 0x2D9BB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 3125;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 23)
	{
		if (func_209(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989) * Global_295754.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(45) * Global_262145.f_442[23]) * Global_295754.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988) * Global_295754.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_209(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987) * Global_295754.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(55) * Global_262145.f_442[28]) * Global_295754.f_16));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar8]) * Global_295754.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_78130[0 /*14*/].f_5 = 3;
		func_197(iVar7, iParam0, 237, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_16));
		}
	}
	else
	{
		func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_232(int iParam0, int iParam1)//Position - 0x2EF46
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[0]));
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[1]));
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[2]));
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[3]));
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[4]));
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[5]));
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[6]));
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[7]));
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[8]));
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[9]));
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[10]));
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[11]));
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[12]));
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[13]));
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[14]));
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[15]));
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[16]));
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[17]));
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[18]));
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[19]));
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[20]));
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[21]));
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[22]));
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[23]));
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[24]));
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[25]));
			break;
		
		case 31:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[26]));
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[27]));
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[28]));
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[29]));
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[30]));
			break;
		
		case 37:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[31]));
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[32]));
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[33]));
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[34]));
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[35]));
			break;
		
		case 43:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[36]));
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[37]));
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[38]));
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[39]));
			break;
		
		case 49:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[40]));
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[41]));
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[42]));
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[43]));
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[44]));
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[45]));
			break;
		
		case 55:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[46]));
			break;
		
		case 58:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[47]));
			break;
		
		case 59:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[48]));
			break;
		
		case 60:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[49]));
			break;
		
		case 61:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[50]));
			break;
		
		case 62:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[51]));
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[52]));
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[53]));
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[54]));
			break;
		
		case 67:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[55]));
			break;
		
		case 68:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[56]));
			break;
		
		case 70:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[57]));
			break;
		
		case 71:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[58]));
			break;
		
		case 72:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[59]));
			break;
		
		case 73:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[60]));
			break;
		
		case 74:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[61]));
			break;
		
		case 75:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[62]));
			break;
		
		case 76:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[63]));
			break;
		
		case 77:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[64]));
			break;
		
		case 78:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[65]));
			break;
		
		case 79:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[66]));
			break;
		
		case 81:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[67]));
			break;
		
		case 82:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[68]));
			break;
		
		case 83:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[69]));
			break;
		
		case 84:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[70]));
			break;
		
		case 85:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[71]));
			break;
		
		case 86:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[72]));
			break;
		
		case 87:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[73]));
			break;
		
		case 88:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[74]));
			break;
		
		case 89:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2542[75]));
			break;
		
		case 90:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_78130[0 /*14*/].f_5 = 3;
			func_197(iVar7, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_187(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_233()//Position - 0x2FE00
{
	Global_78130[0 /*14*/].f_1 = -1;
	Global_78130[0 /*14*/].f_2 = -1;
	Global_78130[0 /*14*/].f_5 = -1;
	Global_78130[0 /*14*/].f_3 = -1;
	Global_78130[0 /*14*/].f_4 = -1;
	Global_78130[0 /*14*/].f_7 = 0;
	Global_78130[0 /*14*/].f_6 = 0;
	Global_78130[0 /*14*/].f_13 = -1;
	Global_78130[0 /*14*/].f_12 = 0;
	Global_78130[0 /*14*/] = 0;
	StringCopy(&(Global_78130[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_234(var uParam0, bool bParam1)//Position - 0x2FE79
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	uParam0->f_420 += 30;
	if (uParam0->f_420 > 255)
	{
		uParam0->f_420 = 255;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, iVar0, iVar1, iVar2, uParam0->f_420, false);
	if (uParam0->f_420 >= 255)
	{
		return 1;
	}
	return 0;
}

int func_235(int* iParam0)//Position - 0x2FEDF
{
	if ((GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
	{
		return 1;
	}
	else
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
		}
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1))
		{
		}
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
		{
		}
	}
	return 0;
}

void func_236(int* iParam0, int iParam1)//Position - 0x2FF36
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	switch (iParam1)
	{
		case 0:
			sVar0 = "MP_CELEBRATION_BG";
			sVar1 = "MP_CELEBRATION_FG";
			sVar2 = "MP_CELEBRATION";
			break;
		
		case 1:
			sVar0 = "HEIST_CELEBRATION_BG";
			sVar1 = "HEIST_CELEBRATION_FG";
			sVar2 = "HEIST_CELEBRATION";
			break;
		
		case 2:
			sVar0 = "HEIST2_CELEBRATION_BG";
			sVar1 = "HEIST2_CELEBRATION_FG";
			sVar2 = "HEIST2_CELEBRATION";
			break;
	}
	if (*iParam0 == 0)
	{
		*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
	}
	if (iParam0->f_1 == 0)
	{
		iParam0->f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar1);
	}
	if (iParam0->f_2 == 0)
	{
		iParam0->f_2 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar2);
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 != LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	}
}

void func_237(var uParam0)//Position - 0x2FFF3
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1206)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar1 = iVar0;
			if (func_12(iVar1, 0, 1))
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
			iVar0++;
		}
	}
}

void func_238(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7, var uParam8)//Position - 0x3002E
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	
	if (MISC::IS_PS3_VERSION() || MISC::IS_XBOX360_VERSION())
	{
		return;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (iParam5 == iParam5)
	{
		iParam5 = iParam5;
	}
	if (*uParam6 == 0)
	{
		return;
	}
	switch (*uParam1)
	{
		case 0:
			if (*uParam2 == -1)
			{
				iVar0 = 0;
				while (iVar0 < *uParam3)
				{
					if (iVar0 <= 7)
					{
						if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0], false))
							{
								iVar1++;
							}
						}
					}
					iVar0++;
				}
				if (iVar1 > 0)
				{
					*uParam2 = iVar1;
				}
			}
			else
			{
				bVar3 = true;
				iVar0 = 0;
				while (iVar0 < *uParam2)
				{
					if (iVar0 <= 7)
					{
						StringCopy(&cVar2, "PLAYER_NAME_0", 64);
						StringIntConCat(&cVar2, iVar0 + 1, 64);
						(*uParam7)[iVar0] = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&cVar2);
						if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED((*uParam7)[iVar0]))
						{
							bVar3 = false;
						}
					}
					iVar0++;
				}
				if (bVar3)
				{
					*uParam1++;
				}
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < *uParam2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam7)[iVar0], "SET_PLAYER_NAME");
				func_141(uParam4[iVar0 /*16*/]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar0++;
			}
			*uParam1++;
			break;
		
		case 2:
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 204))
			{
				if (*uParam8)
				{
					*uParam8 = 0;
				}
				else
				{
					*uParam8 = 1;
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TOGGLE_ON", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
			if (*uParam8)
			{
				iVar0 = 0;
				while (iVar0 < *uParam2)
				{
					if (iVar0 <= 7)
					{
						if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0], false))
							{
								if (MISC::IS_PS3_VERSION() || MISC::IS_XBOX360_VERSION())
								{
									Var5 = { PED::GET_PED_BONE_COORDS((*uParam3)[iVar0], 24818, 0f, 0f, 0f) };
									func_245(uParam3[iVar0], &Var5, iVar0);
									Var4 = { func_243(Var5, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
									GRAPHICS::DRAW_SCALEFORM_MOVIE_3D_SOLID((*uParam7)[iVar0], Var5, Var4, 0.75f, 0.5f, 0.375f, 0.75f, 0.5f, 0.375f, 2);
								}
								else
								{
									Var6 = { func_242(uParam3[iVar0], iVar0) };
									Var5 = { PED::GET_PED_BONE_COORDS((*uParam3)[iVar0], 24818, 0f, 0f, 0f) };
									Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam3)[iVar0], Var6) - ENTITY::GET_ENTITY_COORDS((*uParam3)[iVar0], true) };
									Var9 = { Var5 + Var8 };
									Var4 = { func_243(Var5, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
									Var7 = { func_241(iVar0) };
									GRAPHICS::DRAW_SCALEFORM_MOVIE_3D_SOLID((*uParam7)[iVar0], Var9, Var4, Var7, Var7, 2);
									func_239(uParam0, iVar0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			break;
	}
}

void func_239(var uParam0, int iParam1)//Position - 0x302E2
{
	int iVar0;
	struct<13> Var1;
	int iVar2;
	
	if (iParam1 > -1 && iParam1 < 16)
	{
		if (uParam0->f_402[iParam1] > -1 && uParam0->f_402[iParam1] < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_402[iParam1]);
			if (func_12(iVar0, 0, 1))
			{
				Var1 = { func_743(iVar0) };
				if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var1))
				{
					if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var1))
					{
						iVar2 = 2;
					}
					else
					{
						iVar2 = 3;
					}
				}
				else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var1))
				{
					iVar2 = 1;
				}
				else
				{
					iVar2 = 0;
				}
				if (uParam0->f_1179[iParam1] != iVar2)
				{
					switch (iVar2)
					{
						case 0:
							func_240(uParam0, 1, iParam1);
							break;
						
						case 1:
							func_240(uParam0, 4, iParam1);
							break;
						
						case 2:
							func_240(uParam0, 3, iParam1);
							break;
						
						case 3:
							func_240(uParam0, 2, iParam1);
							break;
					}
					uParam0->f_1179[iParam1] = iVar2;
				}
			}
		}
	}
}

void func_240(var uParam0, int iParam1, int iParam2)//Position - 0x303D7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_3[iParam2], "SET_SPEAKER_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

Vector3 func_241(int iParam0)//Position - 0x303FA
{
	switch (iParam0)
	{
		case 0:
			return 0.9f, 0.6f, 2f;
		
		case 1:
			return 1.2f, 0.7f, 2f;
		
		case 2:
			return 1.3f, 0.7f, 2f;
		
		case 3:
			return 1.2f, 0.7f, 2f;
		
		case 4:
			return 1.3f, 0.8f, 2f;
		
		case 5:
			return 1.4f, 0.8f, 2f;
		
		case 6:
			return 1.6f, 0.8f, 2f;
		
		case 7:
			return 1.7f, 0.9f, 2f;
		
		default:
	}
	return 1.4f, 0.8f, 2f;
}

Vector3 func_242(var uParam0, int iParam1)//Position - 0x304B4
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 0f;
	fVar1 = 0.5f;
	if (iParam1 == 5)
	{
		if (func_127(*uParam0))
		{
			fVar2 = 0.1f;
		}
		else
		{
			fVar2 = 0.05f;
		}
	}
	else if (func_127(*uParam0))
	{
		fVar2 = 0.1f;
	}
	else
	{
		fVar2 = 0.05f;
	}
	return fVar0, fVar1, fVar2;
}

Vector3 func_243(struct<2> Param0, var uParam1, struct<3> Param2)//Position - 0x3050B
{
	struct<3> Var0;
	
	if (func_244(Param2))
	{
		return 0f, 0f, 0f;
	}
	Var0.f_2 = (180f - MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1)));
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	return Var0;
}

int func_244(struct<3> Param0)//Position - 0x3054C
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_245(var uParam0, var uParam1, int iParam2)//Position - 0x30576
{
	if (iParam2 == 5)
	{
		if (func_127(*uParam0))
		{
			uParam1->f_2 = (uParam1->f_2 + 0.15f);
		}
		else
		{
			uParam1->f_2 = (uParam1->f_2 + 0.1f);
		}
	}
	else if (func_127(*uParam0))
	{
		uParam1->f_2 = (uParam1->f_2 + 0.15f);
	}
	else
	{
		uParam1->f_2 = (uParam1->f_2 + 0.1f);
	}
	if (!MISC::IS_PS3_VERSION() && !MISC::IS_XBOX360_VERSION())
	{
		uParam1->f_1 = (uParam1->f_1 - 0.5f);
	}
}

void func_246(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x305F9
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	char cVar5[128];
	struct<2> Var6;
	struct<3> Var7;
	
	if (!MISC::IS_PS3_VERSION() && !MISC::IS_XBOX360_VERSION())
	{
		return;
	}
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	if (MISC::ABSF(Var0.f_0) >= 45f)
	{
		return;
	}
	if (!(iParam2 > 2 && iParam2 < 5))
	{
		return;
	}
	if (iParam3 == 0)
	{
		return;
	}
	fVar3 = -1f;
	fVar4 = -1f;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		func_254(&Var7, 3);
		Var7.f_0 = 1;
		switch (iVar1)
		{
			case 0:
				Var7.f_1 = 0.55f;
				Var7.f_2 = 0.55f;
				break;
			
			case 1:
				Var7.f_1 = 0.475f;
				Var7.f_2 = 0.475f;
				break;
			
			case 2:
				Var7.f_1 = 0.475f;
				Var7.f_2 = 0.475f;
				break;
			
			case 3:
				Var7.f_1 = 0.4f;
				Var7.f_2 = 0.4f;
				break;
			
			case 4:
				Var7.f_1 = 0.4f;
				Var7.f_2 = 0.4f;
				break;
			
			case 5:
				Var7.f_1 = 0.475f;
				Var7.f_2 = 0.475f;
				break;
			
			case 6:
				Var7.f_1 = 0.4f;
				Var7.f_2 = 0.4f;
				break;
			
			case 7:
				Var7.f_1 = 0.4f;
				Var7.f_2 = 0.4f;
				break;
		}
		cVar5 = { *(uParam1[iVar1 /*16*/]) };
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar1], false))
			{
				Var2 = { PED::GET_PED_BONE_COORDS((*uParam0)[iVar1], 24818, 0f, 0f, 0f) };
				if (iVar1 == 5)
				{
					if (func_127((*uParam0)[iVar1]))
					{
						Var2.f_2 = (Var2.f_2 + 0.25f);
					}
					else
					{
						Var2.f_2 = (Var2.f_2 + 0.22f);
					}
				}
				else if (func_127((*uParam0)[iVar1]))
				{
					Var2.f_2 = (Var2.f_2 + 0.25f);
				}
				else
				{
					Var2.f_2 = (Var2.f_2 + 0.22f);
				}
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var2, &fVar3, &fVar4);
				if (fVar3 != -1f && fVar4 != -1f)
				{
					Var6.f_0 = fVar3;
					Var6.f_1 = fVar4;
				}
				func_247(&Var6, &Var7, &cVar5, "", 1, 0);
			}
		}
		iVar1++;
	}
}

void func_247(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x30825
{
	char* sVar0;
	
	if (!func_253(sParam2))
	{
		if (func_251())
		{
			func_250(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			if (func_253(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_249(*uParam0), func_248(uParam0->f_1), 0);
		}
	}
}

float func_248(float fParam0)//Position - 0x30887
{
	return (fParam0 + fLocal_13);
}

float func_249(float fParam0)//Position - 0x30894
{
	return (fParam0 + fLocal_12);
}

void func_250(var uParam0, bool bParam1)//Position - 0x308A1
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

int func_251()//Position - 0x3093A
{
	if (func_252())
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

bool func_252()//Position - 0x30979
{
	return Global_1574604;
}

int func_253(char* sParam0)//Position - 0x30985
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

void func_254(var uParam0, int iParam1)//Position - 0x309BE
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

void func_255()//Position - 0x30A1C
{
	int iVar0;
	
	NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(true);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(iVar0, 0, 1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, true);
		}
		iVar0++;
	}
}

void func_256(bool bParam0)//Position - 0x30A4E
{
	bool bVar0;
	
	if (func_266() || func_265())
	{
		return;
	}
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_264();
	func_263(0);
	func_262();
	HUD::THEFEED_HIDE_THIS_FRAME();
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), func_261(PLAYER::PLAYER_PED_ID(), 0))))
		{
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			func_259();
			CAM::_0x62ECFCFDEE7885D6();
		}
		PAD::DISABLE_CONTROL_ACTION(0, 25, true);
	}
	func_257();
	bVar0 = false;
	bVar0 = func_410("HQRHELP");
	if (!bVar0)
	{
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	if (!bParam0)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
}

void func_257()//Position - 0x30B2A
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_258();
}

void func_258()//Position - 0x30B3A
{
	Global_23011.f_134 = 1;
}

void func_259()//Position - 0x30B48
{
	if (!func_260(PLAYER::PLAYER_ID(), 0, 0))
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
}

int func_260(int iParam0, bool bParam1, int iParam2)//Position - 0x30B66
{
	if (Global_2689235[iParam0 /*453*/].f_230 == 99)
	{
		if ((iParam2 && Global_2689235[iParam0 /*453*/].f_233 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2689235[iParam0 /*453*/].f_230 == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_261(int iParam0, bool bParam1)//Position - 0x30BBD
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

void func_262()//Position - 0x30C42
{
	MISC::SET_BIT(&Global_8137, 4);
}

void func_263(int iParam0)//Position - 0x30C52
{
	if (func_123())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_121(0))
		{
			func_119(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_264()//Position - 0x30C85
{
	MISC::SET_BIT(&Global_8137, 7);
}

bool func_265()//Position - 0x30C95
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148;
}

bool func_266()//Position - 0x30CAB
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 5;
}

void func_267()//Position - 0x30CC0
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Lose", 0, true);
}

void func_268()//Position - 0x30CE5
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Win", 0, true);
}

void func_269(var uParam0)//Position - 0x30D0A
{
	STREAMING::REQUEST_ANIM_DICT("anim@amb@clubhouse@mini@darts@");
	if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@clubhouse@mini@darts@"))
	{
		if (!func_901(uParam0, 26))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "anim@amb@clubhouse@mini@darts@", "outro", 8f, -8f, -1, 0, 0f, false, false, false);
				func_930(uParam0, 26);
			}
		}
	}
}

void func_270(int iParam0)//Position - 0x30D61
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18209;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18199;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18210;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18202;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18198;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18213;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18214;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18217;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18218;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18211;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19100;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19099;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_278(func_279()), func_276(func_279()), func_275(), func_274(), iParam0, iVar0);
	}
	func_273(iVar0);
	func_271(iVar0);
}

void func_271(int iParam0)//Position - 0x30E86
{
	int iVar0;
	
	iVar0 = func_884(3971, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_468 = iVar0;
	func_272(3971, iVar0, -1, 1, 0);
}

void func_272(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x30ED4
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_115(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_273(int iParam0)//Position - 0x30F04
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1892703[iVar0 /*599*/].f_10.f_467 = (Global_1892703[iVar0 /*599*/].f_10.f_467 + iParam0);
	if (Global_1892703[iVar0 /*599*/].f_10.f_467 < -9999)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_467 = 9999;
	}
	else if (Global_1892703[iVar0 /*599*/].f_10.f_467 > 9999)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_467 = 9999;
	}
}

int func_274()//Position - 0x30F7E
{
	if (Global_1943929.f_3 != 0)
	{
		return Global_1943929.f_3;
	}
	return -1;
}

int func_275()//Position - 0x30F9A
{
	if (Global_1943929.f_2 != 0)
	{
		return Global_1943929.f_2;
	}
	return -1;
}

int func_276(int iParam0)//Position - 0x30FB6
{
	if (iParam0 == func_277())
	{
		return -1;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_8[1];
}

int func_277()//Position - 0x30FDB
{
	return -1;
}

int func_278(int iParam0)//Position - 0x30FE4
{
	if (iParam0 == func_277())
	{
		return -1;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_8[0];
}

int func_279()//Position - 0x31009
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_280(bool bParam0)//Position - 0x3101E
{
	return func_281(PLAYER::PLAYER_ID(), bParam0);
}

bool func_281(int iParam0, bool bParam1)//Position - 0x31030
{
	return func_282(iParam0, bParam1, 1);
}

int func_282(int iParam0, bool bParam1, int iParam2)//Position - 0x31041
{
	int iVar0;
	
	if (iParam0 == func_277())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_283(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_277() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_283(int iParam0, int iParam1)//Position - 0x3109D
{
	if (iParam0 != func_277())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_277())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_284()//Position - 0x310EC
{
	Global_32104 = 1;
}

void func_285(int iParam0)//Position - 0x310F8
{
	int iVar0;
	
	if (Global_262145.f_9035)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_286() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_286()//Position - 0x3115B
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_287(int iParam0, int iParam1)//Position - 0x31168
{
	int iVar0;
	
	iVar0 = func_291(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_290(iParam0))
	{
		func_289(iParam0, iVar0);
	}
	else
	{
		func_288(iParam0, iVar0);
	}
}

void func_288(int iParam0, int iParam1)//Position - 0x3119C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1659609 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1659612 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1659613 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1659614 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1659615 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1659616 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1659617 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1659618 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1659619 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1659620 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1659621 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1659622 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1659623 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1659624 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1659625 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_289(int iParam0, int iParam1)//Position - 0x312C1
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_290(int iParam0)//Position - 0x312DD
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_291(int iParam0)//Position - 0x31361
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

void func_292(int iParam0, int iParam1, int iParam2)//Position - 0x3137F
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 13122;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 13122)
			{
				iVar0 = func_884(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_272(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_293(int* iParam0, bool bParam1)//Position - 0x3146F
{
	if (func_49())
	{
		return;
	}
	if (!func_12(PLAYER::PLAYER_ID(), 1, 1))
	{
		bParam1 = false;
	}
	if (!Global_1574971)
	{
		if (bParam1)
		{
			if (!func_298(Global_4718592.f_168757))
			{
				if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
				{
					func_297(1);
					func_295(1, 2);
				}
				func_294(&(iParam0->f_1203), &(iParam0->f_1200));
			}
		}
		Global_1574971 = 1;
	}
}

void func_294(var uParam0, var uParam1)//Position - 0x314E0
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		if (!*uParam0)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Preload_Fade", 0, true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Pre_Screen_Stinger", "DLC_HEISTS_PREP_SCREEN_SOUNDS", false);
			*uParam0 = 1;
			if (!func_722(uParam1))
			{
				func_721(uParam1, 0, 0);
			}
		}
	}
}

void func_295(int iParam0, int iParam1)//Position - 0x3152C
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (GRAPHICS::GET_USINGSEETHROUGH())
			{
				GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1930707);
				Global_1930707 = -1f;
				GRAPHICS::SET_SEETHROUGH(false);
				bVar2 = true;
			}
			GRAPHICS::SET_NIGHTVISION(bVar0);
			MISC::SET_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 0);
		}
		else
		{
			if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
			{
				GRAPHICS::SET_NIGHTVISION(false);
				bVar2 = true;
			}
			GRAPHICS::SET_SEETHROUGH(bVar0);
			Global_1930707 = GRAPHICS::_SEETHROUGH_GET_MAX_THICKNESS();
			GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(0.5f);
			MISC::SET_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1930708 == -1)
			{
				Global_1930708 = AUDIO::GET_SOUND_ID();
			}
			if (!Global_1930708 == -1 && AUDIO::HAS_SOUND_FINISHED(Global_1930708))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "On", "GTAO_Vision_Modes_SoundSet", false);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "Switch", "GTAO_Vision_Modes_SoundSet", false);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "On", "GTAO_Vision_Modes_SoundSet", true);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "Switch", "GTAO_Vision_Modes_SoundSet", true);
					}
				}
			}
		}
	}
	else
	{
		if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
		{
			GRAPHICS::SET_NIGHTVISION(bVar0);
			MISC::CLEAR_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 0);
		}
		if (GRAPHICS::GET_USINGSEETHROUGH())
		{
			GRAPHICS::_SEETHROUGH_SET_MAX_THICKNESS(Global_1930707);
			Global_1930707 = -1f;
			GRAPHICS::SET_SEETHROUGH(bVar0);
			MISC::CLEAR_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1930708 == -1)
			{
				Global_1930708 = AUDIO::GET_SOUND_ID();
			}
			if (!Global_1930708 == -1 && AUDIO::HAS_SOUND_FINISHED(Global_1930708))
			{
				if (iParam1 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "Off", "GTAO_Vision_Modes_SoundSet", false);
				}
				else if (bVar1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "Off", "GTAO_Vision_Modes_SoundSet", true);
				}
			}
		}
	}
	func_296(!bVar0);
}

void func_296(bool bParam0)//Position - 0x31725
{
	func_632(370, bParam0, -1, 1);
}

void func_297(bool bParam0)//Position - 0x31738
{
	if (Global_4538805 != bParam0)
	{
		Global_4538805 = bParam0;
		if (bParam0)
		{
			StringCopy(&Global_4538806, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
		}
		else
		{
			StringCopy(&Global_4538806, "", 64);
		}
	}
}

bool func_298(int iParam0)//Position - 0x3176A
{
	return iParam0 == 2;
}

void func_299(int iParam0, bool bParam1, int iParam2)//Position - 0x31776
{
	int iVar0;
	
	iVar0 = Global_2869167[iParam0 /*3*/][func_115(iParam2)];
	STATS::STAT_SET_BOOL(iVar0, bParam1, true);
}

int func_300(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3179A
{
	return func_301(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_301(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x317B6
{
	var uVar0;
	
	uVar0 = func_302(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_302(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x317D9
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_327();
	if (func_253(sParam2))
	{
	}
	if (func_326())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_325(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_324(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_321(0, &iVar1);
					break;
				
				case 3:
					func_321(1, &iVar1);
					break;
				
				case 1:
					func_317(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
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
			func_315(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_309((func_113(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					func_315(1166, iVar1, -1);
				}
				func_305(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_303((func_304(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_303((func_304(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_303(int iParam0)//Position - 0x31944
{
	if (func_326())
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_5 = iParam0;
		func_289(joaat("mpply_globalxp"), iParam0);
	}
}

int func_304(int iParam0)//Position - 0x3196F
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_291(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_291(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_305(int iParam0)//Position - 0x319C0
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_743(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_307(func_308(&Var0));
			if (iVar1 == 0)
			{
				func_306(&Global_1659614, iParam0);
				func_288(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar1 == 1)
			{
				func_306(&Global_1659615, iParam0);
				func_288(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar1 == 2)
			{
				func_306(&Global_1659616, iParam0);
				func_288(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar1 == 3)
			{
				func_306(&Global_1659617, iParam0);
				func_288(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar1 == 4)
			{
				func_306(&Global_1659618, iParam0);
				func_288(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_306(var uParam0, int iParam1)//Position - 0x31A94
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_307(int iParam0)//Position - 0x31AA5
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_308(var* uParam0)//Position - 0x31B02
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

void func_309(int iParam0, int iParam1, int iParam2)//Position - 0x31B25
{
	if (func_326())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[func_115(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[func_115(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
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
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_114(PLAYER::PLAYER_ID()))
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_6 = func_314(iParam0, 1);
		}
		func_313(640, iParam0, -1, 1);
		func_272(641, func_314(iParam0, 1), -1, 1, 0);
		Global_1659759[func_115(-1)] = iParam0;
		func_310(-1109644434, 7, 0);
	}
}

void func_310(int iParam0, int iParam1, int iParam2)//Position - 0x31C4B
{
	int iVar0;
	
	if (func_312(iParam1, iParam2))
	{
		iVar0 = func_311();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_311()//Position - 0x31C78
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

int func_312(int iParam0, var uParam1)//Position - 0x31CAD
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

void func_313(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x31D33
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_115(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_115(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_115(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_115(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_115(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_115(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_115(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_115(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_115(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_115(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_115(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_115(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_115(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_115(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_115(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_115(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_115(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_115(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_115(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_115(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_115(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_115(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_115(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_115(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_115(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_115(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_115(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_115(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_115(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_115(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_115(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_115(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_115(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_115(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_115(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_115(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_115(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_115(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_115(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_115(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_115(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_115(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_115(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_115(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_115(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_115(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_115(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_115(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_115(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_115(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_115(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_115(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_115(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_115(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_314(int iParam0, bool bParam1)//Position - 0x3284E
{
	if (bParam1)
	{
	}
	return func_112(iParam0, 0);
}

void func_315(int iParam0, int iParam1, int iParam2)//Position - 0x32862
{
	int iVar0;
	
	iVar0 = func_884(iParam0, func_115(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_316(iParam0))
	{
		func_272(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_313(iParam0, iVar0, iParam2, 1);
	}
}

int func_316(int iParam0)//Position - 0x328A4
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

void func_317(int iParam0)//Position - 0x32B6E
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_320(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_319(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_318(*iParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_318(*iParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_318(int iParam0, int iParam1)//Position - 0x32C59
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_319(int iParam0, int iParam1)//Position - 0x32C7A
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_743(iParam0) };
		Global_2787518 = { func_743(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_320(int iParam0, int iParam1, int iParam2)//Position - 0x32CE7
{
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
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_321(bool bParam0, int iParam1)//Position - 0x32E92
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
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_319(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_322(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_319(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_318(*iParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_318(*iParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_322(int iParam0, int iParam1)//Position - 0x32FAA
{
	return SYSTEM::VDIST(func_323(iParam0), func_323(iParam1));
	return 0f;
}

Vector3 func_323(int iParam0)//Position - 0x32FC6
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_324(int iParam0)//Position - 0x32FD9
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_318(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_325(int iParam0)//Position - 0x33010
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_113(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_113(PLAYER::PLAYER_ID());
		}
	}
	if (func_111(8000, 0, 0) > 0)
	{
		if (func_111(8000, 0, 0) < (iParam0 + func_113(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_111(8000, 0, 0) - func_113(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_326()//Position - 0x33074
{
	return 1;
}

int func_327()//Position - 0x3307D
{
	int iVar0;
	
	if (func_335(PLAYER::PLAYER_ID()) || func_334(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10101 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10101;
		}
	}
	else if (func_332() || func_328(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23310 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23310;
		}
	}
	else if (Global_262145.f_7094 > 20000)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = Global_262145.f_7094;
	}
	return iVar0;
}

int func_328(int iParam0)//Position - 0x33115
{
	return func_329(func_330(iParam0));
}

int func_329(int iParam0)//Position - 0x33127
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_330(int iParam0)//Position - 0x33141
{
	if (func_331(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_331(int iParam0, int iParam1)//Position - 0x33164
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_332()//Position - 0x3319F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_139();
	}
	return func_333(Global_4718592.f_116524);
}

int func_333(int iParam0)//Position - 0x331C3
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_334(int iParam0)//Position - 0x331FD
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_335(int iParam0)//Position - 0x33212
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

void func_336(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x33227
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, true);
}

void func_337(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3324C
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
}

void func_338(var uParam0, int iParam1)//Position - 0x3326B
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

void func_339(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x33280
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, true);
}

void func_340(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x332A5
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_341(int iParam0, int iParam1)//Position - 0x332C4
{
	if (iParam0 == 0)
	{
		if (!BitTest(Global_113347, 9))
		{
			if ((!func_410("DARTS_SHT_USE") && !func_410("DARTS_INSTR_W")) && !func_410("DARTS_INSTR_B"))
			{
				func_412("DARTS_AIM_HLP", -1);
				MISC::SET_BIT(&Global_113347, 9);
			}
		}
		else if (iParam1 && !BitTest(Global_113347, 7))
		{
			if ((!func_410("DARTS_AIM_HLP") && !func_410("DARTS_INSTR_W")) && !func_410("DARTS_INSTR_B"))
			{
				func_412("DARTS_CLOCK", -1);
				MISC::SET_BIT(&Global_113347, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(Global_113347, 8))
		{
			if ((!func_410("DARTS_SHT_USE") && !func_410("DARTS_INSTR_W")) && !func_410("DARTS_INSTR_B"))
			{
				func_412("DARTS_STD_HLP", -1);
				MISC::SET_BIT(&Global_113347, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_182 && !func_410("DARTS_SHT_USE")) && !func_410("DARTS_INSTR_W")) && !func_410("DARTS_INSTR_B"))
		{
			if (!BitTest(Global_113347, 2))
			{
				func_412("DARTS_FST_HLP", -1);
				MISC::SET_BIT(&Global_113347, 2);
			}
			iLocal_182 = 1;
		}
	}
}

void func_342(int* iParam0, bool bParam1)//Position - 0x3340A
{
	int iVar0;
	
	iVar0 = SYSTEM::ROUND(((iParam0->f_7 - func_731(iParam0)) * 1000f));
	if (iVar0 < 0 || iParam0->f_12)
	{
		iVar0 = 0;
	}
	if (!iParam0->f_10)
	{
		if (bParam1)
		{
			if (iVar0 < 6000)
			{
				func_343(iVar0, "DARTS_SHT_CLCK", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_343(iVar0, "DARTS_SHT_CLCK", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
		else
		{
			func_343(iVar0, "DARTS_SHT_CLCK", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
}

void func_343(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x334A6
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_345(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_344(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_344(int iParam0, int iParam1)//Position - 0x33603
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_345(int iParam0, int iParam1)//Position - 0x3361C
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

void func_346(var uParam0)//Position - 0x33632
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_416(&uLocal_1045, func_347(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_414(&uLocal_1045, 0))
			{
				func_413(&uLocal_1045);
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

char* func_347(int iParam0)//Position - 0x336B3
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

float func_348(struct<3> Param0, bool bParam1)//Position - 0x336E0
{
	return func_349(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, bParam1);
}

float func_349(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x336FA
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1, bParam2);
}

void func_350(int* iParam0, int iParam1)//Position - 0x33724
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_351(int* iParam0, int iParam1)//Position - 0x33734
{
	return BitTest(*iParam0, iParam1);
}

void func_352(int* iParam0, int iParam1)//Position - 0x33742
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_353(var uParam0)//Position - 0x33752
{
	func_354();
	uParam0->f_670 = 3;
	func_729(&(uParam0->f_666), 15, 0);
	func_729(&(uParam0->f_666), 16, 0);
	func_729(&(uParam0->f_666), 17, 0);
}

void func_354()//Position - 0x33788
{
	int iVar0;
	
	Local_224.f_66 = -1;
	Local_224.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_224.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_224.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_224.f_9[iVar0 /*7*/].f_5 = 0;
		Local_224.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_224.f_5 = 0;
	Local_224.f_5.f_1 = -1f;
	Local_224.f_5.f_2 = 0;
	Local_224.f_0 = 0;
	Local_224.f_1 = 0;
}

float func_355(int iParam0)//Position - 0x33803
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.10272f;
	}
	if (iParam0 < 50)
	{
		return 0.09844f;
	}
	if (iParam0 < 70)
	{
		return 0.09416f;
	}
	return 0.08988f;
}

float func_356(int iParam0)//Position - 0x33858
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.0768f;
	}
	if (iParam0 < 50)
	{
		return 0.0736f;
	}
	if (iParam0 < 70)
	{
		return 0.0704f;
	}
	return 0.0672f;
}

int func_357(int iParam0, var uParam1)//Position - 0x338AD
{
	if (iParam0 >= 10)
	{
		if (!BitTest(Global_113386.f_18970.f_6, 17))
		{
			*uParam1 = 17;
			return 1;
		}
	}
	return 0;
}

void func_358()//Position - 0x338D6
{
	func_360(0);
	func_359(4, 1, -1);
	func_359(6, 1, -1);
	func_359(7, 1, -1);
	func_359(3, 1, -1);
	func_359(1, 1, -1);
	func_359(2, 1, -1);
	func_359(11, 1, -1);
	func_359(13, 1, -1);
	func_359(14, 1, -1);
	func_359(16, 1, -1);
}

void func_359(int iParam0, bool bParam1, int iParam2)//Position - 0x3392D
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1648034.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1648034.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1648034.f_1046), iParam0);
			}
			break;
	}
}

void func_360(int iParam0)//Position - 0x3397C
{
	Global_2815059.f_4598 = iParam0;
}

void func_361(var uParam0, bool bParam1)//Position - 0x3398D
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		if (bParam1)
		{
			if (!func_728(&(uParam0->f_666), 15) && !iLocal_179 > 0)
			{
				func_26(&(uParam0->f_509), 0, 0, 0, 1);
				func_25(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_25(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_371(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_25(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_25(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_370(&(uParam0->f_509), 1);
				func_729(&(uParam0->f_666), 8, 0);
				func_729(&(uParam0->f_666), 16, 0);
				func_729(&(uParam0->f_666), 17, 0);
			}
			else if (iLocal_179 > 0 && !func_728(&(uParam0->f_666), 17))
			{
				func_26(&(uParam0->f_509), 0, 0, 0, 1);
				func_25(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_25(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_371(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_25(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_370(&(uParam0->f_509), 1);
				func_729(&(uParam0->f_666), 8, 0);
				func_729(&(uParam0->f_666), 16, 0);
				func_729(&(uParam0->f_666), 15, 0);
			}
		}
		else if (!func_728(&(uParam0->f_666), 16))
		{
			func_26(&(uParam0->f_509), 0, 0, 0, 1);
			func_25(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_370(&(uParam0->f_509), 1);
			func_729(&(uParam0->f_666), 16, 1);
			func_729(&(uParam0->f_666), 8, 0);
			func_729(&(uParam0->f_666), 15, 0);
			func_729(&(uParam0->f_666), 17, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		func_369(func_757(func_728(&(uParam0->f_666), 16), 1, 1));
		func_362(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if (func_728(&(uParam0->f_666), 15))
	{
		func_729(&(uParam0->f_666), 15, 0);
	}
}

void func_362(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x33BD0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_368(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_367(uParam0->f_1, 256) || (func_367(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_367(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_366(sVar3);
						}
						bVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_365(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_367(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_364(bParam4, func_364(func_367(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_27(&(uParam0->f_1), 256);
		func_363(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_363(var uParam0, int iParam1)//Position - 0x33E8A
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_364(bool bParam0, float fParam1, float fParam2)//Position - 0x33E9F
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_365(char* sParam0)//Position - 0x33EB6
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_366(char* sParam0)//Position - 0x33EC8
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_367(var uParam0, int iParam1)//Position - 0x33ED6
{
	return (uParam0 && iParam1) != 0;
}

int func_368(var uParam0)//Position - 0x33EE5
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_27(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_369(int iParam0)//Position - 0x33F0C
{
	Global_1649593.f_1163 = iParam0;
}

void func_370(var uParam0, bool bParam1)//Position - 0x33F1D
{
	if (bParam1)
	{
		func_27(&(uParam0->f_1), 1024);
	}
	else
	{
		func_363(&(uParam0->f_1), 1024);
	}
}

int func_371(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x33F43
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

bool func_372()//Position - 0x34010
{
	return Global_1575058;
}

void func_373(var uParam0)//Position - 0x3401C
{
	uParam0->f_4.f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_4.f_5 = { 0f, 0f, 0f };
	uParam0->f_4.f_8 = { 0f, 0f, 0f };
	uParam0->f_4.f_23 = 0;
	uParam0->f_4.f_24 = 0;
	uParam0->f_4.f_20 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_4));
	}
}

int func_374(int* iParam0)//Position - 0x34075
{
	iParam0->f_2 = { 0f, -2.3685f, -0.2f };
	iParam0->f_5 = { 0f, 0f, 0f };
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_20 = 0;
	iParam0->f_23 = 0;
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	return 1;
}

void func_375(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x340C5
{
	char* sVar0;
	
	sVar0 = func_376(iParam5);
	if (iParam5 != 5)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_724(&(uParam0->f_2));
	uParam0->f_1 = iParam4;
	uParam0->f_9 = iParam6;
}

char* func_376(int iParam0)//Position - 0x3412F
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_377(var uParam0, int iParam1)//Position - 0x3419E
{
	struct<8> Var0;
	
	Var0.f_0 = 685163154;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_6 = uParam0;
	Var0.f_7 = iParam1;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_13(1, 1));
}

void func_378(var uParam0, var uParam1, int iParam2)//Position - 0x341D0
{
	int iVar0;
	
	uParam0->f_2 = { uParam1->f_4.f_2 };
	uParam0->f_5 = { uParam1->f_4.f_5 };
	uParam0->f_8 = { uParam1->f_4.f_8 };
	uParam0->f_17 = { uParam1->f_4.f_17 };
	uParam0->f_11 = { uParam1->f_4.f_11 };
	uParam0->f_23 = uParam1->f_4.f_23;
	uParam0->f_24 = uParam1->f_4.f_24;
	iVar0 = iLocal_159;
	iParam2 = iParam2;
	*uParam0 = OBJECT::CREATE_OBJECT(iVar0, Local_171, false, false, false);
}

void func_379()//Position - 0x3424A
{
	struct<2> Var0;
	
	Var0.f_0 = 1275703771;
	Var0.f_1 = PLAYER::PLAYER_ID();
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_13(1, 1));
}

void func_380(var uParam0, var uParam1, bool bParam2)//Position - 0x34270
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	Var3 = { uParam0->f_8 };
	Var3.f_0 = (Var3.f_0 + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, Var3.f_0, Var3.f_2);
	fVar0 = func_381(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, false, 0, false);
	}
	if (fVar0 < 0.009f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else
		{
			uParam0->f_21 = 1;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, false, 0, false);
				}
				iVar5 = (iLocal_164[iVar4] * uParam0->f_21);
				uParam0->f_20 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

float func_381(struct<3> Param0)//Position - 0x344A4
{
	return SYSTEM::SQRT(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

void func_382(int iParam0, int iParam1, bool bParam2)//Position - 0x344BF
{
	struct<6> Var0;
	
	Var0.f_0 = -1425371040;
	Var0.f_1 = iParam0;
	switch (iParam1)
	{
		case 0:
			MISC::SET_BIT(&(Var0.f_4), 1);
			Var0.f_5 = 1;
			break;
		
		case 1:
			MISC::SET_BIT(&(Var0.f_4), 2);
			Var0.f_5 = -1;
			break;
		
		case 2:
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 3:
			MISC::SET_BIT(&(Var0.f_4), 4);
			break;
	}
	if (!bParam2)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 6, func_13(1, 1));
	}
	else
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 6, func_11(1));
	}
}

int func_383(var uParam0, var uParam1, struct<3> Param2)//Position - 0x34551
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	Var2 = { Param2 - uParam1->f_1 };
	fVar3 = MISC::GET_FRAME_TIME();
	Var1 = { uParam0->f_5 * Vector(fVar3, fVar3, fVar3) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var1 };
	if (uParam0->f_2.f_1 > (Var2.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(*uParam0, true);
		return 1;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_165), uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, true, false, false, true);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar3));
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_384(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x3462B
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (iLocal_161 == 0 && iParam2 == 1)
	{
		func_385("Darts", "Dart_Reticules", &Local_170, 1, 0, 4, 0);
	}
	fVar2 = MISC::GET_FRAME_TIME();
	Var1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_165), uParam0->f_11.f_2) };
		ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, true, false, false, true);
		return 1;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_165), uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, true, false, false, true);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar2));
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_385(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x3474B
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_392(&Var0);
			break;
		
		case 1:
			func_391(&Var0);
			break;
		
		case 5:
			func_390(&Var0);
			break;
		
		case 6:
			func_389(&Var0);
			break;
		
		case 7:
			func_388(&Var0);
			break;
		
		case 8:
			func_387(&Var0);
			break;
		
		case 9:
			func_386(&Var0);
			break;
	}
	if (func_251())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_249(Var0.f_0), func_248(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_249(Var0.f_0), func_248(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_386(var uParam0)//Position - 0x34852
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_387(var uParam0)//Position - 0x3486C
{
	uParam0->f_7 = 2;
}

void func_388(var uParam0)//Position - 0x34879
{
	uParam0->f_7 = 5;
}

void func_389(var uParam0)//Position - 0x34886
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_390(var uParam0)//Position - 0x348A3
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_391(var uParam0)//Position - 0x348C0
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_392(var uParam0)//Position - 0x348E9
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_393(var uParam0, int iParam1, bool bParam2)//Position - 0x34911
{
	if (bParam2)
	{
	}
	*uParam0 = iParam1;
	if (bParam2)
	{
	}
}

void func_394(var uParam0, int iParam1, bool bParam2)//Position - 0x3492E
{
	bool bVar0;
	
	bVar0 = BitTest(uParam0->f_30, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			MISC::SET_BIT(&(uParam0->f_30), iParam1);
		}
	}
	else if (bVar0)
	{
		MISC::CLEAR_BIT(&(uParam0->f_30), iParam1);
	}
}

void func_395(var uParam0, struct<25> Param1, var uParam2)//Position - 0x34966
{
	uParam0->f_4.f_2 = { Param1.f_2 };
	uParam0->f_4.f_5 = { Param1.f_5 };
	uParam0->f_4.f_8 = { Param1.f_8 };
	uParam0->f_4.f_17 = { Param1.f_17 };
	uParam0->f_4.f_11 = { Param1.f_11 };
	uParam0->f_4.f_23 = Param1.f_23;
	uParam0->f_4.f_24 = Param1.f_24;
}

void func_396(struct<3> Param0)//Position - 0x349C8
{
	struct<3> Var0;
	
	Var0.f_0 = -1548998837;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_13(1, 1));
}

int func_397(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x349F8
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_183)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					iLocal_184 = 0;
					iLocal_185 = 0;
					iLocal_187 = 0;
					if (func_407(uParam0, uParam1, 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						iLocal_183 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(PAD::IS_CONTROL_JUST_PRESSED(2, 223) && iLocal_187) && !bParam4)
				{
					iLocal_184 = 1;
					iLocal_185 = 1;
					if (!bLocal_186)
					{
						func_406(uParam0, *uParam2);
						bLocal_186 = true;
					}
					else
					{
						if (!bParam5)
						{
							func_405();
						}
						func_403(uParam0, iParam6);
						func_402(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_172 };
						iLocal_184 = 1;
						iLocal_185 = 1;
					}
					if (iLocal_184 && iLocal_185)
					{
						if (!iLocal_183)
						{
							HUD::CLEAR_PRINTS();
							iLocal_183 = 1;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_183)
			{
				func_385("Darts", "Dart_Reticules", &Local_169, 1, 0, 4, 0);
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_407(uParam0, uParam1, 1))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						iLocal_183 = 0;
						return 1;
					}
				}
			}
			else if (!func_398(uParam0))
			{
				if (!bLocal_186)
				{
					func_406(uParam0, *uParam2);
				}
				else
				{
					func_405();
					func_403(uParam0, iParam6);
					func_402(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_183)
			{
				iLocal_183 = 1;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}
	return 0;
}

int func_398(var uParam0)//Position - 0x34C6D
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = PAD::GET_CONTROL_NORMAL(2, 220);
	fVar2 = PAD::GET_CONTROL_NORMAL(2, 221);
	iLocal_207 = SYSTEM::ROUND(fVar2);
	switch (iLocal_206)
	{
		case 0:
			if (iLocal_207 > 120)
			{
				iLocal_208 = MISC::GET_GAME_TIMER();
				iLocal_206 = 1;
			}
			if (iLocal_207 < -100)
			{
				iLocal_212 = SYSTEM::ROUND(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_207 > 120)
			{
				iLocal_208 = MISC::GET_GAME_TIMER();
			}
			else if ((iLocal_207 < 120 && iLocal_207 > -120) && (MISC::GET_GAME_TIMER() - iLocal_208) > 500)
			{
				iLocal_206 = 0;
			}
			else if (iLocal_207 < -100)
			{
				iLocal_209 = MISC::GET_GAME_TIMER();
				if ((iLocal_209 - iLocal_208) < 500)
				{
					iLocal_212 = SYSTEM::ROUND(fVar1);
					iLocal_210 = (iLocal_209 - iLocal_208);
					iLocal_206 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_210 > iLocal_211)
			{
				if (iLocal_210 > 100 && iLocal_210 < 150)
				{
					fLocal_215 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_215);
				}
				else
				{
					fLocal_214 = (SYSTEM::TO_FLOAT(iLocal_211) / SYSTEM::TO_FLOAT(iLocal_210));
					fLocal_215 = ((1f - fLocal_214) * fLocal_218);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_215);
				}
			}
			else
			{
				fLocal_215 = 0f;
			}
			if (iLocal_212 > 7)
			{
				fLocal_216 = (SYSTEM::TO_FLOAT(iLocal_212) / fLocal_221);
				fLocal_217 = (fLocal_219 * fLocal_216);
				uParam0->f_8 = (uParam0->f_8 + fLocal_217);
			}
			else if (iLocal_212 < -7)
			{
				fLocal_216 = (SYSTEM::TO_FLOAT(iLocal_212) / fLocal_220);
				fLocal_217 = (fLocal_219 * fLocal_216);
				uParam0->f_8 = (uParam0->f_8 - fLocal_217);
			}
			else
			{
				fLocal_217 = 0f;
			}
			if (fLocal_215 < 0.066477f && fLocal_217 == 0f)
			{
				func_401();
			}
			else if (fLocal_215 <= 0.066477f && fLocal_217 < 0.06f)
			{
				func_400();
			}
			else
			{
				func_399();
			}
			iVar0 = 1;
			iLocal_206 = 0;
			break;
	}
	return iVar0;
}

void func_399()//Position - 0x34E4C
{
	Local_170.f_4 = 210;
	Local_170.f_5 = 23;
	Local_170.f_6 = 19;
}

void func_400()//Position - 0x34E66
{
	Local_170.f_4 = 183;
	Local_170.f_5 = 137;
	Local_170.f_6 = 0;
}

void func_401()//Position - 0x34E7F
{
	Local_170.f_4 = 16;
	Local_170.f_5 = 184;
	Local_170.f_6 = 10;
}

void func_402(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x34E99
{
	struct<3> Var0;
	
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_165), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_165), uParam0->f_14.f_2) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_169, &(Local_169.f_1));
	if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_180)
		{
			func_385("Darts", "Dart_Reticules_Zoomed", &Local_169, 1, 0, 4, 0);
		}
		else
		{
			func_385("Darts", "Dart_Reticules", &Local_169, 1, 0, 4, 0);
		}
		if (!iLocal_187)
		{
			iLocal_187 = 1;
		}
	}
}

void func_403(var uParam0, int iParam1)//Position - 0x34F48
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218);
	fVar4 = PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219);
	fVar5 = PAD::GET_CONTROL_NORMAL(2, 220);
	fVar6 = PAD::GET_CONTROL_NORMAL(2, 221);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (MISC::ABSF(fVar5) > MISC::ABSF(fVar3) || MISC::ABSF(fVar6) > MISC::ABSF(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (PAD::IS_CONTROL_PRESSED(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_404(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_404(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_178 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_178 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_178 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_178 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_178 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_178 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_178 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_178 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_175), (0f + fLocal_175));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_174), (0f + fLocal_174));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_175), (0f + fLocal_175));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_174), (0f + fLocal_174));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_178 = 0.5f;
		if (iLocal_206 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

float func_404(float fParam0, float fParam1, float fParam2)//Position - 0x3533A
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_405()//Position - 0x35361
{
	if (PAD::IS_CONTROL_PRESSED(2, 227))
	{
		fLocal_178 = 0.3f;
	}
	else
	{
		fLocal_178 = 0.1f;
	}
	if (PAD::IS_CONTROL_PRESSED(2, 229))
	{
		if (bLocal_180)
		{
			if (SYSTEM::TIMERA() > iLocal_213)
			{
				fLocal_174 = fLocal_176;
				fLocal_175 = fLocal_177;
				fLocal_178 = 0.1f;
				bLocal_180 = false;
			}
		}
		else if (iLocal_179 < 1)
		{
			fLocal_174 = 0.03f;
			fLocal_175 = 0.05f;
			fLocal_178 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_180 = true;
			iLocal_179++;
		}
		else if ((((((!func_410("DARTS_FST_HLP") && !func_410("DARTS_AIM_HLP")) && !func_410("DARTS_CLOCK")) && !func_410("DARTS_STD_HLP")) && !func_410("DARTS_INSTR_W")) && !func_410("DARTS_INSTR_B")) && !iLocal_181)
		{
			iLocal_181 = 1;
			if (!BitTest(Global_113347, 1))
			{
				func_412("DARTS_SHT_USE", -1);
				MISC::SET_BIT(&Global_113347, 1);
			}
		}
	}
	else if (bLocal_180)
	{
		fLocal_174 = fLocal_176;
		fLocal_175 = fLocal_177;
		fLocal_178 = 0.1f;
		bLocal_180 = false;
	}
}

void func_406(var uParam0, struct<4> Param1, var uParam2, var uParam3)//Position - 0x3546F
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_172 };
}

int func_407(var uParam0, var uParam1, bool bParam2)//Position - 0x354C3
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Local_171, true, false, false, true);
	}
	else
	{
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, Local_171, false, false, false);
	}
	bLocal_180 = false;
	fLocal_178 = 0.1f;
	fLocal_174 = fLocal_176;
	fLocal_175 = fLocal_177;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_408(uParam0);
	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
	Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, Local_172) };
	Var2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_165), uParam0->f_14.f_2) };
	fVar5 = MISC::GET_HEADING_FROM_VECTOR_2D((Var1.f_0 - Var2.f_0), (Var1.f_1 - Var2.f_1));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_17 = { fVar3, fVar4, fVar5 };
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
	iLocal_184 = 0;
	bLocal_186 = false;
	if (bParam2)
	{
		func_385("Darts", "Dart_Reticules", &Local_169, 1, 0, 4, 0);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_165), uParam0->f_8.f_2) };
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_170, &(Local_170.f_1));
	return 1;
}

void func_408(var uParam0)//Position - 0x355FA
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_172 - uParam0->f_8 };
	fVar1 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar2 - 180f);
	fVar3 = (MISC::TAN(uParam0->f_17.f_2) * fVar4);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar3);
	Var0 = { Local_172 - uParam0->f_11 };
	fVar1 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
}

void func_409(int* iParam0, bool bParam1)//Position - 0x356A6
{
	int iVar0;
	
	iVar0 = SYSTEM::ROUND(((iParam0->f_9 - func_731(iParam0)) * 1000f));
	if (iVar0 < 0 || iParam0->f_12)
	{
		iVar0 = 0;
	}
	if (!iParam0->f_10)
	{
		if (bParam1)
		{
			if (iVar0 < 6000)
			{
				func_343(iVar0, "DARTS_SHT_CLCK", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_343(iVar0, "DARTS_SHT_CLCK", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
		else
		{
			func_343(iVar0, "DARTS_SHT_CLCK", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
}

bool func_410(char* sParam0)//Position - 0x35742
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_411(var uParam0, bool bParam1)//Position - 0x35755
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		if (bParam1)
		{
			if (!func_728(&(uParam0->f_666), 15) && !iLocal_179 > 0)
			{
				func_26(&(uParam0->f_509), 0, 0, 0, 1);
				func_25(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_25(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_371(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_370(&(uParam0->f_509), 1);
				func_729(&(uParam0->f_666), 8, 0);
				func_729(&(uParam0->f_666), 16, 0);
			}
		}
		else if (!func_728(&(uParam0->f_666), 16))
		{
			func_26(&(uParam0->f_509), 0, 0, 0, 1);
			func_25(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_370(&(uParam0->f_509), 1);
			func_729(&(uParam0->f_666), 16, 1);
			func_729(&(uParam0->f_666), 8, 0);
			func_729(&(uParam0->f_666), 15, 0);
			func_729(&(uParam0->f_666), 17, 0);
		}
		func_369(1);
		func_362(&(uParam0->f_509), 1128792064, 1, 0, 0, 1065353216);
	}
	else if (func_728(&(uParam0->f_666), 15))
	{
		func_729(&(uParam0->f_666), 15, 0);
	}
}

void func_412(char* sParam0, int iParam1)//Position - 0x3589C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_413(var uParam0)//Position - 0x358B3
{
	uParam0->f_8 = 0;
	func_891(&(uParam0->f_2));
	func_891(&(uParam0->f_5));
}

int func_414(var uParam0, int iParam1)//Position - 0x358D0
{
	if (!func_898(&(uParam0->f_2)))
	{
		func_724(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_898(&(uParam0->f_5)))
			{
				func_724(&(uParam0->f_5));
				func_415(uParam0, 1051260355);
			}
		}
		if (func_898(&(uParam0->f_5)))
		{
			if (func_896(&(uParam0->f_5)) > 0.33f)
			{
				func_891(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_896(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_898(&(uParam0->f_5)))
		{
			func_724(&(uParam0->f_5));
			func_415(uParam0, 1051260355);
		}
		else if (func_896(&(uParam0->f_5)) > 0.33f)
		{
			func_891(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_415(var uParam0, float fParam1)//Position - 0x359D3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_416(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x359F9
{
	char* sVar0;
	
	sVar0 = func_376(iParam4);
	if (iParam4 != 5)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_365(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_724(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

int func_417(int* iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x35A59
{
	*uParam2 = func_451(iParam3);
	if (func_419((uParam1[0 /*97*/])->f_82, &(uParam2->f_1[0])))
	{
	}
	else
	{
		return 0;
	}
	if (!func_901(iParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/], 16))
	{
		if (func_419((uParam1[iLocal_232 /*97*/])->f_82, &(uParam2->f_1[iLocal_232])))
		{
		}
		else
		{
			return 0;
		}
	}
	if ((func_901(iParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/], 16) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iLocal_232])) || (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[0]) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iLocal_232])))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[0], true, false);
			func_418(PLAYER::PLAYER_PED_ID(), uParam2->f_1[0], 0);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam2->f_1[0], *uParam2, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1000f, 0);
		}
		else
		{
			return 0;
		}
		if (!func_901(iParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/], 16))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iLocal_232]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[iLocal_232], true, false);
				func_418(PLAYER::PLAYER_PED_ID(), uParam2->f_1[iLocal_232], 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam2->f_1[iLocal_232], *uParam2, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1000f, 0);
			}
			else
			{
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_4))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam2->f_4, *uParam2, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, -1000f, 131072, 1000f);
		}
		PED::SET_SYNCHRONIZED_SCENE_PHASE(*uParam2, 0.45f);
		return 1;
	}
	return 0;
}

int func_418(int iParam0, int iParam1, bool bParam2)//Position - 0x35C11
{
	if (func_977(iParam0) && func_977(iParam1))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iParam1, bParam2);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam1, iParam0, bParam2);
		return 1;
	}
	return 0;
}

int func_419(int iParam0, var uParam1)//Position - 0x35C46
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = PED::CLONE_PED(iVar0, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
		if (func_281(iParam0, 1))
		{
			if (func_450(iParam0) == 2)
			{
				if (func_449(iParam0))
				{
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_448(iParam0, 0), false);
				if (GRAPHICS::_OVERRIDE_PED_BADGE_TEXTURE(*uParam1, func_448(iParam0, 0), func_445(iParam0, 2)))
				{
				}
			}
		}
		if (!PED::IS_PED_INJURED(*uParam1))
		{
			if (func_420(iVar0))
			{
				PED::SET_PED_HELMET(*uParam1, true);
			}
			else
			{
				PED::SET_PED_HELMET(*uParam1, false);
				PED::REMOVE_PED_HELMET(*uParam1, true);
				if (PED::GET_PED_PROP_INDEX(*uParam1, 1) == 26 || PED::GET_PED_PROP_INDEX(iVar0, 1) == 26)
				{
					PED::CLEAR_PED_PROP(*uParam1, 1);
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x35D27
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !func_421(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_422(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_421(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x35D5A
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_129(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_129(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_422(int iParam0, int iParam1, int iParam2)//Position - 0x35E28
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_429(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_429(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_423(iParam0, iParam2);
			}
		}
		else
		{
			return func_133(iParam0, iParam1);
		}
	}
	return -99;
}

int func_423(int iParam0, int iParam1)//Position - 0x35EC9
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_428(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_424(iParam0, iVar0, iVar1, iParam1);
}

int func_424(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x35F0F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_428(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_426(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_426(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_425(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_428(iParam3);
}

int func_425(int iParam0, int iParam1)//Position - 0x3600B
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_426(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x36149
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 12)
	{
		iVar2 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar1, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (func_427(iParam0) + iVar1);
			}
			iVar1++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		iVar3 = FILES::_0x6CEBE002E58DEE97(iParam1);
		if (iVar3 != -1)
		{
			return (func_132(iParam0) + iVar3);
		}
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_131(iParam2));
		iVar4 = FILES::_0x96E2929292A4DB77(iParam1);
		if (iVar4 != -1)
		{
			return (func_130(iParam0, func_131(iParam2)) + iVar4);
		}
	}
	return -99;
}

int func_427(int iParam0)//Position - 0x36204
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 53;
			break;
		
		case joaat("player_one"):
			return 47;
			break;
		
		case joaat("player_two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 26;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 28;
			break;
	}
	return -99;
}

int func_428(int iParam0)//Position - 0x36263
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_429(int iParam0, int iParam1, int iParam2)//Position - 0x362E9
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { func_184(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_441(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_429(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_438(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_429(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { func_184(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_429(iParam0, 14, iVar6))
										{
											if (!func_433(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_133(iParam0, iVar4);
						Global_78130[2 /*14*/] = { func_184(iVar0, iVar4, iVar1, -1) };
						if (!func_433(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (func_884(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_438(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_429(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::_GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::_GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::_GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_131(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_131(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (func_432(iVar0, 11, func_133(iParam0, 11), -1))
				{
					if (func_431(iVar0, 4, iParam2, &uVar18))
					{
						return func_429(iParam0, 4, uVar18);
					}
				}
				else if (func_430(iVar0, 4, iParam2, &uVar18))
				{
					return func_429(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_430(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x36743
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_129(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_426(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_431(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x367EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_129(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_426(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_432(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x36894
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_129(iParam0, iParam2, 11, 4);
						}
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_433(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x368E7
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_438(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_437(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_436(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_435(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_434(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_436(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_435(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_434(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_436(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_435(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_434(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_434(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x36EEB
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_129(iParam0, iParam2, 14, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_129(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_129(iParam0, iParam2, 1, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_129(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_129(iParam0, iParam2, 14, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_129(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_129(iParam0, iParam2, 1, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_129(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_435(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37168
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_129(iParam0, iParam2, 1, 3);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_129(iParam0, iParam2, 1, 4);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_436(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3758D
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_129(iParam0, iParam2, 14, 3);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_129(iParam0, iParam2, 14, 4);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_437(int iParam0, int iParam1, int iParam2)//Position - 0x37880
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_438(int iParam0, int iParam1)//Position - 0x37919
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_440(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_440(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_440(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_440(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_440(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_440(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_440(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_440(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_440(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_440(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_440(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_439(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_440(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_440(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_440(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_440(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_440(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_440(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_440(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_440(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_440(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_440(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_439(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_440(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_440(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_440(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_440(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_440(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_440(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_440(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_440(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_440(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_440(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_439(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_440(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_440(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_440(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_440(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_440(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_440(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_440(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_440(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_440(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_440(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_440(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_440(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_440(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_440(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_440(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_440(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_440(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_440(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_440(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_440(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_440(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_440(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_440(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_440(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_440(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_440(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_439(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_440(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_440(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_440(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_440(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_440(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_440(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_440(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_440(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_440(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_440(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_440(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_440(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_440(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_440(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_440(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_440(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_440(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_440(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_440(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_440(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_440(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_440(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_440(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_440(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_440(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_439(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_439(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x382AD
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_426(iParam1, Var2.f_0, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_440(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x383D7
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_441(int iParam0, int iParam1)//Position - 0x3841F
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_113386.f_9085.f_99.f_58[120])
					{
						func_444(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_444(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_444(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_444(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_444(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_444(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_444(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[0], Global_113386.f_2363.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_444(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_444(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_444(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_444(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_444(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_444(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_444(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_444(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_444(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_444(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_444(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_444(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_444(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_444(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_444(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_444(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_444(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_444(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_444(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_444(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_444(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_444(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_444(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_444(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_444(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_444(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_444(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_444(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_444(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_444(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_444(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_444(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_444(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_444(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_444(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_444(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_444(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_444(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_444(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_444(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_444(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_444(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_444(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_444(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_444(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_444(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_444(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_442(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_444(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_444(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_444(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[1], Global_113386.f_2363.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_444(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_444(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_444(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_444(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_444(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_444(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_444(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_444(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_444(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_444(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_444(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_444(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_444(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_444(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_444(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_444(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_444(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_444(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_444(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_444(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_444(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_444(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_444(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_444(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_444(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_444(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_444(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_444(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_444(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_444(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_444(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_444(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_444(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_444(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_444(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_444(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_444(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_444(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_444(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_444(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_444(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_444(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_444(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_444(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_442(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_444(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_444(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_444(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_444(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_444(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[2], Global_113386.f_2363.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_444(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_444(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_444(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_444(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_444(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_444(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_444(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_444(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_444(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_444(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_444(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_444(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_444(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_444(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_444(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_444(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_444(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_444(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_444(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_444(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_444(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_444(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_444(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_444(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_444(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_444(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_444(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_444(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_444(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_444(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_444(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_444(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_444(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_444(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_444(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_444(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_444(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_444(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_444(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_444(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_444(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_444(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_444(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_442(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_444(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_444(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_444(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_444(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_444(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_444(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_444(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_444(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_444(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_444(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_444(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_444(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_444(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_444(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_444(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_444(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_444(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_444(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_444(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_444(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_444(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_444(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_444(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_444(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_444(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_444(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_442(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_444(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_444(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_444(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_444(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_444(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_444(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_444(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_444(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_444(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_444(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_444(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_444(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_444(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_444(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_444(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_444(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_444(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_444(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_444(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_444(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_444(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_444(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_444(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_444(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_444(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_444(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_444(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_444(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_442(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_442(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A267
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var3);
						FILES::GET_SHOP_PED_COMPONENT(Var2.f_0, &Var3);
						if (Var2.f_0 != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_443(Var2.f_2)] = Var2.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_443(Var2.f_2)] = func_426(iParam1, Var2.f_0, func_443(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[func_443(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_443(int iParam0)//Position - 0x3A451
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_444(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3A501
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

char* func_445(int iParam0, int iParam1)//Position - 0x3A572
{
	int iVar0;
	
	if (iParam0 == func_277())
	{
		return "";
	}
	if (iParam1 == 1)
	{
		return "MPClubPreset1";
	}
	iVar0 = func_447(iParam0);
	if (iVar0 != func_277())
	{
		iParam0 = iVar0;
	}
	if (BitTest(Global_103224, iParam0) || iParam1 == 2)
	{
		return func_446(&(Global_102967[iParam0 /*8*/]));
	}
	return "";
}

var func_446(var uParam0)//Position - 0x3A5D4
{
	return uParam0;
}

int func_447(int iParam0)//Position - 0x3A5DE
{
	if (iParam0 != func_277())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_277();
}

char* func_448(int iParam0, int iParam1)//Position - 0x3A601
{
	return "MPClubEmblemSmall";
}

bool func_449(int iParam0)//Position - 0x3A60D
{
	return func_283(iParam0, 1);
}

int func_450(int iParam0)//Position - 0x3A61C
{
	if (func_281(iParam0, 1))
	{
		if (iParam0 != -1)
		{
			return Global_1892703[iParam0 /*599*/].f_10.f_76.f_21;
		}
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x3A64A
{
	switch (iParam0)
	{
		case 0:
			return PED::CREATE_SYNCHRONIZED_SCENE(1119.07f, -3157.373f, -36.63106f, 0f, 0f, -72f, 2);
			break;
		
		case 1:
			return PED::CREATE_SYNCHRONIZED_SCENE(1000.93f, -3163.369f, -33.6125f, 0f, 0f, 7.56f, 2);
			break;
		
		case 2:
			return PED::CREATE_SYNCHRONIZED_SCENE(2708.55f, -358.2208f, -54.6002f, 0f, 0f, 7.56f, 2);
			break;
	}
	return -1;
}

char* func_452(bool bParam0)//Position - 0x3A6CF
{
	if (bParam0)
	{
		return "Intro";
	}
	return "Intro_B";
}

float func_453(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x3A6EA
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_454(int iParam0, var uParam1, bool bParam2)//Position - 0x3A704
{
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1118.088f, -3159.119f, -36.3843f, -3.1143f, 0f, 45.6699f, 47.0142f, false, 2);
			}
			else
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1118.082f, -3158.723f, -36.3498f, -5.6008f, 0f, 45.8057f, 47.0142f, false, 2);
			}
			break;
		
		case 1:
			if (bParam2)
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1002.847f, -3164.953f, -33.4244f, -3.567f, 0f, 112.2157f, 40.3693f, false, 2);
			}
			else
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1002.333f, -3164.718f, -33.4356f, -1.6441f, 0f, 122.4329f, 40.3693f, false, 2);
			}
			break;
		
		case 2:
			if (bParam2)
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2710.467f, -359.8044f, -54.4121f, -3.567f, 0f, 112.2157f, 40.3693f, false, 2);
			}
			else
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2709.953f, -359.5693f, -54.4233f, -1.6441f, 0f, 122.4329f, 40.3693f, false, 2);
			}
			break;
	}
}

void func_455()//Position - 0x3A854
{
	CAM::SET_CAM_ACTIVE(iLocal_191, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (CAM::IS_CAM_ACTIVE(iLocal_198))
	{
		CAM::SET_CAM_ACTIVE(iLocal_198, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_193))
	{
		CAM::SET_CAM_ACTIVE(iLocal_193, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_194))
	{
		CAM::SET_CAM_ACTIVE(iLocal_194, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_195))
	{
		CAM::SET_CAM_ACTIVE(iLocal_195, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_196))
	{
		CAM::SET_CAM_ACTIVE(iLocal_196, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_197))
	{
		CAM::SET_CAM_ACTIVE(iLocal_197, false);
	}
}

void func_456(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3A8CF
{
	if (func_265())
	{
		return;
	}
	Global_1837282 = (func_631(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
	Global_1837283 = func_113(PLAYER::PLAYER_ID());
	Global_1837285 = 0;
	Global_1837286 = 0;
	func_458(iParam0, uParam1, iParam2, 1, iParam4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, iParam3, 0, 0, 0);
	if (iParam0 != 6)
	{
		func_457();
	}
	Global_1837294 = 1;
}

void func_457()//Position - 0x3A934
{
	struct<13> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Global_1581361.f_1[iVar1 /*13*/] = { Var0 };
		StringCopy(&(Global_1581361.f_418[iVar1 /*16*/]), "", 64);
		MISC::CLEAR_BIT(&Global_1581361, iVar1);
		iVar1++;
	}
}

void func_458(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, var uParam16, int iParam17, int iParam18, int iParam19)//Position - 0x3A97B
{
	char cVar0[32];
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	bool bVar7;
	int iVar8;
	var uVar9;
	struct<35> Var10;
	bool bVar11;
	struct<47> Var12;
	struct<25> Var13;
	struct<6> Var14;
	struct<6> Var15;
	struct<33> Var16;
	struct<6> Var17;
	
	if (iParam17 == 0)
	{
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	switch (iParam0)
	{
		case 6:
		case 8:
		case 1:
		case 3:
		case 0:
		case 2:
			MemCopy(&cVar0, {Global_4718592.f_116525}, 8);
			MemCopy(&Var1, {Global_4718592.f_116811}, 8);
			break;
		
		case 32:
		case 25:
		case 19:
		case 31:
			StringCopy(&cVar0, "ROCKSTAR_AMBIANT", 32);
			func_630(&Var1, iParam0, iParam4);
			break;
		
		case 11:
		case 13:
		case 12:
		case 15:
		case 14:
		case 122:
		case 5:
		case 148:
			StringCopy(&cVar0, "ROCKSTAR_MINIGAME", 32);
			func_629(&Var1, iParam0, iParam4);
			break;
	}
	iVar2 = 0;
	iVar3 = 0;
	if (iParam0 == 1)
	{
		iVar2 = iParam19;
	}
	else if (iParam0 == 2)
	{
		if (func_628())
		{
			iParam0 += 100;
		}
		iVar3 = Global_4456449.f_34;
		if (func_899(PLAYER::PLAYER_ID(), 0) || func_627(PLAYER::PLAYER_ID()))
		{
			iParam11 = 0;
		}
		if (iParam11 < 0)
		{
			iParam11 = 32;
		}
	}
	else if (iParam0 == 0)
	{
		if (func_628())
		{
			iParam0 += 100;
		}
	}
	else if (iParam0 == 3)
	{
		if (!func_626())
		{
			iParam0 += 100;
		}
	}
	if (bParam3)
	{
		if (func_625() && func_624())
		{
			return;
		}
		Global_1057161 = NETWORK::GET_NETWORK_TIME();
		func_623();
		Global_1837284 = 0;
		if (iParam0 == 0 || iParam0 == 1)
		{
			Global_1837298 = 1;
		}
		Global_1057153 = { Var1 };
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(1603298962, &(Global_1880037[PLAYER::PLAYER_ID() /*16*/]));
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(591312727, Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_16);
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(-1404245366, &Global_1057153);
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(2034665250, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()));
		if (func_620())
		{
			iParam0 = 222;
		}
		else if (func_617())
		{
			iParam0 = 228;
		}
		else if (func_616(PLAYER::PLAYER_ID()))
		{
			iParam0 = 7;
		}
		else if (func_615(PLAYER::PLAYER_ID()))
		{
			iParam0 = 4;
		}
		else if (func_614(PLAYER::PLAYER_ID()))
		{
			iParam0 = 165;
		}
		if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 148)
		{
			iVar4 = 17;
		}
		else if (func_613() != -1)
		{
			iVar4 = func_613();
		}
		Var5.f_0 = iParam0;
		Var5.f_1 = iParam2;
		Var5.f_2 = uParam1;
		Var5.f_3 = Global_1837295;
		Var5.f_4 = Global_1837296;
		Var5.f_5 = uParam16;
		Var5.f_6 = iVar4;
		Var5.f_7 = Global_4718592.f_116524;
		STATS::PLAYSTATS_MATCH_STARTED(&cVar0, &Var1, &Var5);
		func_612();
		if (!func_610(PLAYER::PLAYER_ID()))
		{
			Global_2715699.f_3475.f_2 = iParam2;
			Global_2715699.f_3475.f_3 = uParam1;
			if (Global_2715699.f_3475 == 0 || Global_2715699.f_3475.f_1 == 0)
			{
				Global_2715699.f_3475 = iParam2;
				Global_2715699.f_3475.f_1 = uParam1;
			}
		}
		else if (Global_2715699.f_3475 == 0 || Global_2715699.f_3475.f_1 == 0)
		{
			Global_2715699.f_3475 = iParam2;
			Global_2715699.f_3475.f_1 = uParam1;
		}
		Global_1057406.f_1 = func_609();
		if (Global_1837291)
		{
			iVar6 = Global_1837287;
			if (Global_4718592 == 2)
			{
				if (func_608(PLAYER::PLAYER_ID(), 0) || func_538())
				{
					Global_1837287 = (Global_1837287 - Global_262145.f_2352);
				}
				else
				{
					bVar7 = true;
					iVar6 = (iVar6 - Global_262145.f_2352);
				}
			}
			if ((((Global_1837287 > 0 && !func_87()) && !func_899(PLAYER::PLAYER_ID(), 0)) && !func_535()) && MONEY::NETWORK_CAN_SPEND_MONEY(Global_1837287, false, false, true, -1, 0))
			{
				if (!bVar7)
				{
					if (Global_1837287 > 0)
					{
						if (func_534())
						{
							func_522(1940862352, Global_1837287, &iVar8, 0, 1, 0);
							Global_4534105[iVar8 /*85*/].f_14.f_26 = { Var1 };
						}
						else
						{
							MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_1837287, &Var1, false, true);
						}
					}
				}
				else
				{
					if (iVar6 > 0)
					{
						if (func_534())
						{
							func_522(1940862352, iVar6, &iVar8, 0, 1, 0);
							Global_4534105[iVar8 /*85*/].f_14.f_26 = { Var1 };
						}
					}
					if (func_534())
					{
						func_522(-1389227906, Global_262145.f_2352, &iVar8, 0, 1, 0);
						Global_4534105[iVar8 /*85*/].f_14.f_26 = { Var1 };
					}
					else
					{
						MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_1837287, &Var1, false, true);
					}
				}
			}
			Global_1837291 = 0;
		}
		func_521();
	}
	else
	{
		if (func_520() == 1)
		{
			uVar9 = Global_4521801.f_915;
		}
		else
		{
			uVar9 = func_519();
		}
		StringCopy(&Global_1057153, "", 32);
		Var10 = { func_149(PLAYER::PLAYER_ID()) };
		if (Var10.f_0 < 0)
		{
			Var10.f_0 = 0;
		}
		iParam12 = iParam12;
		if (func_870(0))
		{
			bVar11 = true;
		}
		else if (!func_610(PLAYER::PLAYER_ID()))
		{
			Global_1837290++;
			func_272(1914, Global_1837290, -1, 1, 0);
		}
		if (func_620())
		{
			iParam0 = 222;
		}
		else if (func_617())
		{
			iParam0 = 228;
		}
		else if (func_616(PLAYER::PLAYER_ID()))
		{
			iParam0 = 7;
		}
		else if (func_615(PLAYER::PLAYER_ID()))
		{
			iParam0 = 4;
		}
		else if (func_614(PLAYER::PLAYER_ID()))
		{
			iParam0 = 165;
		}
		Var12.f_0 = Global_1837284;
		Var12.f_1 = Global_1837285;
		if (Var12.f_1 < 0)
		{
			Var12.f_1 = 0;
		}
		Var12.f_2 = Global_1837282;
		Var12.f_9 = iParam18;
		Var12.f_3 = (func_631(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
		if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 148)
		{
			Var12.f_4 = 17;
		}
		else if (func_613() != -1)
		{
			Var12.f_4 = func_613();
		}
		if (Global_1837299 >= 0)
		{
			Var12.f_39 = Global_1837299;
		}
		if (Global_1837300 >= 0)
		{
			Var12.f_38 = Global_1837300;
		}
		if ((((func_625() && !func_518()) && !bParam15) && Global_2714762.f_669.f_9 != 0) && !func_516(0))
		{
			Global_2714762.f_669.f_15 = 1;
			Var13.f_0 = Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_3;
			Var13.f_1 = Global_2714762.f_669.f_10;
			Var13.f_2 = Global_1837284;
			Var13.f_3 = Global_1837285;
			if (Var13.f_3 < 0)
			{
				Var13.f_3 = 0;
			}
			Var13.f_4 = Global_1837282;
			Var13.f_5 = (func_631(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var13.f_6 = Var12.f_4;
			if (func_610(PLAYER::PLAYER_ID()))
			{
				Var13.f_21 = Global_2715699.f_3475;
				Var13.f_22 = Global_2715699.f_3475.f_1 + 1;
			}
			else
			{
				Var13.f_7 = Global_2715699.f_3475;
				Var13.f_8 = Global_2715699.f_3475.f_1;
			}
			Var13.f_9 = (func_113(PLAYER::PLAYER_ID()) - Global_1837283);
			Var13.f_10 = iParam5;
			Var13.f_11 = iParam6;
			Var13.f_12 = iParam7;
			Var13.f_13 = iParam11;
			Var13.f_14 = Var10.f_0;
			Var13.f_15 = Global_1837286;
			Var13.f_16 = iParam9;
			Var13.f_17 = iParam10;
			Var13.f_18 = (func_609() - Global_1057406.f_1);
			if (func_515() || func_610(PLAYER::PLAYER_ID()))
			{
				Var13.f_19 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
			}
			Var13.f_20 = bVar11;
			if (Global_1837299 >= 0)
			{
				Var13.f_23 = Global_1837299;
			}
			else if (Global_1837299 == -2)
			{
				Var13.f_23 = 998;
			}
			else
			{
				Var13.f_23 = 999;
			}
			if (Global_1837300 >= 0)
			{
				Var13.f_24 = Global_1837300;
			}
			else if (Global_1837300 == -2)
			{
				Var13.f_24 = 998;
			}
			else
			{
				Var13.f_24 = 999;
			}
			StringCopy(&Var14, "", 24);
			if (func_515() || func_610(PLAYER::PLAYER_ID()))
			{
				Var14 = { Global_1048576.f_44 };
			}
			STATS::_0x14E0B2D1AD1044E0(&cVar0, &Var1, &Var13, &Var14);
			return;
		}
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			Global_1837293 = NETWORK::NETWORK_SESSION_IS_VISIBLE();
		}
		Var12.f_7 = iVar2;
		Var12.f_8 = bVar11;
		Var12.f_11 = (func_113(PLAYER::PLAYER_ID()) - Global_1837283);
		Var12.f_12 = iParam8;
		Var12.f_13 = iParam5;
		Var12.f_14 = iParam6;
		Var12.f_15 = iParam7;
		Var12.f_16 = iParam11;
		Var12.f_17 = Var10.f_0;
		Var12.f_18 = iParam13;
		Var12.f_19 = Global_1837286;
		Var12.f_20 = iParam14;
		Var12.f_21 = iParam9;
		Var12.f_22 = iParam0;
		Var12.f_23 = Global_4718592.f_107227;
		if (func_535())
		{
			if (Var12.f_23 == 6)
			{
				Var12.f_23 = 14;
			}
			else if (Var12.f_23 == 7)
			{
				Var12.f_23 = 15;
			}
		}
		else if (func_514(Global_4718592.f_116524))
		{
			if (Var12.f_23 == 6)
			{
				Var12.f_23 = 16;
			}
			else if (Var12.f_23 == 7)
			{
				Var12.f_23 = 17;
			}
		}
		Var12.f_24 = iVar3;
		Var12.f_25 = iParam10;
		Var12.f_34 = Global_1837292;
		Var12.f_26 = (func_609() - Global_1057406.f_1);
		Var12.f_29 = func_884(1301, -1, 0);
		if (func_610(PLAYER::PLAYER_ID()))
		{
			Var12.f_40 = Global_2715699.f_3475;
			Var12.f_41 = Global_2715699.f_3475.f_1 + 1;
		}
		else
		{
			Var12.f_5 = Global_2715699.f_3475;
			Var12.f_6 = Global_2715699.f_3475.f_1;
		}
		Var12.f_36 = Global_1837293;
		Var12.f_37 = uParam16;
		Var12.f_30 = uVar9;
		if (func_513() || func_512())
		{
			Var12.f_35 = 1;
		}
		if (iParam0 == 2)
		{
			Var12.f_27 = Global_4456449.f_8;
			Var12.f_10 = Global_4456484.f_31;
			if (((func_507(0) && Global_1837297 != -1) && !func_515()) && !func_610(PLAYER::PLAYER_ID()))
			{
				Var12.f_31 = Global_1837297;
			}
			Global_1837297 = -1;
			Var12.f_42 = Global_1659950[func_506() /*26*/].f_20;
			Var12.f_43 = Global_1659950[func_506() /*26*/].f_21;
			Var12.f_44 = Global_1659950[func_506() /*26*/].f_22;
			Var12.f_45 = Global_1659950[func_506() /*26*/].f_23;
			Var12.f_46 = Global_1659950[func_506() /*26*/].f_24;
		}
		if (func_515() || func_610(PLAYER::PLAYER_ID()))
		{
			Var12.f_28 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
			if (func_505() || func_504())
			{
				Var12.f_32 = 1;
			}
			else if (func_503() || func_502())
			{
				Var12.f_33 = 1;
			}
		}
		if (func_515() || func_610(PLAYER::PLAYER_ID()))
		{
			Var15 = { Global_1048576.f_44 };
		}
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(1603298962, "");
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(591312727, 0);
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(-1404245366, "");
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(2034665250, 0);
		if (!func_501())
		{
			if ((func_500() || func_518()) || bParam15)
			{
				Var16.f_0 = Global_2714762.f_669.f_9;
				Var16.f_1 = Global_2714762.f_669.f_10;
				Global_2714762.f_669.f_15 = 0;
				Var16.f_2 = Global_1837284;
				Var16.f_3 = Global_1837285;
				if (Var16.f_3 < 0)
				{
					Var16.f_3 = 0;
				}
				Var16.f_4 = Global_1837282;
				Var16.f_5 = (func_631(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
				Var16.f_6 = Var12.f_4;
				if (func_610(PLAYER::PLAYER_ID()))
				{
					Var16.f_29 = Global_2715699.f_3475;
					Var16.f_30 = Global_2715699.f_3475.f_1 + 1;
				}
				else
				{
					Var16.f_7 = Global_2715699.f_3475;
					Var16.f_8 = Global_2715699.f_3475.f_1;
				}
				Var16.f_9 = (func_113(PLAYER::PLAYER_ID()) - Global_1837283);
				Var16.f_10 = iParam8;
				Var16.f_11 = iParam5;
				Var16.f_12 = iParam6;
				Var16.f_13 = iParam7;
				Var16.f_14 = iParam11;
				Var16.f_15 = Var10.f_0;
				Var16.f_16 = Global_1837286;
				Var16.f_17 = iParam9;
				Var16.f_18 = iParam10;
				Var16.f_19 = (func_609() - Global_1057406.f_1);
				if (func_515() || func_610(PLAYER::PLAYER_ID()))
				{
					Var16.f_20 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
					Var16.f_23 = (func_505() || func_504());
					Var16.f_24 = (func_503() || func_502());
				}
				Var16.f_21 = func_884(1301, -1, 0);
				Var16.f_22 = uVar9;
				Var16.f_25 = Global_1837292;
				Var16.f_26 = (func_513() || func_512());
				Var16.f_27 = Global_1837293;
				Var16.f_28 = bVar11;
				if (Global_1837299 >= 0)
				{
					Var16.f_31 = Global_1837299;
				}
				else if (Global_1837299 == -2)
				{
					Var16.f_31 = 998;
				}
				else
				{
					Var16.f_31 = 999;
				}
				if (Global_1837300 >= 0)
				{
					Var16.f_32 = Global_1837300;
				}
				else if (Global_1837300 == -2)
				{
					Var16.f_32 = 998;
				}
				else
				{
					Var16.f_32 = 999;
				}
				StringCopy(&Var17, "", 24);
				if (func_515() || func_610(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_1048576.f_44 };
				}
				STATS::_0xA736CF7FB7C5BFF4(&cVar0, &Var1, &Var16, &Var17);
				func_499();
				Global_1837298 = 0;
				return;
			}
		}
		if (func_51(PLAYER::PLAYER_ID()) || func_52(PLAYER::PLAYER_ID()))
		{
			Global_786435.f_3 = Var12.f_13;
			Global_786435.f_4 = Var12.f_14;
			Global_786435.f_6 = Global_1837284;
			Global_786435.f_7 = Global_1837282;
			Global_786435.f_8 = (func_631(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Global_786435.f_9 = Var12.f_4;
			Global_786435.f_10 = (func_113(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_786435.f_11 = iParam7;
			Global_786435.f_12 = iParam11;
			Global_786435.f_13 = Var10.f_0;
			Global_786435.f_14 = iParam9;
			Global_786435.f_15 = iParam10;
			Global_786435.f_16 = (func_609() - Global_1057406.f_1);
			Global_786435.f_17 = func_884(1301, -1, 0);
			Global_786435.f_18 = uVar9;
			Global_786435.f_19 = Global_1837293;
			Global_786435.f_20 = bVar11;
			Global_786435.f_28 = uParam16;
			Global_786435.f_43 = Global_786547;
			Global_786435.f_44 = Global_786547.f_1;
			Global_786435.f_23 = Global_786547.f_2;
			if (func_489(96, 0, 0))
			{
				Global_786435.f_22 = 1;
			}
			else
			{
				Global_786435.f_22 = 0;
			}
			STATS::PLAYSTATS_JOB_BEND(&cVar0, &Var1, &Global_786435, &Var15);
			func_499();
			Global_1837298 = 0;
			return;
		}
		if (func_139())
		{
			Global_786481.f_3 = Var12.f_13;
			Global_786481.f_4 = Var12.f_14;
			Global_786481.f_6 = Global_1837284;
			Global_786481.f_7 = Global_1837282;
			Global_786481.f_8 = (func_631(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Global_786481.f_9 = Var12.f_4;
			Global_786481.f_10 = (func_113(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_786481.f_11 = iParam7;
			Global_786481.f_12 = iParam11;
			Global_786481.f_13 = Var10.f_0;
			Global_786481.f_14 = iParam9;
			Global_786481.f_15 = iParam10;
			Global_786481.f_19 = Global_1837293;
			Global_786481.f_20 = bVar11;
			Global_786481.f_28 = uParam16;
			Global_786481.f_43 = Global_786547;
			Global_786481.f_44 = Global_786547.f_1;
			Global_786481.f_23 = func_488();
			STATS::_PLAYSTATS_H2_INSTANCE_END(&cVar0, &Var1, &Var15, &Global_786481);
			func_499();
			Global_1837298 = 0;
			return;
		}
		if (func_501())
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944345 = iParam2;
			Global_1944345.f_4 = func_487(bVar11);
			Global_1944345.f_5 = (func_113(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_1944345.f_6 = iParam5;
			Global_1944345.f_7 = iParam6;
			Global_1944345.f_8 = iParam7;
			Global_1944345.f_9 = func_486(PLAYER::PLAYER_ID());
			Global_1944345.f_10 = iParam13;
			Global_1944345.f_11 = iParam17;
			Global_1944345.f_13 = iParam10;
			Global_1944345.f_15 = func_884(7849, -1, 0);
			Global_1944345.f_19 = iParam0;
			Global_1944345.f_20 = Global_4718592.f_116524;
			if (func_475())
			{
				Global_1944345.f_24 = 1;
			}
			else
			{
				Global_1944345.f_24 = 0;
			}
			Global_1944345.f_25 = iParam9;
			Global_1944345.f_40 = Global_1659922;
			Global_1944345.f_41 = Global_1659923;
			Global_1944345.f_42 = Global_1659924;
			Global_1944345.f_43 = Global_1659925;
			Global_1659922 = -2;
			Global_1659923 = -2;
			Global_1659924 = -2;
			Global_1659925 = -2;
			Global_1944345.f_3 = func_613();
			Global_1944345.f_26 = func_757(func_608(PLAYER::PLAYER_ID(), 0), 1, 0);
			func_499();
			Global_1837298 = 0;
			STATS::_PLAYSTATS_ARENA_WARS_ENDED(&Global_1944345);
			func_521();
			return;
		}
		if (func_474(Global_4718592.f_116524))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944421.f_17 = bVar11;
			Global_1944421.f_20 = (func_113(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_1944421.f_3 = iParam5;
			Global_1944421.f_4 = iParam6;
			Global_1944421.f_21 = iParam7;
			Global_1944421.f_22 = func_486(PLAYER::PLAYER_ID());
			Global_1944421.f_24 = iParam10;
			if (iParam10 == 0)
			{
				Global_1944421.f_13 = 0;
			}
			Global_1944421.f_16 = Global_1837293;
			Global_1944421.f_5 = Global_1837284;
			Global_1944421.f_6 = Global_1837282;
			Global_1944421.f_7 = (func_631(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Global_1944421.f_8 = Var12.f_4;
			Global_1944421.f_9 = uParam16;
			Global_1944421.f_10 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
			Global_1944421.f_38 = func_473(PLAYER::PLAYER_ID());
			Global_1944421.f_39 = func_472(PLAYER::PLAYER_ID());
			Global_1944421.f_40 = func_471(PLAYER::PLAYER_ID());
			Global_1944421.f_17 = bVar11;
			Global_1944421.f_27 = Global_786547.f_1;
			Global_1944421.f_16 = Global_1837293;
			Global_1944421.f_23 = Var10.f_0;
			Global_1944421.f_25 = (func_609() - Global_1057406.f_1);
			Global_1944421.f_26 = NETWORK::NETWORK_HAS_HEADSET();
			Global_1944421.f_28 = 0;
			Global_1944421.f_29 = 0;
			if (Global_1575016 == 8 || func_470())
			{
				Global_1944421.f_30 = 1;
			}
			else
			{
				Global_1944421.f_30 = 0;
			}
			Global_1944421.f_31 = func_470();
			Global_1944421.f_41 = 0;
			func_499();
			Global_1837298 = 0;
			STATS::_PLAYSTATS_CASINO_STORY_MISSION_ENDED(&Global_1944421, &Var1);
			func_469();
			return;
		}
		if (func_468(Global_4718592.f_116524))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944501 = func_884(8916, -1, 0);
			Global_1944501.f_1 = Global_4718592.f_116524;
			Global_1944501.f_10 = iParam2;
			Global_1944501.f_18 = (func_467(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			STATS::_PLAYSTATS_HEIST3_FINALE(&Global_1944501);
			func_499();
			Global_1837298 = 0;
		}
		if (func_466(Global_4718592.f_116524))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944587 = func_884(9572, -1, 0);
			IntToString(&(Global_1944587.f_3), MISC::GET_HASH_KEY(&(Global_4718592.f_116811)), 32);
			Global_1944587.f_11 = iParam2;
			Global_1944587.f_19 = (func_467(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			STATS::_PLAYSTATS_HEIST4_FINALE(&Global_1944587);
			func_499();
			Global_1837298 = 0;
		}
		if ((func_465(Global_4718592.f_116524) || func_464(Global_4718592.f_116524)) || (func_462() && func_461(249)))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944719 = Global_786547.f_1;
			Global_1944719.f_1 = Global_4718592.f_116524;
			Global_1944719.f_2 = Global_786547.f_1;
			if (func_465(Global_4718592.f_116524))
			{
				Global_1944719.f_3 = func_460(Global_4718592.f_116524);
			}
			IntToString(&(Global_1944719.f_4), MISC::GET_HASH_KEY(&(Global_4718592.f_116811)), 32);
			Global_1944719.f_32 = iParam2;
			Global_1944719.f_19 = (func_467(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			STATS::_PLAYSTATS_ROBBERY_FINALE(&Global_1944719);
			func_499();
			Global_1837298 = 0;
		}
		if (func_459(5) || func_462())
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944783.f_25 = (func_467(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			IntToString(&(Global_1944783.f_7), MISC::GET_HASH_KEY(&(Global_4718592.f_116811)), 32);
			STATS::_PLAYSTATS_INST_MISSION_END(&Global_1944783);
			func_499();
			Global_1837298 = 0;
		}
		Global_2714762.f_669.f_15 = 0;
		STATS::_0xF8C54A461C3E11DC(&cVar0, &Var1, &Var12, &Var15);
		func_499();
		Global_1837298 = 0;
	}
}

bool func_459(int iParam0)//Position - 0x3BD19
{
	return Global_4718592.f_168758 > iParam0;
}

int func_460(int iParam0)//Position - 0x3BD2E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_461(int iParam0)//Position - 0x3BD5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return BitTest(Global_2715699.f_1.f_2813[iVar0], iVar1);
}

int func_462()//Position - 0x3BD90
{
	return func_463(Global_4718592.f_116524);
}

int func_463(int iParam0)//Position - 0x3BDA6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31710[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_464(int iParam0)//Position - 0x3BDD5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_465(int iParam0)//Position - 0x3BE04
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_466(int iParam0)//Position - 0x3BE3E
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29921[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_467(int iParam0, bool bParam1)//Position - 0x3BE78
{
	if (bParam1)
	{
	}
	return func_113(iParam0);
}

int func_468(int iParam0)//Position - 0x3BE8B
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6086[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_469()//Position - 0x3BEC5
{
	struct<31> Var0;
	
	Global_1944390 = { Var0 };
}

int func_470()//Position - 0x3BED9
{
	switch (Global_1575016)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 11:
			return 1;
		
		default:
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x3BF13
{
	if (iParam0 != func_277())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 6);
	}
	return 0;
}

int func_472(int iParam0)//Position - 0x3BF3B
{
	if (iParam0 != func_277())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 7);
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x3BF63
{
	if (iParam0 != func_277())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_384 != 0;
	}
	return 0;
}

int func_474(int iParam0)//Position - 0x3BF89
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5058[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_475()//Position - 0x3BFB8
{
	if (func_485(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (func_484(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (func_483(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (func_482(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (func_481(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (func_480())
	{
		return 0;
	}
	else if (func_479())
	{
		return 0;
	}
	else if (func_478(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			return 1;
		}
	}
	else if (func_477(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			return 1;
		}
	}
	if (func_476())
	{
		if (Global_1659814 == 1 || Global_1659814 == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool func_476()//Position - 0x3C0B3
{
	return Global_4718592 == 1;
}

bool func_477(int iParam0)//Position - 0x3C0C1
{
	return iParam0 == 83;
}

bool func_478(int iParam0)//Position - 0x3C0CE
{
	return iParam0 == 81;
}

int func_479()//Position - 0x3C0DB
{
	if (Global_4718592.f_107227 == 22 || Global_4718592.f_107227 == 23)
	{
		return 1;
	}
	return BitTest(Global_4718592.f_32, 9);
}

int func_480()//Position - 0x3C113
{
	if (Global_4718592.f_107227 == 20 || Global_4718592.f_107227 == 21)
	{
		return 1;
	}
	return BitTest(Global_4718592.f_30, 3);
}

bool func_481(int iParam0)//Position - 0x3C14A
{
	return iParam0 == 72;
}

bool func_482(int iParam0)//Position - 0x3C157
{
	return iParam0 == 76;
}

bool func_483(int iParam0)//Position - 0x3C164
{
	return iParam0 == 74;
}

bool func_484(int iParam0)//Position - 0x3C171
{
	return iParam0 == 78;
}

bool func_485(int iParam0)//Position - 0x3C17E
{
	return iParam0 == 77;
}

var func_486(int iParam0)//Position - 0x3C18B
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

int func_487(bool bParam0)//Position - 0x3C1A0
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_488()//Position - 0x3C1B2
{
	if (((Global_4718592.f_116524 == Global_262145.f_5041[0] || Global_4718592.f_116524 == Global_262145.f_5041[1]) || Global_4718592.f_116524 == Global_262145.f_5041[2]) || Global_4718592.f_116524 == Global_262145.f_5041[3])
	{
		return Global_262145.f_5041[3];
	}
	else if ((((Global_4718592.f_116524 == Global_262145.f_5041[4] || Global_4718592.f_116524 == Global_262145.f_5041[5]) || Global_4718592.f_116524 == Global_262145.f_5041[6]) || Global_4718592.f_116524 == Global_262145.f_5041[7]) || Global_4718592.f_116524 == Global_262145.f_5041[8])
	{
		return Global_262145.f_5041[8];
	}
	else if ((((((Global_4718592.f_116524 == Global_262145.f_5041[9] || Global_4718592.f_116524 == Global_262145.f_5041[10]) || Global_4718592.f_116524 == Global_262145.f_5041[11]) || Global_4718592.f_116524 == Global_262145.f_5041[12]) || Global_4718592.f_116524 == Global_262145.f_5041[13]) || Global_4718592.f_116524 == Global_262145.f_5041[14]) || Global_4718592.f_116524 == Global_262145.f_5041[15])
	{
		return Global_262145.f_5041[14];
	}
	return 0;
}

int func_489(int iParam0, bool bParam1, bool bParam2)//Position - 0x3C399
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8145 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_492(PLAYER::PLAYER_ID(), 85))
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
		if (Global_262145.f_4746 == 1)
		{
			return 1;
		}
	}
	if (func_491() || func_490())
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
			if (func_626())
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
	return BitTest(Global_1836830[iVar1], iVar0);
}

bool func_490()//Position - 0x3C504
{
	return Global_1575046;
}

bool func_491()//Position - 0x3C510
{
	return Global_1575048;
}

int func_492(int iParam0, int iParam1)//Position - 0x3C51C
{
	if (!func_496())
	{
		return 0;
	}
	if (func_495())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_493(&(Global_1853348[iParam0 /*834*/].f_765), func_494(iParam1));
}

var func_493(var uParam0, var uParam1)//Position - 0x3C55C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_494(int iParam0)//Position - 0x3C57F
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
		
		default:
	}
	return 1;
}

bool func_495()//Position - 0x3C73F
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 3);
}

int func_496()//Position - 0x3C756
{
	if (!func_497())
	{
		return 0;
	}
	return 1;
}

int func_497()//Position - 0x3C76B
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_491())
	{
		return 1;
	}
	if (func_490())
	{
		return 1;
	}
	return func_498(120, -1);
}

int func_498(int iParam0, int iParam1)//Position - 0x3C79B
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_115(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_499()//Position - 0x3C7C7
{
	Global_1057409 = -1;
}

bool func_500()//Position - 0x3C7D4
{
	return Global_2714762.f_669.f_9 > 0;
}

int func_501()//Position - 0x3C7E7
{
	if (func_106() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

var func_502()//Position - 0x3C804
{
	return BitTest(Global_1048576.f_10, 3);
}

var func_503()//Position - 0x3C814
{
	return BitTest(Global_2715699.f_1.f_2809, 6);
}

var func_504()//Position - 0x3C827
{
	return BitTest(Global_1048576.f_10, 5);
}

var func_505()//Position - 0x3C837
{
	return BitTest(Global_2715699.f_1.f_2809, 8);
}

int func_506()//Position - 0x3C84B
{
	return PLAYER::PLAYER_ID();
}

var func_507(int iParam0)//Position - 0x3C857
{
	return (func_510() || func_508(iParam0));
}

int func_508(var uParam0)//Position - 0x3C86F
{
	return func_509(Global_4718592.f_116524, uParam0);
}

int func_509(int iParam0, var uParam1)//Position - 0x3C887
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (((Global_262145.f_6890[iVar1] == 202 || Global_262145.f_6890[iVar1] == 203) || Global_262145.f_6890[iVar1] == 204) || (uParam1 && ((((((((((((Global_262145.f_6890[iVar1] == 224 || Global_262145.f_6890[iVar1] == 223) || Global_262145.f_6890[iVar1] == 232) || Global_262145.f_6890[iVar1] == 245) || Global_262145.f_6890[iVar1] == 246) || Global_262145.f_6890[iVar1] == 251) || Global_262145.f_6890[iVar1] == 252) || Global_262145.f_6890[iVar1] == 253) || Global_262145.f_6890[iVar1] == 161) || Global_262145.f_6890[iVar1] == 278) || Global_262145.f_6890[iVar1] == 279) || Global_262145.f_6890[iVar1] == 302) || Global_262145.f_6890[iVar1] == 303)))
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_510()//Position - 0x3CA25
{
	return func_511(Global_4718592.f_116524);
}

int func_511(int iParam0)//Position - 0x3CA3B
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (iParam0 == Global_262145.f_4794[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_512()//Position - 0x3CA71
{
	return (BitTest(Global_4718592.f_11, 19) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_513()//Position - 0x3CA8B
{
	return (BitTest(Global_4718592.f_11, 18) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

int func_514(int iParam0)//Position - 0x3CAA5
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (Global_262145.f_6890[iVar1] == 232)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_515()//Position - 0x3CB0B
{
	return BitTest(Global_2715699.f_1.f_2809, 5);
}

bool func_516(bool bParam0)//Position - 0x3CB1E
{
	if (bParam0)
	{
		return (BitTest(Global_4718592.f_162497, 12) && func_517());
	}
	return BitTest(Global_4718592.f_162497, 12);
}

int func_517()//Position - 0x3CB54
{
	if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_518()//Position - 0x3CB82
{
	return Global_2714762.f_669.f_12;
}

int func_519()//Position - 0x3CB93
{
	return func_884(1299, -1, 0);
}

int func_520()//Position - 0x3CBA4
{
	return func_884(1218, -1, 0);
}

void func_521()//Position - 0x3CBB5
{
	struct<45> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Global_1944345 = { Var0 };
}

void func_522(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3CCC0
{
	int iVar0;
	
	if (!func_534())
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
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_523(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
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
		case 1982688246:
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
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
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
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_523(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_523(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
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
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
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
			func_523(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_523(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3D4D1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_534())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_116()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		{
			bVar3 = true;
		}
	}