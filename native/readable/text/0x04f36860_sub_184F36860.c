// sub_4F36860
// rva 0x04f36860  size 508  section .text  group text
// window base 0x184f36860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F36860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // ebp
  unsigned int v12; // r10d
  _DWORD *v13; // r8
  __int64 v14; // rcx
  int v15; // r11d
  unsigned int v16; // r12d
  __int64 v17; // rsi
  _DWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  void (__fastcall *v22)(_QWORD, __int64, _DWORD *, __int64, __int64, _QWORD); // rax
  __int64 v23; // rdi
  __int64 result; // rax
  __int64 v25; // rsi
  int v26; // ecx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  __int64 v30; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v31; // [rsp+10h] [rbp-38h]
  int v32; // [rsp+1Ch] [rbp-2Ch]
  _DWORD *v33; // [rsp+20h] [rbp-28h]
  __int64 v34; // [rsp+28h] [rbp-20h]
  unsigned int v35; // [rsp+30h] [rbp-18h]
  unsigned int v36; // [rsp+34h] [rbp-14h]
  unsigned int v37; // [rsp+38h] [rbp-10h]
  int v38; // [rsp+3Ch] [rbp-Ch]
  unsigned int v39; // [rsp+40h] [rbp-8h]
  unsigned int v40; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_20;
  }
  v34 = a3;
  v33 = a5;
  if ( a5 != v6 )
  {
    v8 = *(_QWORD *)&v6[2 * (*a5 >> 3) + 124];
    v32 = *a5 >> 3;
    v9 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + v8))(a1, a2, a3: a5);
    v10 = *(unsigned int *)(v34 + 4);
    v11 = *(_DWORD *)(v34 + 8);
    v12 = *(char *)(v34 + 12);
    v13 = v33;
    v14 = (unsigned int)*((char *)v33 + 12);
    v15 = v14 | v12;
    v16 = (char)(*((_BYTE *)v33 + 12) | *(_BYTE *)(v34 + 12));
    v17 = v11 + v9;
    v40 = v11 + v9;
    v18 = &v6[2 * v10];
    if ( v12 != v16 )
    {
      v38 = v14 | v12;
      v39 = v9;
      goto LABEL_5;
    }
    v39 = v9;
    v14 = v16;
    v28 = (__int64)(int)v17 << v16;
    if ( (_DWORD)v10 != 0 )
    {
      if ( v28 <= (unsigned int)v6[2 * v10 + 2] )
      {
        v21 = (__int64)&v6[2 * v10];
        v37 = v16;
        v36 = v12;
        v35 = v11;
LABEL_7:
        v22 = (void (__fastcall *)(_QWORD, __int64, _DWORD *, __int64, __int64, _QWORD))(v5
                                                                                       + *(_QWORD *)&v6[2 * v32 + 86]);
        v31 = (_DWORD *)v21;
        v22(a1: v37, a2: v17, a3: v13, a4: v21, a5: v21, a6: v35);
        result = v34;
        v25 = v40;
        *(_DWORD *)(v34 + 8) = v40;
        v26 = *((unsigned __int8 *)v33 + 13);
        v27 = v26 | (unsigned int)*(unsigned __int8 *)(result + 13);
        *(_BYTE *)(result + 13) |= v26;
        if ( *(int *)(v7 + 16) <= 0 )
          return sub_277F280(a1: v23, a2: v25, a3: v27, a4: v31);
        return result;
      }
      v38 = v15;
LABEL_5:
      v31 = &v6[2 * v10];
      v36 = v12;
      v37 = v16;
      v35 = v11;
      v19 = sub_4F38CC0(a1: (unsigned int)v17, a2: v16, a3: v31, a4: v14, a5: v12, a6: v11);
      v20 = v34;
      *(_DWORD *)(v34 + 4) = (unsigned __int64)(v19 - (_QWORD)v6) >> 3;
      if ( (*(_DWORD *)v20 & 2) != 0 )
      {
        v29 = (v20 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v29) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((v20 - v29) >> 9) + 0x38) = 0;
      }
      *(_BYTE *)(v20 + 12) = v38;
      v13 = v33;
      v21 = v19;
      goto LABEL_7;
    }
LABEL_20:
    sub_2771080(a1: v18, a2: v17, a3: v28, a4: v39);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F36A60();
  }
  sub_4F37F40();
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return v34;
}
