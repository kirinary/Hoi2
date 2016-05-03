
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
  techapps            = { 10050 1010  10150 10190 1020  10200 10210 1030  10390 1040  10440 10490 1110  1120  1130  1210  1220  1550  1560  1570 
                          1650  1660  1850  1860  1870  1950  3010  3020  3030  3110  3120  3130  3460  3470  3810  3910  3920  3930  4390  4400 
                          4410  4480  4560  50020 50030 50040 50070 50080 50090 5010  50100 50110 5020  50290 50300 5090  5100  5170  5180  5250 
                          5330  5410  5420  5430  5460  5600  5610  5620  5760  5910  5920  7010  80080
                          80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8880  8890  8900  8910  8920  9010  9020  9030  9040  9050 
                          9190  9200  9340  9350  9360  9370  9380  9520  9530  9670  9680  9690  9700  9840  4010  4020  4030 
                          4040  4050  4110  4120  4130  4140  4150  4210  4220  4230  4240  4250
                          4640  4650  4660  4670  4680  4820  4830  4840  4850  4860  40000 40010 40020 40030 40040 2010  2020  2030  2040  2050
                          2060  2070  2080
                          6050  6060  6070  6080  6090  6260  6270  6520  6530
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
