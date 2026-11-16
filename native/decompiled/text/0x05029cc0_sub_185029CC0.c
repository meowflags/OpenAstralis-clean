// sub_185029CC0
// rva 0x05029cc0  size 427  section .text  group text
// window base 0x185029cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185029CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+18h] [rbp-20h]
  __int64 v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+2Ch] [rbp-Ch]
  int v14; // [rsp+30h] [rbp-8h]
  int v15; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    v15 = a4;
    v14 = a2;
    v12 = a1;
    v13 = a6;
    v11 = a5;
    v10 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (int)a4 >= 0 )
  {
    if ( a6 < 0 )
    {
LABEL_15:
      v15 = a4;
      v14 = a2;
      v12 = a1;
      v13 = a6;
      v11 = a5;
      v10 = a3;
      MEMORY[0x182770B00]();
    }
    else if ( a5 != v6 )
    {
      if ( (unsigned int)(a4 + a6) > *(_DWORD *)(a5 + 8) )
      {
LABEL_17:
        v15 = a4;
        v14 = a2;
        v12 = a1;
        v13 = a6;
        v11 = a5;
        v10 = a3;
        MEMORY[0x182770B00]();
      }
      else if ( (int)a2 >= 0 )
      {
        if ( a1 == v6 )
        {
LABEL_19:
          v15 = a4;
          v14 = a2;
          v13 = a6;
          v11 = a5;
          v10 = a3;
          MEMORY[0x182771080]();
        }
        else if ( (unsigned int)(a4 + a2) <= *(_DWORD *)(a1 + 8) )
        {
          v10 = a3;
          if ( a5 == v6 )
            JUMPOUT(0x30A044D2DLL);
          if ( a1 == v6 )
            JUMPOUT(0x30A044D37LL);
          v11 = a5;
          v13 = a6;
          v12 = a1;
          v14 = a2;
          v15 = a4;
          result = MEMORY[0x182836300](
                     a1,
                     a2,
                     a3: a5 + (unsigned int)a6 + 12LL,
                     a4,
                     a5: a1 + 2LL * (unsigned int)a2 + 12,
                     a6: (unsigned int)a4);
          if ( *(int *)(v7 + 16) <= 0 )
            return MEMORY[0x18277F280]();
          return result;
        }
        MEMORY[0x182770B00]();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_185029E80();
      }
      v15 = a4;
      v14 = a2;
      v12 = a1;
      v13 = a6;
      v11 = a5;
      v10 = a3;
      MEMORY[0x182770B00]();
      goto LABEL_19;
    }
    v15 = a4;
    v14 = a2;
    v12 = a1;
    v13 = a6;
    v10 = a3;
    MEMORY[0x182771080]();
    goto LABEL_17;
  }
  v15 = a4;
  v14 = a2;
  v12 = a1;
  v13 = a6;
  v11 = a5;
  v10 = a3;
  MEMORY[0x182770B00]();
  goto LABEL_15;
}
