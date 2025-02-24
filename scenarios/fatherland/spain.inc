##############################
# Country definition for SPA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SPA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  intrinsic_gov_type = fascist
  capital            = 460 # Madrid
  dissent            = 5
  manpower           = 300
  # Resource Reserves
  energy         = 1850
  metal          = 600
  rare_materials = 400
  oil            = 1000
  supplies       = 750
  money          = 0
  transports     = 83
  escorts        = 16

  diplomacy = {
    relation = { tag = AFG value = 0 }
    relation = { tag = CHI value = 25 }
    relation = { tag = SAU value = -25 }
    relation = { tag = SYR value = 10 }
    relation = { tag = PAK value = 50 }
    relation = { tag = IND value = 0 }
    relation = { tag = ARG value = 30 }
    relation = { tag = URU value = 30 }
    relation = { tag = BOL value = 25 }
    relation = { tag = BRA value = -25 }
    relation = { tag = PAR value = 0 }
    relation = { tag = MEX value = -25 }
    relation = { tag = CHL value = 30 }
    relation = { tag = ECU value = 25 }
    relation = { tag = TUR value = 50 }
    relation = { tag = IRE value = 0 }
    relation = { tag = TRA value = 50 }
    relation = { tag = POR value = 65 }
    relation = { tag = SCH value = -25 }
    relation = { tag = FRA value = 50 }
    relation = { tag = SWE value = 50 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BHU value = -200 }
    relation = { tag = CAN value = -200 }
    relation = { tag = EGY value = -100 }
    relation = { tag = ENG value = -200 }
    relation = { tag = ETH value = -200 }
    relation = { tag = U01 value = -200 }
    relation = { tag = HOL value = -200 }
    relation = { tag = IRQ value = -150 }
    relation = { tag = NEP value = -200 }
    relation = { tag = NIC value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -100 }
    relation = { tag = SAF value = -200 }
    relation = { tag = YEM value = -100 }
    relation = { tag = JAP value = -125 }
    relation = { tag = SOV value = -200 }
    relation = { tag = CHC value = -150 }
    relation = { tag = MON value = -100 }
    relation = { tag = SIB value = -100 }
    relation = { tag = U57 value = -100 }
    relation = { tag = U59 value = 50 }
    relation = { tag = UPE value = 50 }
    relation = { tag = AXI value = 180 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 150 }
    relation = { tag = CRO value = 120 }
    relation = { tag = HUN value = 175 }
    relation = { tag = ROM value = 150 }
    relation = { tag = BUL value = 150 }
    relation = { tag = SLO value = 120 }
    relation = { tag = FIN value = 100 }
    relation = { tag = MTN value = 200 access = yes }
    relation = { tag = UTC value = 50 }
    relation = { tag = U58 value = 100 }
    relation = { tag = SER value = 50 }
    relation = { tag = DEN value = 100 }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 2 }
  SpyInfo                = { country = "U01" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 5 }

  nationalprovinces      = { 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 990 991 348 }
  ownedprovinces         = { 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 715 716 913 916 987 988 989 990 991 }
  controlledprovinces    = { 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 715 716 913 916 987 988 989 990 991 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1310 1320 1330 1340 1350 1360 1370 1380 1396 1560 1570 1580 1670 1680 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2290 2300 2310 2320 2330 2340 2360 2370 2380 2400 2410 2420 2430 2450 2460 2470 2480 2490 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3680 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5466 5560 5600 5610 5620 5630 5640 5650 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6170 6200 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7140 7550 7560 7570 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 12000 12010 12020 12060 12100 12110 12120 12130 12140 13060 13070 13080 14000 14010 14020 14030 14040 15000 15100 15140 15180 21180 21190 21200 22910 22920 22930 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 54010 54020 54030 81650 81700 81710 81720 81730 81740 81750 81850 81860 81870 81880 81890 81900 82300 82310 82320 82330 82500 82510 82520 199130 1870 199100 }
  inventions             = { 3000011 3000012 3000018 3000027 3000028 3000031 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 35011 } # Francisco Franco Bahamonde
  headofgovernment       = { type = 9 id = 35016 } # Francisco Franco Bahamonde
  foreignminister        = { type = 9 id = 35024 } # Ram? Serrano S��er
  armamentminister       = { type = 9 id = 35056 } # Jos?Mar? Lammami?1945
  ministerofsecurity     = { type = 9 id = 35090 } # Raimundo Fern?dez Cuesta
  ministerofintelligence = { type = 9 id = 35109 } # On?imo Redondo Ortega
  chiefofstaff           = { type = 9 id = 35120 } # Carlos Asensio Cabanillas
  chiefofarmy            = { type = 9 id = 35143 } # Antonio Aranda Mata
  chiefofnavy            = { type = 9 id = 35152 } # Tom? Dom?guez Ar?alo
  chiefofair             = { type = 9 id = 35169 } # Francisco Reglado Rodr?uez
  dormant_leaders        = { 35014 35015 35017 35028 35056 35067 35076 35093 35094 35095 }
  dormant_ministers      = { 35001 35002 35003 35005 35006 35007 35008 35009 35010 35014 35015 35020 35048 35058 35064 35096 35121 35122 35131 35137 35144 35146 35159 35180 35017 }

  landunit = {
    id       = { type = 25000 id = 1 }
    name     = "Regi? de Guadarrama"
    location = 460
    division = {
      id             = { type = 25001 id = 1 }
      name           = "11a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
  }
  landunit = {
    id       = { type = 25000 id = 902 }
    name     = "Regi? de Andaluc?"
    location = 474
    division = {
      id             = { type = 25000 id = 4 }
      name           = "21a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
    division = {
      id             = { type = 25000 id = 6 }
      name           = "23a Divisi? de Infanter?"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
    }
  }
  landunit = {
    id       = { type = 25000 id = 903 }
    name     = "Regi? del T?ia"
    location = 464
    division = {
      id             = { type = 25000 id = 7 }
      name           = "31a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
    division = {
      id             = { type = 25000 id = 8 }
      name           = "32a Divisi? de Infanter?"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 11
    }
  }
  landunit = {
    id       = { type = 25000 id = 904 }
    name     = "Regi? de Urgel"
    location = 436
    division = {
      id             = { type = 25000 id = 9 }
      name           = "41a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
    division = {
      id             = { type = 25000 id = 10 }
      name           = "42a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
  }
  landunit = {
    id       = { type = 25000 id = 905 }
    name     = "Regi? de Arag?"
    location = 438
    division = {
      id             = { type = 25000 id = 12 }
      name           = "51a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
    division = {
      id             = { type = 25000 id = 13 }
      name           = "52a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
  }
  landunit = {
    id       = { type = 25000 id = 906 }
    name     = "Regi? de Navarra"
    location = 443
    division = {
      id             = { type = 25000 id = 14 }
      name           = "61a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
    division = {
      id             = { type = 25000 id = 15 }
      name           = "62a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
  }
  landunit = {
    id       = { type = 25000 id = 907 }
    name     = "Regi? de Castilla"
    location = 448
    division = {
      id             = { type = 25000 id = 16 }
      name           = "71a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
    division = {
      id             = { type = 25000 id = 17 }
      name           = "72a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
  }
  landunit = {
    id       = { type = 25000 id = 908 }
    name     = "Regi? de Galicia"
    location = 441
    division = {
      id             = { type = 25000 id = 18 }
      name           = "81a Divisi? de Infanter?"
      type           = infantry
      model          = 12
    }
  }
  landunit = {
    id       = { type = 25000 id = 909 }
    name     = "Regi? de Marruecos"
    location = 715
    division = {
      id             = { type = 25000 id = 20 }
      name           = "91a Divisi? de Infanter?"
      type           = motorized
      model          = 3
    }
    division = {
      id             = { type = 25000 id = 23 }
      name           = "Tercios de la Legi?"
      type           = motorized
      model          = 3
      extra          = sp_artillery
      brigade_model  = 3
    }
  }
  landunit = {
    id       = { type = 25000 id = 910 }
    name     = "Regi? del Maestrazgo"
    location = 452
    division = {
      id             = { type = 25000 id = 25 }
      name           = "10a Divisi? de Infanter?"
      type           = motorized
      model          = 3
    }
  }
  landunit = {
    id       = { type = 25000 id = 913 }
    name     = "Grupo Acorazada"
    location = 460
    division = {
      id             = { type = 25000 id = 28 }
      name           = "1a Divisi? Acorazada"
      type           = armor
      model          = 3
    }
    division = {
      id             = { type = 25000 id = 29 }
      name           = "2a Divisi? Acorazada"
      type           = armor
      model          = 3
    }
  }

  navalunit = {
    id       = { type = 25000 id = 500 }
    name     = "Escuadr? de Batalla"
    location = 441
    base     = 441
    division = {
      id             = { type = 25000 id = 501 }
      name           = "Canarias"
      type           = heavy_cruiser
      model          = 6
    }
    division = {
      id             = { type = 25000 id = 502 }
      name           = "Galicia"
      type           = light_cruiser
      model          = 6
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25000 id = 503 }
      name           = "Miguel de Cervantes"
      type           = light_cruiser
      model          = 6
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25000 id = 504 }
      name           = "Almirante Cervera"
      type           = light_cruiser
      model          = 6
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25000 id = 505 }
      name           = "1a Flotilla de Destructores"
      type           = destroyer
      model          = 7
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 25000 id = 506 }
      name           = "2a Flotilla de Destructores"
      type           = destroyer
      model          = 7
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 25000 id = 507 }
    name     = "Base Naval Barcelona"
    location = 440
    base     = 440
    division = {
      id             = { type = 25000 id = 508 }
      name           = "M?dez N��ez"
      type           = light_cruiser
      model          = 6
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25000 id = 509 }
      name           = "Navarra"
      type           = light_cruiser
      model          = 6
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 25000 id = 510 }
      name           = "3a Flotilla de Destructores"
      type           = destroyer
      model          = 7
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 25000 id = 511 }
      name           = "4a Flotilla de Destructores"
      type           = destroyer
      model          = 7
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 25000 id = 517 }
      name           = "5a Flotilla de Destructores"
      type           = destroyer
      model          = 7
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 25000 id = 515 }
      name           = "Flotilla Villalpando"
      type           = transport
      model          = 3
    }
    division = {
      id             = { type = 25000 id = 516 }
      name           = "Flotilla Benavende"
      type           = transport
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 25000 id = 512 }
    name     = "Grupo B"
    location = 472
    base     = 472
    division = {
      id             = { type = 25000 id = 513 }
      name           = "1a Flotilla de Submarinos"
      type           = submarine
      model          = 7
    }
  }

  airunit = { 
    id       = { type = 25000 id = 201 }
    name     = "Regi? Pirineos"
    location = 436
    base     = 436
    division = {
      id             = { type = 25000 id = 202 }
      name           = "FAN 1-G-20 de Bombardeo"
      type           = tactical_bomber
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 25000 id = 203 }
      name           = "FAN 1-G-5 de Caza"
      type           = interceptor
      model          = 11
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 25000 id = 204 }
    name     = "Regi? Estrecho"
    location = 474
    base     = 474
    division = {
      id             = { type = 25000 id = 205 }
      name           = "FAN 2-G-20 de Bombardeo"
      type           = tactical_bomber
      model          = 9
      strength       = 50
    }
    division = {
      id             = { type = 25000 id = 206 }
      name           = "FAN 2-G-5 de Caza"
      type           = interceptor
      model          = 11
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 25000 id = 207 }
    name     = "Regi? Este"
    location = 474
    base     = 474
    division = {
      id             = { type = 25000 id = 208 }
      name           = "FAN 3-G-20 de Bombardeo"
      type           = tactical_bomber
      model          = 9
      strength       = 50
    }
    division = {
      id             = { type = 25000 id = 209 }
      name           = "FAN 3-G-5 de Caza"
      type           = interceptor
      model          = 11
      strength       = 75
    }
  }
  airunit = { 
    id       = { type = 25000 id = 210 }
    name     = "Fuerzas A?eas Africanas"
    location = 474
    base     = 474
    division = {
      id             = { type = 25000 id = 211 }
      name           = "FAN 1-G-10 de Cooperaci?"
      type           = cas
      model          = 4
      strength       = 30
    }
    division = {
      id             = { type = 25000 id = 212 }
      name           = "FAN 4-G-5 de Caza"
      type           = interceptor
      model          = 11
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 25000 id = 213 }
    name     = "Regi? Central"
    location = 460
    base     = 460
    division = {
      id             = { type = 25000 id = 214 }
      name           = "FAN 1-G-40 Estrat?ico"
      type           = strategic_bomber
      model          = 6
      strength       = 50
    }
    division = {
      id             = { type = 25000 id = 215 }
      name           = "FAN 5-G-5 de Caza"
      type           = interceptor
      model          = 11
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 25000 id = 216 }
    name     = "Baleares"
    location = 436
    base     = 436
    division = {
      id             = { type = 25000 id = 217 }
      name           = "FAN 6-G-5 de Caza"
      type           = interceptor
      model          = 11
      strength       = 30
    }
  }
  airunit = { 
    id       = { type = 25000 id = 218 }
    name     = "Regi? Atl?tica"
    location = 441
    base     = 441
    division = {
      id             = { type = 25000 id = 219 }
      name           = "FAN 2-G-40 Estrat?ico"
      type           = strategic_bomber
      model          = 6
      strength       = 30
    }
    division = {
      id             = { type = 25000 id = 220 }
      name           = "FAN 7-G-5 de Caza"
      type           = interceptor
      model          = 11
      strength       = 50
    }
  }
  airunit = { 
    id       = { type = 25000 id = 807 }
    name     = "Ala de Transporte"
    location = 460
    base     = 460
    division = {
      id             = { type = 25000 id = 808 }
      name           = "Grupo de Transporte"
      type           = transport_plane
      model          = 4
      strength       = 100
    }
  }

  landdivision = { dormant = yes id = { type = 25000 id = 900 } name = "Anti-bolcheviques cuerpos"  type = garrison model = 5 extra = police brigade_model = 2 } 
}
