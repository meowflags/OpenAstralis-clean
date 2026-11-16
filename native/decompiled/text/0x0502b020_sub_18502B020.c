// sub_18502B020
// rva 0x0502b020  size 841  section .text  group text
// window base 0x18502b020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502B020(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, _DWORD *a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rbp
  _DWORD *v15; // rax
  __int64 (*v16)(void); // rcx
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(_DWORD *, __int64, _DWORD *, _QWORD, _DWORD *, _DWORD *); // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+10h] [rbp-38h]
  int v33; // [rsp+1Ch] [rbp-2Ch]
  _DWORD *v34; // [rsp+20h] [rbp-28h]
  __int64 v35; // [rsp+28h] [rbp-20h]
  _DWORD *v36; // [rsp+30h] [rbp-18h]
  _DWORD *v37; // [rsp+38h] [rbp-10h]
  unsigned int v38; // [rsp+44h] [rbp-4h]

  v37 = a5;
  v36 = a6;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v9 + 8) )
  {
    v35 = a1;
    v34 = a3;
    v10 = MEMORY[0x181EB84E0]();
LABEL_13:
    v35 = a1;
    v34 = a3;
    v26 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v26 + 48) <= *(_QWORD *)(v9 + 32) )
      goto LABEL_14;
    while ( 1 )
    {
LABEL_21:
      v33 = v10;
      v26 = MEMORY[0x181EAA920](a1, a2, a3: v11);
      v10 = v33;
      while ( 1 )
      {
        *(_DWORD *)(v26 + 20) = 46923644;
        *(_DWORD *)(v26 + 16) = v10;
        *(_DWORD *)(v26 + 12) = (unsigned __int64)(v26 - (_QWORD)v8) >> 3;
        v32 = v26;
        sub_18503B9A0(a1, a2, a3: v26, a4: v11, a5: 0);
        v10 = MEMORY[0x182769900](a1: v28, a2: v29, a3: v32, a4: v27, a5: &a7);
LABEL_16:
        v35 = a1;
        v34 = a3;
        v26 = *(_QWORD *)(v9 + 40);
        if ( (unsigned __int64)(v26 + 48) > *(_QWORD *)(v9 + 32) )
          break;
LABEL_14:
        *(_QWORD *)(v9 + 40) = v26 + 48;
        *(_DWORD *)v26 = 34101256;
        *(_DWORD *)(v26 + 4) = 0;
        *(_QWORD *)(v26 + 8) = 0;
        *(_QWORD *)(v26 + 16) = 0;
        *(_QWORD *)(v26 + 24) = 0;
        *(_QWORD *)(v26 + 32) = 0;
        *(_QWORD *)(v26 + 40) = 0;
      }
    }
  }
  v10 = v8[93585974];
  v11 = 34101256;
  if ( a6 == v8 )
    goto LABEL_13;
  if ( a5 == v8 )
    goto LABEL_16;
  if ( (unsigned __int16)v8[2 * v8[2 * (*a3 >> 3) + 5]
                          + 3
                          + (v8[2 * (*a3 >> 3) + 11] & (0x572u >> HIBYTE(v8[2 * (*a3 >> 3) + 11])))] != 1394 )
  {
    v35 = a1;
    v34 = a3;
    MEMORY[0x182770780]();
LABEL_19:
    v21 = (_DWORD *)MEMORY[0x182770780]();
LABEL_20:
    v10 = MEMORY[0x18276FC00](a1: v23, a2: v24, a3: v21, a4: v22, a5: v8 + 8520670);
    goto LABEL_21;
  }
  v35 = a1;
  v12 = *a3 >> 3;
  v13 = &v8[2 * v8[2 * v12 + 5]];
  v14 = v8[2 * v12 + 11] & (0x572u >> HIBYTE(v8[2 * v12 + 11]));
  v15 = &v8[2 * v12];
  v16 = (__int64 (*)(void))(v7 + *(_QWORD *)((char *)v15 + HIWORD(v13[v14 + 3]) + 8));
  v32 = (__int64)v15;
  v34 = a3;
  v31 = v13;
  v38 = v14;
  result = v16();
  if ( (_DWORD)result != 0 )
  {
    if ( (unsigned __int16)v8[2 * v8[2 * (*v36 >> 3) + 5]
                            + 3
                            + (v8[2 * (*v36 >> 3) + 11] & (0x654u >> HIBYTE(v8[2 * (*v36 >> 3) + 11])))] != 1620 )
      goto LABEL_19;
    v20 = *v36 >> 3;
    v21 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                                        + *(_QWORD *)((char *)&v8[2 * v20]
                                                                                    + HIWORD(v8[2 * v8[2 * v20 + 5]
                                                                                              + 3
                                                                                              + (v8[2 * v20 + 11]
                                                                                               & (0x654u >> HIBYTE(v8[2 * v20 + 11])))]))))(
                      a1: v18,
                      a2: v19,
                      a3: v36);
    if ( v21 != v8 && *v21 >> 3 != 4260335 )
      goto LABEL_20;
    v25 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD, _DWORD *, _DWORD *))(v7
                                                                                          + *(_QWORD *)(v32 + HIWORD(v31[v38 + 3]) + 64));
    result = v25(a1: v21, a2: v35, a3: v34, a4: v25, a5: v37, a6: v8);
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
