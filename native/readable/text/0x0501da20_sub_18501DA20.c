// sub_501DA20
// rva 0x0501da20  size 327  section .text  group text
// window base 0x18501da20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501DA20(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 result; // rax
  int v13; // ebx
  int v14; // ebp
  int i; // ebx
  __int64 v16; // rbp
  int v17; // esi
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+10h] [rbp-28h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  __int64 v21; // [rsp+20h] [rbp-18h]
  unsigned int v22; // [rsp+2Ch] [rbp-Ch]
  unsigned int v23; // [rsp+30h] [rbp-8h]
  int v24; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_19;
  }
  v21 = a5;
  v24 = a6;
  v23 = a1;
  if ( a3 == v6 )
  {
LABEL_19:
    sub_2771080();
    goto LABEL_20;
  }
  v8 = *(_DWORD *)(a3 + 8) >> 1;
  v20 = a3;
  v22 = v8;
  v19 = v6 + 376643464;
  sub_632A360(a1: v6 + 376643464, a2, a3: a6, a4: v6 + 376643464, a5: v8, a6: v8);
  v11 = v21;
  if ( v21 == v6 )
  {
LABEL_20:
    sub_2771080(a1: v23, a2: v10, a3: v20, a4: v9, a5: v11, a6: (unsigned int)v24);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_501DB80();
  }
  v22 = *(_DWORD *)(v21 + 8) >> 1;
  sub_632A360(a1: v19, a2: v10, a3: v23, a4: v19, a5: v22, a6: v22);
  result = v24 - v23;
  if ( (int)v23 < v24 )
    JUMPOUT(0x30A038AC7LL);
  if ( v24 >= 1 )
  {
    v13 = *(unsigned __int16 *)(v20 + 12);
    v14 = *(unsigned __int16 *)(v21 + 12);
    if ( v14 == v13 )
    {
      for ( i = 1; v24 > i; ++i )
      {
        v16 = 2 * i;
        v17 = *(unsigned __int16 *)(v20 + v16 + 12);
        v14 = *(unsigned __int16 *)(v21 + v16 + 12);
        if ( v14 != v17 )
        {
          v13 = v17;
          goto LABEL_7;
        }
      }
    }
    else
    {
LABEL_7:
      result = (unsigned int)(v13 - v14);
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
