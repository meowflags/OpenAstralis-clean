// sub_18158E7E0
// rva 0x0158e7e0  size 319  section .text  group text
// window base 0x18158e7e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18158E7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, _DWORD *); // rcx
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  _DWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, _DWORD *, _QWORD, _DWORD *); // rcx
  _DWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 result; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // edi
  int v30; // esi
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v34; // [rsp+8h] [rbp-10h]
  __int64 v35; // [rsp+10h] [rbp-8h]

  v35 = a3;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v9 + 8) )
  {
    v34 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v8 )
  {
    v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, _DWORD *))(v7
                                                                                         + *(_QWORD *)&v8[2 * (*a5 >> 3) + 40]);
    v11 = &v8[2 * *(unsigned int *)(a3 + 4)];
    v34 = a5;
    v12 = (_DWORD *)v10(a1, a2, a3: a5, a4: v10, a5: v8 + 88057754, a6: v11);
    if ( v12 == v8 )
    {
LABEL_11:
      MEMORY[0x182771080]();
      goto LABEL_12;
    }
    v15 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v12 >> 3) + 46]))(
                      a1: v13,
                      a2: v14,
                      a3: v12);
    if ( v15 == v8 )
    {
LABEL_12:
      MEMORY[0x182771080]();
      goto LABEL_13;
    }
    v18 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *))(v7
                                                                               + *(_QWORD *)&v8[2 * (*v15 >> 3) + 64]);
    v19 = (_DWORD *)v18(a1: v16, a2: v17, a3: v15, a4: v18, a5: v8 + 88191886);
    if ( v19 == v8 )
    {
LABEL_13:
      MEMORY[0x182771080]();
      goto LABEL_14;
    }
    v22 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v19 >> 3) + 36]))(
                      a1: v20,
                      a2: v21,
                      a3: v19);
    if ( v22 == v8 )
    {
LABEL_14:
      MEMORY[0x182771080](a1: v24, a2: v25, a3: v35, a4: v23, a5: v34);
      __builtin_debugtrap();
      return sub_18158E920(a1: v29, a2: v30, a3: v27, a4: v28, a5: v31, a6: v32, a7);
    }
    result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                     + *(_QWORD *)&v8[2 * (*v22 >> 3) + 60]))(
               a1: v24,
               a2: v25,
               a3: v22,
               a4: &v8[2 * *(unsigned int *)(v35 + 8)],
               a5: &v8[2 * *(unsigned int *)(v35 + 8)]);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_11;
}
