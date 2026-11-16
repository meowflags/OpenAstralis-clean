// sub_2757E80
// rva 0x02757e80  size 265  section .text  group text
// window base 0x182757e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2757E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  _DWORD *v12; // r9
  __int64 result; // rax
  _BYTE *v14; // rcx
  int v15; // eax
  int v16; // r8d
  int v17; // ecx
  char v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  __int64 v21; // [rsp+20h] [rbp-8h]

  v21 = a3;
  v20 = a5;
  v19 = a6;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_12;
  }
  sub_275A260(a1, a2, a3, a4: a5);
  v11 = v21;
  if ( *(_BYTE *)(v21 + 16) != 0 )
  {
LABEL_12:
    v15 = v6 + 373281248;
    if ( v19 == v6 )
      goto LABEL_17;
    v16 = v6 + 8 * *(_DWORD *)(v6 + 8LL * (*(_DWORD *)v19 >> 3) + 12);
    v17 = v11;
    goto LABEL_14;
  }
  v12 = (_DWORD *)v19;
  if ( v19 == v6 )
    goto LABEL_15;
  if ( *(_DWORD *)v19 >> 3 != 4261917 )
  {
    while ( 1 )
    {
      v15 = sub_275BEC0(
              a1: v9,
              a2: v10,
              a3: v21,
              a4: v8,
              a5: (int)v6 + 8 * *(_DWORD *)(v6 + 8LL * (*v12 >> 3) + 12),
              a6: (int)v6 + 373281248,
              a7: v18);
LABEL_17:
      v16 = v15;
      v17 = v21;
LABEL_14:
      sub_275BDA0(a1: v9, a2: v10, a3: v17, a4: v17, a5: v16, a6: v15, a7: v18);
LABEL_15:
      sub_275BEC0(a1: v9, a2: v10, a3: v11, a4: v8, a5: v6 + 373281248, a6: v6 + 373281248, a7: v18);
    }
  }
  result = (unsigned int)*(char *)(v19 + 4);
  v14 = *(_BYTE **)(v21 + 8);
  if ( v20 == v6 )
    *v14 = *(_BYTE *)(v19 + 4);
  else
    v14[v20] = *(_BYTE *)(v19 + 4);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v9, a2: v10, a3: v11);
  return result;
}
