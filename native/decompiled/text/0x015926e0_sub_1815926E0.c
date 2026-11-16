// sub_1815926E0
// rva 0x015926e0  size 1158  section .text  group text
// window base 0x1815926e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815926E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 (__fastcall *v4)(__int64, __int64, __int64, _QWORD); // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-8h]

  v5 = a3;
  v4 = MEMORY[0x12002030];
  if ( MEMORY[0x120020E0] == 4 )
  {
    result = MEMORY[0x12002030](a1, a2: **(_QWORD **)(a3 + 8), a3, a4: **(_QWORD **)(a3 + 8));
    a3 = v5;
    **(_QWORD **)(v5 + 8) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 104LL) = 1;
  }
  if ( MEMORY[0x120020E1] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 112LL) = 1;
  }
  if ( MEMORY[0x120020E2] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 120LL) = 1;
  }
  if ( MEMORY[0x120020E3] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 128LL) = 1;
  }
  if ( MEMORY[0x120020E4] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 32LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 32LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 136LL) = 1;
  }
  if ( MEMORY[0x120020E5] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 40LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 40LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 144LL) = 1;
  }
  if ( MEMORY[0x120020E6] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 48LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 48LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 152LL) = 1;
  }
  if ( MEMORY[0x120020E7] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 56LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 56LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 160LL) = 1;
  }
  if ( MEMORY[0x120020E8] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 64LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 168LL) = 1;
  }
  if ( MEMORY[0x120020E9] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 72LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 176LL) = 1;
  }
  if ( MEMORY[0x120020EA] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 80LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 80LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 184LL) = 1;
  }
  if ( MEMORY[0x120020EB] == 4 )
  {
    result = v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 88LL));
    a3 = v5;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 88LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 192LL) = 1;
  }
  if ( MEMORY[0x120020EC] == 4 )
  {
    v4(a1, a2, a3, a4: *(_QWORD *)(*(_QWORD *)(a3 + 8) + 96LL));
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 96LL) = 0;
    result = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(result + 200) = 1;
  }
  return result;
}
