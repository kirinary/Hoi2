
##############################
# Country definition for NZL #
##############################

province = { id = 1868 ic = 5 } # ÉIÅ[ÉNÉâÉìÉh
province = { id = 1869 ic = 1 } # ÉlÅ[ÉsÉA
province = { id = 1870 ic = 2 } # ÉjÉÖÅ[ÉvÉäÉ}ÉX
province = { id = 1871 ic = 8 naval_base = 5 air_base = 5 } # ÉEÉFÉäÉìÉgÉì
province = { id = 1872 ic = 4 } # ÉNÉâÉCÉXÉgÉ`ÉÉÅ[É`
province = { id = 1873 ic = 2 } # É_ÉjÅ[ÉfÉì

#####################
# Country main data #
#####################

country =
{ tag                 = NZL
  energy              = 1000
  metal               = 1500
  rare_materials      = 1000
  oil                 = 500
  supplies            = 1000
  manpower            = 18
  transports          = 48
  escorts             = 16
  capital             = 1871
  regular_id          = U91
  money               = 100
  policy              = { democratic = 9 political_left = 2 freedom = 8 free_market = 7 professional_army = 8 defense_lobby = 7 interventionism = 3 }
  ownedprovinces      = { 1868 1869 1870 1871 1872 1873 1768 1767 1753 1754 1751 }
  controlledprovinces = { 1868 1869 1870 1871 1872 1873 1768 1767 1753 1754 1751 }
  techapps            = { 10050 1010  10190 1020  10200 10210 1030  1040  10490 1110  1120  1130  1210  1220  1230  1550  1560  1650  1660  1850 
                          2010  2020  20210 3010  3020  3030  3110  3120  3130  3210  3220  3460  3470  3810  3820  3910  3920  4390  4400  4410 
                          4480  4560  50020 50030 50040 50070 50080 50090 5010  50100 50110 50120 5020  50290 5030  50300 5090  5100  5170  5180 
                          5410  5420  5430  5460  5600  5610  5620  5910  5920  2000  2210  3000  4000  5000  6100  6110  6280  6290  7010  80080 80090
                          8010  80160 8020  8030  8040  8050  8060  8070  8080  8090  8100  8110  8120  9010  9020  9030  9040  9050  9060  9190 
                          9200  9340  9350  9360  9370  9380  9390  9400  9520  9530  9670  9680  9690  9700  9710  9840  9850 
                        }
  nationalprovinces   = { 1868 1869 1870 1871 1872 1873 }
  inventions             = { 8006 }
  landunit =
  { id       = { type = 15001 id = 4423 }
    name     = "ëÊ1åRíc"
    location = 1868
    home     = 1868
    mission  = { type = none target = 1868 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 15001 id = 4425 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
            locked        = yes
    }
  }
  landunit =
  { id       = { type = 15001 id = 4426 }
    name     = "ëÊ2åRíc"
    location = 1872
    home     = 1872
    mission  = { type = none target = 1872 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 15001 id = 4428 }
      name          = "ëÊ2é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100      locked        = yes
    }
  }
  landunit =
  { id       = { type = 15001 id = 4429 }
    name     = "ëÊ3åRíc"
    location = 1871
    home     = 1871
    mission  = { type = none target = 1871 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 15001 id = 4431 }
      name          = "ëÊ3é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100      locked        = yes
    }
  }
  landunit =
  { id       = { type = 15001 id = 4432 }
    name     = "ëÊ4åRíc"
    location = 1871
    home     = 1871
    mission  = { type = none target = 1871 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 15001 id = 4434 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100      locked        = yes
    }
    division =
    { id            = { type = 15001 id = 4435 }
      name          = "ëÊ2ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100      locked        = yes
    }
    division =
    { id            = { type = 15001 id = 4436 }
      name          = "ëÊ1ï‡ï∫êÌé‘étíc"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 15002 id = 1 }
    name     = "Task force 1"
    location = 1871
    base     = 1871
    division =
    { id       = { type = 15002 id = 4437 }
      name     = "ëÊ1É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 15002 id = 4438 }
      name     = "ëÊ1ãÏíÄäÕétíc"
      model    = 2
      type     = destroyer
      strength            = 100
    }
    division =
    { id       = { type = 15002 id = 4439 }
      name     = "ëÊ1óAëóäÕ/ógó§äÕétíc"
      model    = 4
      type     = transport
      strength            = 100
    }
  }
}
