// sub_5031A20
// rva 0x05031a20  size 285  section .text  group text
// window base 0x185031a20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5031A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rax
  _DWORD *v12; // rax
  __int64 result; // rax
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    v19 = a3;
    v14 = (_DWORD *)sub_1EB84E0();
    v16 = *v14 >> 3;
    if ( SHIWORD(v7[2 * v16 + 15]) < 5 || v7[2 * v7[2 * v16 + 4] + 7] != 88029 )
      sub_2769900(a1, a2, a3: v14, a4: v15, a5: &a7);
    a3 = v19;
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v19 = a3;
      sub_1EAA920(a1, a2, a3: 43306624);
      a3 = v19;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v9 + 16;
      *(_DWORD *)v9 = 43306624;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
    }
  }
  v10 = *(unsigned int *)(v8 + 72);
  if ( (_DWORD)v10 != 0 )
  {
    v11 = (unsigned int)v7[2 * v10 + 18];
    if ( (_DWORD)v11 != 0 )
      v12 = &v7[2 * v11];
    else
      v12 = &v7[2 * v10];
  }
  else
  {
    v12 = v7;
  }
  if ( v12 != v7 && *v12 >> 3 == 5067607 )
  {
    v18 = v12;
    v19 = a3;
    result = sub_5046980(a1, a2, a3: (_DWORD)v12, a4: v19, a5: v19, a6, a7: v17);
  }
  else
  {
    v18 = v12;
    v19 = a3;
    result = sub_277C1A0();
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
