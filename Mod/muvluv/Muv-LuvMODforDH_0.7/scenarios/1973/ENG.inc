##############################
# Country definition for ENG #
##############################
province =
{ id            = 5
  anti_air      = 4
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 4 current_size = 4 }
}                 # �J�[�N�E�H�[��
province =
{ id            = 8
  anti_air      = 2
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 8 current_size = 8 }
}                 # �O���X�S�[
province =
{ id            = 10
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 10 current_size = 10 }
}                 # �T���_�[�����h
province =
{ id       = 11
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # �n��
province =
{ id            = 12
  anti_air      = 4
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 8 current_size = 8 }
}                 # �}���`�F�X�^�[
province = { id = 13 anti_air = 2 } # �V�F�t�B�[���h
province = { id = 14 anti_air = 2 } # �o�[�~���K��
province = { id = 15 ic = 4 } # �J�[�f�B�t
province =
{ id            = 17
  anti_air      = 4
  ic            = 5
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 2 current_size = 2 }
}                 # �m���b�W
province = { id = 19 anti_air = 3 ic = 7 } # �����h��
province =
{ id            = 20
  anti_air      = 5
  ic            = 3
  air_base      = { size = 4 current_size = 4 }
  naval_base    = { size = 4 current_size = 4 }
  coastalfort   = 3
}                 # �h�[�o�[
province =
{ id         = 21
  anti_air   = 6
  ic         = 3
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # �|�[�c�}�X
province =
{ id         = 23
  anti_air   = 6
  ic         = 5
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # �v���}�X
province =
{ id         = 25
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
}              # �R�[�N
province =
{ id         = 28
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
  oilpool    = 1000
  supplypool = 2000
}              # �x���t�@�X�g
province =
{ id       = 29
  air_base = { size = 2 current_size = 2 }
}            # �����h���f���[
province =
{ id         = 30
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
}              # �_�u����
province =
{ id          = 31
  anti_air    = 2
  air_base    = { size = 4 current_size = 4 }
  naval_base  = { size = 4 current_size = 4 }
  coastalfort = 1
  oilpool     = 1000
  supplypool  = 1000
}               # �}���^��

#####################
# Country main data #
#####################

country =
{ tag                 = ENG
  manpower            = 4250
  energy              = 58000
  metal               = 36000
  rare_materials      = 45000
  oil                 = 12000
  supplies            = 8000
  money               = 3500
  capital             = 19
  transports          = 1800
  escorts             = 1500
  regular_id          = U02
  nationalprovinces   = { 10 11 12 13 14 15 16 17 19 20 21 22 23 1160 1164 1409 1720 2245 3 5 6 7 8 9 1165 1166 28 29 }
  ownedprovinces      = { 10 11 12 13 14 15 16 17 19 20 21 22 23 1160 1164 1409 1720 2245 3 5 6 7 8 9 1165 1166 28 29 1147 1148 866 }
  controlledprovinces = { 10 11 12 13 14 15 16 17 19 20 21 22 23 1160 1164 1409 1720 2245 3 5 6 7 8 9 1165 1166 28 29 1147 1148 866 }
  techapps            = { 10050 10060 1010  10190 1020  10200 1030    1110  1120 
                          1210  1220  1470  1490  1510  1530  1550  1560  1650  1660
                          1750  1760  1850  1860  1950  1960
                          3010  3020  30410 30420 30510 30520 3110 
                          3120  3210  3220  3460  3470  40200 40210  3310  3320  3610  3620  3710  3720  7500  7510  7520  7530  7540  7670  7680  7690  7700
                          3560      3910  3920
                          3940  40100 40110 4390  4400  4010  4020  4110  4120  4210  4220  4640  4650  4820  4830
                          4560  50020 50030   50070 50080  5010    50120 5020  50290 50300 50310
                          5090  5100  5170  5180  5250  5260  5330  5340  5410  5420
                          5490  5500  5600  5610  5680  5690  5760  5770  5780  5790  5800  5810
                          5910  5920  7010  80080 80090 8010  80100 80160 8020  8030  8040  8050  8060  8070  8280  8290  8300  8310  8320  8330  9010  90140
                          90190 9020  9030  9040  9050  9060  9070  9190  9200  9210  9340  9350  9360  9370  9380  9390  9400  9520  9530  9540 
                          9550  9670  9680  9690  9700  9710  9720  9840  9850  9860  9990  2000  2210  3000  4000  5000  7030  7040
                        }
  inventions          = { 8009 8011 }
  policy =
  { democratic        = 10
    political_left    = 2
    freedom           = 9
    free_market       = 9
    professional_army = 9
    defense_lobby     = 10
    interventionism   = 9
  }
landunit = {
	name = "��1���b�t�c"
	id = { type = 10020 id = 1 }
	location = 81
	division = {
	id = { type = 10020 id = 2 }
	name = "��1���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 3 }
	name = "��2���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 4 }
	name = "��3���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 5 }
	name = "��1�@�B���������"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 6 }
	name = "��2�@�B���������"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 7 }
	name = "��3�@�B���������"
	type = light_armor
	model = 1
	experience = 0
	}
  }
landunit = {
	name = "��2���b�t�c"
	id = { type = 10020 id = 8 }
	location = 970
	division = {
	id = { type = 10020 id = 9 }
	name = "��4���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 10 }
	name = "��5���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 11 }
	name = "��6���b���"
	type = armor
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 12 }
	name = "��4�@�B���������"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 13 }
	name = "��5�@�B���������"
	type = mechanized
	model = 1
	extra = anti_air
	brigade_model = 1
	experience = 0
	}
	division = {
	id = { type = 10020 id = 14 }
	name = "��6�@�B���������"
	type = light_armor
	model = 1
	experience = 0
	}
  }
navalunit = {
	name = "��1�C������"
	id = { type = 10022 id = 100 }
	location = 21
	base = 21
	division = {
	id = { type = 10022 id = 101 }
	name = "�A�[�N����C����"
	type = carrier
	model = 0
    extra1        = cag
    brigade_model1= 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 99 }
	name = "�u���X�g��"
	type = destroyer
	model = 2
	experience = 0
	}
	division = {
	id = { type = 10022 id = 102 }
	name = "�f���H���V���["
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 103 }
	name = "�n���v�V���["
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 104 }
	name = "�P���g"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 105 }
	name = "�����h��"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 106 }
	name = "�t�@�C�t"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 107 }
	name = "�O�����[�K��"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 108 }
	name = "�m�[�t�H�[�N"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 109 }
	name = "�A���g����"
	type = destroyer
	model = 1
	experience = 0
	}
  }
navalunit = {
	name = "��2�C������"
	id = { type = 10022 id = 110 }
	location = 21
	base = 21
	division = {
	id = { type = 10022 id = 111 }
	name = "���A���_�["
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 112 }
	name = "�G�C�W���b�N�X"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 113 }
	name = "�I�[����"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 114 }
	name = "�K���e�B�A"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 115 }
	name = "���[���C�A�X"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 116 }
	name = "�i�C�A�h"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 117 }
	name = "�A���V���[�U"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 118 }
	name = "�N���I�p�g��"
	type = destroyer
	model = 1
	experience = 0
	}
    division =
    { id       = { type = 10022 id = 171 }
      name     = "��1�A���g���O���[�v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 10022 id = 172 }
      name     = "��2�A���g���O���[�v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 10022 id = 173 }
      name     = "��3�A���g���O���[�v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
  }
navalunit = {
	name = "��3�C������"
	id = { type = 10022 id = 119 }
	location = 21
	base = 21
	division = {
	id = { type = 10022 id = 120 }
	name = "�t�B�[�r"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 121 }
	name = "�~�l�����@"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 122 }
	name = "�V���E�X"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 123 }
	name = "�A���S�m�[�g"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 124 }
	name = "�J���u�f�B�X"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 125 }
	name = "�n�[�}�C�I�j"
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 126 }
	name = "�W���s�^�["
	type = destroyer
	model = 1
	experience = 0
	}
	division = {
	id = { type = 10022 id = 127 }
	name = "�V��"
	type = destroyer
	model = 1
	experience = 0
	}
    division =
    { id       = { type = 10022 id = 128 }
      name     = "��4�A���g���O���[�v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 10022 id = 129 }
      name     = "��5�A���g���O���[�v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
    division =
    { id       = { type = 10022 id = 130 }
      name     = "��6�A���g���O���[�v"
      model    = 1
      type     = transport
      strength = 100.0000
    }
  }
}