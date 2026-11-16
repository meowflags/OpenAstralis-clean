// sub_5045960
// rva 0x05045960  size 435  section .text  group text
// window base 0x185045960: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5045960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  _DWORD *v18; // rcx
  unsigned int (__fastcall *v19)(__int64, __int64, _DWORD *); // rbx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  _DWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int16 v29; // dx
  __int64 v30; // rdx
  __int16 v31; // dx
  _QWORD v32[3]; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v33; // [rsp+18h] [rbp-20h]
  int v34; // [rsp+24h] [rbp-14h]
  _DWORD *v35; // [rsp+28h] [rbp-10h]
  __int64 v36; // [rsp+30h] [rbp-8h]

  v36 = a3;
  if ( (unsigned __int64)v32 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
  }
  else
  {
    v10 = *(unsigned int *)(v9 + 72);
    if ( (_DWORD)v10 != 0 )
    {
      v11 = (unsigned int)v8[2 * v10 + 18];
      if ( (_DWORD)v11 != 0 )
        v12 = &v8[2 * v11];
      else
        v12 = &v8[2 * v10];
    }
    else
    {
      v12 = v8;
    }
    v35 = v12;
    if ( v12 == v8
      || (v13 = *v12 >> 3, SHIWORD(v8[2 * v13 + 15]) < 4)
      || v8[2 * v8[2 * v13 + 4] + 6] != 82319
      || (v19 = (unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v12 >> 3) + 110]),
          v34 = *v12 >> 3,
          v19(a1, a2, a3: v12) != 0) )
    {
      result = sub_50471A0(a1, a2, a3: v36);
      v18 = v35;
      goto LABEL_8;
    }
    v33 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * v34 + 106]))(
                      a1,
                      a2,
                      a3: v35);
    v22 = sub_5A4CE80(a1: v20, a2: v21, a3: &v8[2 * *(unsigned int *)(v36 + 108)]);
    if ( v33 != v8 )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64))(v7
                                                                                      + *(_QWORD *)&v8[2 * (*v33 >> 3) + 108]))(
                 a1: v23,
                 a2: v24,
                 a3: v33,
                 a4: v33,
                 a5: v22);
      v18 = v33;
      goto LABEL_8;
    }
  }
  v25 = (_DWORD *)sub_276BEE0();
  v30 = *v25 >> 3;
  v26 = (unsigned int)v8[2 * v30 + 4];
  v31 = HIWORD(v8[2 * v30 + 15]);
  if ( v31 >= 5 && v8[2 * v26 + 7] == 88185 || v31 < 5 || v8[2 * v26 + 7] != 88029 )
  {
    do
    {
      do
        v25 = (_DWORD *)sub_2769900(a1: v27, a2: v28, a3: v25, a4: v26, a5: &a7);
      while ( v29 < 5 );
    }
    while ( v8[2 * v26 + 7] != 88029 );
  }
  v32[2] = v25;
  result = sub_50471A0(a1: v27, a2: v28, a3: v36);
  v18 = v33;
LABEL_8:
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280(a1: v16, a2: v17, a3: v15, a4: v18);
  return result;
}
