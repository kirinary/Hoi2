
##############################
# Country definition for SAF #
##############################

province = { id = 1107 ic = 2 } # �c���u
province =
{ id         = 1109
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 1 current_size = 1 }
}              # �E�H���r�X�p
province =
{ id            = 1114
  anti_air      = 4
  naval_base    = { size = 4 current_size = 4 }
}                 # �u���[���t�H���e�[��
province =
{ id         = 1116
  anti_air   = 4
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 4 current_size = 4 }
}              # �P�[�v�^�E��
province = { id = 1117 anti_air = 1 ic = 3 } # �|�[�g�G���U�x�X
province =
{ id         = 1118
  anti_air   = 3
  naval_base = { size = 6 current_size = 6 }
  air_base   = { size = 2 current_size = 2 }
}              # �_�[�o��
province = { id = 1119 ic = 5 } # �v���g���A
province =
{ id       = 1120
  anti_air = 3
  air_base = { size = 2 current_size = 2 }
}            # ���n�l�X�u���N
province = { id = 1122 ic = 2 } # �������\�}���P�X

#####################
# Country main data #
#####################

country =
{ tag                 = SAF
  energy              = 5000
  metal               = 5000
  rare_materials      = 5000
  oil                 = 500
  supplies            = 3000
  manpower            = 50
  transports          = 70
  escorts             = 12
  capital             = 1121
  regular_id          = U06
  money               = 350
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 10
    free_market       = 8
    professional_army = 5
    defense_lobby     = 7
    interventionism   = 6
  }
  ownedprovinces      = { 1115 1116 1114 1117 1118 1120 1113 1119 1109 1108 1107 1106 1110 }
  controlledprovinces = { 1115 1116 1114 1117 1118 1120 1113 1119 1109 1108 1107 1106 1110 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  nationalprovinces   = { 1115 1116 1114 1117 1118 1120 1113 1119 1109 1108 1107 1106 1110 1122 }
}