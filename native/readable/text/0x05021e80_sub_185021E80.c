// sub_5021E80
// rva 0x05021e80  size 365  section .text  group text
// window base 0x185021e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5021E80(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-20h]
  int v20; // [rsp+24h] [rbp-14h]
  unsigned int v21; // [rsp+28h] [rbp-10h]
  signed int v22; // [rsp+2Ch] [rbp-Ch]
  unsigned int v23; // [rsp+30h] [rbp-8h]
  unsigned int v24; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    v24 = a1;
    v23 = a5;
    sub_1EB84E0();
  }
  else if ( a3 != v6 )
  {
    v22 = a2;
    v24 = a1;
    v19 = a6;
    v8 = *(_DWORD *)(a3 + 8) >> 1;
    v18 = a3;
    v23 = a5;
    v21 = a2 + a5 - a1;
    v20 = v8;
    sub_632A360(a1: v6 + 376643464, a2, a3: a5, a4: v8, a5: v21, a6: (unsigned int)v8);
    v12 = (unsigned int)v22;
    if ( v22 <= (int)v24 )
    {
      v13 = v24;
      result = v23;
      v15 = v19;
LABEL_5:
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280(a1: v13, a2: v12, a3: v9, a4: v10, a5: v11, a6: v15);
      return result;
    }
    v15 = v19;
    result = v23 + 1;
    v13 = v24 + 1;
    if ( v19 == v6 )
      goto LABEL_17;
    v10 = *(unsigned int *)(v19 + 8);
    if ( (unsigned int)v10 > v24 )
    {
      v16 = v18;
      v9 = (unsigned int)*(__int16 *)(v19 + 2LL * v24 + 12);
      v11 = (int)(2 * v23);
      *(_WORD *)(v18 + v11 + 12) = *(_WORD *)(v19 + 2LL * v24 + 12);
      while ( (int)v12 > (int)v13 )
      {
        if ( (unsigned int)v10 <= (unsigned int)v13 )
          goto LABEL_19;
        v9 = (unsigned int)*(__int16 *)(v15 + 2 * v13 + 12);
        v11 = 2 * (int)result;
        *(_WORD *)(v16 + v11 + 12) = *(_WORD *)(v15 + 2 * v13 + 12);
        result = (unsigned int)(result + 1);
        v13 = (unsigned int)(v13 + 1);
      }
      goto LABEL_5;
    }
LABEL_18:
    sub_2771220(a1: v13, a2: v12, a3: v24, a4: v10, a5: (unsigned int)v10);
LABEL_19:
    sub_2771220(a1: v13, a2: v12, a3: (unsigned int)v13, a4: v10, a5: (unsigned int)v10);
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
    return sub_5022000();
  }
  v24 = a1;
  v23 = a5;
  sub_2771080();
LABEL_17:
  sub_2771080(a1: v13);
  goto LABEL_18;
}
