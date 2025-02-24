##############################
# Country definition for POR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = POR
  name               = "Estado Novo do Portugal"
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 MOB4 = 1 } }
  capital            = 476 # Lisbon
  manpower           = 50
  # Resource Reserves
  energy         = 450
  metal          = 300
  rare_materials = 200
  oil            = 200
  supplies       = 200
  money          = 0
  transports     = 50
  escorts        = 7

  diplomacy = {
    relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 }
    relation = { tag = SAF value = 50 }
    relation = { tag = USA value = -25 }
    relation = { tag = SPA value = 75 }
    relation = { tag = GER value = 45 }
    relation = { tag = ITA value = 35 }
    relation = { tag = SOV value = -75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 3 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }

  nationalprovinces      = { 476 477 478 479 480 481 482 994 995 }
  ownedprovinces         = { 476 477 478 479 480 481 482 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1617 1513 }
  controlledprovinces    = { 476 477 478 479 480 481 482 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1617 1513 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1310 1320 1330 1340 1350 1360 1370 1396 1560 1570 1580 1830 1840 1850 1860 1910 1920 1940 1950 1960 1970 1980 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2290 2300 2310 2320 2330 2340 2360 2370 2380 2400 2410 2420 2430 2450 2460 2470 2480 2490 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3680 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5466 5560 5600 5610 5620 5630 5640 5650 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7140 7550 7560 7570 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9350 12000 12010 12020 12060 12100 12110 12120 12130 12140 13060 13070 13080 14000 14010 14020 14030 15000 15100 15140 15180 21180 21190 21200 22910 22920 22930 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 54010 54020 54030 81650 81700 81710 81720 81730 81740 81850 81860 81870 81880 81890 82300 82310 82320 82500 82510 199130 1930 }
  inventions             = { 3000011 3000012 3000018 3000027 3000028 3000031 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 20001 } # Ant?io de Fragosa Carmona
  headofgovernment       = { type = 9 id = 20002 } # A. Oliveira Salazar
  foreignminister        = { type = 9 id = 20017 } # Alfredo Pimenta
  armamentminister       = { type = 9 id = 20028 } # Armindo Monteiro
  ministerofsecurity     = { type = 9 id = 20036 } # Henrique Galvao
  ministerofintelligence = { type = 9 id = 20039 } # Augusto Vasconcellos
  chiefofstaff           = { type = 9 id = 20041 } # Eduardo A. Marques
  chiefofarmy            = { type = 9 id = 20044 } # J.Barros Rodrigues
  chiefofnavy            = { type = 9 id = 20046 } # Americo Deus Tomas
  chiefofair             = { type = 9 id = 20047 } # Ortins Bettencourt
  dormant_ministers      = { 20004 20019 20020 20021 20022 20023 20024 20025 20030 20031 20032 20011 20012 20005 20006 20037 20007 20008 20042 20009 20010 }

  landunit = {
    id       = { type = 10975 id = 1000 }
    name     = "Portuguese Army"
    location = 476
    division = {
      id             = { type = 10975 id = 1001 }
      name           = "1a Divis? de Infantaria"
      type           = infantry
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 10975 id = 1002 }
      name           = "2a Divis? de Infantaria"
      type           = infantry
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 10975 id = 1003 }
      name           = "3a Divis? de Infantaria"
      type           = infantry
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 10975 id = 1011 }
      name           = "4a Divis? de Infantaria"
      type           = infantry
      model          = 12
      strength       = 100
    }
  }

  navalunit = {
    id       = { type = 10975 id = 1004 }
    name     = "Marinha do Portugal"
    location = 476
    base     = 476
    division = {
      id             = { type = 10975 id = 1005 }
      name           = "Douro Flotilha"
      type           = destroyer
      model          = 7
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 10975 id = 1006 }
      name           = "Viana do Castello Flotilha"
      type           = destroyer
      model          = 7
      extra1         = naval_anti_air_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 10975 id = 1007 }
      name           = "1o Flotilha de Submarino"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 10975 id = 1008 }
      name           = "1o Flotilha de Navio de Transporte"
      type           = transport
      model          = 3
    }
    division = {
      id             = { type = 10975 id = 1009 }
      name           = "2o Flotilha de Navio de Transporte"
      type           = transport
      model          = 3
    }
    division = {
      id             = { type = 10975 id = 1010 }
      name           = "3o Flotilha de Navio de Transporte"
      type           = transport
      model          = 3
    }
  }

  airunit = { 
    id       = { type = 14000 id = 9300 }
    name     = "Portuguese Airforce"
    location = 476
    base     = 476
    division = {
      id             = { type = 14000 id = 9301 }
      name           = "Tactical Air Wing 1"
      type           = tactical_bomber
      model          = 9
      strength       = 100
    }
  }
}
