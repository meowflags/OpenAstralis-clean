// sub_5020120
// rva 0x05020120  size 434  section .text  group text
// window base 0x185020120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5020120(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+8h] [rbp-30h]
  __int64 v18; // [rsp+10h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-20h]
  unsigned int v20; // [rsp+20h] [rbp-18h]
  int v21; // [rsp+24h] [rbp-14h]
  unsigned int v22; // [rsp+28h] [rbp-10h]
  unsigned int v23; // [rsp+2Ch] [rbp-Ch]
  unsigned int v24; // [rsp+30h] [rbp-8h]
  unsigned int v25; // [rsp+34h] [rbp-4h]

  v19 = a3;
  v25 = a5;
  v18 = a6;
  v24 = a1;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v23 = a2;
    sub_1EB84E0();
  }
  else if ( a3 != v6 )
  {
    v22 = *(_DWORD *)(a3 + 8) >> 1;
    v23 = a2;
    v17 = v6 + 376643464;
    sub_632A360(a1: v6 + 376643464, a2, a3: (unsigned int)a2, a4: v6 + 376643464, a5, a6: v22);
    if ( v18 == v6 )
    {
LABEL_20:
      sub_2771080(a1: v24, a2: v23, a3: v19, a4: v8, a5: v25);
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
      return sub_50202E0();
    }
    v22 = *(_DWORD *)(v18 + 8) >> 1;
    sub_632A360(a1: v17, a2: v9, a3: 0, a4: v17, a5: v24, a6: v22);
    if ( v24 == 1 )
    {
      result = sub_28310E0(a1: v23, a2: *(unsigned __int16 *)(v18 + 12), a3: v19, a4: v10, a5: 12, a6: v25);
    }
    else
    {
      v12 = v25 - v24 + 2;
      v21 = v12;
      v13 = v23;
      while ( 1 )
      {
        if ( v12 <= (int)v13 )
        {
          result = 0xFFFFFFFFLL;
          goto LABEL_12;
        }
        result = sub_2832D20(
                   a1: v13,
                   a2: *(unsigned __int16 *)(v18 + 12),
                   a3: v19,
                   a4: *(unsigned __int16 *)(v18 + 14),
                   a5: 12,
                   a6: (unsigned int)v12);
        if ( (int)result < 0 )
        {
          result = 0xFFFFFFFFLL;
          goto LABEL_12;
        }
        if ( v24 == 2 )
          goto LABEL_12;
        v20 = result;
        if ( (unsigned int)sub_282FBC0(
                             a1: 12,
                             a2: v24,
                             a3: v19,
                             a4: v15,
                             a5: 2LL * (unsigned int)result + 12,
                             a6: v18) != 0 )
          break;
        v13 = v20 + 1;
        v12 = v21;
      }
      result = v20;
    }
LABEL_12:
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v13, a2: v11, a3: v22);
    return result;
  }
  v23 = a2;
  sub_2771080();
  goto LABEL_20;
}
