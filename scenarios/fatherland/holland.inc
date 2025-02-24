 
 ############################## 
 # Country definition for HOL # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = HOL 
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }	
   capital                = 1999 
   manpower               = 25
   # Resource Reserves 
energy                 = 1000
metal                  = 1000
rare_materials         = 500
   oil                    = 500 
   supplies               = 500 
   money                  = 40 
   transports             = 250 
   escorts                = 21 
  diplomacy =
  { relation = { tag = BEL value = 200 }
    relation = { tag = CAN value = 80 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 200 }
    relation = { tag = GER value = -200 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = -150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
    relation = { tag = U05 value = 150 access = yes } 
  } 
   SpyInfo                = {  country = "HOL" NumberOfSpies = 6  } 
   # Homeland 
   nationalprovinces      = {  118 119 120 121 122 123 124 125  } 
   # Homeland 
   ownedprovinces         = {  1762  1999  1761  } 
   # Homeland 
   controlledprovinces         = {  1762  1999  1761  } 
	claimedprovinces = { 1761 1762 1999 #Netherland Antilles + Guyana (Suriname) 
	}
   # Semi-Major Tech '36 
   # Group C 1936 techs 
   # ###################### 
   techapps               = { 

#Naval Infantry
#1560 1570 1580
#Engineers
1830 1840 1850 1860
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970 1980
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310 
#Early Static Anti-Air Artillery
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Light armor brigades only techs / advanced Light armor
7600 7610 2010 2630 2640
#Improved Destroyer 
3010 3020 3030 3040 3050 3060
#Interwar Light Cruiser 
3110 3120 3130 3140
#Improved Heavy Cruiser 
3210 3220 3230 3240 3250
#Interwar Battlecruiser 
3310 3320 3330 3340
#Great War Battleship 
3410 3420 3430 3440 3450 3456 3460
#Med Range Submarine 
3610 3620 3630 3640
#Torpedo & ASW 18
3720 3730 3736 3740 3900
#Troopships
3810
#Early Fighter  
4500 4510 4520 4530 4540 4550 4010 4020
#Interwar Bomber 
4600 4610 4620 4630 4120
#Multirole fighter
4300 4310 4320 4330
#ww1 strategic bomber
4800 4810 4820
#ww1 navalbomber
4700 4710
#Modern Agriculture 
5700 5710 5010
#Computers & cryptografi
5310 54010 54020 54030 5316 5326
#Manufactoring
5810 5820 5050 5830 5060
#Improved Construction Engineering 
5800 5080 5090 
#Faculty of Atomic Research 
5470
#Medicine
5600 5610 5620 5630
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Defensive Focus Grand Battleplan Path
6560 6030 6110
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
#Naval Doctrines
8050  8070   8010  8020  8030  8040 
#Great War Hospital System 
14000 14010 14020
} 
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 8 
     political_left    = 4 
     free_market       = 9 
     freedom           = 10 
     professional_army = 5
     defense_lobby     = 6 
     interventionism   = 2 
    } 
   headofstate            = {  type = 9 id = 15001  } 
   headofgovernment       = {  type = 9 id = 15021  } 
   foreignminister        = {  type = 9 id = 15038  } 
   armamentminister       = {  type = 9 id = 15051  } 
   ministerofsecurity     = {  type = 9 id = 15078  } 
   ministerofintelligence = {  type = 9 id = 15101  } 
   chiefofstaff           = {  type = 9 id = 15007  } 
   chiefofarmy            = {  type = 9 id = 15117  } 
   chiefofnavy            = {  type = 9 id = 15009  } 
   chiefofair             = {  type = 9 id = 15127  }
   dormant_ministers      = {  15002 15020 15003 15037 15004 15005 15006 15012 15132 15013 15021 15023  }
   dormant_leaders        = {  15002 15008 15010 15022 15025 15026 15028 15045 15058  } 

   navalunit = 
   {  id       = {  type = 18500 id = 17  } 
     location = 1511 
     base     = 1511 
     name     = "Koninklijke Vloot" 
     Division = 
     {  id    = {  type = 18500 id = 2002  } 
       name  = "HrMs De Zeven ProvinciŽn" 
       type  = light_cruiser 
       model = 5 
      } 
     Division = 
     {  id    = {  type = 18500 id = 2003  } 
       name  = "HrMs Eendracht" 
       type  = light_cruiser 
       model = 5 
      } 
     Division = 
     {  id    = {  type = 18500 id = 2000  } 
       name  = "HrMs Tromp" 
       type  = light_cruiser 
       model = 4 
      }
     Division = 
     {  id    = {  type = 18500 id = 2001  } 
       name  = "HrMs Jacob van Heemskerck" 
       type  = light_cruiser 
       model = 4 
      } 
     Division = 
     {  id    = {  type = 18500 id = 20  } 
       name  = "HrMs Sumatra" 
       type  = light_cruiser 
       model = 2
      } 
     Division = 
     {  id    = {  type = 18500 id = 21  } 
       name  = "1e Torpedobootjager Smaldeel" 
       type  = destroyer 
       model = 4
      }  
     Division = 
     {  id   = {  type = 18500 id = 23  } 
       name = "1e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 24  } 
       name = "2e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
     Division = 
     {  id   = {  type = 18500 id = 25  } 
       name = "3e Transport Smaldeel" 
       type = transport 
	   model = 1 
      } 
    } 

	navalunit = { 
		id = { type = 18500 id = 1381 } 
		name = "3e Koninklijke Vloot" 
		location = 1511 
		base = 1511 
     Division = 
     {  id    = {  type = 18500 id = 39  } 
       name  = "1e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 40  } 
       name  = "2e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 2 
      } 
     Division = 
     {  id    = {  type = 18500 id = 41  } 
       name  = "3e Onderzeeboot Smaldeel" 
       type  = submarine 
       model = 3 
      } 
    }
  } 
 
