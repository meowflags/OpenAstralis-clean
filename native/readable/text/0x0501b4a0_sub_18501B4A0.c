// sub_501B4A0
// rva 0x0501b4a0  size 564  section .text  group text
// window base 0x18501b4a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501B4A0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  int v7; // ebp
  __int64 v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // edi
  _DWORD *v16; // rsi
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  _DWORD *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  char v29; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v30; // [rsp+10h] [rbp-38h]
  _DWORD *v31; // [rsp+18h] [rbp-30h]
  __int64 v32; // [rsp+20h] [rbp-28h]
  _DWORD *v33; // [rsp+28h] [rbp-20h]
  unsigned int *v34; // [rsp+30h] [rbp-18h]
  unsigned int v35; // [rsp+3Ch] [rbp-Ch]
  unsigned int v36; // [rsp+40h] [rbp-8h]
  int v37; // [rsp+44h] [rbp-4h]

  v34 = a3;
  v33 = a5;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v10 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v9 )
  {
    v11 = a3[1];
    result = (__int64)&v9[2 * v11];
    v32 = result;
    if ( (_DWORD)v11 == 0 )
      goto LABEL_20;
    v13 = a3[3];
    if ( v13 <= v9[2 * v11 + 2] >> 1 )
    {
      v7 = a3[2];
      if ( v7 >= 0 )
      {
        a3[2] = v13;
        if ( v13 > v7 )
        {
          v37 = v13;
          v14 = *a5 >> 3;
          v15 = v9[2 * v14 + 11];
          v16 = &v9[2 * v9[2 * v14 + 5]];
          v17 = v15 & (0x641u >> SHIBYTE(v15));
          v18 = (unsigned __int16)v16[v17 + 3];
          if ( v18 != 1601 )
          {
            while ( 1 )
            {
              v36 = v7;
              sub_501CF00(a1: v15, a2: (_DWORD)v16, a3: v7, a4: v18, a5: result, a6: v17, a7: v29);
              sub_2770780();
LABEL_22:
              v25 = sub_1EAA920(a1, a2, a3: 34101256);
LABEL_19:
              *(_DWORD *)(v25 + 20) = 46923644;
              *(_DWORD *)(v25 + 16) = v9[93585974];
              *(_DWORD *)(v25 + 12) = (unsigned __int64)(v25 - (_QWORD)v9) >> 3;
              v32 = v25;
              sub_503B9A0(a1, a2, a3: v25, a4, a5: 0);
              sub_2769900(a1: v27, a2: v28, a3: v32, a4: v26, a5: &a7);
LABEL_20:
              LODWORD(result) = sub_2771080();
            }
          }
          v19 = *a5 >> 3;
          LODWORD(v20) = v9[2 * v19 + 11];
          v31 = &v9[2 * v9[2 * v19 + 5]];
          v21 = BYTE3(v20);
          v22 = v20 & (0x641u >> SBYTE3(v20));
          v36 = v22;
          v23 = &v9[2 * v19];
          v30 = v23;
          while ( 1 )
          {
            v35 = v7;
            sub_501CF00(a1: v20, a2: (_DWORD)v23, a3: v7, a4: v21, a5: result, a6: v22, a7: v29);
            result = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, _DWORD *, _QWORD))(v8
                                                                                            + *(_QWORD *)((char *)v30 + HIWORD(v31[v36 + 3]))))(
                       a1: v24,
                       a2: v30,
                       a3: v33,
                       a4: v31,
                       a5: *(unsigned __int16 *)(v32 + (int)(2 * v35) + 12));
            v7 = v35 + 1;
            if ( v37 <= (int)(v35 + 1) )
              break;
            if ( *(int *)(v10 + 16) <= 0 )
              sub_277F280(a1: v20, a2: v23, a3: v35);
            LODWORD(result) = v32;
          }
        }
      }
    }
    if ( *(int *)(v10 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  v25 = *(_QWORD *)(v10 + 40);
  if ( (unsigned __int64)(v25 + 48) > *(_QWORD *)(v10 + 32) )
    goto LABEL_22;
  *(_QWORD *)(v10 + 40) = v25 + 48;
  *(_DWORD *)v25 = 34101256;
  *(_DWORD *)(v25 + 4) = 0;
  *(_QWORD *)(v25 + 8) = 0;
  *(_QWORD *)(v25 + 16) = 0;
  *(_QWORD *)(v25 + 24) = 0;
  *(_QWORD *)(v25 + 32) = 0;
  *(_QWORD *)(v25 + 40) = 0;
  goto LABEL_19;
}
