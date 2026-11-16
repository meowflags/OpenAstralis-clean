// sub_18502A760
// rva 0x0502a760  size 654  section .text  group text
// window base 0x18502a760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502A760(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, _DWORD *a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  unsigned int v14; // ecx
  __int64 (__fastcall *v15)(_DWORD *); // rcx
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, _DWORD *, _DWORD *, _QWORD, _DWORD *, _DWORD *); // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v26; // [rsp+10h] [rbp-38h]
  __int64 v27; // [rsp+18h] [rbp-30h]
  int v28; // [rsp+24h] [rbp-24h]
  _DWORD *v29; // [rsp+28h] [rbp-20h]
  _DWORD *v30; // [rsp+30h] [rbp-18h]
  _DWORD *v31; // [rsp+38h] [rbp-10h]
  unsigned int v32; // [rsp+44h] [rbp-4h]

  v31 = a5;
  v30 = a6;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v9 + 8) )
  {
    v29 = a3;
    v10 = MEMORY[0x181EB84E0]();
LABEL_10:
    v29 = a3;
    v21 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v21 + 48) <= *(_QWORD *)(v9 + 32) )
      goto LABEL_11;
    while ( 1 )
    {
LABEL_16:
      v28 = v10;
      v21 = MEMORY[0x181EAA920](a1, a2, a3: v11);
      v10 = v28;
      while ( 1 )
      {
        *(_DWORD *)(v21 + 20) = 46923644;
        *(_DWORD *)(v21 + 16) = v10;
        *(_DWORD *)(v21 + 12) = (unsigned __int64)(v21 - (_QWORD)v8) >> 3;
        v27 = v21;
        sub_18503B9A0(a1, a2, a3: v21, a4: v11, a5: 0);
        v10 = MEMORY[0x182769900](a1: v23, a2: v24, a3: v27, a4: v22, a5: &a7);
LABEL_13:
        v29 = a3;
        v21 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v21 + 48) > *(_QWORD *)(v9 + 32) )
          break;
LABEL_11:
        *(_QWORD *)(v9 + 40) = v21 + 48;
        *(_DWORD *)v21 = 34101256;
        *(_DWORD *)(v21 + 4) = 0;
        *(_QWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v21 + 16) = 0;
        *(_QWORD *)(v21 + 24) = 0;
        *(_QWORD *)(v21 + 32) = 0;
        *(_QWORD *)(v21 + 40) = 0;
      }
    }
  }
  v10 = v8[93585974];
  v11 = 34101256;
  if ( a6 == v8 )
    goto LABEL_10;
  if ( a5 == v8 )
    goto LABEL_13;
  if ( (unsigned __int16)v8[2 * v8[2 * (*a3 >> 3) + 5]
                          + 3
                          + (v8[2 * (*a3 >> 3) + 11] & (0x572u >> HIBYTE(v8[2 * (*a3 >> 3) + 11])))] != 1394 )
  {
    v29 = a3;
    v10 = MEMORY[0x182770780]();
    goto LABEL_16;
  }
  v12 = *a3 >> 3;
  v13 = v8[2 * v12 + 11];
  v27 = (__int64)&v8[2 * v8[2 * v12 + 5]];
  v32 = v13 & (0x572u >> SHIBYTE(v13));
  v14 = *(_DWORD *)(v27 + 4LL * v32 + 12);
  v26 = &v8[2 * v12];
  v15 = (__int64 (__fastcall *)(_DWORD *))(v7 + *(_QWORD *)((char *)v26 + HIWORD(v14) + 8));
  v29 = a3;
  result = v15(a1: a5);
  if ( (_DWORD)result != 0 )
  {
    v19 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v30 >> 3) + 26]))(
            a1: v17,
            a2: v18,
            a3: v30);
    v20 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *, _QWORD, _DWORD *, _DWORD *))(v7
                                                                                          + *(_QWORD *)((char *)v26 + HIWORD(*(_DWORD *)(v27 + 4LL * v32 + 12)) + 72));
    result = v20(a1: v19, a2: v8, a3: v29, a4: v20, a5: v31, a6: v8);
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
