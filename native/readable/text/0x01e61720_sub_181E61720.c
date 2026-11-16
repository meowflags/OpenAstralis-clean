// sub_1E61720
// rva 0x01e61720  size 172  section .text  group text
// window base 0x181e61720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1E61720(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, char *a5, _DWORD *a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r9
  _DWORD *result; // rax
  char v17; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v18; // [rsp+8h] [rbp-20h]
  char *v19; // [rsp+10h] [rbp-18h]
  _DWORD *v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+20h] [rbp-8h]
  unsigned int v22; // [rsp+24h] [rbp-4h]

  v20 = a3;
  v19 = a5;
  v18 = a6;
  v22 = a1;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    v11 = sub_1EB84E0();
    goto LABEL_6;
  }
  v9 = *a3 >> 3;
  v10 = *(_DWORD *)(v7 + 8 * v9 + 44) & (0x749u >> HIBYTE(*(_DWORD *)(v7 + 8 * v9 + 44)));
  v11 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v6
                                                                      + *(_QWORD *)(v7
                                                                                  + 8 * v9
                                                                                  + HIWORD(*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v9 + 20) + 4 * v10 + 12))
                                                                                  + 40)))(
          a1,
          a2: v10,
          a3,
          a4: a3);
  v21 = v11;
  if ( v11 < -1 )
  {
LABEL_6:
    sub_1E60C20(a1: v22, a2: v14, a3: v11, a4: v12, a5: v22, a6: v15, a7: v17);
    JUMPOUT(0x181E617CCLL);
  }
  result = sub_1E60CE0(a1: v13, a2: v14, a3: v19, a4: v12, a5: v18, a6: v11);
  if ( *(int *)(v8 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
