##############################
# Country definition for BOL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BOL
  puppet             = ARG
  name               = "Estado Boliviano"
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 MOB4 = 1 } }
  capital            = 2020 # Nuestra Senora de La Paz
  dissent            = 35
  manpower           = 20
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 500
  oil            = 2000
  supplies       = 15000
  money          = 0

  diplomacy = {
    relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = ECU value = -20 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
  }

  nationalprovinces      = { 2002 2019 2020 2021 2024 2025 2046 2063 2064 }
  ownedprovinces         = { 2019 2020 2021 2063 2064 }
  controlledprovinces    = { 2019 2020 2021 2063 2064 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1470 1530 1560 1570 1580 1590 1600 1610 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2070 2080 2090 2100 2110 2120 2150 2160 2170 2180 2220 2230 2240 2260 2290 2300 2310 2320 2330 2340 2370 2400 2410 2420 2430 2450 2460 2470 2480 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3610 3620 3630 3640 3650 3660 3720 3730 3736 3740 3750 3760 3810 3820 3830 3900 3910 4010 4020 4030 4040 4050 4060 4070 4080 4120 4130 4140 4150 4170 4190 4200 4220 4230 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6150 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7550 7560 7570 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 22910 22920 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81650 81700 81710 81720 81850 81860 81870 81880 82300 82310 82320 82500 82510 199100 199130 199140 }
  inventions             = { 3000011 3000012 3000018 3000027 3000028 3000031 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 7
    freedom           = 6
    free_market       = 6
    professional_army = 4
    defense_lobby     = 3
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 205021 } # Gualberto Villarroel Lopez
  headofgovernment       = { type = 9 id = 205038 } # Gualberto Villarroel Lopez
  foreignminister        = { type = 9 id = 205065 } # Jos?Franz Tamayo
  armamentminister       = { type = 9 id = 205092 } # Enrique Baldivieso Aparicio
  ministerofsecurity     = { type = 9 id = 205117 } # Alberto Diez de Medina
  ministerofintelligence = { type = 9 id = 205133 } # Alberto Diez de Medina
  chiefofstaff           = { type = 9 id = 205146 } # Jos?Pastor Baldiviseo
  chiefofarmy            = { type = 9 id = 205157 } # Gualberto Villarroel Lopez
  chiefofnavy            = { type = 9 id = 205168 } # Julian Montellano Carrasco
  chiefofair             = { type = 9 id = 205182 } # Enrique Baldivieso Aparicio
  dormant_leaders        = { 205005 205020 }
  dormant_ministers      = { 205001 205011 205013 205016 205002 205028 205034 205030 205049 205050 205054 205003 205072 205005 205109 205006 205125 205008 205150 205009 205172 205010 205029 205004 205138 205140 205161 205012 205017 }

  landunit = {
    id       = { type = 17000 id = 40 }
    name     = "Ejercito de Bolivia"
    location = 2020
    division = {
      id             = { type = 17000 id = 4000 }
      name           = "1. Brigada de Infanter? 'Bolivar'"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 4
      strength       = 30
    }
    division = {
      id             = { type = 17000 id = 4001 }
      name           = "2. Brigada de Infanter?"
      type           = infantry
      model          = 11
      strength       = 30
    }
    division = {
      id             = { type = 17000 id = 4002 }
      name           = "3. Brigada de Infanter?"
      type           = infantry
      model          = 11
      strength       = 30
    }
  }

  airunit = { 
    id       = { type = 12000 id = 4005 }
    name     = "Aviaci? del Ej?cito"
    location = 2020
    base     = 2020
    division = {
      id             = { type = 12000 id = 4006 }
      name           = "Grupo A?ea Nro. 1"
      type           = interceptor
      model          = 7
      strength       = 20
    }
  }
}
