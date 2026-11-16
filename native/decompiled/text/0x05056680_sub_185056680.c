// sub_185056680
// rva 0x05056680  size 1497  section .text  group text
// window base 0x185056680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185056680(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 result; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  _DWORD *v28; // [rsp+18h] [rbp-20h]
  _DWORD *v29; // [rsp+20h] [rbp-18h]
  unsigned int v30; // [rsp+2Ch] [rbp-Ch]
  unsigned int v31; // [rsp+30h] [rbp-8h]
  unsigned int v32; // [rsp+34h] [rbp-4h]

  v29 = a3;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
  {
    v32 = a5;
    MEMORY[0x181EB84E0]();
    MEMORY[0x182770780]();
    MEMORY[0x182770780]();
    MEMORY[0x182770780]();
    MEMORY[0x182770780]();
    MEMORY[0x182770780]();
    MEMORY[0x182770780]();
    MEMORY[0x182770780]();
LABEL_18:
    MEMORY[0x182770780]();
    goto LABEL_19;
  }
  v8 = (unsigned __int16)v6[2 * v6[2 * (*a3 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a3 >> 3) + 11] & (0x1E9Du >> HIBYTE(v6[2 * (*a3 >> 3) + 11])))];
  v9 = a5 + 1;
  if ( (unsigned int)v9 <= 6 )
    __asm { jmp     rax; switch jump }
  if ( a5 + 128 < 0x100 )
  {
    v32 = a5;
    if ( v8 == 7837 )
    {
      v24 = *a3 >> 3;
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v5
                                                                                     + *(_QWORD *)((char *)&v6[2 * v24 + 30]
                                                                                                 + HIWORD(v6[2 * v6[2 * v24 + 5] + 3 + (v6[2 * v24 + 11] & (0x1E9Du >> HIBYTE(v6[2 * v24 + 11])))]))))(
                 a1,
                 a2,
                 a3,
                 a4: a3,
                 a5: v32);
      goto LABEL_10;
    }
    goto LABEL_18;
  }
  if ( a5 + 0x8000 >= 0x10000 )
  {
    if ( v8 == 7837 )
    {
      v32 = a5;
      v10 = *a3 >> 3;
      v11 = (unsigned int)v6[2 * v10 + 5];
      v31 = v6[2 * v10 + 11];
      v28 = &v6[2 * v11];
      v30 = HIBYTE(v31);
      LODWORD(v11) = v28[(v31 & (0x16BCu >> SHIBYTE(v31))) + 3];
      v27 = &v6[2 * v10];
      v12 = (_DWORD *)((__int64 (__fastcall *)(_DWORD *))(v5 + *(_QWORD *)((char *)v27 + WORD1(v11) + 16)))(a1: a3);
      if ( v12 != v6 )
      {
        v15 = (unsigned __int16)v6[2 * v6[2 * (*v12 >> 3) + 5]
                                 + 3
                                 + (v6[2 * (*v12 >> 3) + 11] & (0x1ECFu >> HIBYTE(v6[2 * (*v12 >> 3) + 11])))];
        if ( (_DWORD)v15 == 7887 )
        {
          v16 = *v12 >> 3;
          v17 = (unsigned int)v6[2 * v16 + 11];
          v18 = *(_QWORD *)((char *)&v6[2 * v16 + 24]
                          + HIWORD(v6[2 * v6[2 * v16 + 5]
                                    + 3
                                    + ((unsigned int)v17 & (0x1ECFu >> HIBYTE(v6[2 * v16 + 11])))]));
          v19 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))(v5 + v18))(
                  a1: v17,
                  a2: v14,
                  a3: v12,
                  a4: v18,
                  a5: v32);
          v20 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5
                                                                                    + *(_QWORD *)((char *)v27
                                                                                                + HIWORD(v28[(v31 & (0x1E9Du >> v30)) + 3])
                                                                                                + 1280));
          result = v20(a1: v21, a2: v22, a3: v29, a4: v20, a5: v19);
          goto LABEL_10;
        }
LABEL_22:
        MEMORY[0x182770780](a1: v13, a2: v14, a3: v29, a4: v15, a5: v32);
        __halt();
      }
LABEL_21:
      MEMORY[0x182771080]();
      goto LABEL_22;
    }
LABEL_20:
    v32 = a5;
    MEMORY[0x182770780]();
    goto LABEL_21;
  }
  v32 = a5;
  if ( v8 != 7837 )
  {
LABEL_19:
    MEMORY[0x182770780]();
    goto LABEL_20;
  }
  v25 = *a3 >> 3;
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v5
                                                                                 + *(_QWORD *)((char *)&v6[2 * v25 + 418]
                                                                                             + HIWORD(v6[2 * v6[2 * v25 + 5] + 3 + (v6[2 * v25 + 11] & (0x1E9Du >> HIBYTE(v6[2 * v25 + 11])))]))))(
             a1,
             a2,
             a3,
             a4: a3,
             a5: v32);
LABEL_10:
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
