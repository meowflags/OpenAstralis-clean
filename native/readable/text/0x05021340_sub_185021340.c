// sub_5021340
// rva 0x05021340  size 309  section .text  group text
// window base 0x185021340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5021340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // r8d
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+10h] [rbp-18h]
  int v13; // [rsp+18h] [rbp-10h]
  unsigned int v14; // [rsp+1Ch] [rbp-Ch]
  unsigned int v15; // [rsp+20h] [rbp-8h]
  unsigned int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v3 )
  {
    v12 = a3;
    v5 = *(_DWORD *)(a3 + 8);
    result = v5 >> 1;
    v16 = v5 >> 1;
    if ( (v5 & 0xFFFFFFFE) != 0 )
    {
      v7 = sub_501D280(a1, a2, a3, a4: a3, a5: result, a6: 0);
      if ( v7 == 32 || v7 == 9 )
      {
LABEL_5:
        v8 = v16;
        if ( v7 >= 0x10000 )
          JUMPOUT(0x30A03C3A9LL);
        result = v16 - 1;
        while ( 1 )
        {
          a3 = v12;
          v15 = result;
          if ( (int)result < 1 )
            goto LABEL_15;
          v9 = sub_501D280(a1, a2, a3: v12, a4: v8, a5: result, a6: 0);
          if ( v9 >= 0x10000 )
            JUMPOUT(0x30A03C3EDLL);
          v8 = 1;
          v10 = v15 - 1;
          if ( v9 == 32 )
          {
            result = v10;
          }
          else if ( v9 == 9 )
          {
            result = v10;
          }
          else
          {
            v14 = v15 - 1;
            v13 = v9;
            if ( (unsigned int)sub_4F4A000(a1, a2, a3: (unsigned int)v9) == 0 )
            {
              result = v15;
              goto LABEL_15;
            }
            result = v14;
          }
        }
      }
      v15 = v7;
      if ( (unsigned int)sub_4F4A000(a1, a2, a3: (unsigned int)v7) != 0 )
      {
        v7 = v15;
        goto LABEL_5;
      }
      result = v16;
    }
LABEL_15:
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_277F280(a1, a2, a3, a4: v16);
    return result;
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
  return sub_5021480();
}
