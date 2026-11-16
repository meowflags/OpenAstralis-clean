// sub_1ED4300
// rva 0x01ed4300  size 249  section .text  group text
// window base 0x181ed4300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED4300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  int i; // r8d
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  int v17; // [rsp+1Ch] [rbp-Ch]
  int v18; // [rsp+20h] [rbp-8h]
  int v19; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = a5;
    v16 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v14);
    goto LABEL_14;
  }
  if ( (int)a5 < 2 )
  {
    v19 = a5;
    v8 = a3;
    v18 = a5;
    v16 = a3;
  }
  else
  {
    if ( a3 == v6 )
    {
LABEL_15:
      sub_2771080();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1ED4400();
    }
    v18 = a5;
    v16 = a3;
    v8 = sub_4F677E0();
    for ( i = v18 - 1; i >= 2; i = v17 - 1 )
    {
      v17 = i;
      v15 = v8;
      v8 = sub_4F677E0(a1, a2, a3: v8);
    }
    v19 = i;
  }
  if ( v8 == v6 )
  {
LABEL_14:
    sub_2771080(a1, a2, a3: v16);
    goto LABEL_15;
  }
  v15 = v8;
  result = sub_4F5E080(a1, a2, a3: v8);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v12, a2: v13, a3: v11, a4: v15);
  return result;
}
