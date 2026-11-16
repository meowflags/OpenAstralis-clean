// sub_18504D800
// rva 0x0504d800  size 443  section .text  group text
// window base 0x18504d800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504D800(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 (*v12)(void); // rcx
  _DWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 result; // rax
  int v25; // edx
  int v26; // ecx
  int v27; // edi
  int v28; // esi
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v32; // [rsp+10h] [rbp-28h]
  _DWORD *v33; // [rsp+18h] [rbp-20h]
  _DWORD *v34; // [rsp+20h] [rbp-18h]
  __int64 v35; // [rsp+28h] [rbp-10h]
  unsigned int v36; // [rsp+30h] [rbp-8h]
  unsigned int v37; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v9 + 8) )
  {
    v35 = a5;
    v32 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)v8[2 * v8[2 * (*a3 >> 3) + 5]
                               + 3
                               + (v8[2 * (*a3 >> 3) + 11] & (0x1E99u >> HIBYTE(v8[2 * (*a3 >> 3) + 11])))] == 7833 )
  {
    v35 = a5;
    v10 = *a3 >> 3;
    v11 = (unsigned int)v8[2 * v10 + 5];
    v37 = v8[2 * v10 + 11];
    v34 = &v8[2 * v11];
    v36 = HIBYTE(v37);
    LODWORD(v11) = v34[(v37 & (0x16BCu >> SHIBYTE(v37))) + 3];
    v33 = &v8[2 * v10];
    v12 = (__int64 (*)(void))(v7 + *(_QWORD *)((char *)v33 + WORD1(v11) + 16));
    v32 = a3;
    v13 = (_DWORD *)v12();
    if ( v13 == v8 )
    {
LABEL_9:
      MEMORY[0x182771080]();
      goto LABEL_10;
    }
    v16 = (unsigned __int16)v8[2 * v8[2 * (*v13 >> 3) + 5]
                             + 3
                             + (v8[2 * (*v13 >> 3) + 11] & (0x1ECFu >> HIBYTE(v8[2 * (*v13 >> 3) + 11])))];
    if ( (_DWORD)v16 != 7887 )
    {
LABEL_10:
      MEMORY[0x182770780](a1: v14, a2: v15, a3: v32, a4: v16, a5: v35);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_18504D9C0(a1: v27, a2: v28, a3: v25, a4: v26, a5: v29, a6: v30, a7);
    }
    v17 = *v13 >> 3;
    v18 = (unsigned int)v8[2 * v17 + 11];
    v19 = *(_QWORD *)((char *)&v8[2 * v17 + 8]
                    + HIWORD(v8[2 * v8[2 * v17 + 5] + 3 + ((unsigned int)v18 & (0x1ECFu >> HIBYTE(v8[2 * v17 + 11])))]));
    v20 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v7 + v19))(
            a1: v18,
            a2: v15,
            a3: v13,
            a4: v19,
            a5: v35);
    v21 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v7
                                                                              + *(_QWORD *)((char *)v33
                                                                                          + HIWORD(v34[(v37 & (0x1E99u >> v36)) + 3])
                                                                                          + 128));
    result = v21(a1: v22, a2: v23, a3: v32, a4: v21, a5: v20);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v35 = a5;
  v32 = a3;
  MEMORY[0x182770780]();
  goto LABEL_9;
}
