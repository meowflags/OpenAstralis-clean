// sub_1850594A0
// rva 0x050594a0  size 284  section .text  group text
// window base 0x1850594a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850594A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // ebx
  _DWORD *v12; // rsi
  _DWORD *v13; // rax
  unsigned int (*v14)(void); // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  __int64 result; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  int v27; // esi
  int v28; // r8d
  int v29; // r9d
  char v30; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v31; // [rsp+8h] [rbp-20h]
  _DWORD *v32; // [rsp+10h] [rbp-18h]
  _DWORD *v33; // [rsp+18h] [rbp-10h]
  unsigned int v34; // [rsp+20h] [rbp-8h]
  unsigned int v35; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v9 + 8) )
  {
    v32 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v8 )
  {
    if ( (unsigned __int16)v8[2 * v8[2 * (*a3 >> 3) + 5]
                            + 3
                            + (v8[2 * (*a3 >> 3) + 11] & (0x16E5u >> HIBYTE(v8[2 * (*a3 >> 3) + 11])))] != 5861 )
    {
LABEL_12:
      MEMORY[0x182770780]();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1850595C0(a1: v26, a2: v27, a3: v24, a4: v25, a5: v28, a6: v29, a7);
    }
    v10 = *a3 >> 3;
    v11 = v8[2 * v10 + 11];
    v12 = &v8[2 * v8[2 * v10 + 5]];
    v13 = &v8[2 * v10];
    v14 = (unsigned int (*)(void))(v7
                                 + *(_QWORD *)((char *)v13 + HIWORD(v12[(v11 & (0x16E5u >> SHIBYTE(v11))) + 3]) + 24));
    v33 = v13;
    v32 = a3;
    v31 = v12;
    v35 = v11;
    v34 = HIBYTE(v11);
    if ( v14() != 0 )
    {
      v17 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7
                                                                + *(_QWORD *)((char *)v33
                                                                            + HIWORD(v31[(v35 & (0x5ABu >> v34)) + 3]))))(
              a1: v15,
              a2: v16,
              a3: v32);
      result = sub_1850595C0(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v22, a7: v30);
    }
    else
    {
      result = (__int64)(v8 + 94303238);
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_12;
}
