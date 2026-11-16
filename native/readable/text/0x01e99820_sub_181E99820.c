// sub_1E99820
// rva 0x01e99820  size 266  section .text  group text
// window base 0x181e99820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E99820(__int64 a1, __int64 a2, __int64 a3, signed __int64 a4)
{
  __int64 v4; // r14
  signed __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rax
  signed __int64 v8; // r8
  __int64 v9; // rax
  signed __int64 v10; // rdx

  v5 = *(_QWORD *)(v4 + 376656656);
  if ( v5 == 0 )
  {
LABEL_2:
    result = sub_1E7E2A0(a1, a2, a3: v4 + 376612536, a4, a5: 0x80000, a6: 0x80000);
    *(_QWORD *)result = 0x80000;
    *(_QWORD *)(result + 32) = 2112;
    *(_DWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 8) = *(_QWORD *)(v4 + 376654976);
    *(_DWORD *)(result + 44) = 0;
    *(_BYTE *)(result + 48) = 0;
    return result;
  }
  v7 = *(_QWORD *)(v5 + 16);
  if ( v7 != 0 )
    v8 = v5 + v7;
  else
    v8 = 0;
  if ( v5 != __sync_val_compare_and_swap((volatile signed __int64 *)(v4 + 376656656), v5, v8) )
  {
    while ( 1 )
    {
      a4 = *(_QWORD *)(v4 + 376656656);
      if ( a4 == 0 )
        goto LABEL_2;
      v9 = *(_QWORD *)(a4 + 16);
      if ( v9 != 0 )
        v10 = a4 + v9;
      else
        v10 = 0;
      if ( a4 == __sync_val_compare_and_swap((volatile signed __int64 *)(v4 + 376656656), a4, v10) )
      {
        v5 = a4;
        break;
      }
    }
  }
  *(_QWORD *)(v5 + 16) = 0;
  __sync_fetch_and_add((volatile signed __int64 *)(v4 + 376656136), 0xFFFFFFFFFFFFFFFFLL);
  return v5;
}
