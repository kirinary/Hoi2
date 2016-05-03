
##############################
# Country definition for COS #
##############################

province =
{ id         = 540
  anti_air   = 1
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 1 current_size = 1 }
  ic         = 4
}              # ÉTÉìÉmÉ[

#####################
# Country main data #
#####################

country =
{ tag                 = COS
  manpower            = 2
  transports          = 54
  escorts             = 18
  energy              = 1000
  metal               = 1000
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  capital             = 540
  regular_id          = U09

  money               = 350
  nationalprovinces   = { 540 }
  ownedprovinces      = { 540 }
  controlledprovinces = { 540 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  6050  6060  6070  6080  6090  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340 
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 5
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  landunit =
  { id       = { type = 6501 id = 6075 }
    name     = "ëÊ1åRíc"
    location = 540
    home     = 540
    mission  = { type = none target = 540 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 6501 id = 6077 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 6501 id = 6078 }
    name     = "ëÊ2åRíc"
    location = 540
    home     = 540
    mission  = { type = none target = 540 missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 6501 id = 6080 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 6502 id = 6081 }
    name     = "ëÊ3êÌë‡"
    location = 540
    home     = 540
    base     = 540
    division =
    { id       = { type = 6502 id = 6083 }
      name     = "ëÊ1É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
  }
}
