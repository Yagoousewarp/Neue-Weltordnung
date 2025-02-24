##############################
# Country definition for AST #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = AST
  name               = "Commonwealth of Australia"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 1707 # Canberra
  manpower           = 20
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 5000
  oil            = 5000
  supplies       = 5000
  money          = 100
  transports     = 120
  escorts        = 1

  diplomacy = {
    relation = { tag = NIC value = 200 }
    relation = { tag = BEL value = 200 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 65 }
    relation = { tag = U01 value = 150 }
    relation = { tag = GER value = -200 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = -200 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 150 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "AST" NumberOfSpies = 6 }

  nationalprovinces      = { 1688 1689 1690 1691 1692 1693 1694 1695 1696 1697 1698 1699 1700 1701 1702 1703 1704 1705 1706 1707 1708 1709 1710 1711 1712 1713 1714 1715 1716 1717 }
  ownedprovinces         = { 1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711 1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713 1701 1699 1714 1700 1702 1696 1610 1605 1608 1606 1609 1603 1602 1234 1604 1607 1724 1725 1726 1727 1587 }
  controlledprovinces    = { 1697 1716 1698 1695 1688 1692 1689 1690 1694 1691 1703 1693 1711 1712 1715 1704 1705 1706 1717 1707 1710 1708 1709 1713 1701 1699 1714 1700 1702 1696 1610 1605 1608 1606 1609 1603 1602 1234 1604 1607 1724 1725 1726 1727 1587 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5130 5800 5080 5090 5700 5710 5010 5020 5030 5190 5310 54010 54020 54030 5316 5326 5320 5327 5350 5360 5410 5600 5610 5620 5630 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2810 2820 2510 2520 2400 14000 14010 14020 14030 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 6120 6110 6900 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3310 3320 3330 3010 3020 3030 3040 3050 3060 3070 3610 3620 3630 3640 3650 3660 12100 12110 3720 3730 3736 3740 3900 3810 3820 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 8950 8960 8970 82300 82500 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4130 4140 4300 4310 4320 4330 4340 4040 4800 4810 4820 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9140 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9150 9160 9170 9190 9200 9210 9220 9230 9240 1160 1170 1180 1190 1200 1210 1220 1560 1570 1580 1590 1396 1400 1470 1870 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 10
    free_market       = 8
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 225109 } # Alexander G. Arkwright
  headofgovernment       = { type = 9 id = 225016 } # John J. Curtin
  foreignminister        = { type = 9 id = 225028 } # Herbert V. Evatt
  armamentminister       = { type = 9 id = 225042 } # Henry Showers
  ministerofsecurity     = { type = 9 id = 225064 } # Herbert V. Evatt
  ministerofintelligence = { type = 9 id = 225073 } # Ben Chifley
  chiefofstaff           = { type = 9 id = 225084 } # John J. Curtin
  chiefofarmy            = { type = 9 id = 225092 } # Sydney Rowell
  chiefofnavy            = { type = 9 id = 225098 } # John Collins
  chiefofair             = { type = 9 id = 225104 } # Charles Burnett
  dormant_ministers      = { 225001 225002 225003 225022 225004 225061 225005 225007 225116 225021 225035 225059 225071 225081 225082 225083 225088 }

  landunit = {
    id       = { type = 30001 id = 1 }
    name     = "1st Military District"
    location = 1701
    division = {
      id             = { type = 30001 id = 2 }
      name           = "1st Military District"
      type           = militia
      model          = 3
      extra          = artillery
      brigade_model  = 6
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 3 }
    name     = "6th Military District"
    location = 1710
    division = {
      id             = { type = 30001 id = 4 }
      name           = "6th Military District"
      type           = militia
      model          = 3
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 5 }
    name     = "2nd Military District"
    location = 1707
    division = {
      id             = { type = 30001 id = 6 }
      name           = "1st Australian Infantry Div."
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 7
      strength       = 40
    }
    division = {
      id             = { type = 30001 id = 195 }
      name           = "2nd Australian Infantry Div."
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 7
      strength       = 40
    }
    division = {
      id             = { type = 30001 id = 226 }
      name           = "3rd Australian Armoured Div."
      type           = armor
      model          = 0
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 7 }
    name     = "4th Military District"
    location = 1713
    division = {
      id             = { type = 30001 id = 8 }
      name           = "4th Military District"
      type           = militia
      model          = 3
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 9 }
    name     = "5th Military District"
    location = 1694
    division = {
      id             = { type = 30001 id = 10 }
      name           = "5th Military District"
      type           = militia
      model          = 3
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 30001 id = 11 }
    name     = "7th Military District"
    location = 1697
    division = {
      id             = { type = 30001 id = 2072 }
      name           = "Northern Territory Force"
      type           = infantry
      model          = 10
      extra          = anti_air
      brigade_model  = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 30001 id = 205 }
    name     = "2nd Military District"
    location = 1708
    division = {
      id             = { type = 30001 id = 206 }
      name           = "3rd Australian Infantry Div."
      type           = infantry
      model          = 9
      extra          = artillery
      brigade_model  = 7
      strength       = 40
    }
    division = {
      id             = { type = 30001 id = 2060 }
      name           = "4th Australian Infantry Div."
      type           = infantry
      model          = 9
      extra          = artillery
      brigade_model  = 7
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 30001 id = 2061 }
    name     = "I Australian Corps"
    location = 1234
    division = {
      id             = { type = 30001 id = 2062 }
      name           = "6th Australian Infantry Div."
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 60
    }
    division = {
      id             = { type = 30001 id = 2067 }
      name           = "9th Australian Infantry Div."
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 30001 id = 2066 }
    name     = "II Australian Corps"
    location = 1607
    division = {
      id             = { type = 30001 id = 2063 }
      name           = "7th Australian Infantry Div."
      type           = infantry
      model          = 10
      extra          = anti_air
      brigade_model  = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 30001 id = 2068 }
    name     = "5th Australian Division"
    location = 1699
    division = {
      id             = { type = 30001 id = 2069 }
      name           = "5th Australian Infantry Div."
      type           = infantry
      model          = 10
      extra          = anti_air
      brigade_model  = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 30001 id = 2070 }
    name     = "11th Australian Division"
    location = 1604
    division = {
      id             = { type = 30001 id = 2071 }
      name           = "11th Australian Infantry Div."
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 30001 id = 2074 }
    name     = "III Australian Corps"
    location = 1690
    division = {
      id             = { type = 30001 id = 2075 }
      name           = "1st Australian Armoured Div."
      type           = armor
      model          = 0
      strength       = 40
    }
  }

  navalunit = {
    id       = { type = 10500 id = 17 }
    name     = "HM Australian Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 10500 id = 18 }
      name           = "HMAS Australia"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 12700 id = 158 }
      name           = "HMAS Shropshire"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 4
    }
    division = {
      id             = { type = 10500 id = 25 }
      name           = "HMAS Adelaide"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 10500 id = 2501 }
      name           = "HMAS Hobart"
      type           = light_cruiser
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 10500 id = 22 }
    name     = "Transport Flotilla"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 10500 id = 23 }
      name           = "HMAS Kanimbla Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 29 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 30 }
      name           = "2nd Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 34 }
      name           = "6th Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 2290 }
      name           = "1st Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 10500 id = 2297 }
      name           = "9th Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 2298 }
      name           = "10th Transport Flotilla"
      type           = transport
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10500 id = 24 }
    name     = "HM Australian Reserve Fleet"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 10500 id = 31 }
      name           = "3rd Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 32 }
      name           = "4th Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 2294 }
      name           = "2nd Destroyer Flotilla"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 10500 id = 33 }
      name           = "5th Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 2295 }
      name           = "7th Transport Flotilla"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 10500 id = 2296 }
      name           = "8th Transport Flotilla"
      type           = transport
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 10500 id = 15 }
    name     = "No.1 RAAF Tactical Bomber Group"
    location = 1707
    base     = 1707
    division = {
      id             = { type = 10500 id = 16 }
      name           = "No.1 RAAF Tactical Bomber Group"
      type           = tactical_bomber
      model          = 4
      strength       = 100
    }
  }
}
