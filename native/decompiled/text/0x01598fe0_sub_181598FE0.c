// sub_181598FE0
// rva 0x01598fe0  size 314  section .text  group text
// window base 0x181598fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181598FE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  __int64 v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-20h]
  __int64 v29; // [rsp+20h] [rbp-18h]
  _DWORD *v30; // [rsp+28h] [rbp-10h]
  int v31; // [rsp+34h] [rbp-4h]

  v30 = a3;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_10;
  }
  v29 = v8 + 376612992;
  v10 = MEMORY[0x185039DE0](a1, a2, a3: v8 + 376612992);
  if ( v10 != v8 && *(_DWORD *)v10 >> 3 != 4261917 )
    goto LABEL_11;
  if ( v10 == v8 )
  {
LABEL_10:
    v10 = MEMORY[0x182771080]();
LABEL_11:
    MEMORY[0x18276FC00](a1: v11, a2: v12, a3: v10, a4: v30, a5: v8 + 34095336);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181599120(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
  }
  v31 = *(unsigned __int8 *)(v10 + 4);
  if ( v31 != 0 )
    JUMPOUT(0x302B25048LL);
  v28 = v8 + 35127280;
  MEMORY[0x18503A140](a1: v11, a2: v12, a3: v29);
  v13 = *v30 >> 3;
  v14 = *(_DWORD *)(v8 + 8 * v13 + 44) & (0x654u >> HIBYTE(*(_DWORD *)(v8 + 8 * v13 + 44)));
  v27 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v7
                                                                      + *(_QWORD *)(v8
                                                                                  + 8 * v13
                                                                                  + HIWORD(*(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v13 + 20) + 4 * v14 + 12)))))(
          a1: v15,
          a2: v14,
          a3: v30,
          a4: v30);
  MEMORY[0x18503A140](a1: v17, a2: v18, a3: v29, a4: v16, a5: v28);
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v27;
}
