
##############################
# Country definition for U06 #
##############################

province =
{ id         = 2
  infra      = 1.5
  ic         = 20
  naval_base = { size = 10 current_size = 10 }
  air_base   = { size = 10 current_size = 10 }
}

#####################
# Country main data #
#####################

country =
{ tag                 = USA
  manpower            = 1000
  energy              = 48000
  metal               = 38000
  rare_materials      = 38000
  oil                 = 40000
  supplies            = 20000
  regular_id          = U06
  money               = 3500
  capital             = 2
  escorts             = 1200
  transports          = 1200
  diplomacy =
  { relation = { tag = U02 value = 200 access = yes }
    relation = { tag = U06 value = 200 access = yes }
  }
  free                = { energy = 300 metal = 200 rare_materials = 100 oil = 30 ic = 100 }
  nationalprovinces   = { 2 }
  ownedprovinces      = { 2 }
  controlledprovinces = { 2 }
  techapps            = { 2000  2210  3000  4000  5000  6100  6110  6280
                          1130  1230  1570  1670  1770  1870  1970
                          2010  2020  2030  2040  2050  2310  2320  2610  2620  2910  2920  10050 10060 10070 1010  10150 10190 1020  10200 10210 1030  1110  1120  1130  1140  1210  1220  1230  1240  1470  1490 
                          1510  1530  1550  1560  1570  1650  1660  1670  1750  1760  1770  1850  1860  1870  1950  1960  1970  2010  2020  20210
                          2030  20310 2040  2050  20510 2060  2310  2320  2610  2620  2630  2910  2920  2930  3010  3020  3030  30410 30420 30430
                          30510 30520 30530 3110  3120  3130  3210  3220  3230  3310  3320  3330  3460  3470  3480  3490  3610  3620  3630  3710 
                          3720  3730  3810  3820  3830  3910  3920  3940  3950  40000 40010 40020 4010  40100 40110 40120 4020  40200 40210 40220
                          4030  4110  4120  4130  4210  4220  4230  4390  4400  4410  4480  4490  4560  4570  4640  4650  4660  4820  4830  4840 
                          50020 50030 50040 50070 50080 50090 5010  50100 50090 50100 5020  50290 5030  50300 5090  5100  5110  5170  5180  5190  5250 
                          5260  5270  5330  5340  5350  5410  5420  5430  5490  5500  5510  5600  5610  5620  5680  5760  5770  5780  5910  5920 
                          5930  7010  7030  7040  7050  7060  7500  7510  7520  7530  7540  7550 
                          7670  7680  7690  7700  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  90040
                          9010  90140 90190 9020  9030  9040  9050  9190  9200  9210  9340  9350  9360  9370  9380  9390  9520  9530  9540  9670 
                          9680  9690  9700  9710  9840  9850  9860
                        }
  policy =
  { democratic        = 10
    political_left    = 5
    freedom           = 10
    free_market       = 10
    professional_army = 10
    defense_lobby     = 10
    interventionism   = 10
  }
landunit = {
	name = "æ1@btc"
	id = { type = 23001 id = 1 }
	location = 312
    division =
    { id            = { type = 23001 id = 76 }
      name          = "æ1íp@båà"
      model         = 5
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 77 }
      name          = "æ2íp@båà"
      model         = 5
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 78 }
      name          = "æ3íp@båà"
      model         = 4
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 79 }
      name          = "æ4íp@båà"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 80 }
      name          = "æ5íp@båà"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 81 }
      name          = "æ6íp@båà"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
	division = {
	id = { type = 23001 id = 2 }
	name = "æ1íÔåà"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 3 }
	name = "æ2íÔåà"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 4 }
	name = "æ3íÔåà"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 5 }
	name = "æ1@B»àºåà"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 6 }
	name = "æ2@B»àºåà"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 7 }
	name = "æ1båà"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
landunit = {
	name = "æ2@btc"
	id = { type = 23001 id = 8 }
	location = 313
    division =
    { id            = { type = 23001 id = 89 }
      name          = "æ10íp@båà"
      model         = 5
      brigade_model = 0
      type          = paratrooper
      extra         = artillery
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 90 }
      name          = "æ11íp@båà"
      model         = 5
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 91 }
      name          = "æ12íp@båà"
      model         = 4
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 92 }
      name          = "æ13íp@båà"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 93 }
      name          = "æ14íp@båà"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
    division =
    { id            = { type = 23001 id = 94 }
      name          = "æ15íp@båà"
      model         = 3
      brigade_model = 0
      type          = paratrooper
      strength      = 100
    }
	division = {
	id = { type = 23001 id = 9 }
	name = "æ4íÔåà"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 10 }
	name = "æ5íÔåà"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 11 }
	name = "æ6íÔåà"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 12 }
	name = "æ3@B»àºåà"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 13 }
	name = "æ4@B»àºåà"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 14 }
	name = "æ2båà"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
landunit = {
	name = "æ3@btc"
	id = { type = 23001 id = 15 }
	location = 376
	division = {
	id = { type = 23001 id = 16 }
	name = "æ7íÔåà"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 17 }
	name = "æ8íÔåà"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 18 }
	name = "æ9íÔåà"
	type = armor
	model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 19 }
	name = "æ5@B»àºåà"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 20 }
	name = "æ6@B»àºåà"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
        #locked = yes
	}
	division = {
	id = { type = 23001 id = 21 }
	name = "æ3båà"
	type = light_armor
	model = 1
	experience = 0
        #locked = yes
	}
  }
landunit = {
	name = "æ3àºtc"
	id = { type = 23001 id = 22 }
	location = 375
	division = {
	id = { type = 23001 id = 23 }
	name = "æ10íÔåà"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 23001 id = 24 }
	name = "æ1©®Ô»àºåà"
	type = mechanized
	model = 23
	experience = 0
	}
	division = {
	id = { type = 23001 id = 25 }
	name = "æ2©®Ô»àºåà"
	type = mechanized
	model = 23
	experience = 0
	}
	division = {
	id = { type = 23001 id = 26 }
	name = "æ3©®Ô»àºåà"
	type = mechanized
	model = 23
	experience = 0
	}
	division = {
	id = { type = 23001 id = 27 }
	name = "æ7@B»àºåà"
	type = mechanized
	model = 1
	experience = 0
	}
	division = {
	id = { type = 23001 id = 28 }
	name = "æ8@B»àºåà"
	type = mechanized
	model = 1
	experience = 0
	}
}
navalunit = {
	name = "æ15óêí¬Q"
	id = { type = 23002 id = 127 }
	location = 2
	base = 2
	division = {
	id = { type = 23002 id = 128 }
	name = "AJ"
	type = carrier
	model = 10
    extra1        = cag
    brigade_model1= 1
	experience = 0
	}
	division = {
	id = { type = 23002 id = 129 }
	name = "gNX^"
	type = heavy_cruiser
	model = 2
	experience = 0
	}
	division = {
	id = { type = 23002 id = 130 }
	name = "o[WjA"
	type = heavy_cruiser
	model = 1
	experience = 0
	}
	division = {
	id = { type = 23002 id = 131 }
	name = "obOC"
	type = destroyer
	model = 2
	experience = 0
	}
	division = {
	id = { type = 23002 id = 132 }
	name = "_EY"
	type = destroyer
	model = 2
	experience = 0
	}
	division = {
	id = { type = 23002 id = 133 }
	name = "oW["
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 23002 id = 134 }
	name = "u[N["
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 23002 id = 135 }
	name = "o[gEEEsA["
	type = destroyer
	model = 1
	experience = 0
	}
  }
navalunit = {
	name = "æ16óêí¬Q"
	id = { type = 23002 id = 136 }
	location = 2
	base = 2
	division = {
	id = { type = 23002 id = 137 }
	name = "W¥F¥PlfB"
	type = carrier
	model = 10
    extra1        = cag
    brigade_model1= 1
	experience = 0
	}
	division = {
	id = { type = 23002 id = 138 }
	name = "eLTX"
	type = heavy_cruiser
	model = 2
	experience = 0
	}
	division = {
	id = { type = 23002 id = 139 }
	name = "~VVbs"
	type = heavy_cruiser
	model = 1
	experience = 0
	}
	division = {
	id = { type = 23002 id = 140 }
	name = "nhEEEzg"
	type = destroyer
	model = 2
	experience = 0
	}
	division = {
	id = { type = 23002 id = 141 }
	name = "gbv"
	type = destroyer
	model = 2
	experience = 0
	}
	division = {
	id = { type = 23002 id = 142 }
	name = "t@jO"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 23002 id = 143 }
	name = "I[bg"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 23002 id = 144 }
	name = "WZtEq[Y"
	type = destroyer
	model = 1
	experience = 0
	}
  }
  navalunit =
  { id       = { type = 23002 id = 145 }
    name     = "æ1¼p¦O[v"
    location = 2
    base     = 2
    division =
    { id       = { type = 23002 id = 146 }
      name     = "CI[¥W}"
      model    = 1
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 1
    }
    division =
    { id       = { type = 23002 id = 147 }
      name     = "æ1Ag¤O[v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 23002 id = 148 }
      name     = "æ2Ag¤O[v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 23002 id = 149 }
    name     = "æ2¼p¦O[v"
    location = 2
    base     = 2
    division =
    { id       = { type = 23002 id = 150 }
      name     = "ILi"
      model    = 1
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 1
    }
    division =
    { id       = { type = 23002 id = 151 }
      name     = "æ3Ag¤O[v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 23002 id = 152 }
      name     = "æ4Ag¤O[v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
  }
  navalunit =
  { id       = { type = 23002 id = 153 }
    name     = "æ3¼p¦O[v"
    location = 2
    base     = 2
    division =
    { id       = { type = 23002 id = 154 }
      name     = "K_Ji"
      model    = 1
      type     = escort_carrier
      strength = 100.0000
      extra1        = cavalry_brigade
      brigade_model1= 1
    }
    division =
    { id       = { type = 23002 id = 155 }
      name     = "æ5Ag¤O[v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 23002 id = 156 }
      name     = "æ6Ag¤O[v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
  }
}
