// sub_184F2D360
// rva 0x04f2d360  size 256  section .text  group text
// window base 0x184f2d360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2D360(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64, _DWORD *, __int64, _QWORD, _QWORD); // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  _QWORD v18[3]; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v19; // [rsp+18h] [rbp-10h]
  int v20; // [rsp+20h] [rbp-8h]
  unsigned int v21; // [rsp+24h] [rbp-4h]

  v19 = a3;
  if ( (unsigned __int64)v18 <= *(_QWORD *)(v8 + 8) )
  {
    v20 = a1;
    v21 = a6;
    MEMORY[0x181EB84E0]();
LABEL_8:
    MEMORY[0x182770780]();
    return sub_184F2D460();
  }
  if ( a5 == v7 )
    a5 = v7 + 88325320;
  if ( (unsigned __int16)v7[2 * v7[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v7[2 * (*a5 >> 3) + 11] & (0x568u >> HIBYTE(v7[2 * (*a5 >> 3) + 11])))] != 1384 )
    goto LABEL_8;
  v9 = *a5 >> 3;
  v10 = v7[2 * v9 + 11] & (0x568u >> HIBYTE(v7[2 * v9 + 11]));
  v11 = HIWORD(v7[2 * (unsigned int)v7[2 * v9 + 5] + 3 + v10]);
  v12 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD, _QWORD))(v6
                                                                                    + *(_QWORD *)((char *)&v7[2 * v9 + 12]
                                                                                                + v11));
  v18[2] = a5;
  v21 = a6;
  v20 = a1;
  v13 = v12(a1, a2: v10, a3: a5, a4: v11, a5: a6, a6: (unsigned int)a1);
  v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v6 + *(_QWORD *)&v7[2 * (*v19 >> 3) + 60]);
  result = v14(a1: v15, a2: v16, a3: v19, a4: v14, a5: v13);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
