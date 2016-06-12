
##############################
# Country definition for ECU #
##############################

province =
{ id         = 814
  anti_air   = 1
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
  ic         = 4
}              # ÉOÉAÉÑÉLÉã
province =
{ id       = 815
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  ic       = 9
}            # ÉLÉg

#####################
# Country main data #
#####################

country =
{ tag                 = ECU
  energy              = 500
  metal               = 500
  rare_materials      = 200
  oil                 = 500
  supplies            = 200
  manpower            = 8
  transports          = 12
  escorts             = 3
  capital             = 815
  regular_id          = U08
  money               = 100
  nationalprovinces   = { 814 815 817 818 551 }
  ownedprovinces      = { 814 815 817 818 551 }
  controlledprovinces = { 814 815 817 818 551 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 6
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  landunit =
  { id       = { type = 8001 id = 6245 }
    name     = "ëÊ1åRíc"
    location = 814
    home     = 814
    #mission  = { type = none target = 814 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 8001 id = 6247 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 8001 id = 6248 }
    name     = "ëÊ2åRíc"
    location = 815
    home     = 815
    #mission  = { type = none target = 815 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 8001 id = 6250 }
      name          = "ëÊ2é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 8001 id = 6251 }
    name     = "ëÊ3åRíc"
    location = 815
    home     = 815
    #mission  = { type = none target = 815 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 8001 id = 6253 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
    division =
    { id            = { type = 8001 id = 6254 }
      name          = "ëÊ1ï‡ï∫êÌé‘étíc"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 8002 id = 2425 }
    name     = "ëÊ1êÌë‡"
    location = 814
    home     = 814
    base     = 814
    division =
    { id       = { type = 8002 id = 6255 }
      name     = "ëÊ1É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 8002 id = 6256 }
      name     = "ëÊ1óAëóäÕ/ógó§äÕétíc"
      model    = 3
      type     = transport
      strength            = 100
    }
  }
}
