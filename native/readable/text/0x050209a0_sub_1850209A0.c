// sub_50209A0
// rva 0x050209a0  size 331  section .text  group text
// window base 0x1850209a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50209A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int v6; // r8d
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+10h] [rbp-18h]
  int v13; // [rsp+18h] [rbp-10h]
  unsigned int v14; // [rsp+1Ch] [rbp-Ch]
  unsigned int v15; // [rsp+20h] [rbp-8h]
  int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v4 )
  {
    v12 = a3;
    v6 = *(_DWORD *)(a3 + 8);
    v16 = v6 >> 1;
    if ( (v6 & 0xFFFFFFFE) != 0 )
    {
      v7 = sub_501D060(a1: 0, a2, a3, a4: a3, a5: 0, a6: v6 >> 1);
      if ( v7 == 32 || v7 == 9 )
      {
LABEL_5:
        if ( v7 >= 0x10000 )
          JUMPOUT(0x30A03BA0ALL);
        v8 = 1;
        while ( 1 )
        {
          a3 = v12;
          if ( v16 <= (int)v8 )
            goto LABEL_13;
          v15 = v8;
          v9 = sub_501D060(a1: 0, a2, a3: v12, a4: v12, a5: v8, a6: (unsigned int)v16);
          if ( v9 >= 0x10000 )
            JUMPOUT(0x30A03BA58LL);
          a4 = 1;
          v8 = v15 + 1;
          if ( v9 != 32 && v9 != 9 )
          {
            v14 = v15 + 1;
            v13 = v9;
            if ( (unsigned int)sub_4F4A000(a1, a2, a3: (unsigned int)v9) == 0 )
            {
              v8 = v15;
              goto LABEL_13;
            }
            v8 = v14;
          }
        }
      }
      v15 = v7;
      if ( (unsigned int)sub_4F4A000(a1, a2, a3: (unsigned int)v7) != 0 )
      {
        v7 = v15;
        goto LABEL_5;
      }
      v8 = 0;
    }
    else
    {
      v8 = 0;
    }
LABEL_13:
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280(a1, a2, a3, a4, a5: v8);
    return (unsigned int)v8;
  }
  sub_2771080();
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
  return sub_5020B00();
}
