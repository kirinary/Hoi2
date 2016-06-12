
##############################
# Country definition for PAR #
##############################

province = { id = 837 ic = 3 } # ÉrÉWÉÉÅEÉAÉWÉFÉX
province =
{ id       = 846
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
  ic       = 10
}            # ÉAÉXÉìÉVÉIÉì

#####################
# Country main data #
#####################

country =
{ tag                 = PAR
  energy              = 500
  metal               = 500
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  manpower            = 8
  capital             = 846
  regular_id          = U08

  money               = 100
  nationalprovinces   = { 837 846 }
  ownedprovinces      = { 837 846 }
  controlledprovinces = { 837 846 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  landunit =
  { id       = { type = 16501 id = 6283 }
    name     = "ëÊ1åRíc"
    location = 846
    home     = 846
    mission  = { type = none target = 846 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 16501 id = 6285 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 16501 id = 6286 }
    name     = "ëÊ2åRíc"
    location = 846
    home     = 846
    mission  = { type = none target = 846 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 16501 id = 6288 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
}
