
##############################
# Country definition for HAI #
##############################

province =
{ id         = 892
  anti_air   = 1
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
  ic         = 3
}              # É|ÉãÉgÅ[ÉvÉâÉìÉX

#####################
# Country main data #
#####################

country =
{ tag                 = HAI
  manpower            = 9
  transports          = 12
  escorts             = 2
  energy              = 500
  metal               = 500
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  capital             = 892
  regular_id          = U09

  money               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    free_market       = 4
    freedom           = 2
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  ownedprovinces      = { 892 }
  controlledprovinces = { 892 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  nationalprovinces   = { 892 }
  landunit =
  { id       = { type = 9001 id = 6098 }
    name     = "ëÊ1åRíc"
    location = 892
    home     = 892
    #mission  = { type = none target = 892 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 9001 id = 6100 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 9001 id = 6101 }
    name     = "ëÊ2åRíc"
    location = 892
    home     = 892
    #mission  = { type = none target = 892 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 9001 id = 6103 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 9002 id = 6104 }
    name     = "ëÊ3êÌë‡"
    location = 892
    home     = 892
    base     = 892
    division =
    { id       = { type = 9002 id = 6106 }
      name     = "ëÊ1É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
}
