// sub_184F458A0
// rva 0x04f458a0  size 511  section .text  group text
// window base 0x184f458a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F458A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // ebx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, _QWORD, _DWORD *); // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v26; // [rsp+10h] [rbp-28h]
  _DWORD *v27; // [rsp+18h] [rbp-20h]
  _DWORD *v28; // [rsp+20h] [rbp-18h]
  unsigned int v29; // [rsp+28h] [rbp-10h]
  unsigned int v30; // [rsp+2Ch] [rbp-Ch]
  unsigned int v31; // [rsp+30h] [rbp-8h]
  int v32; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v7 + 8) )
  {
    v32 = a5;
    v26 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v6 )
  {
    if ( (unsigned __int16)v6[2 * v6[2 * (*a3 >> 3) + 5]
                            + 3
                            + (v6[2 * (*a3 >> 3) + 11] & (0x568u >> HIBYTE(v6[2 * (*a3 >> 3) + 11])))] != 1384 )
    {
LABEL_21:
      v32 = a5;
      v26 = a3;
      MEMORY[0x182770780]();
      return v30;
    }
    v8 = *a3 >> 3;
    v9 = v6[2 * v8 + 11];
    v28 = &v6[2 * v6[2 * v8 + 5]];
    v31 = v9 & (0x568u >> SHIBYTE(v9));
    v10 = v28[v31 + 3];
    v27 = &v6[2 * v8];
    v11 = *(_QWORD *)((char *)v27 + HIWORD(v10));
    v26 = a3;
    v32 = a5;
    result = ((__int64 (*)(void))(v5 + v11))();
    if ( (unsigned int)result < 0xD800 || (unsigned int)result >= 0xDC00 )
    {
      v30 = result;
      if ( *(int *)(v7 + 16) <= 0 )
        return MEMORY[0x18277F280](a1: v14, a2: v15, a3: v13, a4: v30);
      return result;
    }
    v30 = result;
    v16 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *))(v5 + *(_QWORD *)((char *)v27 + HIWORD(v28[v31 + 3]) + 40));
    v29 = v32 + 1;
    v17 = v16(a1: v14, a2: v16, a3: v26);
    if ( v17 > (int)v29 )
    {
      v21 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v5
                                                                                  + *(_QWORD *)((char *)v27
                                                                                              + HIWORD(v28[v31 + 3]))))(
              a1: v19,
              a2: v20,
              a3: v26,
              a4: v28,
              a5: v29);
      if ( *(int *)(v7 + 16) <= 0 )
        v21 = MEMORY[0x18277F280](a1: v23, a2: v24, a3: v22, a4: v30, a5: v29);
      if ( v21 < 0xDC00 )
        return v30;
      if ( v21 < 0xE000 )
        return (v30 << 10) + v21 - 56613888;
      return v30;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v19, a2: v20, a3: v18, a4: v30);
    return v30;
  }
  v32 = a5;
  MEMORY[0x182771080]();
  goto LABEL_21;
}
