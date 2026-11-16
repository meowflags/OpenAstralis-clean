// sub_277D980
// rva 0x0277d980  size 221  section .text  group text
// window base 0x18277d980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277D980(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  char v20; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v21; // [rsp+10h] [rbp-18h]
  unsigned __int32 v22; // [rsp+1Ch] [rbp-Ch]
  __int64 v23; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    v23 = a6;
    v21 = a5;
    sub_1EB83C0();
  }
  else if ( a5 != (_DWORD *)v7 )
  {
    v9 = *a5 >> 3;
    if ( *(__int16 *)(v7 + 8 * v9 + 62) < 3 || *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v9 + 16) + 20) != 70129 )
    {
      v10 = (unsigned int)a5[3];
      if ( (_DWORD)v10 != 0 )
      {
        if ( *(_BYTE *)(v7 + 8 * v10 + 32) != 0 )
        {
          v23 = a6;
          v21 = a5;
        }
        else
        {
          v23 = a6;
          v21 = a5;
          sub_277A1E0();
        }
        goto LABEL_7;
      }
LABEL_15:
      sub_276EFE0(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v20);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_277DA60(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7);
    }
    v23 = a6;
    v21 = a5;
LABEL_7:
    v22 = __sync_sub_and_fetch((volatile signed __int32 *)(v7 + 376668604), 1);
    result = sub_2783660(a1, a2, a3: v7 + 376658176, a4, a5: v23);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v12, a2: v13, a3: v22);
    return result;
  }
  v23 = a6;
  sub_276EFE0(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v20);
  goto LABEL_15;
}
