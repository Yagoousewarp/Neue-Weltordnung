##############################
# Country definition for SAF #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SAF
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 } }
  capital            = 873 # Pretoria
  manpower           = 40
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 5000
  oil            = 500
  supplies       = 3000
  money          = 200

  diplomacy = {
    relation = { tag = NZL value = 200 access = yes }
    relation = { tag = CAN value = 200 access = yes }
    relation = { tag = AST value = 200 access = yes }
    relation = { tag = ENG value = 200 access = yes }
    relation = { tag = POR value = 50 }
    relation = { tag = USA value = 125 }
  }

  nationalprovinces      = { 872 873 875 876 878 879 880 881 }
  ownedprovinces         = { 872 873 875 876 878 879 880 881 882 883 884 885 886 }
  controlledprovinces    = { 872 873 875 876 878 879 880 881 882 883 884 885 886 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1310 1320 1330 1340 1350 1360 1370 1380 1396 1400 1560 1570 1580 1590 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2290 2300 2310 2320 2330 2340 2360 2370 2380 2400 2410 2420 2430 2450 2460 2470 2480 2490 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3080 3110 3120 3130 3140 3150 3160 3170 3210 3220 3230 3240 3250 3260 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 3930 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5466 5470 5480 5490 5500 5510 5520 5560 5600 5610 5620 5630 5640 5650 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6170 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7010 7020 7100 7110 7120 7140 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 12000 12010 12020 12050 12060 12100 12110 12120 12130 12140 12150 13060 13070 13080 14000 14010 14020 14030 15000 15100 15140 15180 15500 21180 21190 21200 22910 22920 22930 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 54010 54020 54030 81650 81700 81710 81720 81730 81740 81750 81850 81860 81870 81880 81890 81900 82300 82310 82320 82330 82500 82510 82520 199100 199130 }
  inventions             = { 3000011 3000012 3000015 3000016 3000017 3000018 3000027 3000028 3000031 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 1
    freedom           = 3
    free_market       = 8
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 425017 } # Gideon B. van Zyl
  headofgovernment       = { type = 9 id = 425018 } # D. F. Malan
  foreignminister        = { type = 9 id = 425028 } # D. F. Malan
  armamentminister       = { type = 9 id = 425080 } # F.C. Erasmus
  ministerofsecurity     = { type = 9 id = 425046 } # T.E. D?ges
  ministerofintelligence = { type = 9 id = 425057 } # Nicolaas Havenga
  chiefofstaff           = { type = 9 id = 425007 } # Pierre van Ryneveld
  chiefofarmy            = { type = 9 id = 425067 } # Pierre van Ryneveld
  chiefofnavy            = { type = 9 id = 425009 } # Pierre Oliver-Knoll
  chiefofair             = { type = 9 id = 425071 } # Christoffel Venter
  dormant_ministers      = { 425001 425011 425002 425003 425004 425005 425006 425013 425008 }

  landunit = {
    id       = { type = 30551 id = 1 }
    name     = "Union Defence Corps"
    location = 880
    division = {
      id             = { type = 30554 id = 1 }
      name           = "3rd SA Motorized Inf. Div."
      type           = motorized
      model          = 2
    }
    division = {
      id             = { type = 30554 id = 4 }
      name           = "1st SA Inf. Div."
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 30551 id = 2 }
    name     = "South African Motorized Corps"
    location = 880
    division = {
      id             = { type = 30554 id = 2 }
      name           = "2nd SA Armoured Division"
      type           = motorized
      model          = 2
    }
    division = {
      id             = { type = 30554 id = 3 }
      name           = "1st SA Motorized Inf. Div."
      type           = motorized
      model          = 2
      extra          = tank_destroyer
      brigade_model  = 2
    }
  }

  navalunit = {
    id       = { type = 30552 id = 1 }
    name     = "South African Fleet"
    location = 880
    base     = 880
    division = {
      id             = { type = 30555 id = 1 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 30555 id = 2 }
      name           = "2nd Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 30555 id = 3 }
      name           = "3rd Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 30555 id = 4 }
      name           = "4th Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 30555 id = 5 }
      name           = "5th Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 30555 id = 6 }
      name           = "6th Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 30555 id = 7 }
      name           = "7th Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 30555 id = 8 }
      name           = "8th Transport Flotilla"
      type           = transport
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 30553 id = 1 }
    name     = "1st SAAF Airforce"
    location = 880
    base     = 880
    division = {
      id             = { type = 30556 id = 1 }
      name           = "No.1 SAAF interceptor Group"
      type           = interceptor
      model          = 10
    }
    division = {
      id             = { type = 30556 id = 2 }
      name           = "No.2 SAAF interceptor Group"
      type           = interceptor
      model          = 10
    }
    division = {
      id             = { type = 30556 id = 5 }
      name           = "No.15 SAAF Tactical Bomb Group"
      type           = tactical_bomber
      model          = 8
    }
    division = {
      id             = { type = 30556 id = 6 }
      name           = "No.21 SAAF Tactical Bomb Group"
      type           = tactical_bomber
      model          = 8
    }
  }
  airunit = { 
    id       = { type = 30553 id = 2 }
    name     = "2st SAAF Airforce"
    location = 880
    base     = 880
    division = {
      id             = { type = 30556 id = 7 }
      name           = "No.4 SAAF interceptor Group"
      type           = interceptor
      model          = 10
    }
    division = {
      id             = { type = 30556 id = 10 }
      name           = "No.40 SAAF interceptor Group"
      type           = interceptor
      model          = 10
    }
    division = {
      id             = { type = 30556 id = 11 }
      name           = "No.17 SAAF Tactical Bomb Group"
      type           = tactical_bomber
      model          = 8
    }
    division = {
      id             = { type = 30556 id = 12 }
      name           = "No.21 SAAF Tactical Bomb Group"
      type           = tactical_bomber
      model          = 8
    }
  }
  airunit = { 
    id       = { type = 30553 id = 3 }
    name     = "No.16 SAAF Tactical Bomb Group"
    location = 872
    base     = 872
    division = {
      id             = { type = 30556 id = 13 }
      name           = "No.16 SAAF Tactical Bomb Group"
      type           = tactical_bomber
      model          = 8
    }
  }
  airunit = { 
    id       = { type = 30553 id = 5 }
    name     = "No.41 SAAF interceptor Group"
    location = 872
    base     = 872
    division = {
      id             = { type = 30556 id = 15 }
      name           = "No.41 SAAF interceptor Group"
      type           = interceptor
      model          = 10
    }
  }
  airunit = { 
    id       = { type = 30553 id = 6 }
    name     = "3rd SAAF Airforce"
    location = 880
    base     = 880
    division = {
      id             = { type = 30556 id = 16 }
      name           = "No.24 SAAF Tactical Bomb Group"
      type           = tactical_bomber
      model          = 8
    }
    division = {
      id             = { type = 30556 id = 4 }
      name           = "No.7 SAAF interceptor Group"
      type           = interceptor
      model          = 10
    }
    division = {
      id             = { type = 30556 id = 3 }
      name           = "No.3 SAAF interceptor Group"
      type           = interceptor
      model          = 10
    }
    division = {
      id             = { type = 30556 id = 9 }
      name           = "No.11 SAAF interceptor Group"
      type           = interceptor
      model          = 10
    }
  }
  airunit = { 
    id       = { type = 30553 id = 8 }
    name     = "4th SAAF Airforce"
    location = 880
    base     = 880
    division = {
      id             = { type = 30556 id = 18 }
      name           = "No.24 SAAF Marine Bomb Group"
      type           = naval_bomber
      model          = 4
    }
    division = {
      id             = { type = 30556 id = 17 }
      name           = "No.25 SAAF Marine Bomb Group"
      type           = naval_bomber
      model          = 4
    }
    division = {
      id             = { type = 30556 id = 14 }
      name           = "No.22 SAAF Marine Bomb Group"
      type           = naval_bomber
      model          = 4
    }
    division = {
      id             = { type = 30556 id = 8 }
      name           = "No.5 SAAF interceptor Group"
      type           = multi_role
      model          = 7
    }
  }
}
